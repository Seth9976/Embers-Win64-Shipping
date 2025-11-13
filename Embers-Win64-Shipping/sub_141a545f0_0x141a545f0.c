// 函数: sub_141a545f0
// 地址: 0x141a545f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6

if (arg1[0x8c] != 0)
    sub_141a6a480(arg1, *(arg1 + 0x7d4), arg4)

arg1[0x8c] = arg2
uint64_t r14
r14.b = 0
zmm6 = zx.o(0)
int32_t arg_c = 0
*(arg1 + 0x488) = *arg3
arg1[0x93].d = arg3[1].d
int32_t arg_8 = arg1[0x8d].d
void* rax_3 = (*(*arg2 + 0x280))(arg2)
uint128_t var_68
uint128_t var_58
int64_t rbx_2

if (rax_3 == 0)
    rbx_2 = arg_8.q
else
    int64_t rdi_1 = *(rax_3 + 0x108)
    int64_t rsi_1 = *(rax_3 + 0x110)
    sub_141a69410(&arg1[0xf8], rsi_1, rdi_1, *(rax_3 + 0x118))
    arg_c = 0
    int64_t rax_4 = 0
    var_68 = *(rax_3 + 0xf8)
    int64_t rcx_2 = 0
    
    if (var_68:8.b == 1)
        rax_4 = 4
    
    int32_t r14_1 = *(rax_4 + &data_14302eb90)
    int64_t rax_5 = var_68.q
    
    if (rax_5.b == 0)
        rcx_2 = 4
    
    arg_8 = (rax_5 u>> 0x20).d + *(rcx_2 + &data_14302eb88)
    int32_t rbx_1 = *sub_1408ec700(&arg_8, arg_8.q, rdi_1, rsi_1)
    arg_8 = var_68:0xc.d + r14_1
    arg_c = 0
    sub_141a68720(arg1, rbx_1, *sub_1408ec700(&arg_8, arg_8.q, rdi_1, rsi_1) - rbx_1)
    uint128_t zmm2_1
    zmm2_1.q = _mm_cvtps_pd((*(arg1 + 0x494)).q).q f* _mm_cvtepi32_pd(zx.q(rsi_1.d)).q
    zmm2_1.q = zmm2_1.q f/ _mm_cvtepi32_pd(zx.q((rsi_1 u>> 0x20).d)).q
    int64_t rcx_8 = int.q(zmm2_1.q)
    double zmm1[0x2] = zmm2_1
    uint128_t zmm0_2
    
    if (rcx_8 != -0x8000000000000000)
        zmm0_2.q = float.d(rcx_8)
        
        if (not(zmm0_2.q f== zmm2_1.q))
            uint32_t temp0_5 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1[0]))
            zmm1 = zx.o(0)
            zmm1[0] = float.d(rcx_8 - (zx.q(temp0_5) & 1))
    
    int32_t zmm3_1 = 0x3f7fffff
    zmm2_1.q = zmm2_1.q f- zmm1[0]
    int32_t rcx_10 = int.d(zmm1[0])
    
    if (not(zmm2_1.q f<= 0.0))
        zmm2_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2_1.q)
    
    zmm0_2 = _mm_cvtpd_ps(zmm2_1)
    arg_8 = rcx_10
    
    if (zmm0_2.d f>= zmm6.d)
        arg_c = _mm_min_ss(zmm0_2.d, 0x3f7fffff).d
    else
        arg_c = 0
    
    int64_t rax_14
    
    if ((arg1[0x93].b & 1) == 0)
        rax_14 = 0
        int64_t rdx_7 = arg_8.q
        int32_t r8_6 = *(arg1 + 0x46c) - 1
        int64_t arg_10 = 0
        int32_t arg_1c = 0
        arg_8.q = rdx_7
        
        if (rcx_10 s>= 0 && (rcx_10 != 0 || not(arg_c.d f< 0:4.d)))
            rax_14 = r8_6.q
            arg_8.q = rdx_7
            
            if (rcx_10 s< r8_6 || (rcx_10 == r8_6 && arg_c.d f< rax_14:4.d))
                rcx_10.b = 1
            else
                rcx_10.b = 0
            
            if (rcx_10.b != 0)
                rax_14 = rdx_7
    else
        zmm3_1 = 0x3f7fffff
        arg_c = 0
        arg_8 = mods.dp.d(sx.q(rand()), *(arg1 + 0x46c))
        rax_14 = arg_8.q
    
    int32_t rdx_8 = arg1[0x8d].d
    arg_8 = rdx_8
    arg_8.q = arg_8.q
    zmm2_1.d = rax_14:4.d.d f+ 0
    zmm1 = zmm2_1
    zmm1[0].d = zmm1[0].d f+ zmm2_1.d
    zmm1[0].d = zmm1[0].d f- 0.5f
    int32_t rcx_12 = int.d(zmm1[0].d)
    zmm1 = zmm2_1
    arg_8 = (rcx_12 s>> 1) + rdx_8 + rax_14.d
    int32_t rcx_16 = int.d(zmm1[0].d)
    
    if (rcx_16 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_16)).d f== zmm1[0].d))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_16 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
    
    zmm2_1.d = zmm2_1.d f- zmm1[0].d
    
    if (zmm2_1.d f>= zmm6.d)
        arg_c = _mm_min_ss(zmm2_1.d, zmm3_1).d
    else
        arg_c = 0
    
    r14 = zx.q(*(rax_3 + 0x119))
    rbx_2 = arg_8.q
    
    if (r14.b == 5)
        arg_8.q = (*(arg1[5] + 0x78))(&arg1[5])
        void*** rax_19 = sub_141a2d080(rax_3 + 0x120, &arg_8)
        var_68:8.q = rax_19
        var_68.q = &rax_19[2]
        uint128_t zmm0_3 = var_68
        var_58 = zmm0_3
        void* rax_20 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (rax_20 != 0)
            *(rax_20 + 8) += 1
            int64_t* rdi_2 = var_68:8.q
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp26_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t* rdi_3 = var_58:8.q
        
        if (&arg1[0x109] == &var_58)
        label_141a549de:
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp27_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp27_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        else
            arg1[0x109] = var_58.q
            int64_t* rsi_3 = arg1[0x10a]
            
            if (rdi_3 == rsi_3)
                goto label_141a549de
            
            arg1[0x10a] = rdi_3
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp29_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)

