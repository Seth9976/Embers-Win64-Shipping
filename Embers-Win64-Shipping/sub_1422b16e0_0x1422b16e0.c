// 函数: sub_1422b16e0
// 地址: 0x1422b16e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)
int64_t* r9_2 = (rdx << 5) + **arg1
char rax_1 = *(r9_2 + 0x1c)

if (rax_1 != 0 && (*(r9_2 + 0x1d) & 2) == 0)
    int32_t r8 = *arg2
    
    if (r8 s> 0)
        if (rax_1 != 3 || rdx.d s<= 0)
            int64_t* rcx_1 = *r9_2
            int32_t rax_7 = (*(*rcx_1 + 0x108))(rcx_1)
            r8 = (*arg2 - 1 + rax_7) & neg.d(rax_7)
            *arg2 = r8
        else
            uint128_t zmm1 = *arg1
            int64_t rdx_2 = sx.q(_mm_bsrli_si128(zmm1, 8).d - 1) << 5
            int64_t rcx = *zmm1.q
            
            if (*(rdx_2 + rcx + 0x1c) == 3 && *(rdx_2 + rcx + 0xc) == *(r9_2 + 0xc))
                r8 = *(rdx_2 + rcx + 0x10)
                *arg2 = r8
    
    *((sx.q(arg1[1].d) << 5) + **arg1 + 0x10) = r8
    uint32_t rax_10 = zx.d(*((sx.q(arg1[1].d) << 5) + **arg1 + 0xa))
    *arg2 += rax_10
    return rax_10

int64_t* rcx_6 = *r9_2
int32_t rax_12 = (*(*rcx_6 + 0x108))(rcx_6)
int32_t r8_7 = (*arg2 - 1 + rax_12) & neg.d(rax_12)
*arg2 = r8_7
*((sx.q(arg1[1].d) << 5) + **arg1 + 0x10) = r8_7
void* rax_15 = *((sx.q(arg1[1].d) << 5) + **arg1)
*arg2 += *(rax_15 + 0x3c) * *(rax_15 + 0x38)
int64_t* r9_3 = *arg1
int64_t rdx_11 = sx.q(arg1[1].d)
int64_t rax_16 = *r9_3

if (*((rdx_11 << 5) + rax_16 + 0x1c) == 0)
    int32_t r8_8 = (rdx_11 + 1).d
    arg1[1].d = r8_8
    void* rcx_15 = *r9_3
    rax_16 = rdx_11 << 5
    
    if (*(rax_16 + rcx_15 + 0x3c) != 1)
        do
            void* rcx_16 = rcx_15 + (sx.q(r8_8) << 5)
            *(rcx_16 + 0x10) = *(rcx_16 + 0xc)
            int64_t r8_9 = sx.q(arg1[1].d)
            int64_t* r9_4 = *arg1
            int64_t rdx_12 = r8_9
            
            if (*((r8_9 << 5) + *r9_4 + 0x1c) == 0)
                r8_9 = zx.q(r8_9.d + 1)
                arg1[1].d = r8_9.d
                
                if (*((rdx_12 << 5) + *r9_4 + 0x3c) != 1)
                    int64_t r10_1
                    
                    do
                        int64_t rdx_15 = sx.q(r8_9.d) << 5
                        int64_t rcx_19 = **arg1
                        *(rdx_15 + rcx_19 + 0x10) = *(rdx_15 + rcx_19 + 0xc)
                        arg1[1].d
                        **arg1
                        sub_1422b1640(arg1)
                        r10_1 = sx.q(arg1[1].d)
                        r8_9 = zx.q((r10_1 + 1).d)
                        arg1[1].d = r8_9.d
                    while (*((r10_1 << 5) + **arg1 + 0x3c) != 1)
            
            r8_8 = r8_9.d + 1
            arg1[1].d = r8_8
            rcx_15 = **arg1
            rax_16 = sx.q(r8_8) << 5
        while (*(rax_16 + rcx_15 + 0x1c) != 1)

return rax_16
