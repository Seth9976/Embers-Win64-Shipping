// 函数: sub_142630920
// 地址: 0x142630920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = arg3
arg2[1] = arg4
arg2[2] = *arg5
arg2[3] = arg5[1]
arg2[4] = arg5[2]
arg2[5] = *arg6
arg2[6] = arg6[1]
arg2[7] = arg6[2]
int32_t rcx_3 = *arg2 * arg2[1]
arg2[8] = arg7
arg2[9] = arg8
int64_t rax_6 = data_143b502a8(zx.q(rcx_3 << 3), 0)
*(arg2 + 0x28) = rax_6

if (rax_6 != 0)
    memset(rax_6, 0, (sx.q(*arg2) * sx.q(arg2[1])) << 3)
    rax_6 = data_143b502a8(zx.q(((zx.q(arg2[1]) << 1) + 2).d), 0)
    *(arg2 + 0x40) = rax_6
    
    if (rax_6 != 0)
        memset(rax_6, 0, sx.q(arg2[1] + 1) * 2)
        int64_t rax_9 = data_143b502a8(zx.q(((zx.q(arg2[1]) << 3) + 0x10).d), 0)
        int32_t r9 = arg2[1]
        int32_t i = 0
        *(arg2 + 0x48) = rax_9
        
        if (r9 + 2 s> 0)
            int64_t rdx = 0
            
            do
                rdx += 8
                i += 1
                *(rdx + *(arg2 + 0x48) - 8) = *arg2 + 2
                *(rdx + *(arg2 + 0x48) - 4) = 0xfffffffe
                r9 = arg2[1]
            while (i s< r9 + 2)
        
        rax_6 = data_143b502a8(zx.q(((*arg2 + 2) * (r9 + 2)) << 2), 0, i)
        *(arg2 + 0x50) = rax_6
        
        if (rax_6 != 0)
            int32_t i_1 = 0
            
            if (arg2[1] + 2 s> 0)
                do
                    int32_t j = 0
                    
                    if (*arg2 + 2 s> 0)
                        do
                            *(*(arg2 + 0x50) + (sx.q((*arg2 + 2) * i_1 + j) << 2)) = 0x7d00
                            int32_t rax_27 = (*arg2 + 2) * i_1 + j
                            j += 1
                            *(*(arg2 + 0x50) + (sx.q(rax_27) << 2) + 2) = 0x8300
                        while (j s< *arg2 + 2)
                    
                    i_1 += 1
                while (i_1 s< arg2[1] + 2)
            
            int32_t rax_16
            rax_16.b = 1
            return rax_16

rax_6.b = 0
return rax_6
