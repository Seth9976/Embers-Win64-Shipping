// 函数: sub_14117e050
// 地址: 0x14117e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1411a4ac0(data_143f0f1a0, arg1[2].d) != 0 && *(*(*arg1 + 0x78) + 0xa2) s>= 0)
    void* rdx_2 = *arg1
    int32_t i = 0
    
    if (*(rdx_2 + 0x70) s> 0)
        int64_t rsi_1 = 0
        
        do
            void* rax_2 = *(rdx_2 + 0x68)
            void* rcx_1 = rdx_2
            
            if (rax_2 != 0)
                rcx_1 = rax_2
            
            void* r14_1 = *(rcx_1 + rsi_1 + 8)
            
            if (r14_1 != 0)
                int64_t* rcx_2 = arg1[1]
                int64_t rdi_1 = sx.q(rcx_2[1].d)
                int32_t rax_3 = (rdi_1 + 1).d
                rcx_2[1].d = rax_3
                
                if (rax_3 s> *(rcx_2 + 0xc))
                    sub_14119ac20(rcx_2)
                
                void* rcx_3 = *arg1
                int64_t j_1 = 4
                void* rax_4 = *(rcx_3 + 0x68)
                
                if (rax_4 != 0)
                    rcx_3 = rax_4
                
                *(rcx_3 + rsi_1 + 0x3c) &= 0xfffffff9
                *(rcx_3 + rsi_1 + 0x3c) |= 1
                void* rcx_4 = *arg1
                void* rax_5 = *(rcx_4 + 0x68)
                
                if (rax_5 != 0)
                    rcx_4 = rax_5
                
                *(rcx_4 + rsi_1 + 0x3c) &= 0xf8000007
                *(rcx_4 + rsi_1 + 0x3c) |= (rdi_1.d & 0xffffff) << 3
                int128_t* rax_10 = rdi_1 * 0x230 + *arg1[1]
                int128_t* rcx_6 = *(r14_1 + 0x20)
                int64_t j
                
                do
                    rax_10 = &rax_10[8]
                    int128_t zmm0_1 = *rcx_6
                    rcx_6 = &rcx_6[8]
                    rax_10[-8] = zmm0_1
                    arg2.o = rcx_6[-7]
                    rax_10[-7] = arg2.o
                    rax_10[-6] = rcx_6[-6]
                    arg2.o = rcx_6[-5]
                    rax_10[-5] = arg2.o
                    rax_10[-4] = rcx_6[-4]
                    arg2.o = rcx_6[-3]
                    rax_10[-3] = arg2.o
                    rax_10[-2] = rcx_6[-2]
                    arg2.o = rcx_6[-1]
                    rax_10[-1] = arg2.o
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                *rax_10 = *rcx_6
                arg2.o = rcx_6[1]
                rax_10[1] = arg2.o
                rax_10[2] = rcx_6[2]
                rdx_2 = *arg1
            
            i += 1
            rsi_1 += 0x68
        while (i s< *(rdx_2 + 0x70))

return sub_142134ed0(*(*arg1 + 0x80), arg1[2].d, arg2) __tailcall