if (arg1[0x109] == 0)
    uint32_t rcx_27 = zx.d(r14.b)
    void*** rax_32
    int64_t* rsi_4
    int64_t* r12_1
    int64_t* r14_2
    
    if (rcx_27 != 1)
        void*** rax_28
        
        if (rcx_27 == 2)
            rax_28 = sub_141a2d010()
        else if (rcx_27 == 3)
            rax_28 = sub_141a2d1c0()
        else
            if (rcx_27 == 4)
                rax_32 = j_sub_140a82f30(0x30)
                
                if (rax_32 == 0)
                    rax_32 = nullptr
                else
                    rax_32[1].d = 1
                    *rax_32 = &data_14302f488
                    *(rax_32 + 0xc) = 1
                    __builtin_memset(&rax_32[3], 0, 0x11)
                    rax_32[5] = 0
                    rax_32[2] = &data_14302d9d8
                
                goto label_141a54b73
            
            rax_28 = j_sub_140a82f30(0x38)
            
            if (rax_28 == 0)
                rax_28 = nullptr
            else
                rax_28[1].d = 1
                *(rax_28 + 0xc) = 1
                *rax_28 = &data_14302f498
                rax_28[5].b = 0
                rax_28[2] = &data_14302da00
                rax_28[6] = 0
        
        var_68:8.q = rax_28
        var_68.q = &rax_28[2]
        rsi_4 = var_68:8.q
        r14_2 = rsi_4
        
        if (rsi_4 != 0)
            rsi_4[1].d += 1
            rsi_4 = var_68:8.q
        
        if (&arg1[0x109] == &var_58)
            goto label_141a54bb7
        
        arg1[0x109] = var_68.q
        r12_1 = arg1[0x10a]
        
        if (r14_2 == r12_1)
            goto label_141a54bb7
        
        goto label_141a54ad3
    
    rax_32 = sub_141a2d150()
