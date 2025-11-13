// 函数: sub_141b20210
// 地址: 0x141b20210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_10 = rbx
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
uint64_t rsi
rsi.b = 0
void**** result = arg2
int32_t var_2b8 = 0
void* const rdi = arg1
char var_2c8 = 0
void* rax_3 = sub_140d226f0(rdi, sub_141a6e000())
float var_188[0x4]
float zmm6[0x4] = var_188
float var_198[0x4]
float zmm7[0x4] = var_198
float var_1a8[0x4]
float zmm8[0x4] = var_1a8
void* rdx_1 = *(rax_3 + 0x70)
void* i = sx.q(*(rax_3 + 0x78)) * 0x30 + rdx_1
float var_278[0x4]

if (rdx_1 != i)
    int32_t* r12_1 = rdx_1 + 0xc
    int32_t* var_2a8_1 = r12_1
    
    do
        int32_t rcx_6 = (r12_1[-2] ^ *(rdi + 0xfc)) | (r12_1[-1] ^ *(rdi + 0x100))
            | (r12_1[-3] ^ *(rdi + 0xf8)) | (*r12_1 ^ *(rdi + 0x104))
        
        if (rcx_6 == 0)
            int64_t* r15 = *(r12_1 + 0x14)
            void* r13_1 = &r15[sx.q(r12_1[7])]
            
            if (r15 != r13_1)
                do
                    rbx = *r15
                    void* rax_13
                    int64_t rax_14
                    void* rdx_2
                    
                    if (rbx != 0)
                        rax_13 = sub_141b37270()
                        rdx_2 = *(rbx + 0x10)
                        rax_14 = sx.q(*(rax_13 + 0x38))
                    
                    if (rbx == 0 || rax_14.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        rbx = nullptr
                    
                    if (rbx != 0)
                        void var_168
                        sub_141a4fd70(rbx, &var_168)
                        int64_t rax_16 = *(rdi + 0x90)
                        uint32_t rcx_11 = (rax_16 u>> 0x20).d + 1
                        int32_t var_2b4_1 = 0
                        
                        if (rax_16.b == 1)
                            rcx_11 = (rax_16 u>> 0x20).d
                        
                        char* rax_17 = sub_141a2f700(&var_1a8, rcx_11.q, *(rax_3 + 0x108))
                        uint128_t var_238 = *rax_17
                        int128_t var_228_1 = *(rax_17 + 0x10)
                        char var_1e4 = var_1e4 & 0xc0
                        uint64_t var_218_1 = *(rax_17 + 0x20)
                        uint128_t var_1f8_1 = data_142e1c7b0
                        int64_t var_210_1 = 0x3f800000
                        int32_t var_208_1 = 0
                        int64_t var_200_1 = 0
                        int32_t var_1e8_1 = 0
                        __builtin_memset(&var_278, 0, 0x20)
                        arg3 = sub_141a56120(&var_168, &var_238, &var_278, 0, arg3)
                        int64_t var_298
                        sub_141a533c0(&var_298)
                        float r10_1 = var_278[2]
                        int32_t r9_1 = -1
                        int64_t r11_1 = var_278[0].q
                        int32_t r8_4
                        int64_t* rcx_15
                        
                        do
                            r8_4 = r9_1 + 1
                            r9_1 = r8_4
                            
                            if (r8_4 s< 0 || r8_4 s>= r10_1)
                                rcx_15.b = 0
                            else
                                rcx_15.b = 1
                            
                            if (rcx_15.b == 0)
                                break
                            
                            int64_t rdx_8 = sx.q(r8_4) * 9
                            rcx_15 = r11_1 + (rdx_8 << 3)
                            
                            if ((*(r11_1 + (rdx_8 << 3) + 0x40) & 2) == 0)
                                rcx_15 = *rcx_15
                            
                            rcx_15.b = *rcx_15 == var_298
                        while (rcx_15.b == 0)
                        int64_t rax_18
                        
                        if (r8_4 s< 0 || r8_4 s>= r10_1)
                            rax_18.b = 0
                        else
                            rax_18.b = 1
                        
                        if (rax_18.b == 0)
                            r9_1 = -1
                        else if (r8_4 != 0xffffffff)
                            rax_18.b = 1
                        else
                            rax_18.b = 0
                        
                        if (rax_18.b != 0)
                            int64_t rcx_17 = sx.q(r9_1) * 9
                            int64_t* rbx_1 = r11_1 + (rcx_17 << 3)
                            
                            if ((*(r11_1 + (rcx_17 << 3) + 0x40) & 2) == 0)
                                rbx_1 = *rbx_1
                            
                            float var_1b8[0x4]
                            float (* rax_20)[0x4] = sub_140ade170(rbx_1 + 0x14, &var_1b8)
                            int64_t zmm0_3 = rbx_1[2].d
                            zmm7 = rbx_1[1].d
                            zmm6 = rbx_1[4].d
                            zmm8 = *rax_20
                            arg3 = _mm_unpacklo_ps(*(rbx_1 + 0xc), 0)
                            float temp0_2[0x4] = _mm_unpacklo_ps(zmm7, zmm0_3)
                            zmm0_3 = rbx_1[5].d
                            zmm7 = _mm_unpacklo_ps(temp0_2, arg3[0])
                            arg3 = _mm_unpacklo_ps(*(rbx_1 + 0x24), 0)
                            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0_3), arg3[0])
                            var_2c8 = 1
                        
                        int128_t var_268
                        rbx = var_268:8.q
                        
                        if (rbx != 0)
                            int32_t temp0_7 = *(rbx + 8)
                            *(rbx + 8) -= 1
                            
                            if (temp0_7 == 1)
                                (**rbx)(rbx)
                                int32_t temp1_1 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    (*(*rbx + 8))(rbx, 1)
                        
                        sub_141afc660(&var_278)
                        
                        if (var_200_1 != 0)
                            sub_140a74f90(var_200_1)
                        
                        char var_88
                        
                        if ((var_88 & 1) != 0)
                            int64_t* var_b8
                            int64_t* rcx_23 = &var_b8
                            
                            if ((var_88 & 2) == 0)
                                rcx_23 = var_b8
                            
                            var_88 &= 0xfe
                            (**rcx_23)(rcx_23, 0)
                            
                            if ((var_88 & 2) == 0)
                                sub_140a74f90(var_b8)
                        
                        int32_t j_5
                        int32_t j_2 = j_5
                        void* var_c8
                        
                        if (j_2 != 0)
                            rbx = var_c8 + 0x80
                            int32_t j
                            
                            do
                                char rax_26 = *rbx
                                
                                if ((rax_26 & 1) != 0)
                                    void* rcx_25 = rbx - 0x80
                                    
                                    if ((rax_26 & 2) == 0)
                                        rcx_25 = *(rbx - 0x80)
                                    
                                    *rbx = rax_26 & 0xfe
                                    (**rcx_25)(rcx_25, 0)
                                    
                                    if ((*rbx & 2) == 0)
                                        sub_140a74f90(*(rbx - 0x80))
                                
                                rbx += 0x88
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                        
                        if (var_c8 != 0)
                            sub_140a74f90(var_c8)
                        
                        int64_t var_d8
                        
                        if (var_d8 != 0)
                            sub_140a74f90(var_d8)
                        
                        int64_t var_e8
                        
                        if (var_e8 != 0)
                            sub_140a74f90(var_e8)
                        
                        int64_t var_f8
                        
                        if (var_f8 != 0)
                            sub_140a74f90(var_f8)
                        
                        int64_t var_108
                        
                        if (var_108 != 0)
                            sub_140a74f90(var_108)
                        
                        int32_t j_4
                        int32_t j_3 = j_4
                        void* var_140
                        
                        if (j_3 != 0)
                            rbx = var_140 + 0x48
                            int32_t j_1
                            
                            do
                                int64_t rcx_32 = *rbx
                                
                                if (rcx_32 != 0)
                                    sub_140a74f90(rcx_32)
                                
                                rbx += 0x58
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        if (var_140 != 0)
                            sub_140a74f90(var_140)
                        
                        int64_t var_150
                        
                        if (var_150 != 0)
                            sub_140a74f90(var_150)
                        
                        rdi = arg1
                    
                    r15 = &r15[1]
                while (r15 != r13_1)
                
                r12_1 = var_2a8_1
        
        r12_1 = &r12_1[0xc]
        var_2a8_1 = r12_1
    while (&r12_1[-3] != i)
    
    rsi = zx.q(var_2c8)
    result = arg2

