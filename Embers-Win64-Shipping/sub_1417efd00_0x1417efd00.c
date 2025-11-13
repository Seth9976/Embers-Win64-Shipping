// 函数: sub_1417efd00
// 地址: 0x1417efd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*arg1 = 0
arg1[1] = 0
int64_t* r14 = *(data_143f5b298 + 0xb08)

if (r14 != 0)
    int64_t* rax_2
    void arg_8
    
    if (arg2 != 0)
        rax_2 = (**r14)(r14, &arg_8)
    
    if (arg2 == 0 || *rax_2 == arg2)
        int64_t rax_3 = *r14
        int32_t* var_28 = nullptr
        int32_t var_20_1 = 0
        (*(rax_3 + 0x28))(r14, &var_28, zx.q(arg3))
        int32_t rcx_2 = var_20_1
        int32_t rdx_3 = arg1[1].d + rcx_2
        
        if (rdx_3 s> *(arg1 + 0xc))
            sub_14083ad30(arg1, rdx_3)
            rcx_2 = var_20_1
        
        int32_t* rsi_1 = var_28
        void* rcx_4 = &rsi_1[sx.q(rcx_2)]
        uint64_t r15_4 = (rcx_4 - rsi_1 + 3) u>> 2
        
        if (rsi_1 u> rcx_4)
            r15_4 = 0
        
        if (r15_4 != 0)
            do
                int32_t rbx_1 = *rsi_1
                int64_t var_38
                (**r14)(r14, &var_38)
                int64_t rbx_2 = sx.q(arg1[1].d)
                int32_t rax_6 = (rbx_2 + 1).d
                arg1[1].d = rax_6
                
                if (rax_6 s> *(arg1 + 0xc))
                    sub_14083a7e0(arg1)
                
                int64_t rax_7 = *arg1
                int64_t rcx_7 = rbx_2 * 3
                rsi_1 = &rsi_1[1]
                *(rax_7 + (rcx_7 << 2)) = var_38
                rbp += 1
                *(rax_7 + (rcx_7 << 2) + 8) = rbx_1
            while (rbp != r15_4)
            
            rsi_1 = var_28
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

return arg1
