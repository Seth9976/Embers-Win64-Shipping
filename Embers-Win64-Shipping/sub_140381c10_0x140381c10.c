// 函数: sub_140381c10
// 地址: 0x140381c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int128_t var_58 = arg5
int128_t __saved_zmm7_1
int128_t __saved_zmm7 = __saved_zmm7_1
int128_t __saved_zmm8_1
int128_t __saved_zmm8 = __saved_zmm8_1
int128_t __saved_zmm9_1
int128_t __saved_zmm9 = __saved_zmm9_1
int32_t var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t* r14 = arg8
int32_t rsi = arg2
var_1a8 = arg3
int32_t* var_180 = r14
int32_t r15_2 = arg4 s/ 0x190
int64_t rbx = sx.q(r15_2)
int64_t rax_5 = rbx << 2
int64_t rcx = rax_5 + 0xf

if (rcx u<= rax_5)
    rcx = 0xffffffffffffff0

int64_t rcx_1 = rcx & 0xfffffffffffffff0
__chkstk(rcx_1)
int512_t zmm1
zmm1.o = *r14
int512_t zmm0
zmm0.o = 0x3f800000
void var_1e8
void* rsp_1 = &var_1e8 - rcx_1
int32_t var_178 = zmm1.d
zmm1.d = zmm1.d f+ 1e-15f
zmm0.d = 1f f/ zmm1.d
int32_t var_108 = zmm0.d
int32_t var_174
int32_t var_170[0x19]
int32_t rcx_4
int512_t zmm2

if (arg9 == 0)
    rcx_4 = 1
else
    zmm1.o = r14[1]
    zmm2.o = r14[2]
    zmm0.o = 0x3f800000
    int32_t rcx_3 = r15_2 * 2 - arg9
    var_174 = zmm1.d
    zmm1.d = zmm1.d f+ 1e-15f
    var_170[0] = zmm2.d
    rsi -= rcx_3
    rcx_4 = 3
    zmm0.d = 1f f/ zmm1.d
    zmm2.d = zmm2.d f+ 1e-15f
    int64_t var_1a0 = arg1 + (sx.q(arg3 * rcx_3) << 2)
    int32_t var_104_1 = zmm0.d
    zmm0.o = 0x3f800000
    zmm0.d = 1f f/ zmm2.d
    int32_t var_100_1 = zmm0.d

__saved_zmm7_1 = zx.o(0)
int32_t i_2 = 0x18
int32_t i_4 = divs.dp.d(sx.q(rsi), r15_2)

if (i_4 s< 0x18)
    i_2 = i_4

int64_t rax_14 = sx.q(rcx_4)
int32_t rsi_1 = 0
int64_t i_1 = sx.q(i_2)

if (i_2 s> 0)
    int64_t r14_1 = rax_14 << 2
    int64_t i
    
    do
        *(rsp_1 + 0x30) = arg3
        *(rsp_1 + 0x28) = 0xfffffffe
        arg5 = 0x26901d7d
        *(rsp_1 + 0x20) = 0
        arg10(nop)
        
        if (rsi_1 == 0)
            __saved_zmm7_1 = *(rsp_1 + 0x40)
        
        int64_t rax_15 = 0
        
        if (rbx s>= 4)
            void* rdx_4 = rsp_1 + 0x48
            int64_t j_1 = ((rbx - 4) u>> 2) + 1
            rax_15 = j_1 << 2
            int64_t j
            
            do
                zmm1.o = *(rdx_4 - 8)
                zmm2.o = *(rdx_4 - 4)
                rdx_4 += 0x10
                zmm0.o = zmm1.o
                zmm0.d = zmm0.d f- __saved_zmm7_1.d
                __saved_zmm7_1 = *(rdx_4 - 0xc)
                zmm0.d = zmm0.d f* zmm0.d
                arg5.d = arg5.d f+ zmm0.d
                zmm0.o = zmm2.o
                zmm0.d = zmm0.d f- zmm1.d
                zmm1.o = *(rdx_4 - 0x10)
                zmm0.d = zmm0.d f* zmm0.d
                arg5.d = arg5.d f+ zmm0.d
                zmm0.o = zmm1.o
                zmm0.d = zmm0.d f- zmm2.d
                zmm0.d = zmm0.d f* zmm0.d
                arg5.d = arg5.d f+ zmm0.d
                zmm0.o = __saved_zmm7_1
                zmm0.d = zmm0.d f- zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                arg5.d = arg5.d f+ zmm0.d
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        while (rax_15 s< rbx)
            zmm1.o = *(rsp_1 + 0x40 + (rax_15 << 2))
            rax_15 += 1
            zmm0.o = zmm1.o
            zmm0.d = zmm0.d f- __saved_zmm7_1.d
            __saved_zmm7_1 = zmm1.o
            zmm0.d = zmm0.d f* zmm0.d
            arg5.d = arg5.d f+ zmm0.d
        
        zmm0.o = 0x3f800000
        *(&var_178 + r14_1) = arg5.d
        r14_1 += 4
        rsi_1 += 1
        zmm0.d = 1f f/ arg5.d
        void var_10c
        *(&var_10c + r14_1) = zmm0.d
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg3 = var_1a8
    r14 = var_180

int64_t rdx_6 = sx.q(rsi_1) + rax_14
(&var_178)[rdx_6] = *(&var_180:4 + (rdx_6 << 2))

if (arg9 != 0)
    int32_t i_3 = i_2 + 2
    i_2 = i_3
    
    if (i_3 s> 0x18)
        i_2 = 0x18

zmm0.o = arg7
zmm0.d = zmm0.d f* 0.5f
zmm1.o = zx.o(arg3 * 0x3c + 0x28)
zmm0.d = zmm0.d f+ 1f
*(rsp_1 + 0x20) = arg6 s/ 0x190
zmm1.o = _mm_cvtepi32_ps(zmm1.o)
zmm1.d = zmm1.d f* zmm0.d
char result
int512_t zmm6
result, zmm6 = sub_140385a20(&var_178, &var_108, zx.q(i_2), zx.q(int.d(zmm1.d)))
int64_t rdx_12 = sx.q(1 << result)
*r14 = (&var_178)[rdx_12]

if (arg9 != 0)
    r14[1] = (&var_174)[rdx_12]
    r14[2] = var_170[rdx_12]

__security_check_cookie(rax_1 ^ &var_1a8)
zmm6.o = var_58
return result
