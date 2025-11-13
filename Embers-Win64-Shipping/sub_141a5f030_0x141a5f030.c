// 函数: sub_141a5f030
// 地址: 0x141a5f030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141a53830(arg1)

if (result != 0 || arg1[0x8c] == 0)
    return result

int128_t zmm6 = zx.o(0)
int64_t* rax_1 = (*(arg1[5] + 0x78))(&arg1[5])

if (rax_1 != 0)
    int64_t rdx = *rax_1
    void* rax_2 = (*(rdx + 0x150))(rax_1, rdx)
    
    if (rax_2 != 0)
        void* rax_3 = *(rax_2 + 0x38)
        
        if (rax_3 != 0)
            void* rcx_2 = *(rax_3 + 0x88)
            
            if (rcx_2 != 0)
                void* rax_4 = *(rcx_2 + 0x30)
                
                if (rax_4 != 0)
                    void* rcx_3 = *(rax_4 + 0x228)
                    
                    if (rcx_3 != 0)
                        if ((*(arg1 + 0x45c) & 1) == 0)
                            zmm6 = 0x3f800000
                        else
                            zmm6 = 0xbf800000
                        
                        zmm6.d = zmm6.d f* *(rcx_3 + 0x238)

int64_t rax_5 = arg1[0xf8]
zmm6.d = zmm6.d f* 0.00100000005f
int64_t zmm5_1 = float.d(rax_5.d)
int512_t zmm1
zmm1.o = _mm_cvtps_pd(zmm6.q)
zmm1.q = zmm1.q f* zmm5_1
int128_t zmm9
zmm9.q = float.d((rax_5 u>> 0x20).d)
zmm1.q = zmm1.q f/ zmm9.q
int64_t rcx_4 = int.q(zmm1.q)
double zmm0_1[0x2] = zmm1.o
int128_t zmm2

if (rcx_4 != -0x8000000000000000)
    zmm2.q = float.d(rcx_4)
    
    if (not(zmm2.q f== zmm1.q))
        uint32_t temp0_3 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_4 - (zx.q(temp0_3) & 1))

zmm1.q = zmm1.q f- zmm0_1[0]
int32_t r8_1 = int.d(zmm0_1[0])

if (not(zmm1.q f<= 0.0))
    zmm1.o = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0], zmm1.q)

zmm0_1 = _mm_cvtpd_ps(zmm1.o)
int32_t arg_1c

if (zmm0_1[0].d f>= 0f)
    arg_1c = _mm_min_ss(zmm0_1[0].d, 0x3f7fffff)[0].d
else
    arg_1c = 0

zmm0_1 = data_1439d2848
zmm0_1[0].d = zmm0_1[0].d f* 0.00100000005f
zmm1.o = _mm_cvtps_pd(zmm0_1[0])
zmm1.q = zmm1.q f* zmm5_1
zmm1.q = zmm1.q f/ zmm9.q
int64_t rcx_6 = int.q(zmm1.q)
zmm0_1 = zmm1.o

if (rcx_6 != -0x8000000000000000)
    zmm2.q = float.d(rcx_6)
    
    if (not(zmm2.q f== zmm1.q))
        uint32_t temp0_10 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_6 - (zx.q(temp0_10) & 1))

zmm1.q = zmm1.q f- zmm0_1[0]
int32_t rdx_1 = int.d(zmm0_1[0])

if (not(zmm1.q f<= 0.0))
    zmm1.o = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0], zmm1.q)

zmm0_1 = _mm_cvtpd_ps(zmm1.o)
int32_t arg_24

if (zmm0_1[0].d f>= 0f)
    arg_24 = _mm_min_ss(zmm0_1[0].d, 0x3f7fffff)[0].d
else
    arg_24 = 0

int64_t rcx_8 = arg1[0x105]
int64_t r9_1 = r8_1.q
int32_t arg_18
arg_18.q = r9_1
zmm2.d = arg_1c.d f+ rcx_8:4.d
int32_t var_64_1 = 0
zmm1.o = zmm2
zmm1.d = zmm1.d f+ zmm2.d
int32_t r10_4 = (*(arg1 + 0x834) - arg1[0x8e].d)
    * (((zx.q(not.d(*(arg1 + 0x45c))) & 1) << 1) + -ffffffffffffffff).d * *(arg1 + 0x46c)
zmm1.d = zmm1.d f- 0.5f
int32_t r11_1 = int.d(zmm1.d)
zmm1.o = zmm2
int32_t r11_4 = (r11_1 s>> 1) + rcx_8.d + r8_1
int32_t rcx_9 = int.d(zmm1.d)

