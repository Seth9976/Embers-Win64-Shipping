// 函数: sub_1412e5c40
// 地址: 0x1412e5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c88
int64_t rax_1 = __security_cookie ^ &var_c88
void* r15 = arg3
int64_t var_ba8
sub_14141f090(&var_ba8, arg3 + 0x10)
float zmm11[0x4] = 0x3c23d70a
uint128_t zmm9 = 0x3e800000
uint128_t zmm12 = 0x3f800000
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x29c))).d f* 0.00999999978f

if (zmm2.d f>= 0.25f)
    zmm2 = _mm_min_ss(zmm2.d, 0x3f800000)
else
    zmm2 = 0x3e800000

int32_t rbx = var_ba8.d
uint128_t zmm15 = 0xbf000000
int32_t rdi = var_ba8:4.d
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rbx)).d f* zmm2.d
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rdi))
zmm1.d = zmm1.d f+ zmm1.d
uint128_t zmm0
zmm0.d = -0.5f f- zmm1.d
int32_t rax_4 = neg.d(int.d(zmm0.d) s>> 1)
int32_t var_c28

if (rax_4 s>= 1)
    if (rax_4 s< rbx)
        rbx = rax_4
    
    var_c28 = rbx
else
    var_c28 = 1
    rbx = 1

zmm3.d = zmm3.d f* zmm2.d
zmm3.d = zmm3.d f+ zmm3.d
zmm0.d = -0.5f f- zmm3.d
int32_t rax_7 = neg.d(int.d(zmm0.d) s>> 1)

if (rax_7 s>= 1)
    if (rax_7 s< rdi)
        rdi = rax_7
    
    int32_t var_c24_1 = rdi
else
    int32_t var_c24 = 1
    rdi = 1

void* rax_8 = *(arg2 + 0x2d8)
int32_t rsi = 0

if (rax_8 == 0)
label_1412e5e9e:
    int64_t* rax_18 = j_sub_140a82f30(0x60)
    int64_t* rbx_3 = rax_18
    
    if (rax_18 == 0)
        rbx_3 = nullptr
    else
        rax_18[1].d = 0xffffffff
        *(rax_18 + 0xc) = 4
        __builtin_memset(&rax_18[2], 0, 0x18)
        rbx_3[5] = -0x3810000020000000
        __builtin_memset(&rbx_3[6], 0, 0x17)
        rbx_3[0xa] = 0
        *rbx_3 = &data_142f52b70
        rbx_3[9] = &data_142f52bc8
        rbx_3[0xb] = var_c28.q
    
    void* rdi_2 = *(arg2 + 0x2d0)
    void* var_bb0_1 = rdi_2
    *(arg2 + 0x2d8) = rbx_3
    
    if (sub_140a80f40() != 0)
        (*(*rbx_3 + 0x28))(rbx_3)
        *(rdi_2 + 0x158) = 0
    else if (data_143f138f4 != 0)
    label_1412e5f74:
        void var_690
        void** rax_23 = sub_141266be0(&var_690, nullptr, 0xff)
        *(*rax_23 + 0x10) = rbx_3.o
        void* rcx_11 = *rax_23
        int32_t r8_1 = rax_23[2].d
        int64_t* rdx_3 = rax_23[1]
        int64_t* rbx_4 = *(rcx_11 + 0x28)
        int64_t* var_b98_1 = rbx_4
        void* rdi_3 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rdi_3 += 1
            rbx_4 = var_b98_1
        
        sub_1405e48c0(rcx_11, rdx_3, r8_1, 1)
        
        if (rbx_4 != 0)
            int32_t rax_24 = *rdi_3
            *rdi_3 -= 1
            
            if (rax_24 == 1)
                sub_140a2f6e0(var_b98_1)
    else if (data_143de5480 == 0)
        (*(*rbx_3 + 0x28))(rbx_3)
        *(rdi_2 + 0x158) = 0
    else
        uint32_t rax_21
        rax_21.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_21.b == 0)
            goto label_1412e5f74
        
        (*(*rbx_3 + 0x28))(rbx_3)
        *(rdi_2 + 0x158) = 0
