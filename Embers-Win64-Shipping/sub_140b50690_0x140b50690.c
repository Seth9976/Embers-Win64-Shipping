// 函数: sub_140b50690
// 地址: 0x140b50690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x7c)
int64_t rbx = sx.q(arg2[1].d)
int32_t r14_2 = (rax - 1 + rbx.d) & neg.d(rax)
int32_t r8_1 = *(arg1 + 0x30) + r14_2

if (r8_1 s> rbx.d)
    arg2[1].d = r8_1
    
    if (r8_1 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    memset(rbx + *arg2, 0, sx.q(r8_1 - rbx.d))
else if (r8_1 s< rbx.d && r8_1 != rbx.d)
    arg2[1].d = r8_1
    sub_1405dac10(arg2)

memcpy(sx.q(r14_2) + *arg2, *(arg1 + 0x28), *(arg1 + 0x30))
int32_t rdx_3 = *(arg1 + 0x50) + arg2[3].d

if (rdx_3 s> *(arg2 + 0x1c))
    sub_1405a5410(&arg2[2], rdx_3)

int128_t* i = *(arg1 + 0x48)

for (void* r15_2 = &i[sx.q(*(arg1 + 0x50))]; i != r15_2; i = &i[1])
    int64_t rsi_1 = sx.q(arg2[3].d)
    int32_t rax_2 = (rsi_1 + 1).d
    arg2[3].d = rax_2
    
    if (rax_2 s> *(arg2 + 0x1c))
        sub_1405a4f90(&arg2[2])
    
    int64_t rax_4 = rsi_1 << 4
    int128_t* rax_5 = rax_4 + arg2[2]
    
    if (rax_4 == neg.q(arg2[2]))
        rax_5 = nullptr
    else
        *rax_5 = *i
    
    *(rax_5 + 0xc) += r14_2

int32_t rdx_6 = *(arg1 + 0x60) + arg2[5].d

if (rdx_6 s> *(arg2 + 0x2c))
    sub_14083ad30(&arg2[4], rdx_6)

int64_t* i_1 = *(arg1 + 0x58)

for (void* rbp_1 = i_1 + sx.q(*(arg1 + 0x60)) * 0xc; i_1 != rbp_1; i_1 += 0xc)
    int64_t rsi_2 = sx.q(arg2[5].d)
    int32_t rax_7 = (rsi_2 + 1).d
    arg2[5].d = rax_7
    
    if (rax_7 s> *(arg2 + 0x2c))
        sub_14083a7e0(&arg2[4])
    
    uint64_t* rdx_8 = arg2[4] + rsi_2 * 0xc
    
    if (rdx_8 != 0)
        *rdx_8 = *i_1
        rdx_8[1].d = i_1[1].d
    
    rdx_8[1].d += r14_2

return zx.q(r14_2)
