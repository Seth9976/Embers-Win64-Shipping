// 函数: sub_142346fc0
// 地址: 0x142346fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t var_460 = *(arg2 + 0x1b0)
int64_t r11 = sx.q(arg3)
int32_t rbx_1 = not.d(r11.d)
int32_t r12 = 1 - r11.d
int32_t var_468 = rbx_1
int32_t rax_4 = 2 - r11.d
int32_t var_464 = *(*(arg5 + 0x90) + (r11 << 2))
int32_t rdx_1 = 0
int32_t rax_5 = 3 - r11.d
int32_t rax_6 = 4 - r11.d
int32_t rax_7 = 5 - r11.d
int32_t r14_1 = neg.d(r11.d)
int32_t var_448[0x28]
int32_t var_248[0x80]

do
    int64_t r8 = sx.q(r11.d)
    uint64_t rax_8 = zx.q(r11.d + r14_1)
    uint64_t r9 = zx.q(rax_8.d)
    
    if (r11.d u>= arg4)
        var_248[rax_8] = 0
        var_448[rax_8] = rdx_1
    else
        var_248[r9] = *(*arg6 + (r8 << 2))
        var_448[r9] = rdx_1
        
        if (r11.d == 0xffffffff)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2))
    
    int32_t r9_1 = (r11 + 2).d
    uint64_t rbx_2 = zx.q(rbx_1 + r9_1)
    
    if (r9_1 - 1 u>= arg4)
        var_248[rbx_2] = 0
        var_448[rbx_2] = rdx_1
    else
        var_248[rbx_2] = *(*arg6 + (r8 << 2) + 4)
        var_448[rbx_2] = rdx_1
        
        if (r11.d == 0xfffffffe)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 4)
    
    uint64_t rax_14 = zx.q(r9_1 + r14_1)
    uint64_t rbx_3 = zx.q(rax_14.d)
    
    if (r9_1 u>= arg4)
        var_248[rax_14] = 0
        var_448[rax_14] = rdx_1
    else
        var_248[rbx_3] = *(*arg6 + (r8 << 2) + 8)
        var_448[rbx_3] = rdx_1
        
        if (r11.d == 0xfffffffd)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 8)
    
    uint64_t rbx_4 = zx.q(r9_1 + r12)
    
    if (r9_1 + 1 u>= arg4)
        var_248[rbx_4] = 0
        var_448[rbx_4] = rdx_1
    else
        var_248[rbx_4] = *(*arg6 + (r8 << 2) + 0xc)
        var_448[rbx_4] = rdx_1
        
        if (r11.d == 0xfffffffc)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 0xc)
    
    uint64_t rbx_5 = zx.q(r9_1 + rax_4)
    
    if (r9_1 + 2 u>= arg4)
        var_248[rbx_5] = 0
        var_448[rbx_5] = rdx_1
    else
        var_248[rbx_5] = *(*arg6 + (r8 << 2) + 0x10)
        var_448[rbx_5] = rdx_1
        
        if (r11.d == 0xfffffffb)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 0x10)
    
    uint64_t rbx_6 = zx.q(r9_1 + rax_5)
    
    if (r9_1 + 3 u>= arg4)
        var_248[rbx_6] = 0
        var_448[rbx_6] = rdx_1
    else
        var_248[rbx_6] = *(*arg6 + (r8 << 2) + 0x14)
        var_448[rbx_6] = rdx_1
        
        if (r11.d == 0xfffffffa)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 0x14)
    
    uint64_t rbx_8 = zx.q(rax_6 + r9_1)
    
    if (r9_1 + 4 u>= arg4)
        var_248[rbx_8] = 0
        var_448[rbx_8] = rdx_1
    else
        var_248[rbx_8] = *(*arg6 + (r8 << 2) + 0x18)
        var_448[rbx_8] = rdx_1
        
        if (r11.d == 0xfffffff9)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 0x18)
    
    uint64_t rbx_10 = zx.q(rax_7 + r9_1)
    
    if (r9_1 + 5 u>= arg4)
        var_248[rbx_10] = 0
        var_448[rbx_10] = rdx_1
    else
        var_248[rbx_10] = *(*arg6 + (r8 << 2) + 0x1c)
        var_448[rbx_10] = rdx_1
        
        if (r11.d == 0xfffffff8)
            rdx_1 += *(arg5 + 0xf4)
        else
            rdx_1 += *(*(arg5 + 0xa0) + (r8 << 2) + 0x1c)
    
    rbx_1 = var_468
    r11 = zx.q(r11.d + 8)
while (r11.d + r14_1 u< 0x80)

sub_140741e30(arg2, &var_460, arg1 + 0x12e, &var_464, 0)
sub_142324090(arg2, &var_460, arg1 + 0x128, &var_448, 0)
uint64_t result = sub_142324090(arg2, &var_460, arg1 + 0x11c, &var_248, 0)
__security_check_cookie(rax_1 ^ &var_4a8)
return result
