// 函数: sub_141e94090
// 地址: 0x141e94090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)
float zmm7[0x4] = arg2

if (rcx == 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x3c))

if ((rax.b & 1) != 0)
    return 

arg2[0] = arg2[0] f* *(arg1 + 0x50)
int64_t rdi
rdi.b = 0
arg2[0] = arg2[0] f+ *(arg1 + 0x38)
*(arg1 + 0x38) = arg2[0]

if ((rax.b & 8) != 0)
    *(arg1 + 0x48) = zmm7[0] f+ *(arg1 + 0x48)

if ((rax.b & 0x10) != 0)
    *(arg1 + 0x4c) = zmm7[0] f+ *(arg1 + 0x4c)

float zmm0 = *(rcx + 0x30)
float zmm2

if ((rax.b & 4) == 0)
    if (arg2[0] <= zmm0)
        zmm2 = *(arg1 + 0x44)
        
        if (not(arg2[0] <= zmm0 - zmm2))
            rax = zx.q(rax.d) | 0x10
            *(arg1 + 0x3c) = rax.d
            arg2[0] = arg2[0] - (*(rcx + 0x30) - zmm2)
            *(arg1 + 0x4c) = arg2[0]
    else
        rdi.b = 1
else if (not(arg2[0] <= zmm0))
    arg2[0] = arg2[0] - zmm0
    *(arg1 + 0x38) = arg2[0]

int32_t rcx_1 = rax.d

if ((rax.b & 8) != 0)
    zmm0 = *(arg1 + 0x40)
    
    if (zmm0 f< *(arg1 + 0x48) || not(zmm0 != 0f))
        rcx_1 = rax.d & 0xfffffff7
        *(arg1 + 0x3c) = rcx_1

rax = zx.q(rcx_1) & 0x10

if (rax.d != 0)
    zmm0 = *(arg1 + 0x44)
    
    if (not(zmm0 f>= *(arg1 + 0x4c)))
        *(arg1 + 0x4c) = zmm0
        rdi.b = 1

arg2 = 0x3f800000

if ((rcx_1.b & 8) == 0)
    zmm2 = 1f
else
    zmm2 = *(arg1 + 0x48) f/ *(arg1 + 0x40)

if (rax.d != 0)
    arg2[0] = 1f - *(arg1 + 0x4c) f/ *(arg1 + 0x44)

void* r8 = *(arg1 + 0x30)
float temp0_1[0x4] = _mm_min_ss(arg2[0], zmm2)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x54)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x58)
*(arg1 + 0x58) = 0x3f800000
*(arg1 + 0x5c) = temp0_1[0]
int64_t* rdx_1 = *(r8 + 0x28)

if (rdx_1 != 0)
    rax, rdx_1 = (*(*rdx_1 + 0x260))(rdx_1, *(arg1 + 0x38), zmm2, 0, arg3)
    rcx_1 = *(arg1 + 0x3c)

if ((rcx_1.b & 2) == 0)
    return 

if (rdi.b == 0)
    zmm0 = *(arg1 + 0x60)
    
    if (not(zmm0 <= 0f))
        zmm0 = zmm0 - zmm7[0]
        *(arg1 + 0x60) = zmm0
        
        if (not(zmm0 > 0f))
            sub_141eae3e0(arg1, 0)
else
    int64_t* r8_1 = *(arg1 + 0x30)
    
    if (r8_1[5] != 0)
        rdx_1.b = 1
        (*(*r8_1 + 0x288))(r8_1, rdx_1)
        *(*(arg1 + 0x30) + 0x28) = 0
        rcx_1 = *(arg1 + 0x3c)
    
    *(arg1 + 0x68) = 0
    *(arg1 + 0x3c) = rcx_1 | 1
    *(arg1 + 0x70) = 0