rbx.b = 0
char var_248 = 0

if (rsi.b != 0)
    rbx.b = 1
    var_278 = zmm8
    char var_248_1 = 1
    float var_268_1[0x4] = zmm7
    float var_258_1[0x4] = zmm6

float zmm3[0x4] = data_143f2c440
zmm6 = *(rdi + 0xf0)
float (* rsi_1)[0x4] = &var_1a8
zmm7 = zx.o(*(rdi + 0x100))
float zmm1[0x4] = zmm3
zmm3 = __andps_xmmxud_memxud(zmm3, data_143f2c450)
arg3 = zx.o(0)
zmm1[0].q = arg3 u>> 0x40
float temp0_9[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (rbx.b != 0)
    rsi_1 = &var_278

var_1a8 = temp0_9
rdi.b = 0
int32_t var_224 = 0xffffffff
int32_t var_220 = 0
double var_198_1[0x2] = arg3
float var_188_1[0x4] = zmm3
int64_t* rax_30 = sub_140d226f0(arg1, sub_141b37620())

if (rax_30 != 0)
    int64_t rdx_11 = *rax_30
    int64_t* rax_31 = (*(rdx_11 + 0x2e0))(rax_30, rdx_11)
    int64_t rcx_37 = sx.q(rax_31[1].d)
    
    if (rcx_37.d s> 0)
        rdi = nullptr
        
        if (*(*rax_31 + (rcx_37 << 3) - 8) == arg1)
            rdi = 1

result[0x10].b &= 0xfc
void*** result_1 = result
*result = sub_140a82f30(0x80, 0x10)
char rax_34 = result[0x10].b | 1
result[0x10].b = rax_34

if ((rax_34 & 2) == 0)
    result_1 = *result

zmm1 = rsi_1[1]
*(result_1 + 0x40) = *rsi_1
*(result_1 + 0x14) = var_224.q
float zmm0_4[0x4] = rsi_1[2]
*result_1 = &data_1430533e8
*(result_1 + 0x20) = zmm6
result_1[1].b = 0
*(result_1 + 0x50) = zmm1
result_1[2].b = 0
result_1[6] = zmm7.q
*(result_1 + 0x60) = zmm0_4
result_1[0xe].b = rbx.b
*(result_1 + 0x71) = rdi.b
__security_check_cookie(rax_1 ^ &var_2e8)
return result
