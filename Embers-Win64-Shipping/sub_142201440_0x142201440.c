// 函数: sub_142201440
// 地址: 0x142201440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg4
arg4 = 0x3f800000
void* rcx = *(arg1 + 0x30)
float* rsi_1 = zx.q(arg3) + arg7
int128_t var_28 = arg5
char r9 = *(rcx + 0xc)
int64_t rax
float zmm0
float zmm1
float zmm2
float zmm3

if (r9 != 1)
    uint32_t rdx = zx.d(r9)
    arg5 = 0x3f800000
    zmm3 = 1f
    
    if (rdx == 2)
        arg5 = *(arg7 + 0x30)
    else if (rdx == 3)
        arg5 = *(arg7 + 0x34)
    else if (rdx == 4)
        arg5 = *(arg7 + 0x38)
    else if (rdx == 5)
        zmm0 = *(arg7 + 0x34)
        zmm2 = *(arg7 + 0x30)
        zmm1 = *(arg7 + 0x38)
        arg5 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
    
    if ((*(rcx + 0x10) & 1) != 0 || r9 == 0)
        if ((*(rcx + 8) & 1) == 0)
            zmm1 = *(arg7 + 0xc)
        else
            zmm1 = *(arg2 + 0x12c)
        
        zmm0, rax, arg4, arg5 =
            sub_141fe5610(rcx + 0x18, zmm1, *(arg2 + 0x18), arg6, var_28, __saved_zmm6)
        rcx = *(arg1 + 0x30)
        zmm3 = zmm0
    
    *rsi_1 = zmm3 f* arg5.d

char r8_2 = *(rcx + 0x54)

if (r8_2 != 1)
    uint32_t rdx_4 = zx.d(r8_2)
    arg5 = arg4
    zmm3 = arg4.d
    
    if (rdx_4 == 2)
        arg5 = *(arg7 + 0x30)
    else if (rdx_4 == 3)
        arg5 = *(arg7 + 0x34)
    else if (rdx_4 == 4)
        arg5 = *(arg7 + 0x38)
    else if (rdx_4 == 5)
        zmm0 = *(arg7 + 0x34)
        zmm2 = *(arg7 + 0x30)
        zmm1 = *(arg7 + 0x38)
        arg5 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
    
    if ((*(rcx + 0x58) & 1) != 0 || r8_2 == 0)
        if ((*(rcx + 0x50) & 1) == 0)
            zmm1 = *(arg7 + 0xc)
        else
            zmm1 = *(arg2 + 0x12c)
        
        zmm0, rax, arg4, arg5 =
            sub_141fe5610(rcx + 0x60, zmm1, *(arg2 + 0x18), arg6, var_28, __saved_zmm6)
        rcx = *(arg1 + 0x30)
        zmm3 = zmm0
    
    rsi_1[1] = zmm3 f* arg5.d

char r8_4 = *(rcx + 0x9c)

if (r8_4 != 1)
    uint32_t rdx_8 = zx.d(r8_4)
    arg5 = arg4
    zmm3 = arg4.d
    
    if (rdx_8 == 2)
        arg5 = *(arg7 + 0x30)
    else if (rdx_8 == 3)
        arg5 = *(arg7 + 0x34)
    else if (rdx_8 == 4)
        arg5 = *(arg7 + 0x38)
    else if (rdx_8 == 5)
        zmm0 = *(arg7 + 0x34)
        zmm2 = *(arg7 + 0x30)
        zmm1 = *(arg7 + 0x38)
        arg5 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
    
    if ((*(rcx + 0xa0) & 1) != 0 || r8_4 == 0)
        if ((*(rcx + 0x98) & 1) == 0)
            zmm1 = *(arg7 + 0xc)
        else
            zmm1 = *(arg2 + 0x12c)
        
        zmm0, rax, arg4, arg5 =
            sub_141fe5610(rcx + 0xa8, zmm1, *(arg2 + 0x18), arg6, var_28, __saved_zmm6)
        rcx = *(arg1 + 0x30)
        zmm3 = zmm0
    
    rsi_1[2] = zmm3 f* arg5.d

char r8_6 = *(rcx + 0xe4)

if (r8_6 == 1)
    return 

uint32_t rdx_12 = zx.d(r8_6)
zmm3 = arg4.d

if (rdx_12 == 2)
    arg4 = *(arg7 + 0x30)
else if (rdx_12 == 3)
    arg4 = *(arg7 + 0x34)
else if (rdx_12 == 4)
    arg4 = *(arg7 + 0x38)
else if (rdx_12 == 5)
    zmm0 = *(arg7 + 0x34)
    zmm2 = *(arg7 + 0x30)
    zmm1 = *(arg7 + 0x38)
    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)

if ((*(rcx + 0xe8) & 1) != 0 || r8_6 == 0)
    if ((*(rcx + 0xe0) & 1) == 0)
        zmm1 = *(arg7 + 0xc)
    else
        zmm1 = *(arg2 + 0x12c)
    
    float zmm0_1
    zmm0_1, rax, arg4 = sub_141fe5610(rcx + 0xf0, zmm1, *(arg2 + 0x18), arg6, var_28, __saved_zmm6)
    zmm3 = zmm0_1

rsi_1[3] = zmm3 f* arg4.d
