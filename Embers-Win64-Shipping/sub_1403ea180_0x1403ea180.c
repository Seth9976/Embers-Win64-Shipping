// 函数: sub_1403ea180
// 地址: 0x1403ea180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t r15 = *(arg1 + 0x24a0)
int32_t i = 0
int32_t* r12 = arg4
void* rdi = arg3
void* var_298 = arg2

if (*(arg1 + 0x11fc) s> 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    void* rcx = arg1 + 0x2448
    int32_t r13_1 = 0
    void* rsi_1 = arg2 + 0x344
    
    do
        if (*(arg1 + 0x12cd) == 2)
            r15 = *(rsi_1 - 0x260)
        
        int32_t rax_2 = *(arg1 + 0x1234)
        zmm6 = *(rsi_1 - 0x10)
        zmm7 = *(rsi_1 - 0x50)
        int32_t rax_3 = *(arg1 + 0x1204)
        uint128_t zmm5
        zmm5.d = 1f f- *(rsi_1 - 0x20)
        zmm8 = *(rsi_1 - 0x40)
        zmm5.d = zmm5.d f* *rsi_1
        uint128_t zmm0
        zmm0.d = zmm5.d f* 0.499984741f
        float zmm1 = zmm5.d * 0.25f
        int32_t var_28c_1 = zmm0.d
        zmm0 = zx.o(*(arg1 + 0x1260))
        float var_290 = zmm1
        float var_288_1 = zmm1
        zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 1.52587891e-05f
        float var_278
        sub_1403ea4b0(rcx, &var_278, arg2 + 0xf4 + (sx.q(r13_1) << 2), r12, zmm0.d, rax_3, rax_2)
        zmm5.d = zmm5.d f* *(rsi_1 - 0x20)
        float zmm2_1 = *(rsi_1 - 0x30)
        int32_t j = 1
        zmm5.d = zmm5.d f+ 0.0500000007f
        zmm5.d = zmm5.d f+ *(var_298 + 0x35c) * 0.100000001f
        zmm5.d = zmm5.d f* zmm2_1
        zmm5 ^= 0x80000000
        *rdi = var_278 * zmm2_1 + zmm5.d f* *(arg1 + 0x2498)
        
        if (*(arg1 + 0x1204) s> 1)
            void var_274
            void* rax_5 = &var_274
            
            do
                j += 1
                rax_5 += 4
                *(rdi - &var_274 + rax_5) = zmm5.d f* *(rax_5 - 8) + zmm2_1 f* *(rax_5 - 4)
            while (j s< *(arg1 + 0x1204))
        
        void var_27c
        *(arg1 + 0x2498) = *(&var_27c + (sx.q(*(arg1 + 0x1204)) << 2))
        sub_1403e9d90(arg1 + 0x1c48, rdi, rdi, &var_290, zmm6.d, zmm7.d, zmm8.d, r15, 
            *(arg1 + 0x1204))
        arg2 = var_298
        i += 1
        r13_1 += 0x10
        rsi_1 += 4
        r12 = &r12[sx.q(*(arg1 + 0x1204))]
        rdi += sx.q(*(arg1 + 0x1204)) << 2
        rcx = arg1 + 0x2448
    while (i s< *(arg1 + 0x11fc))

int64_t result = sx.q(*(arg1 + 0x11fc))
*(arg1 + 0x24a0) = *(arg2 + (result << 2) + 0xe0)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