if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9))[0].d f== zmm1.d))
    zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm1.q)
    zmm1.o = zx.o(rcx_9 - (_mm_movemask_ps(zmm1.o) & 1))
    zmm1.o = _mm_cvtepi32_ps(zmm1.o)

zmm2.d = zmm2.d f- zmm1.d

if (zmm2.d f>= 0f)
    arg_1c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_1c = 0

arg_18.q = r11_4.q
zmm2.d = r10_4.q:4.d.d f+ arg_1c
zmm1.o = zmm2
zmm1.d = zmm1.d f+ zmm2.d
zmm1.d = zmm1.d f- 0.5f
int32_t rsi_1 = int.d(zmm1.d)
zmm1.o = zmm2
int32_t rsi_4 = (rsi_1 s>> 1) + r11_4 + r10_4
int32_t rcx_11 = int.d(zmm1.d)

if (rcx_11 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_11))[0].d f== zmm1.d))
    zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm1.q)
    zmm1.o = zx.o(rcx_11 - (_mm_movemask_ps(zmm1.o) & 1))
    zmm1.o = _mm_cvtepi32_ps(zmm1.o)

zmm2.d = zmm2.d f- zmm1.d

if (zmm2.d f>= 0f)
    arg_1c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_1c = 0

int64_t r11_5 = *(arg1 + 0x7d4)
arg_18.q = r11_5
zmm2.d = arg_1c.d f- rsi_4.q:4.d
zmm1.o = zmm2
zmm1.d = zmm1.d f+ zmm2.d
zmm1.d = zmm1.d f- 0.5f
int32_t r10_6 = int.d(zmm1.d) s>> 1
int32_t rcx_15 = r11_5.d - rsi_4 + r10_6
zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(r10_6))[0].d

if (zmm2.d f>= 0f)
    arg_1c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_1c = 0

int32_t var_68_1
var_68_1.q = 0
int64_t var_60_4 = 0
int64_t rax_22 = rcx_15.q
arg_18.q = rax_22

if (rcx_15 s<= 0 && (rcx_15 != 0 || not(arg_1c[0].d f>= 0f)))
    arg_18.q = rax_22
    zmm0_1 = arg_1c
    
    if (zmm0_1[0].d f!= 0f)
        int128_t zmm8
        zmm8.d = 1f f- zmm0_1[0].d
        arg_18 = not.d(rcx_15)
        
        if (zmm8.d f>= 0f)
            arg_1c = _mm_min_ss(zmm8.d, 0x3f7fffff).d
        else
            arg_1c = 0
    else
        arg_1c = 0
        arg_18 = neg.d(rcx_15)
    
    rax_22 = arg_18.q

arg_18.q = r9_1
int32_t arg_20
arg_20.q = rdx_1.q
zmm2.d = arg_1c.d f+ arg_24
zmm1.o = zmm2
zmm1.d = zmm1.d f+ zmm2.d
zmm1.d = zmm1.d f- 0.5f
int32_t r9_2 = int.d(zmm1.d)
zmm1.o = zmm2
int32_t r9_5 = (r9_2 s>> 1) + rdx_1 + r8_1
int32_t rdx_2 = int.d(zmm1.d)

if (rdx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_2))[0].d f== zmm1.d))
    zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm1.q)
    zmm1.o = zx.o(rdx_2 - (_mm_movemask_ps(zmm1.o) & 1))
    zmm1.o = _mm_cvtepi32_ps(zmm1.o)

zmm2.d = zmm2.d f- zmm1.d

if (zmm2.d f>= 0f)
    arg_1c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_1c = 0

arg_20.q = r9_5.q
arg_18.q = rax_22

if (rax_22.d s> r9_5)
label_141a5f4ea:
    arg_20.q = arg2
    arg_18.q = r11_5
    
    if (r11_5.d s< arg2.d)
    label_141a5f504:
        uint32_t rcx_22 = zx.d(arg1[0x8b].b)
        
        if (rcx_22 == 0)
            zmm1 = sub_141a58410(arg1, arg2)
        else if (rcx_22 == 1)
            zmm1 = sub_141a5b970(arg1, arg2)
        else if (rcx_22 == 3)
            zmm1 = sub_141a656e0(arg1, arg2)
    else if (r11_5.d == arg2.d && not(arg_1c[0].d f>= arg_24))
        goto label_141a5f504
else if (rax_22.d == r9_5 && not(arg_1c[0].d f<= arg_24))
    goto label_141a5f4ea

return sub_141a6a480(arg1, arg2, zmm1)
