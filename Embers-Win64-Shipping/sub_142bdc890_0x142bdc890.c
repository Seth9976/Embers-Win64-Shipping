// 函数: sub_142bdc890
// 地址: 0x142bdc890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
uint64_t rsi = zx.q(*arg2)
int32_t rbx = 0
uint32_t r15 = (rsi * 2).d
*(arg1 + 0x10) = sub_142b99a90(arg5, 8, 0, r15, 0, &arg_20)
int32_t rax_1 = arg_20.d

if (rax_1 == 0)
    *(arg1 + 8) = sub_142b99a90(arg5, 0x28, 0, rsi.d, 0, &arg_20)
    rax_1 = arg_20.d
    
    if (rax_1 == 0)
        int64_t rax_3 = sub_142b99a90(arg5, 0x10, 0, r15 + 1, 0, &arg_20)
        int32_t r8 = arg_20.d
        *(arg1 + 0x28) = rax_3
        
        if (r8 == 0)
            int64_t rax_4 = *(arg1 + 0x10)
            *arg1 = rsi.d
            arg1[1] = 0
            arg1[8] = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x18) = rax_4 + (rsi << 3)
            int32_t* rcx_4 = *(arg1 + 8)
            int32_t* rdx = *(arg2 + 8)
            
            if (rsi.d != 0)
                int32_t i
                
                do
                    int32_t rax_5 = *rdx
                    rdx = &rdx[3]
                    *rcx_4 = rax_5
                    rcx_4 = &rcx_4[0xa]
                    rcx_4[-9] = rdx[-2]
                    rcx_4[-6] = rdx[-1]
                    i = rsi.d
                    rsi = zx.q(rsi.d - 1)
                while (i != 1)
                r8 = arg_20.d
            
            if (arg3 != 0)
                int32_t i_2 = *arg3
                int32_t* rbp_1 = *(arg3 + 8)
                *(arg1 + 0x38) = arg3
                
                if (i_2 != 0)
                    int32_t i_1
                    
                    do
                        sub_142bdcac0(arg1, rbp_1)
                        rbp_1 = &rbp_1[6]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    r8 = arg_20.d
            
            int32_t rsi_1 = *arg1
            
            if (arg1[1] != rsi_1 && rsi_1 != 0)
                do
                    sub_142bdca20(arg1, rbx)
                    rbx += 1
                while (rbx u< rsi_1)
                
                return arg_20.d
        
        return r8

return rax_1
