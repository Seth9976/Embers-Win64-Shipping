// 函数: sub_141e14000
// 地址: 0x141e14000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2

for (void* rbp_2 = &i[sx.q(arg2[1].d) * 2]; i != rbp_2; i = &i[2])
    if (i[1] != 0)
        void* rax = *i
        
        if (rax != 0)
            if (*(rax + 0x50) == 0)
                int64_t rsi_1 = sx.q(arg3[1].d)
                int32_t rax_1 = (rsi_1 + 1).d
                arg3[1].d = rax_1
                
                if (rax_1 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                int64_t* rcx_4 = (rsi_1 << 4) + *arg3
                *rcx_4 = *i
                rcx_4[1] = i[1]
            else
                sub_141e102c0(arg3, i)
