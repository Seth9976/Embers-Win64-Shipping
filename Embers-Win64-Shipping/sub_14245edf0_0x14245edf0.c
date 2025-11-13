// 函数: sub_14245edf0
// 地址: 0x14245edf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void** rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void** rsi_1 = rbp
        rbp = &rbp[8]
        sub_140d12020()
        void* rax_1
        bool rcx
        
        if (*(rbx_1 - 8) == 0)
            rcx = true
            rax_1 = nullptr
        else
            bool cond:0_1 = sub_140d3e110(rbx_1) == 0
            rax_1 = *(rbx_1 - 8)
            rcx = cond:0_1
        
        if (rcx != 0 && rbx_1[4] != 0)
            rax_1 = sub_140cd0630(&rbx_1[-2], nullptr, 0)
            
            if (rax_1 == 0 || (data_143e1c4a8 & *(*(rax_1 + 8) + 0x10)) == 0)
                rax_1 = *(rbx_1 - 8)
                
                if (rax_1 != 0)
                    *rbx_1 = 0xffffffff
                    rax_1 = nullptr
                    rbx_1[1] = 0
                    *(rbx_1 - 8) = 0
            else
                *(rbx_1 - 8) = rax_1
        
        *rsi_1 = rax_1
        rsi_1[1] = *rbx_1
        sub_140780c40(&rsi_1[2], &rbx_1[2])
        sub_14245e550(&rsi_1[4], &rbx_1[6])
        sub_14245e3c0(&rsi_1[6], &rbx_1[0xa])
        rbx_1 = &rbx_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
