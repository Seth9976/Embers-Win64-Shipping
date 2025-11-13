// 函数: sub_141fe5ad0
// 地址: 0x141fe5ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[0xa]
int128_t __saved_zmm7 = arg7
arg7 = zx.o(0)
int64_t var_88 = 0
int32_t var_80 = 0

if ((*(*arg1 + 0x298))(arg5, arg4, r8, &var_88, var_88, var_80, arg12, arg11, arg10, arg9, arg8, 
        __saved_zmm7, arg6) == 0)
    int32_t rax_2 = arg1[8].d
    var_88 = arg1[7]
    var_80 = rax_2

char rdx_1 = arg1[0x11].b
uint32_t zmm1[0x4] = var_88.d

if (rdx_1 == 1)
    zmm1 = _mm_and_ps(zmm1, 0x7fffffff)

char rcx = *(arg1 + 0x89)
uint32_t zmm2[0x4] = var_88:4.d

if (rcx == 1)
    zmm2 = _mm_and_ps(zmm2, 0x7fffffff)

char rax_3 = *(arg1 + 0x8a)
uint32_t zmm3[0x4] = var_80

if (rax_3 == 1)
    zmm3 = _mm_and_ps(zmm3, 0x7fffffff)

int64_t zmm4 = *(arg1 + 0x64)
arg10 = arg1[0xb].d

if (zmm4.d f> arg10.d)
    arg8.d = (*(arg1 + 0x7c)).d f- arg1[0xe].d
    arg5.d = zmm4.d f- arg10.d
    arg8.d = arg8.d f/ arg5.d
else
    arg8 = zx.o(0)

int64_t zmm5 = arg1[0xd].d
arg11 = *(arg1 + 0x5c)

if (zmm5.d f> arg11.d)
    arg9.d = arg1[0x10].d.d f- *(arg1 + 0x74)
    arg5.d = zmm5.d f- arg11.d
    arg9.d = arg9.d f/ arg5.d
else
    arg9 = zx.o(0)

arg6 = *(arg1 + 0x6c)
arg12 = arg1[0xc].d

if (not(arg6[0] <= arg12[0]))
    arg7.d = (*(arg1 + 0x84)).d f- arg1[0xf].d
    arg5.d = arg6[0].q.d f- arg12[0]
    arg7.d = arg7.d f/ arg5.d

if (zmm1[0] f>= arg10.d)
    zmm4 = _mm_min_ss(zmm4.d, zmm1[0])
else
    zmm4 = arg10.q

if (zmm2[0] f>= arg11.d)
    zmm5 = _mm_min_ss(zmm5.d, zmm2[0])
else
    zmm5 = arg11.q

if (zmm3[0] f>= arg12[0])
    arg6 = _mm_min_ss(arg6[0], zmm3[0])
else
    arg6 = arg12

zmm4.d = zmm4.d f- arg10.d
zmm5.d = zmm5.d f- arg11.d
arg6[0] = arg6[0] - arg12[0]
zmm4.d = zmm4.d f* arg8.d
zmm5.d = zmm5.d f* arg9.d
arg6[0] = arg6[0] f* arg7.d
zmm4.d = zmm4.d f+ arg1[0xe].d
zmm5.d = zmm5.d f+ *(arg1 + 0x74)
arg6[0] = arg6[0] f+ arg1[0xf].d
*arg2 = zmm4.d
arg2[1] = zmm5.d
arg2[2] = arg6[0]

if (rdx_1 == 2)
    *arg2 = zmm1[0]

if (rcx == 2)
    arg2[1] = zmm2[0]

if (rax_3 == 2)
    arg2[2] = zmm3[0]

return arg2
