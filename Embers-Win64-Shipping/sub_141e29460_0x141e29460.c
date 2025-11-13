// 函数: sub_141e29460
// 地址: 0x141e29460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg1
int64_t result = sx.q(arg1[1].d)
void* r14 = &rdi[result * 0x12]

if (rdi != r14)
    void* rbx_1 = &rdi[8]
    
    do
        sub_140d12020()
        void* rax_1
        bool rcx_2
        
        if (*rbx_1 == 0)
            rcx_2 = true
            rax_1 = nullptr
        else
            bool cond:0_1 = sub_140d3e110(rbx_1 + 8) == 0
            rax_1 = *rbx_1
            rcx_2 = cond:0_1
        
        if (rcx_2 != 0 && *(rbx_1 + 0x18) != 0)
            rax_1 = sub_140cd0630(rbx_1, nullptr, 0)
            
            if (rax_1 == 0 || (data_143e1c4a8 & *(*(rax_1 + 8) + 0x10)) == 0)
                rax_1 = *rbx_1
                
                if (rax_1 != 0)
                    *(rbx_1 + 8) = 0xffffffff
                    rax_1 = nullptr
                    *(rbx_1 + 0xc) = 0
                    *rbx_1 = 0
            else
                *rbx_1 = rax_1
        
        *(sx.q(*(rax_1 + 0x4c)) + arg2 + 8) = rdi
        sub_140d12020()
        bool rcx_5
        void* rdx_1
        
        if (*rbx_1 == 0)
            rcx_5 = true
            rdx_1 = nullptr
        else
            char rax_3 = sub_140d3e110(rbx_1 + 8)
            rdx_1 = *rbx_1
            rcx_5 = rax_3 == 0
        
        if (rcx_5 != 0 && *(rbx_1 + 0x18) != 0)
            void* rax_4 = sub_140cd0630(rbx_1, nullptr, 0)
            rdx_1 = rax_4
            
            if (rax_4 == 0 || (data_143e1c4a8 & *(*(rax_4 + 8) + 0x10)) == 0)
                rdx_1 = *rbx_1
                
                if (rdx_1 != 0)
                    *(rbx_1 + 8) = 0xffffffff
                    rdx_1 = nullptr
                    *(rbx_1 + 0xc) = 0
                    *rbx_1 = 0
            else
                *rbx_1 = rdx_1
        
        *(rdx_1 + 0x4c)
        result = sub_141e28cd0(rdi, arg2)
        rdi = &rdi[0x12]
        rbx_1 += 0x48
    while (rdi != r14)

return result