else
    void var_a08
    int32_t* rax_10 = (*(*(rax_8 + 0x48) + 0x18))(rax_8 + 0x48, &var_a08)
    int64_t rax_11
    
    if (*rax_10 != rbx || rax_10[1] != rdi)
        int64_t* rbx_1 = *(arg2 + 0x2d8)
        
        if (sub_140a80f40() != 0)
            (*(*rbx_1 + 0x30))(rbx_1)
            (**rbx_1)(rbx_1, 1)
        else if (data_143f138f4 != 0)
        label_1412e5e35:
            void var_6a8
            void** rax_16 = sub_141266e80(&var_6a8, nullptr, 0xff)
            *(*rax_16 + 0x10) = rbx_1
            void* rcx_6 = *rax_16
            int32_t r8 = rax_16[2].d
            int64_t* rdx_2 = rax_16[1]
            int64_t* rbx_2 = *(rcx_6 + 0x20)
            int64_t* var_ba0_1 = rbx_2
            void* rdi_1 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_1 += 1
                rbx_2 = var_ba0_1
            
            sub_1405a5630(rcx_6, rdx_2, r8, 1)
            
            if (rbx_2 != 0)
                int32_t rax_17 = *rdi_1
                *rdi_1 -= 1
                
                if (rax_17 == 1)
                    sub_140a2f6e0(var_ba0_1)
        else if (data_143de5480 == 0)
            (*(*rbx_1 + 0x30))(rbx_1)
            (**rbx_1)(rbx_1, 1)
        else
            uint32_t rax_15
            rax_15.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_15.b == 0)
                goto label_1412e5e35
            
            (*(*rbx_1 + 0x30))(rbx_1)
            (**rbx_1)(rbx_1, 1)
        
        *(arg2 + 0x2d8) = 0
        rax_11 = 0
    else
        rax_11 = *(arg2 + 0x2d8)
    
    if (rax_11 == 0)
        goto label_1412e5e9e
    
    void* rbx_5 = *(arg2 + 0x2d0)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_26
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_26.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_26.b == 0))
            void var_678
            void** rax_27 = sub_141266d30(&var_678, nullptr, 0xff)
            *(*rax_27 + 0x10) = rbx_5
            void* rcx_15 = *rax_27
            int32_t r8_2 = rax_27[2].d
            int64_t* rdx_4 = rax_27[1]
            int64_t* rbx_6 = *(rcx_15 + 0x20)
            int64_t* var_b90_1 = rbx_6
            void* rdi_4 = &rbx_6[9]
            
            if (rbx_6 != 0)
                *rdi_4 += 1
                rbx_6 = var_b90_1
            
            sub_1405a5630(rcx_15, rdx_4, r8_2, 1)
            
            if (rbx_6 != 0)
                int32_t rax_28 = *rdi_4
                *rdi_4 -= 1
                
                if (rax_28 == 1)
                    sub_140a2f6e0(var_b90_1)
        else
            *(rbx_5 + 0x158) = 0
    else
        *(rbx_5 + 0x158) = 0

zmm3 = *(arg2 + 0x1c0)
int32_t var_b5c = 0x3f800000
zmm1 = _mm_add_ps(zmm3, zmm3)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 4), _mm_shuffle_ps(zmm1, zmm1, 0x29))
uint128_t zmm4 = _mm_mul_ps(zmm1, zmm3)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm1)
zmm1 = *(arg2 + 0x1e0)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
uint128_t zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 1)
uint128_t zmm8 = _mm_add_ps(zmm3, zmm2)
zmm2 = _mm_sub_ps(zmm2, zmm3)
zmm3 = data_143e8ec40
zmm0 = _mm_add_ps(zmm0, zmm4)
zmm4 = *(arg2 + 0x1d0)
zmm8 = _mm_mul_ps(zmm8, zmm1)
zmm5 = _mm_mul_ps(zmm5, zmm2)
zmm2 = _mm_sub_ps(zmm3, zmm0)
zmm3.q = zmm4 u>> 0x40
zmm4 = _mm_shuffle_ps(zmm4, zmm3, 0xc4)
uint128_t var_748 = zmm4
zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(zmm2, zmm1), data_143e8ec50)
zmm0 = _mm_shuffle_ps(zmm5, zmm2, 0x32)
uint128_t zmm7 = _mm_shuffle_ps(zmm8, zmm2, 0)
uint128_t zmm6 = _mm_shuffle_ps(zmm5, zmm2, 0x10)
zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x82)
zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm8, zmm2, 0x31), 0x88)
zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm5, 0x12), zmm2, 0xe8)
zmm2 = data_142d4cc30
uint128_t var_788 = zmm2
uint128_t zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
zmm0 = _mm_mul_ps(zmm0, zmm8)
zmm10 = _mm_mul_ps(zmm10, zmm4)
zmm1 = _mm_mul_ps(zmm1, zmm6)
uint128_t var_778 = zmm7
zmm10 = _mm_add_ps(zmm10, zmm0)
uint128_t var_768 = zmm6
zmm0 = data_143dbb1f8
zmm1 = _mm_add_ps(zmm1, zmm2)
uint128_t var_758 = zmm8
zmm2.d = zmm0.d
zmm0 = data_143dbb1fc
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm2.d = zmm0.d
zmm0 = data_143dbb200
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm10 = _mm_add_ps(zmm10, zmm1)
zmm2.d = zmm0.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
uint128_t var_b68_1 = zmm2
uint128_t var_a88 = zmm10
zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm6)
zmm0 = _mm_mul_ps(zmm0, zmm8)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
zmm3 = _mm_mul_ps(zmm3, zmm4)
zmm7 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
zmm1 = _mm_add_ps(zmm1, zmm2)
zmm8 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
zmm2.d = zmm7.d f* zmm7.d
zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), zmm1)
zmm1.d = zmm8.d f* zmm8.d
uint128_t var_a98 = zmm3
zmm0.d = zmm3.d f* zmm10.d
zmm6.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* zmm7.d
zmm3.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* zmm8.d
zmm6.d = zmm6.d f+ zmm0.d
zmm0.d = zmm10.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm0.d
zmm6.d = zmm6.d f+ zmm3.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t var_c20
int96_t var_be8
int64_t* var_bb8
uint128_t zmm13
uint128_t zmm14

