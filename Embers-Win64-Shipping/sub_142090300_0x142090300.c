// 函数: sub_142090300
// 地址: 0x142090300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* rax_2 = *(arg8 + 0x28)
int32_t* var_208 = arg10
int64_t var_1e8 = arg3
int32_t var_1f8 = arg6
float var_178[0x4]
var_178[0].q = arg8
sub_1420f9fb0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, rax_2, arg9)
int32_t r12 = *(arg8 + 0x58)
int32_t i = 0
int32_t result_1 = 0
void* rdi = *(arg8 + 0x20)
int64_t rbx_1 = sx.q(*(arg4 + 0xe0))
int64_t var_1b8 = *(arg7 + 0x358)
int64_t rax_5 = data_143f47610
int32_t var_1d8 = r12

if (rbx_1 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == rax_5)
            break
        
        result_1 += 1
        rdx += 1
        
        if (rdx s>= rbx_1)
            goto label_142090433

uint64_t result
int16_t* rdx_1

if (rbx_1 s<= 0 || result_1 == 0xffffffff)
label_142090433:
    TEB* gsbase
    result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143ce8564 s> *(0x14 + result))
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_4 = *(arg4 + 0xe8)
    
    if ((rcx_4.b & 1) != 0)
        rcx_4 = (rcx_4 s>> 1) + arg4 + 0xe8
    
    result = sx.q(result_1)
    rdx_1 = rcx_4 + (result << 1)

int16_t r11_2 = *rdx_1
uint64_t* r14_1 = arg9

if (r11_2 != 0xffff)
    result = *r14_1
    int64_t r10_2 = *result
    
    if ((r10_2.b & 1) != 0)
        r10_2 = (r10_2 s>> 1) + result
    
    int32_t r8_2 = 0
    int32_t r9_4 = *(result + 8) - 1
    
    if (r9_4 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_4 + r8_2)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            
            if (*(r10_2 + (sx.q(result.d) << 2)) u>= r11_2)
                r9_4 = result.d
            else if (r8_2 != result.d)
                r8_2 = result.d
            else
                r8_2 += 1
        while (r8_2 s< r9_4)
    
    if (r8_2 == r9_4)
        int64_t rcx_7 = sx.q(r8_2)
        
        if (*(r10_2 + (rcx_7 << 2)) == r11_2 && r8_2 s>= 0)
            result = r14_1[1]
            *(result + (rcx_7 << 3)) = var_1b8

void* rbx_2

if (*(arg7 + 0xa1) == 0 || var_1f8 s<= 1)
    rbx_2 = arg1
else
    result = sub_1419d5c70(data_143f0f1a0)
    rbx_2 = arg1
    
    if (result.b != 0)
        sub_14088d770(r14_1, *(rbx_2 + 0x36), *(arg7 + 0x260))
        sub_14088d770(r14_1, *(rbx_2 + 0x3a), *(arg7 + 0x268))
        sub_14088d770(r14_1, *(rbx_2 + 0x3e), *(arg7 + 0x270))
        var_1f8 = *(rbx_2 + 0x42)
        int16_t var_1f4_1 = *(rbx_2 + 0x46)
        result = sub_14088bf20(r14_1, &var_1f8, &var_1d8)
        r12 = var_1d8

if (r12 s> 0 && arg10[0xe] s> 0)
    result = sub_1419d2ea0(arg7, r12, arg5, arg10)

int128_t zmm7 = zx.o(0)
uint128_t zmm1_1

