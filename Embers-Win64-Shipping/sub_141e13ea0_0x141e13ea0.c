// 函数: sub_141e13ea0
// 地址: 0x141e13ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg3

for (void* rbp_2 = &i[sx.q(arg3[1].d) * 2]; i != rbp_2; i = &i[2])
    if (i[1] != 0)
        void* rcx = *i
        
        if (rcx != 0 && (arg2 != 0 || *(rcx + 0xa1) != arg2) && not(arg5.d f< *(rcx + 0x3c)))
            uint32_t rdx = zx.d(*(rcx + 0x98))
            
            if (rdx == 0 || rdx != 1 || *(rcx + 0x9c) s> *arg1)
                uint64_t rax
                
                if (*(rcx + 0x50) == 0)
                    int32_t rax_2 = arg1[2] * 0xbb38435 + 0x3619636b
                    arg1[2] = rax_2
                    float zmm0 = (rax_2 u>> 9 | 0x3f800000) - 1f
                    float temp0_1 = *(rcx + 0x94)
                    zmm0 - temp0_1
                    rax.b = zmm0 < temp0_1
                else
                    rax = 1
                
                if (rax.b != 0)
                    if (*(rcx + 0x50) == 0)
                        int64_t rsi_1 = sx.q(arg4[1].d)
                        int32_t rax_5 = (rsi_1 + 1).d
                        arg4[1].d = rax_5
                        
                        if (rax_5 s> *(arg4 + 0xc))
                            sub_1405a4f90(arg4)
                        
                        int64_t* rcx_5 = (rsi_1 << 4) + *arg4
                        *rcx_5 = *i
                        rcx_5[1] = i[1]
                    else
                        sub_141e102c0(arg4, i)