if (zmm2.d f<= 9.99999994e-09f)
    zmm1 = data_142d4cc30
    var_be8 = zmm1.12
    zmm6 = var_be8:8.d
    zmm14 = var_be8:4.d
    zmm13 = var_be8.d
    zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    var_c20 = zmm6.d
    var_bb8.o = zmm1
else
    zmm3.d = zmm2.d
    zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = 0.5f f- zmm3.d
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f+ zmm0.d
    int32_t var_bd0_1 = zmm5.d
    zmm2.d = zmm5.d f* zmm8.d
    zmm14 = zmm5
    zmm13.d = zmm5.d f* zmm10.d
    zmm5.d = zmm5.d f* zmm6.d
    zmm14.d = zmm14.d f* zmm7.d
    zmm6 = zmm2
    var_c20 = zmm2.d
    _mm_shuffle_ps(zmm13, zmm13, 0xe1)
    zmm3.d = zmm14.d
    _mm_shuffle_ps(zmm3, zmm3, 0xc6)
    zmm3.d = zmm2.d
    _mm_shuffle_ps(zmm3, zmm3, 0x27)
    zmm3.d = zmm5.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
    var_bb8.o = zmm3
    var_be8 = zmm3.12

uint64_t i = 0
int32_t var_bf8 = zmm13.d
void* r13 = nullptr
int32_t var_c34 = zmm14.d
int64_t rdi_5 = 0x80
uint128_t var_a38 = zmm5
void* var_c18
__builtin_memset(&var_c18, 0, 0x14)
int64_t var_c10_1
uint128_t var_ac8