if (*(rbx_2 + 0x34) u> 0)
    zmm1_1 = data_142d3f660
    int128_t var_168
    __builtin_memcpy(&var_168, 
        "\x00\x00\x80\x00\x00\x00\x80\x00\xff\xff\x7f\x7f\x00\x00\x80\x3f\x00\x00\x80\x00\x00\x00\x80\x"
    "00\xff\xff\x7f\x7f\x00\x00\x00\x00", 
        0x20)
    uint128_t var_188 = zmm1_1
    __builtin_memset(&var_1b8, 0, 0x30)
    int128_t var_1a8
    int128_t var_198
    int128_t var_158
    
    if (rdi != 0)
        void* r13_1 = var_178[0].q
        
        if ((*(r13_1 + 0x64) & 0xf0) != 0)
            int32_t r15_1 = *(rdi + 0x18)
            int32_t rcx_14 = *(data_143f47698 + 4)
            int32_t rdx_10 = *(*(rdi + 8) + 8) - 1
            
            if (rcx_14 s<= rdx_10)
                rdx_10 = rcx_14
            
            if (rdx_10 s>= 0)
                if (r15_1 s>= rdx_10)
                    rdx_10 = r15_1
                
                r15_1 = rdx_10
            
            sub_140ade170(&data_143dbb208, &var_178)
            float zmm0_2[0x4] = var_178
            void* rcx_15 = *(rdi + 8)
            float zmm3_1[0x4] = _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200)
            float var_128[0x4] = zmm0_2
            zmm0_2 = _mm_unpacklo_ps(data_143dbb1fc, 0)
            float zmm2_1[0x4] = *(rdi + 0x24)
            float var_118_1[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_2[0].q)
            float var_108_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rdi + 0x20), (*(rdi + 0x28))[0].q), 
                _mm_unpacklo_ps(zmm2_1, 0)[0].q)
            float var_148[0x6]
            zmm7 = sub_140ae2e90(rcx_15 + 0x40, &var_148, &var_128)
            int64_t r12_1 = var_1e8
            int32_t var_130
            uint128_t zmm11 = var_130
            uint128_t zmm9
            
            if (1f f<= *(r12_1 + 0x2bc))
                zmm9 = zx.o(0)
            else
                zmm9 = *(data_143f43200 + 4)
            
            int128_t zmm10 = *(data_143f43218 + 4)
            int128_t zmm15 = *(data_143f43230 + 4)
            int128_t zmm12 = data_143a30378:8.d
            uint128_t zmm0_3
            
            if ((*(r13_1 + 0x64) & 0xf) == 0)
                zmm0_3 = zx.o(0)
            else
                zmm0_3 = 0xbf800000
            
            var_1b8.d = zmm0_3.d
            var_1b8:4.d = (zmm0_3 ^ data_142d3f780).d
            int32_t var_1b0_1 = 0x3f800000
            void* r9_6
            
            do
                int32_t* rbx_3 = &var_158
                float zmm6_1 = 3.40282347e+38f
                
                if (i == 0)
                    rbx_3 = &var_168
                
                if (not(zmm9.d f<= zmm7.d))
                    zmm6_1 = sub_1422dfe30(zmm9.d, zmm11.d, r12_1 + 0x280).d f* zmm10.d
                
                zmm0_3 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x14)))
                
                if (not(zmm0_3.d f<= zmm7.d))
                    zmm0_3.d = zmm0_3.d f* zmm12.d
                    zmm6_1 = _mm_min_ss(zmm0_3.d, zmm6_1).d
                
                r9_6 = *(rdi + 8)
                int32_t rdx_13 = *(r13_1 + 0x64)
                zmm6_1 = zmm6_1 f* zmm12.d
                int32_t rcx_18 = rdx_13 & 0xf
                int32_t rax_19 = *(r9_6 + 8) - 1
                rbx_3[2] = zmm6_1
                
                if (rcx_18 s< rax_19)
                    zmm0_3 = sub_1422dfe30((*(r9_6 + (zx.q(rcx_18 + 1) << 2) + 0x20)).d, zmm11.d, 
                        r12_1 + 0x280)
                    rdx_13 = *(r13_1 + 0x64)
                    zmm0_3.d = zmm0_3.d f* zmm10.d
                    rbx_3[2] = _mm_min_ss(zmm0_3.d, zmm6_1).d
                
                *rbx_3 = 0x800000
                
                if ((rdx_13 & 0xf) s<= r15_1)
                    zmm0_3 = 0x800000
                else
                    zmm0_3.d = sub_1422dfe30(
                        (*(*(rdi + 8) + ((zx.q(rdx_13) & 0xf) << 2) + 0x20)).d, zmm11.d, 
                        r12_1 + 0x280).d f* zmm10.d
                    
                    if (not(zmm0_3.d f< zmm6_1))
                        rbx_3[2] = 0x800000
                        zmm0_3 = 0x800000
                
                i += 1
                rbx_3[1] = zmm0_3.d
            while (i s< 2)
            
            r9_6.b = 1
            var_1a8.d = (*(rdi + 0x2c)).d
            var_1a8:4.d = (*(rdi + 0x30)).d
            var_1a8:8.d = (*(rdi + 0x34)).d
            var_1a8:0xc.d = 0x3f800000
            int64_t* rax_24 = sub_1422e5db0(r12_1, &var_1e8, 0, r9_6.b)
            var_198.d = *rax_24
            var_198:4.d = (*(rax_24 + 4)).d
            var_198:8.d = rax_24[1].d.d
            int64_t* rax_25 = sub_1422e5db0(r12_1, &var_1e8, 1, 1)
            var_188.d = *rax_25
            var_188:4.d = (*(rax_25 + 4)).d
            var_188:8.d = rax_25[1].d.d
            int32_t zmm0_6 = sub_1422e5e20(r12_1)
            rbx_2 = arg1
            r14_1 = arg9
            zmm1_1.d = 1f f- zmm0_6
            var_168:0xc.d = zmm15.d
            var_198:0xc.d = zmm1_1.d
            var_188:0xc.d = zmm0_6
    
    var_1f8 = *(rbx_2 + 0x12)
    int16_t var_1f4_2 = *(rbx_2 + 0x16)
    sub_141211c40(r14_1, &var_1f8, &var_168)
    var_1f8 = *(rbx_2 + 0x18)
    int16_t var_1f4_3 = *(rbx_2 + 0x1c)
    sub_141211c40(r14_1, &var_1f8, &var_158)
    var_1f8 = *(rbx_2 + 0x1e)
    int16_t var_1f4_4 = *(rbx_2 + 0x22)
    sub_141211c40(r14_1, &var_1f8, &var_1b8)
    var_1f8 = *(rbx_2 + 0x24)
    int16_t var_1f4_5 = *(rbx_2 + 0x28)
    sub_141211c40(r14_1, &var_1f8, &var_1a8)
    var_1f8 = *(rbx_2 + 0x2a)
    int16_t var_1f4_6 = *(rbx_2 + 0x2e)
    sub_141211c40(r14_1, &var_1f8, &var_198)
    var_1f8 = *(rbx_2 + 0x30)
    int16_t var_1f4_7 = *(rbx_2 + 0x34)
    result = sub_141211c40(r14_1, &var_1f8, &var_188)

