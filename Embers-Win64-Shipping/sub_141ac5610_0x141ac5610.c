// 函数: sub_141ac5610
// 地址: 0x141ac5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
int64_t result
int128_t zmm6
result, zmm6 = sub_141e1eab0(sub_141e23160(arg1), arg2)
int32_t rdx_1 = arg1[3].d
arg1[5].d = 0

if (*(arg1 + 0x2c) != rdx_1)
    result = sub_1405c5570(&arg1[4], rdx_1)

int32_t i = 0
int128_t var_38 = zmm6

if (arg1[3].d s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rsi_2 = arg1[2] + r15_1
        
        if (*rsi_2 != 0 && (arg1[0xe].b != 0 || not(9.99999994e-09f f>= rsi_2[1].d)))
            int64_t rbp_1 = sx.q(arg1[5].d)
            int32_t rax_1 = (rbp_1 + 1).d
            arg1[5].d = rax_1
            
            if (rax_1 s> *(arg1 + 0x2c))
                sub_1405a4d70(&arg1[4])
            
            result = arg1[4]
            *(result + (rbp_1 << 3)) = rsi_2
        
        i += 1
        r15_1 += 0x50
    while (i s< arg1[3].d)

int64_t r12 = sx.q(arg1[5].d)

if (r12.d == 0)
    return result

int32_t rax_2 = arg1[7].d
int32_t rdx_3 = 0
arg1[7].d = 0

if (*(arg1 + 0x3c) != rax_2)
    sub_1405dadb0(&arg1[6], rax_2)
    rdx_3 = arg1[7].d

int32_t rax_4 = (r12 + 1).d + rdx_3
arg1[7].d = rax_4

if (rax_4 s> *(arg1 + 0x3c))
    sub_1406105e0(&arg1[6])

zmm6 = zx.o(0)
int64_t* r14 = arg1[4]
int64_t rbp_2 = 0
uint64_t r15_3 = sx.q(arg1[5].d) << 3 u>> 3

if (r14 u> &r14[arg1[5]])
    r15_3 = 0

if (r15_3 != 0)
    do
        void* rcx_6 = *r14
        int32_t rdx_5 = *(rcx_6 + 0x10)
        int32_t rax_7 = *(rcx_6 + 0xc)
        zmm6.d = zmm6.d f+ *(rcx_6 + 8)
        
        if (rdx_5 s>= rax_7)
            rdx_5 = rax_7
        else
            *(rcx_6 + 0x10) = rax_7
            *(rcx_6 + 0xc) = rdx_5
        
        if (not(*(rcx_6 + 0x14) f<= *(rcx_6 + 0x18)))
            int32_t rax_8 = *(rcx_6 + 0x10)
            *(rcx_6 + 0x10) = rdx_5
            *(rcx_6 + 0xc) = rax_8
        
        zmm6 = sub_141deef50(rcx_6 + 0x20)
        r14 = &r14[1]
        rbp_2 += 1
    while (rbp_2 != r15_3)

if (arg1[0xe].b == 0)
    int32_t zmm1_1 = (zx.o(0)).d
    int64_t i_1 = 0
    
    if (r12 s>= 4)
        float zmm2_1 = 1f f/ zmm6.d
        
        do
            zmm1_1 = zmm1_1 f+ zmm2_1 f* *(*(arg1[4] + (i_1 << 3)) + 8)
            *(arg1[6] + (i_1 << 2)) = zmm1_1
            zmm1_1 = zmm1_1 f+ zmm2_1 f* *(*(arg1[4] + (i_1 << 3) + 8) + 8)
            *(arg1[6] + (i_1 << 2) + 4) = zmm1_1
            zmm1_1 = zmm1_1 f+ zmm2_1 f* *(*(arg1[4] + (i_1 << 3) + 0x10) + 8)
            *(arg1[6] + (i_1 << 2) + 8) = zmm1_1
            zmm1_1 = zmm1_1 f+ zmm2_1 f* *(*(arg1[4] + (i_1 << 3) + 0x18) + 8)
            *(arg1[6] + (i_1 << 2) + 0xc) = zmm1_1
            i_1 += 4
        while (i_1 s< r12 - 3)
    
    for (; i_1 s< r12; i_1 += 1)
        zmm1_1 = zmm1_1 f+ 1f f/ zmm6.d f* *(*(arg1[4] + (i_1 << 3)) + 8)
        *(arg1[6] + (i_1 << 2)) = zmm1_1
    
    *(arg1[6] + (r12 << 2)) = 0x3f800000
else
    sub_141a96d90(arg1, 0xffffffff)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_1 = performanceCount.d
int32_t rbx_1 = 0
arg1[0xd].d = performanceCount_1
*(arg1 + 0x6c) = performanceCount_1
arg1[9].d = 0

if (*(arg1 + 0x4c) != 2)
    sub_1405a5220(&arg1[8], 2)
    rbx_1 = arg1[9].d

arg1[9].d = rbx_1 + 2

if (rbx_1 + 2 s> *(arg1 + 0x4c))
    sub_1405c4f50(&arg1[8])

void* rcx_19 = sx.q(rbx_1) * 0x30 + arg1[8]
__builtin_memset(rcx_19, 0, 0x20)
*(rcx_19 + 0x20) = 0xfffffffe
*(rcx_19 + 0x28) = 0xfffffffe
__builtin_memset(rcx_19 + 0x30, 0, 0x20)
*(rcx_19 + 0x50) = 0xfffffffe
*(rcx_19 + 0x58) = 0xfffffffe
int32_t rax_22 = sub_141abbab0(arg1)
int32_t rax_23 = sub_141abbab0(arg1)
sub_141ac0740(arg1, sx.q(arg1[0xa].d) * 0x30 + arg1[8], rax_22, 0x3f800000)
int32_t rcx_26 = (arg1[0xa].d + 1) & 0x80000001

if (rcx_26 s< 0)
    rcx_26 = ((rcx_26 - 1) | 0xfffffffe) + 1

return sub_141ac0740(arg1, sx.q(rcx_26) * 0x30 + arg1[8], rax_23, (zx.o(0)).d)