if (*(r15 + 0xa8) s> 0)
    while (i s< 0xa480)
        int64_t r12_1 = *(r15 + 0xa0)
        zmm3 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x29c)))
        int32_t rax_29 = *(i + r12_1 + 0x260)
        zmm4 = zx.o(*(i + r12_1 + 0x25c))
        int32_t rax_30 = *(i + r12_1 + 0x264)
        zmm3.d = zmm3.d f* zmm11[0]
        zmm1 = _mm_cvtepi32_ps(zx.o(*(i + r12_1 + 0x258)))
        zmm3.d f- zmm9.d
        zmm8 = _mm_cvtepi32_ps(zx.o(rax_30))
        zmm4 = _mm_cvtepi32_ps(zmm4)
        zmm7 = _mm_cvtepi32_ps(zx.o(rax_29))
        
        if (zmm3.d f>= zmm9.d)
            zmm0 = _mm_min_ss(zmm3.d, zmm12.d)
        else
            zmm0 = zmm9
        
        zmm1.d = zmm1.d f* zmm0.d
        zmm4.d = zmm4.d f* zmm0.d
        
        if (zmm3.d f>= zmm9.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm12.d)
        else
            zmm3 = zmm9
        
        zmm11 = *(i + r12_1 + 0x340)
        zmm2 = zmm3
        zmm3.d = zmm3.d f* zmm8.d
        int32_t var_b3c_1 = 0
        int32_t rax_31 = int.d(zmm1.d)
        int32_t var_b2c_1 = 0
        int32_t var_b1c_1 = 0
        int32_t var_b0c_1 = 0x3f800000
        zmm3.d = zmm3.d f+ zmm3.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm2.d
        zmm1.d = zmm14.d f* 2f
        int32_t var_8d4_1 = int.d(zmm4.d)
        zmm0.d = zmm15.d f- zmm2.d
        int32_t rax_33 = int.d(zmm0.d)
        zmm0.d = zmm15.d f- zmm3.d
        zmm3.d = zmm13.d f* 2f
        int32_t var_8d0_1 = neg.d(rax_33 s>> 1)
        int32_t rax_36 = int.d(zmm0.d)
        zmm0 = zmm3
        zmm3.d = zmm3.d f* zmm13.d
        zmm0.d = zmm0.d f* zmm5.d
        int32_t var_8cc_1 = neg.d(rax_36 s>> 1)
        int32_t var_bd8_1 = zmm0.d
        zmm0.d = zmm1.d f* zmm5.d
        zmm1.d = zmm1.d f* zmm14.d
        int32_t var_bd4_1 = zmm0.d
        zmm0.d = zmm6.d f* 2f
        zmm15 = zmm0
        zmm0.d = zmm0.d f* zmm6.d
        zmm15.d = zmm15.d f* zmm5.d
        zmm9.d = zmm12.d f- zmm0.d
        zmm2.d = var_c20.d f* -2f
        zmm0.d = zmm12.d f- zmm3.d
        zmm4.d = zmm14.d f* -2f
        zmm7.d = zmm13.d f* -2f
        zmm5 = zmm2
        zmm2.d = zmm2.d f* zmm13.d
        zmm8 = zmm4
        zmm3.d = zmm0.d
        zmm4.d = zmm4.d f* zmm13.d
        zmm13 = *(i + r12_1 + 0x360)
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = zmm4.d
        zmm10.d = zmm7.d f* zmm6.d
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm2.d
        zmm8.d = zmm8.d f* zmm6.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm6 = zmm12
        zmm12 = *(i + r12_1 + 0x350)
        zmm6.d = zmm6.d f- zmm1.d
        zmm7.d = zmm7.d f* zmm14.d
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm5.d = zmm5.d f* zmm14.d
        zmm14 = *(i + r12_1 + 0x370)
        zmm2 = _mm_mul_ps(zmm2, zmm11)
        uint128_t var_b48 = zmm3
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        zmm0 = _mm_mul_ps(zmm0, zmm12)
        zmm1 = _mm_mul_ps(zmm1, zmm13)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm2 = _mm_add_ps(zmm2, zmm0)
        zmm3 = _mm_mul_ps(zmm3, zmm14)
        zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm1), zmm3)
        uint128_t var_a18_1 = zmm2
        uint128_t var_888 = zmm2
        zmm2.d = zmm7.d
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm6.d
        _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2.d = zmm5.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        uint128_t var_b38 = zmm2
        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm14)
        zmm0 = _mm_mul_ps(zmm0, zmm12)
        zmm1 = _mm_mul_ps(zmm1, zmm13)
        zmm3 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm3, zmm11), zmm0), zmm1), zmm2)
        zmm2.d = zmm10.d
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm8.d
        _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2.d = zmm9.d
        var_ac8 = zmm3
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        uint128_t var_b28 = zmm2
        zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm14)
        zmm0 = _mm_mul_ps(zmm0, zmm12)
        zmm1 = _mm_mul_ps(zmm1, zmm13)
        uint128_t var_878_1 = zmm3
        zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm11), zmm0), zmm1), zmm2)
        zmm2.d = var_bd8_1.d
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = var_bd4_1.d
        _mm_shuffle_ps(zmm2, zmm2, 0xc6)
        zmm2.d = zmm15.d
        uint128_t var_868_1 = zmm9
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        uint128_t var_b18 = zmm2
        zmm8 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm11)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm12)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm13)
        uint128_t var_858_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm8, zmm0), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm14))
        float var_848[0x4]
        zmm8, zmm9 = sub_1408041d0(&var_888, &var_848)
        int32_t rax_40 = rax_29 - *(i + r12_1 + 0x258)
        zmm12 = 0x3f800000
        zmm11 = var_a18_1
        zmm10 = var_ac8
        int32_t var_b4c_1 = 0x3f800000
        uint128_t zmm2_1
        zmm2_1.d = data_143dbb1f8.d
        uint128_t zmm0_2 = data_143dbb1fc
        int32_t rax_42 = rax_30 - *(i + r12_1 + 0x25c)
        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
        zmm2_1.d = zmm0_2.d
        uint128_t var_9c8_1 = zmm8
        zmm0_2 = data_143dbb200
        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
        zmm2_1.d = zmm0_2.d
        int64_t var_ab8_1 = 0
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        uint128_t var_b58 = zmm2_1
        float var_818[0x4]
        zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_818)
        int32_t var_ab0_1 = 0
        float var_828[0x4]
        zmm0_2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), var_828)
        var_9c8_1.q = 0
        float var_838[0x4]
        float temp0_141[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), var_838)
        var_9c8_1:8.d = 0
        int32_t var_b84_1 = rax_42
        float var_9f8_1[0x4] = zmm11
        uint128_t var_9e8_1 = zmm10
        uint128_t var_9d8_1 = zmm9
        zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm0_2), 
            _mm_add_ps(temp0_141, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), var_848)))
        var_ab8_1.o = zmm7
        var_be8:8.d = _mm_shuffle_ps(zmm7, zmm7, 0xaa).d
        zmm0_2.d = 1f f/ *(i + r12_1 + 0x280)
        _mm_shuffle_ps(zmm7, zmm7, 0x55)
        uint128_t zmm0_3 = atanf(zmm0_2.d)
        float zmm1_1[0x4] = *(arg2 + 0x2a0)
        zmm1_1[0] = zmm1_1[0] * 0.0174532924f
        char var_c60
        uint128_t var_808
        var_c60.q = &var_808
        zmm0_3.d = zmm0_3.d f+ zmm1_1[0]
        char var_c68
        var_c68.d = data_14399fa0c[0]
        uint64_t var_968_1 = (_mm_unpacklo_ps(zmm7, 
            sub_141418f50(rax_40.q, 0, zmm0_3, 0x3f800000, var_c68, var_c60).q)).q
        int32_t var_960_1 = var_be8:8.d
        int32_t rax_44 = *(i + r12_1 + 0xad0)
        int64_t r12_2 = sx.q(rsi)
        rsi += 1
        uint128_t var_918_1 = var_808
        var_c10_1.d = rsi
        
        if (rsi s> var_c10_1:4.d)
            sub_140a05e50(&var_c18)
            r13 = var_c18
            rsi = var_c10_1.d
        
        i += 0x5240
        void* rdx_8 = r12_2 * 0xb0 + r13
        *rdx_8 = var_968_1.o
        *(rdx_8 + 0x10) = zmm11
        *(rdx_8 + 0x20) = zmm10
        *(rdx_8 + 0x30) = zmm9
        *(rdx_8 + 0x40) = var_9c8_1
        *(rdx_8 + 0x50) = var_918_1
        uint128_t var_7f8
        *(rdx_8 + 0x60) = var_7f8
        uint128_t var_7e8
        *(rdx_8 + 0x70) = var_7e8
        uint128_t var_7d8
        *(rdx_8 + 0x80) = var_7d8
        *(rdx_8 + 0x90) = rax_31.o
        int32_t var_c08_1
        int32_t rax_46 = var_c08_1 + 1
        *(rdx_8 + 0xa0) = rax_44.o
        var_c08_1 = rax_46
        
        if (rax_46 s>= *(r15 + 0xa8))
            break
        
        zmm5 = var_a38
        zmm9 = 0x3e800000
        zmm11 = 0x3c23d70a
        zmm13 = var_bf8
        zmm14 = var_c34
        zmm6 = var_c20
        zmm15 = 0xbf000000
    
    i = 0

