// 函数: sub_141f4b670
// 地址: 0x141f4b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x430)
int128_t zmm6 = arg2

if (rcx == 0)
    return 

uint64_t rax = *(rcx + 0x60)

if (rax != 0 && *(arg1 + 0x720) != *(rax + 0x268))
    rax, zmm6 = sub_141f45220(arg1)
    rcx = *(arg1 + 0x430)

if (rcx == 0)
    return 

*(arg1 + 0x71e) |= 0x10
int64_t rsi_1 = 0
int64_t** rdi_1 = *(arg1 + 0x6c0)
uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x6c8))])
    r14_2 = 0

if (r14_2 != 0)
    do
        arg2.d = zmm6.d f* *(arg1 + 0x710)
        rax, zmm6 = sub_141e0f0c0(*rdi_1, arg2, 0, 0)
        rsi_1 += 1
        rdi_1 = &rdi_1[1]
    while (rsi_1 != r14_2)

int64_t* rcx_3 = *(arg1 + 0x650)

if (rcx_3 != 0)
    arg2.d = zmm6.d f* *(arg1 + 0x710)
    rax, zmm6 = sub_141e0f0c0(rcx_3, arg2, arg3, 1)

int64_t* rcx_4 = *(arg1 + 0x658)

if (rcx_4 != 0 && (*(arg1 + 0x719) & 1) == 0)
    arg2.d = zmm6.d f* *(arg1 + 0x710)
    rax, zmm6 = sub_141e0f0c0(rcx_4, arg2, 0, 1)

if (*(arg1 + 0x5a4) == 2 && (*(arg1 + 0x5a7) & 0x20) == 0 && not(zmm6.d f<= (zx.o(0)).d))
    sub_141f375c0(arg1)
