// 函数: sub_142b9b600
// 地址: 0x142b9b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_8 = arg1
int32_t rdi = 0
uint64_t rdx = zx.q(*(arg2 + 0xc))
uint32_t rcx = 0
arg_18.d = 0

if ((rdx + 3).d u< arg2[1].d)
    int64_t rax_1 = arg2[4]
    int64_t* rdx_1
    
    if (rax_1 == 0)
        rdx_1 = rdx + *arg2
        
        if (rdx == neg.q(*arg2))
            goto label_142b9b678
        
        goto label_142b9b676
    
    if (rax_1(arg2, arg5, &arg_8, 4) == 4)
        rdx_1 = &arg_8
    label_142b9b676:
        rcx = ((zx.d(*rdx_1) << 8 | zx.d(*(rdx_1 + 1))) << 8 | zx.d(*(rdx_1 + 2))) << 8
            | zx.d(*(rdx_1 + 3))
    label_142b9b678:
        *(arg2 + 0xc) += 4
        
        if (rcx != arg4)
            return 2
        
        sub_142b96d30(arg2, &arg_18)
        int32_t rax_7 = arg_18.d
        
        if (rax_7 != 0)
            return rax_7
        
        int64_t rax_8 = arg2[4]
        int32_t rsi_1 = 0
        int32_t rbp_2 = *(arg2 + 0xc) + 0x10
        
        if (rax_8 != 0)
            if (rax_8(arg2, zx.q(rbp_2), 0, 0) == 0)
                *(arg2 + 0xc) = rbp_2
            else
                rsi_1 = 0x55
        else if (rbp_2 u<= arg2[1].d)
            *(arg2 + 0xc) = rbp_2
        else
            rsi_1 = 0x55
        
        arg_18.d = rsi_1
        
        if (rsi_1 != 0)
            return rsi_1
        
        int16_t rax_10 = sub_142b96f00(arg2, &arg_18)
        int32_t rcx_11 = arg_18.d
        
        if (rcx_11 != 0)
            return zx.q(rcx_11)
        
        if (rax_10 != 0)
            uint32_t rsi_2 = zx.d(rax_10)
            
            if (rsi_2 != 0)
                while (true)
                    int32_t rax_12 = sub_142b96d30(arg2, &arg_18)
                    rax_7 = arg_18.d
                    
                    if (rax_7 != 0)
                        return rax_7
                    
                    if (rax_12 != 2)
                        rax_7 = sub_142b970b0(arg2, 8)
                        arg_18.d = rax_7
                        
                        if (rax_7 != 0)
                            return rax_7
                    else
                        int32_t rax_13 = sub_142b96d30(arg2, &arg_18)
                        
                        if (arg_18.d == 0)
                            sub_142b96d30(arg2, &arg_18)
                            
                            if (arg_18.d == 0)
                                *arg6 = rax_13
                                return 0
                    
                    rdi += 1
                    
                    if (rdi s>= rsi_2)
                        return 2
        
        return 2

return 0x55