void var_628
sub_1422d7fd0(&var_628)
int64_t rax_47 = *(arg2 + 0x2d8)
int128_t zmm0_4 = data_142d3f660
int64_t rcx_20 = rax_47 + 0x48

if (rax_47 == 0)
    rcx_20 = 0

int64_t var_af8 = *(arg2 + 0x258)
int64_t var_b08 = rcx_20
int32_t var_ad4
int32_t rax_51 = (var_ad4 & 0xffffffe8) | 8
int64_t* var_b00 = arg1
int32_t var_af0 = 0xffffffff
int64_t var_aec = 0
int128_t var_ae4 = zmm0_4

if (arg1 != 0)
    void* rax_53 = (*(*arg1 + 0x240))(arg1, zmm0_4)
    
    if (rax_53 != 0)
        bool rcx_22
        
        if (data_143de5480 != 0)
            rcx_22 = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rcx_22 != 0)
            var_ae4.d = (*(rax_53 + 0x520)).d
            rax_51 |= 0x10
            var_ae4:4.d = *(rax_53 + 0x530)
            var_ae4:8.d = (*(rax_53 + 0x528)).d
    
    i = 0

int32_t var_ad4_2 = (rax_51 & 0xfffffff7) | 2
void var_738
sub_1422d9ba0(&var_738, &var_b08)
int128_t zmm3_2 = *(arg2 + 0x23c)
int64_t var_c48 = 0
int32_t var_c50 = zmm12.d
char* var_c58 = &var_628
int32_t var_6bc = (*(r15 + 0x8c)).d
int32_t var_a20 = rsi
char var_c60_1 = 1
var_ac8 = r13.o
sub_14142c080(&var_738, arg2, &var_ac8, zmm3_2, 1, var_c60_1, var_c58, var_c50, var_c48)
int32_t var_710
int32_t var_710_1 = var_710 ^ ((var_710 ^ *(r15 + 0x38)) & 0x40000)
int64_t* rcx_27 = *(r15 + 0x98)
int64_t var_6b0 = (*(*rcx_27 + 0x10))(rcx_27, &var_738)
void* rax_63
int128_t zmm3_3
rax_63, zmm3_3 = sub_14141b270(&var_738)
void* rdx_14 = rax_63
int128_t zmm6_2 = var_bb8.o
var_c28.q = rax_63
*(rax_63 + 0x38) ^= (*(r15 + 0x38) ^ *(rax_63 + 0x38)) & 0x40000
int32_t var_c34_1 = 0