label_141a54b73:
    var_68:8.q = rax_32
    var_68.q = &rax_32[2]
    rsi_4 = var_68:8.q
    r14_2 = rsi_4
    
    if (rsi_4 != 0)
        rsi_4[1].d += 1
        rsi_4 = var_68:8.q
    
    if (&arg1[0x109] == &var_58)
    label_141a54bb7:
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d != 1)
                rsi_4 = var_68:8.q
            else
                (**r14_2)(r14_2)
                int32_t temp14_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (temp14_1 != 1)
                    rsi_4 = var_68:8.q
                else
                    (*(*r14_2 + 8))(r14_2, 1)
                    rsi_4 = var_68:8.q
    else
        arg1[0x109] = var_68.q
        r12_1 = arg1[0x10a]
        
        if (r14_2 == r12_1)
            goto label_141a54bb7
        
    label_141a54ad3:
        arg1[0x10a] = r14_2
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d != 1)
                rsi_4 = var_68:8.q
            else
                (**r12_1)(r12_1)
                int32_t temp17_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp17_1 != 1)
                    rsi_4 = var_68:8.q
                else
                    (*(*r12_1 + 8))(r12_1, 1)
                    rsi_4 = var_68:8.q
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t temp16_1 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)
    
    if (arg1[0x109] == 0)
        void*** rax_37 = j_sub_140a82f30(0x38)
        
        if (rax_37 != 0)
            rax_37[1].d = 1
            *(rax_37 + 0xc) = 1
            *rax_37 = &data_14302f498
            rax_37[5].b = 0
            rax_37[2] = &data_14302da00
            rax_37[6] = 0
        
        var_68:8.q = rax_37
        var_68.q = &rax_37[2]
        int64_t* rsi_5 = var_68:8.q
        int64_t* r14_3 = rsi_5
        
        if (rsi_5 != 0)
            rsi_5[1].d += 1
            rsi_5 = var_68:8.q
        
        if (&arg1[0x109] == &var_58)
        label_141a54cbb:
            
            if (r14_3 != 0)
                r14_3[1].d -= 1
                
                if (r14_3[1].d != 1)
                    rsi_5 = var_68:8.q
                else
                    (**r14_3)(r14_3)
                    int32_t temp20_1 = *(r14_3 + 0xc)
                    *(r14_3 + 0xc) -= 1
                    
                    if (temp20_1 != 1)
                        rsi_5 = var_68:8.q
                    else
                        (*(*r14_3 + 8))(r14_3, 1)
                        rsi_5 = var_68:8.q
        else
            arg1[0x109] = var_68.q
            int64_t* r12_2 = arg1[0x10a]
            
            if (r14_3 == r12_2)
                goto label_141a54cbb
            
            arg1[0x10a] = r14_3
            
            if (r12_2 != 0)
                r12_2[1].d -= 1
                
                if (r12_2[1].d != 1)
                    rsi_5 = var_68:8.q
                else
                    (**r12_2)(r12_2)
                    int32_t temp24_1 = *(r12_2 + 0xc)
                    *(r12_2 + 0xc) -= 1
                    
                    if (temp24_1 != 1)
                        rsi_5 = var_68:8.q
                    else
                        (*(*r12_2 + 8))(r12_2, 1)
                        rsi_5 = var_68:8.q
        
        if (rsi_5 != 0)
            rsi_5[1].d -= 1
            
            if (rsi_5[1].d == 1)
                (**rsi_5)(rsi_5)
                int32_t temp23_1 = *(rsi_5 + 0xc)
                *(rsi_5 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*rsi_5 + 8))(rsi_5, 1)

sub_141a54260(&arg1[0x94], arg1[0x8c], &arg1[5])
*(arg1 + 0x7d4) = rbx_2

if (*(arg1 + 0x7e4) != 0)
    *(arg1 + 0x7e4) = 0

if (arg1[0x102].b != 0)
    arg1[0x102].b = 0

int64_t result = arg1[0xf8]
var_68.q = rbx_2
int64_t* rbx_3 = arg1[0x109]
var_68:8.q = result

if (rbx_3[3].b == 0)
    return result

(*(*rbx_3 + 0x18))(rbx_3, &var_68)
char rcx_43 = rbx_3[3].b

if (rcx_43 != 0)
    rbx_3[3].b = 0
    rcx_43 = 0

if (&var_68 != &rbx_3[1])
    if (rcx_43 != 0)
        rbx_3[3].b = 0
    
    *(rbx_3 + 8) = var_68
    rbx_3[3].b = 1

return (*(*rbx_3 + 0x10))(rbx_3, &var_68)
