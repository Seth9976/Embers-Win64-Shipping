// 函数: sub_1422eba20
// 地址: 0x1422eba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == 0 || arg2 s<= 0)
    return 

int64_t rcx = sx.q(*(arg1 + 0x14) * arg2)
int64_t rax_3 = 2 * rcx

if (mulu.dp.q(2, rcx) u>> 0x40 != zx.o(0))
    rax_3 = -1

int64_t rax_4 = j_sub_140a82f30(rax_3)
j_sub_140a74f90(0)
memset(rax_4, 0, sx.q(*(arg1 + 0x14) * arg2) * 2)
int64_t r14_1 = *arg1
int32_t r11_1 = 0
int32_t i = 0

if (*(arg1 + 0x14) s> 0)
    int32_t r10_1 = 0
    
    do
        int32_t j = 0
        
        if (arg1[3].d s> 0)
            do
                int16_t* rdx_2 = rax_4 + (sx.q(r10_1 + mods.dp.d(sx.q(j), arg2)) << 1)
                int32_t rax_13 = arg1[3].d * i + j
                j += 1
                *rdx_2 += *(r14_1 + (sx.q(rax_13) << 1))
            while (j s< arg1[3].d)
        
        i += 1
        r10_1 += arg2
    while (i s< *(arg1 + 0x14))

int32_t rdx_4 = *(arg1 + 0x14) * arg2
arg1[3].d = arg2
arg1[2].d = rdx_4
arg1[1].d = 0

if (rdx_4 s> *(arg1 + 0xc))
    sub_1405947f0(arg1, rdx_4)
    r11_1 = arg1[1].d

int32_t rcx_6 = arg1[2].d + r11_1
arg1[1].d = rcx_6

if (rcx_6 s> *(arg1 + 0xc))
    sub_140594770(arg1)

memcpy(*arg1, rax_4, arg1[2].d * 2)
j_sub_140a74f90(rax_4)