if (rsi s> 0)
    int128_t* rsi_1 = r13 + 0x50
    int64_t r12_3 = 0
    void* r13_1 = arg2 + 0x2e0
    
    do
        *(*(rdx_14 + 0xa0) + r12_3 + 0xd90) = zmm6_2
        *(*(rdx_14 + 0xa0) + r12_3 + 0xbe8) = 0
        *(*(rdx_14 + 0xa0) + r12_3 + 0xd77) = *(arg2 + 0x2bd)
        *r13_1 = *rsi_1
        *(r13_1 + 0x10) = rsi_1[1]
        *(r13_1 + 0x20) = rsi_1[2]
        *(r13_1 + 0x30) = rsi_1[3]
        *(*(rdx_14 + 0xa0) + r12_3 + 0x1308) = *(*(r15 + 0xa0) + r12_3 + 0x1308)
        char rax_69 = sub_142391f10(*(r15 + 0xa0))
        int128_t zmm7_1 = *rsi_1
        int32_t var_978_1 = i.d
        int128_t zmm8_1 = rsi_1[1]
        int128_t* rbx_8 = *(arg2 + 0x2d0)
        int128_t zmm9_1 = rsi_1[2]
        int128_t zmm10_1 = rsi_1[3]
        char var_974_1 = rax_69
        int128_t var_9b8_1 = zmm7_1
        int128_t var_9a8_1 = zmm8_1
        int128_t var_998_1 = zmm9_1
        int128_t var_988_1 = zmm10_1
        int128_t* var_970_1 = rbx_8
        char rax_70 = sub_140a80f40()
        
        if (rax_70 != 0)
        label_1412e6d29:
            *(rbx_8 + rdi_5) = zmm7_1
            *(rbx_8 + rdi_5 + 0x10) = zmm8_1
            *(rbx_8 + rdi_5 + 0x20) = zmm9_1
            *(rbx_8 + rdi_5 + 0x30) = zmm10_1
            *(rbx_8 + 0x1c) = rax_69
        else
            if (data_143f138f4 == rax_70)
                if (data_143de5480 == rax_70)
                    goto label_1412e6d29
                
                uint32_t rax_71
                rax_71.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_71.b != 0)
                    goto label_1412e6d29
            
            void var_660
            int64_t* rax_73 = sub_141266fd0(&var_660, nullptr, 0xff)
            void* rcx_36 = *rax_73
            *(rcx_36 + 0x10) = zmm7_1
            *(rcx_36 + 0x20) = zmm8_1
            *(rcx_36 + 0x30) = zmm9_1
            *(rcx_36 + 0x40) = zmm10_1
            *(rcx_36 + 0x50) = var_978_1.o
            void* rcx_37 = *rax_73
            int32_t r8_4 = rax_73[2].d
            int64_t* rdx_15 = rax_73[1]
            int64_t* rbx_9 = *(rcx_37 + 0x68)
            int64_t* var_b80_1 = rbx_9
            int32_t* r15_1 = &rbx_9[9]
            
            if (rbx_9 != 0)
                *r15_1 += 1
                rbx_9 = var_b80_1
            
            zmm6_2 = sub_14106e0b0(rcx_37, rdx_15, r8_4, 1)
            
            if (rbx_9 != 0)
                int32_t rax_74 = *r15_1
                *r15_1 -= 1
                
                if (rax_74 == 1)
                    zmm6_2 = sub_140a2f6e0(var_b80_1)
            
            r15 = arg3
        
        rdi_5 += 0x40
        rdx_14 = var_c28.q
        i = zx.q(var_c34_1 + 1)
        r13_1 += 0x40
        var_c34_1 = i.d
        r12_3 += 0x5240
        rsi_1 = &rsi_1[0xb]
    while (i.d s< var_c10_1.d)
    
    r13 = var_c18

