// 函数: sub_141b3e890
// 地址: 0x141b3e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = rsi
        rsi = &rsi[5]
        *rdi_1 = rbx_1[-1]
        sub_140cea340()
        void* rax_2
        bool rcx
        
        if (*rbx_1 == 0)
            rcx = true
            rax_2 = nullptr
        else
            bool cond:0_1 = sub_140d3e110(&rbx_1[1]) == 0
            rax_2 = *rbx_1
            rcx = cond:0_1
        
        if (rcx != 0 && rbx_1[3].d != 0)
            rax_2 = sub_140cd0630(rbx_1, nullptr, 0)
            
            if (rax_2 == 0 || (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) == 0)
                rax_2 = *rbx_1
                
                if (rax_2 != 0)
                    rbx_1[1].d = 0xffffffff
                    rax_2 = nullptr
                    *(rbx_1 + 0xc) = 0
                    *rbx_1 = 0
            else
                *rbx_1 = rax_2
        
        rdi_1[1] = rax_2
        rdi_1[2] = rbx_1[1]
        sub_140780c40(&rdi_1[3], &rbx_1[2])
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
