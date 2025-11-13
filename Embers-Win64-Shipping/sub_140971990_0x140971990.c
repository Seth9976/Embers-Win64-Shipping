// 函数: sub_140971990
// 地址: 0x140971990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = arg2

if (arg1[1] u> sx.q(arg3) + arg4)
    arg1[1] = arg4

void* rdx = *arg1[7]

if (rdx == 0)
    int32_t rax_25 = (data_143ced3cc + 1) & 0x8000007f
    
    if (rax_25 s< 0)
        rax_25 = ((rax_25 - 1) | 0xffffff80) + 1
    
    data_143ced3cc = rax_25
    return rax_25

int64_t rcx = arg1[7]
int64_t rbx = sx.q(*(rdx + 8))
int32_t i = 0
arg1[7] = rdx
*(rdx + 8) = 0
j_sub_140a74f90(rcx)
int64_t r13_1 = rbx * 0x30
uint64_t* rbx_2 = arg1[4] + r13_1
rbx_2[3] = 0
rbx_2[4].d = 0xffffffff
rbx_2[5] = arg4

if (arg5 == 1)
    rbx_2[2].d = arg3 u>> 1
else if (arg5 == 0)
    rbx_2[2].d = arg3 u>> 2

int32_t rax_6 = *(rbx_2 + 0xc)
int32_t rdx_2 = 0
rbx_2[1].d = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(rbx_2, 0)
    rdx_2 = rbx_2[1].d

int32_t rcx_3 = rbx_2[2].d + rdx_2
rbx_2[1].d = rcx_3

if (rcx_3 s> *(rbx_2 + 0xc))
    sub_1406105e0(rbx_2)

uint64_t rcx_5 = *rbx_2
uint32_t r15_1 = zx.d(arg5)

if (r15_1 == 0)
    *(rbx_2 + 0x14) = rbx_2[2].d
    memcpy(rcx_5, r14, arg3)
else if (r15_1 == 1)
    int32_t rax_7 = rbx_2[2].d
    *(rbx_2 + 0x14) = rax_7
    
    if (rax_7 s> 0)
        do
            int32_t rax_8 = sx.d(*r14)
            r14 = &r14[1]
            i += 1
            rcx_5 += 4
            uint128_t zmm0_1
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* 3.05185094e-05f
            *(rcx_5 - 4) = zmm0_1.d
        while (i s< rbx_2[2].d)

*(arg1[4] + r13_1 + 0x20) = rbx.d
void* i_2 = *arg1
void* rdx_5 = arg1[4] + r13_1

if (i_2 == 0)
    *arg1 = rdx_5
    arg1[1] = arg4
else if (arg4 u>= *(i_2 + 0x28))
    for (void* i_1 = *(i_2 + 0x18); i_1 != 0; i_1 = *(i_1 + 0x18))
        if (*(i_1 + 0x28) u> arg4)
            *(i_2 + 0x18) = rdx_5
            *(rdx_5 + 0x18) = i_1
            return i_1
        
        i_2 = i_1
    
    *(i_2 + 0x18) = rdx_5
else
    *(rdx_5 + 0x18) = i_2
    *arg1 = rdx_5

if (r15_1 == 0)
    arg1[8].d += divs.dp.d(sx.q(arg3), 4)
    return zx.q(arg1[8].d)

if (r15_1 == 1)
    arg1[8].d += divs.dp.d(sx.q(arg3), 2)
    return zx.q(arg1[8].d)

arg1[8].d += divs.dp.d(sx.q(arg3), 1)
return zx.q(arg1[8].d)
