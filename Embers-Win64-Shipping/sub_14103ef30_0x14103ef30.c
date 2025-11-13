// 函数: sub_14103ef30
// 地址: 0x14103ef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f01e00
int32_t i = 0
arg1[1] = 0
arg1[2].d = *(*arg2 + 8)
void* rcx_1 = **arg2
arg1[3] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

arg1[4] = 0
int32_t r14 = 0
arg1[5] = 0
int64_t rbp = sx.q(arg2[1].d)

if (0 != rbp.d)
    sub_1408cf3a0(&arg1[4], rbp.d)
    r14 = arg1[5].d

int32_t rax_2 = r14 + rbp.d
arg1[5].d = rax_2

if (rax_2 s> *(arg1 + 0x2c))
    sub_1407c3b60(&arg1[4])

memset(&arg1[4][sx.q(r14) * 7], 0, rbp * 0x38)

if (arg1[5].d s> 0)
    int64_t r9_1 = 0
    int64_t r10_1 = 0
    
    do
        i += 1
        void* rdx_3 = *arg2 + r9_1
        int32_t* r8_2 = arg1[4] + r10_1
        r9_1 += 0x88
        r10_1 += 0x38
        *r8_2 = *(rdx_3 + 0xc)
        r8_2[1] = *(rdx_3 + 0x10)
        r8_2[2] = *(rdx_3 + 0x14)
        r8_2[0xb] = *(rdx_3 + 0x2c)
        r8_2[0xa] = *(rdx_3 + 0x28)
        r8_2[9] = *(rdx_3 + 0x24)
        r8_2[8] = (&data_1439c85fc)[sx.q(*(arg1[3] + 0x3c)) * 0xa]
        r8_2[0xc] = *(rdx_3 + 0x30)
        void* rax_14 = *(rdx_3 + 0x48)
        *(r8_2 + 0x10) = rax_14
        *(r8_2 + 0x18) = *(rax_14 + 0x50)
    while (i s< arg1[5].d)

return arg1