void* rbx_11 = *(arg2 + 0xa0)
int64_t rbx_12

if (rbx_11 == 0)
    int64_t var_b78_1 = 0
    rbx_12 = 0
else
    rbx_12 = *(rbx_11 + 0x18)

int128_t* rsi_2 = *(arg2 + 0x2d0)
int64_t rdi_6 = *(arg2 + 0x2d8)
int64_t var_a40 = rdi_6
int128_t var_a68 = zmm6_2
void* var_a50 = r15

if (sub_140a80f40() == 0)
    uint32_t rax_76
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_76.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_76.b == 0))
        void var_648
        int64_t* rax_77
        int128_t zmm6_3
        rax_77, zmm6_3 = sub_1412666a0(&var_648, nullptr, 0xff)
        void* rcx_41 = *rax_77
        *(rcx_41 + 0x10) = rdx_14.o
        *(rcx_41 + 0x20) = zmm6_3
        *(rcx_41 + 0x30) = rbx_12.o
        *(rcx_41 + 0x40) = rsi_2.o
        void* rcx_42 = *rax_77
        int32_t r8_6 = rax_77[2].d
        int64_t* rdx_17 = rax_77[1]
        int64_t* rbx_13 = *(rcx_42 + 0x58)
        int64_t* var_b70_1 = rbx_13
        int32_t* rdi_7 = &rbx_13[9]
        
        if (rbx_13 != 0)
            *rdi_7 += 1
            r13 = var_c18
            rbx_13 = var_b70_1
        
        sub_1405dafa0(rcx_42, rdx_17, r8_6, 1)
        
        if (rbx_13 != 0)
            int32_t r12_4 = *rdi_7
            *rdi_7 -= 1
            
            if (r12_4 == 1)
                sub_140a2f6e0(var_b70_1)
            
            r13 = var_c18
    else
        int128_t var_7c8 = rdx_14.o
        int128_t var_7a8_1 = rbx_12.o
        int128_t var_7b8_1 = zmm6_2
        int128_t var_798_1 = rsi_2.o
        sub_14125db40(&var_7c8, &data_143f02b98)
else
    int128_t zmm1_3 = data_142d3f800
    char var_c40_1 = 1
    int128_t var_8b8
    int128_t* var_c48_1 = &var_8b8
    var_c50.q = rbx_12
    int128_t* var_c58_1 = &var_a68
    var_8b8 = data_142d57d10
    var_c60_1.q = rdi_6
    char var_c68_1
    var_c68_1.q = rdi_6
    int128_t var_8a8_1 = zmm1_3
    int128_t var_898_1 = data_142d57920
    sub_1412e7070(&data_143f02b98, r15, var_c28.q, rsi_2, zmm3_3, var_c68_1, var_c60_1, var_c58_1, 
        var_c50)

int64_t result = sub_1422dbba0(&var_738)
int64_t var_f8

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_c88)
return result
