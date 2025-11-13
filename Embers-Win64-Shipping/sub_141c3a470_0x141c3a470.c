// 函数: sub_141c3a470
// 地址: 0x141c3a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = 5f
*(arg1 + 0x1c) = arg3
*(arg1 + 8) = arg4
*(arg1 + 0x18) = arg2

if (not(arg5 < 5f))
    zmm0 = _mm_min_ss(arg2 * 0.5f - 1f, arg5)

*(arg1 + 0x20) = zmm0
*(arg1 + 0x24) = arg6
*(arg1 + 0x28) = arg7
int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0)
    if (rcx[-1] == 0)
        j_sub_140a74f90(&rcx[-1])
    else
        (**rcx)(rcx, 3)

int64_t i_2 = sx.q(*(arg1 + 0x1c))
int64_t rax_2 = 0x30 * i_2

if (mulu.dp.q(0x30, i_2) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t rax_3 = rax_2 + 8

if (rax_2 u>= -8)
    rax_3 = -1

int64_t* rax_4 = j_sub_140a82f30(rax_3)
void* rdx

if (rax_4 == 0)
    rdx = nullptr
else
    *rax_4 = i_2
    rdx = &rax_4[1]
    void* rax_5 = rdx
    
    if (i_2 != 0)
        int64_t i
        
        do
            *rax_5 = &data_1432050f0
            *(rax_5 + 8) = 0x3f800000
            __builtin_memset(rax_5 + 0x10, 0, 0x1c)
            rax_5 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)

bool cond:1 = *(arg1 + 0x1c) s<= 0
int32_t i_1 = 0
*(arg1 + 0x10) = rdx

if (not(cond:1))
    int64_t rdx_1 = 0
    
    do
        int64_t rax_6 = *(arg1 + 0x10)
        rdx_1 += 0x30
        i_1 += 1
        *(rdx_1 + rax_6 - 0x14) = 0
        *(rdx_1 + rax_6 - 0xc) = 0
    while (i_1 s< *(arg1 + 0x1c))

return sub_141c34f50(arg1) __tailcall