if (*(rbx_2 + 0x10) u> 0)
    var_1e8.o = data_1432bc230
    
    if (rdi != 0)
        uint128_t zmm2 = zx.o(*(rdi + 0x10))
        zmm1_1 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x14)))
        zmm2 = _mm_cvtepi32_ps(zmm2)
        zmm1_1.d = zmm1_1.d f* data_143a30378:8.d
        zmm2.d = zmm2.d f* data_143a30378:8.d
        var_1e8.d = zmm2.d
        
        if (not(zmm1_1.d f<= zmm7.d))
            if (zmm1_1.d f<= zmm2.d)
                var_1e8:4.d = 0x3f800000
            else
                zmm1_1.d = zmm1_1.d f- zmm2.d
                int128_t zmm13
                zmm13.d = 1f f/ zmm1_1.d
                var_1e8:4.d = zmm13.d
        
        if (*(data_143f47818 + 4) s<= 0)
            int64_t var_1e0
            
            if (*(rdi + 0x1c) == 0)
                var_1e0.d = 0
            
            if (*(rdi + 0x1d) == 0)
                var_1e0:4.d = 0
        else
            int64_t var_1e0_1 = 0
    
    var_1f8 = *(rbx_2 + 0xc)
    int16_t var_1f4_8 = *(rbx_2 + 0x10)
    result = sub_141211c40(r14_1, &var_1f8, &var_1e8)

__security_check_cookie(rax_1 ^ &var_258)
return result
