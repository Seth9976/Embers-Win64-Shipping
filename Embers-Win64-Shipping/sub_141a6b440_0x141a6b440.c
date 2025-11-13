// 函数: sub_141a6b440
// 地址: 0x141a6b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg2
char arg_8 = 1
uint64_t result = zx.q(*(arg1 + 0x90))
int32_t arg_c = rbx

if (result.b == 2)
label_141a6b49d:
    result = zx.q(*(arg1 + 0x98))
    void* rcx_1 = arg1 + 0x98
    arg_8 = 1
    arg_c = rbx
    
    if (result.b == 2)
    label_141a6b4d6:
        int32_t rax = *(arg1 + 0xb0)
        *(arg1 + 8) |= 8
        result = zx.q(rax u>> 1)
        
        if ((result.b & 1) == 0)
            arg_c = rbx
            
            if (arg3 == 0)
                arg_8 = 0
                result = arg_8.q
                *(arg1 + 0x98) = result
            else
                arg_8 = 1
                result = arg_8.q
                *(arg1 + 0x90) = result
            
            if (arg4 != 0)
                void* rcx_2 = *(arg1 + 0xd0)
                
                if (rcx_2 != 0)
                    void* i_1 = *(rcx_2 + 0x28)
                    void* i = rcx_2 + 0x10
                    
                    if (i_1 != 0)
                        i = i_1
                    
                    result = sx.q(*(rcx_2 + 0x30))
                    
                    for (void* r12_1 = i + result * 0x18; i != r12_1; i += 0x18)
                        int64_t rsi_1 = 0
                        int64_t* rdi_1 = *(i + 8)
                        result = &rdi_1[sx.q(*(i + 0x10))]
                        uint64_t rbp_2 = sx.q(*(i + 0x10)) << 3 u>> 3
                        
                        if (rdi_1 u> result)
                            rbp_2 = 0
                        
                        if (rbp_2 != 0)
                            do
                                int64_t* rcx_4 = *rdi_1
                                result = (*(*rcx_4 + 0x30))(rcx_4, zx.q(rbx), zx.q(arg3))
                                rsi_1 += 1
                                rdi_1 = &rdi_1[1]
                            while (rsi_1 != rbp_2)
    else
        int32_t temp0_1 = *(rcx_1 + 4)
        
        if (temp0_1 s> rbx || (temp0_1 s>= rbx && result.b == 1))
            goto label_141a6b4ca
        
        if (result.b == 1)
            rcx_1 = &arg_8
        label_141a6b4ca:
            result = zx.q(*(arg1 + 0x9c))
            
            if (*(rcx_1 + 4) == result.d)
                goto label_141a6b4d6
else
    int32_t rcx = *(arg1 + 0x94)
    
    if (rcx s< rbx)
        result = arg1 + 0x90
    label_141a6b494:
        
        if (*(result + 4) == rcx)
            goto label_141a6b49d
    else if (rcx s> rbx)
        if (result.b == 1)
            result = &arg_8
            goto label_141a6b494
    else if (result.b == 1)
        result = arg1 + 0x90
        goto label_141a6b494

return result
