// 函数: sub_140d96f80
// 地址: 0x140d96f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int64_t* rax_1 = *(arg1 + 8)
    
    if (arg2 s< rax_1[1].d)
        int32_t r8_1 = *arg1
        char* rdx_2 = (sx.q(arg2) << 5) + *rax_1
        char arg_18 = 1
        int32_t arg_1c = r8_1
        char rax_3 = *rdx_2
        
        if (rax_3 == 2)
        label_140d96fd8:
            char rax_5 = rdx_2[8]
            void* rcx_1 = &rdx_2[8]
            arg_18 = 1
            arg_1c = r8_1
            
            if (rax_5 == 2)
                return *(rdx_2 + 0x10)
            
            int32_t temp0_1 = *(rcx_1 + 4)
            
            if (temp0_1 s> r8_1 || (temp0_1 s>= r8_1 && rax_5 == 1))
                goto label_140d97006
            
            if (rax_5 == 1)
                rcx_1 = &arg_18
            label_140d97006:
                
                if (*(rcx_1 + 4) == *(rdx_2 + 0xc))
                    return *(rdx_2 + 0x10)
        else
            int32_t rcx = *(rdx_2 + 4)
            char* rax_4
            
            if (rcx s< r8_1)
                rax_4 = rdx_2
            label_140d96fd3:
                
                if (*(rax_4 + 4) == rcx)
                    goto label_140d96fd8
            else if (rcx s> r8_1)
                if (rax_3 == 1)
                    rax_4 = &arg_18
                    goto label_140d96fd3
            else if (rax_3 == 1)
                rax_4 = rdx_2
                goto label_140d96fd3

return 0
