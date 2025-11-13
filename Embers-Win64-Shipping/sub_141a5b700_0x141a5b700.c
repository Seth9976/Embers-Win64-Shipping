// 函数: sub_141a5b700
// 地址: 0x141a5b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbx = arg3

if (arg1[2].b == 0)
    arg_18:4.d = 0
    rbx = arg_18

int64_t* rdx = 0x1c

if (*(arg1 + 0x24) == 0)
    rdx = 0x14

sub_1408ec700(&arg_18, *(rdx + arg1), *arg1, arg1[1])
int64_t arg_8
sub_1408ec700(&arg_8, rbx, *arg1, arg1[1])
int64_t rax = arg_18
int64_t rcx_2 = arg_8
char r9_2 = *(arg1 + 0x24)
int64_t rdx_3 = arg1[1]
arg_18 = rcx_2
char var_64
int64_t var_54
uint128_t zmm0_1

if (rcx_2.d != rax.d || arg_18:4.d.d f!= rax:4.d)
    arg_8 = rax
    arg_18 = rcx_2
    int32_t r8_4
    char var_7c
    char var_70
    int64_t var_60
    
    if (rcx_2.d s< rax.d || (rcx_2.d == rax.d && arg_18:4.d.d f< arg_8:4.d))
        if (r9_2 != 0)
            var_70 = 0
            int64_t var_6c_2 = rax
        else
            var_7c = 1
            int64_t var_78_2 = rax
        
        var_60:4.d = rcx_2:4.d
        int64_t* r8_6 = &var_70
        
        if (r9_2 == 0)
            r8_6 = &var_7c
        
        var_64.q = 1.q
        zmm0_1 = zx.o(*r8_6)
        r8_4 = r8_6[1].d
    else
        if (r9_2 != 0)
            var_7c = 0
            int64_t var_78_1 = rax
        else
            var_70 = 1
            int64_t var_6c_1 = rax
        
        int64_t* r8_2 = &var_7c
        
        if (r9_2 == 0)
            r8_2 = &var_70
        
        var_64.q = *r8_2
        zmm0_1 = zx.o(1.q)
        var_60:4.d = r8_2[1].d
        r8_4 = rcx_2:4.d
    var_54:4.d = r8_4
    char var_58
    var_58.q = zmm0_1.q
else
    var_64 = 1
    int64_t var_60_1 = rcx_2
    char var_58_1 = 1
    var_54 = rcx_2

arg_18 = rcx_2
int32_t r9_3 = 0
float zmm2[0x4] = arg_18:4.d
int64_t var_4c = rdx_3
zmm2[0] = zmm2[0] f- rax:4.d
arg_8 = 0
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
int32_t rdx_5 = int.d(zmm2[0]) s>> 1
int32_t r8_7 = rcx_2.d - rax.d + rdx_5
zmm0_1 = _mm_cvtepi32_ps(zx.o(rdx_5))
arg_18.d = r8_7
zmm2[0] = zmm2[0] f- zmm0_1.d

if (zmm2[0] >= 0f)
    arg_18:4.d = __minss_xmmss_memss(zmm2[0], 0x3f7fffff)[0]
else
    arg_18:4.d = 0

arg_8 = arg_8
arg_18 = arg_18

if (r8_7 s<= 0 && (r8_7 != 0 || not(arg_18:4.d.d f>= arg_8:4.d)))
    r9_3 = 1

int32_t var_40 = 0x80000000

if (&var_64 != &arg1[5])
    *(arg1 + 0x28) = var_64.o
    *(arg1 + 0x38) = var_54.o
    arg1[9] = r9_3.q
    arg1[0xa].b = 1

*(arg1 + 0x14) = rbx

if (&arg_18 != arg1 + 0x1c)
    *(arg1 + 0x1c) = rbx
    *(arg1 + 0x24) = 1

float zmm1[0x4] = *(arg1 + 0x38)
*arg2 = *(arg1 + 0x28)
zmm0_1 = zx.o(arg1[9])
arg2[1] = zmm1
arg2[2].q = zmm0_1.q
return arg2
