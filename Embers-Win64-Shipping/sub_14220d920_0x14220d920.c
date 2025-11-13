// 函数: sub_14220d920
// 地址: 0x14220d920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* rax_2 = *arg1
int64_t* rsi = arg2
int64_t* var_250 = arg2
*(*rax_2 + 0xa0) = arg1[1]
int64_t* rax_4 = sub_142218330(**arg1)
int64_t* rcx_2 = *arg1
int64_t (* var_260)(int64_t* arg1, int64_t* arg2) = nullptr
int64_t* r14 = rax_4
int64_t var_258 = 0
int32_t rbx = 0
int64_t var_1b8 = 0
int64_t (* r12)(int64_t* arg1, int64_t* arg2) = nullptr
int64_t var_1b0 = 0
void* rdx_1 = *rcx_2
int64_t* var_248 = rax_4
void* rax_5 = data_143f5b298
int64_t (* var_288)(int64_t* arg1, int64_t* arg2) = nullptr
int64_t var_1c0 = *(rdx_1 + 0xf8)
int32_t var_298[0x4]
var_298[0] = 0
int32_t var_27c = 0

if (rax_5 != 0 && *(rax_5 + 0x680) != 0)
    int64_t* rax_6 = sub_140d3c6e0(&var_1c0)
    
    if (rax_6 != 0)
        int64_t rdx_2 = *rax_6
        int32_t rax_7 = (*(rdx_2 + 0x6a0))(rax_6, rdx_2)
        int64_t rbx_1 = sx.q(rax_7)
        int32_t var_280
        
        if (rax_7 s> 0)
            var_280 = rbx_1.d
            sub_1405a4d70(&var_288)
            r12 = var_288
            memset(r12, 0, rbx_1 << 3)
            var_298[0] = var_280
        else if (rax_7 s< 0 && rax_7 != 0)
            var_280 = rbx_1.d
            sub_1405c53d0(&var_288)
            r12 = var_288
            var_298[0] = var_280
        int32_t rsi_1 = 0
        
        if (rbx_1.d s> 0)
            int64_t rbx_2 = 0
            
            do
                int64_t r14_1 = *(data_143f5b298 + 0x680)
                int64_t* rax_11 = (*(*rax_6 + 0x548))(rax_6, zx.q(rsi_1))
                
                if (rax_11 != 0)
                    int64_t rdx_5 = *rax_11
                    r14_1 = (*(rdx_5 + 0x288))(rax_11, rdx_5)
                
                *(r12 + (rbx_2 << 3)) = r14_1
                rsi_1 += 1
                rbx_2 += 1
            while (rbx_2 s< rbx_1)
            
            r14 = var_248
        
        rsi = var_250
        rbx = var_298[0]
    
    int64_t (* rcx_11)(int64_t* arg1, int64_t* arg2) = var_260
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

int16_t* rcx_12 = arg1[1]
var_258:4.d = var_27c
var_260 = r12
var_258.d = rbx
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x33)
int512_t zmm1 = sub_1422119d0(rcx_12, &var_1f8)
void var_268
char rbx_3 = *sub_142230430(sub_140d3c6e0(arg1[1] + 0x100), &var_268, zmm1)
int32_t rax_16 = sub_142216be0(arg1[1])

if (rax_16 != 0)
    bool var_1c6_1 = ((rax_16 - 1) & 0xfffffffd) == 0
    
    if (data_143a2f080 != 0 && rax_16 - 2 u<= 1)
        int16_t var_1c8
        char rax_18 = var_1c8:1.b
        var_1c8.b = 1
        
        if (rbx_3 == 3)
            rax_18 = 1
        
        var_1c8:1.b = rax_18

int64_t* rax_20 = sub_140d3c6e0(**arg1 + 0x100)
void* rdx_8 = arg1[1]
int64_t var_2a8 = arg1[3]
int64_t var_2b0 = arg1[2]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
uint32_t zmm15[0x4]
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_14222b850(rax_20, rdx_8, rdx_8 + 0x10, r14, &var_260, &var_1b8, &var_1f8)
sub_14227a2a0(rsi, *(**arg1 + 0xd) u>> 1 & 1)

if (*(arg1[3] + 8) != 0)
    if (*(arg1[1] + 0x120) == 0)
        int64_t (* rax_24)(int64_t* arg1, int64_t* arg2) = j_sub_140a82f30(0x50)
        int64_t (* rbx_4)(int64_t* arg1, int64_t* arg2) = rax_24
        
        if (rax_24 == 0)
            rbx_4 = nullptr
        else
            int64_t* rcx_24 = rax_24 + 0x10
            *(rax_24 + 0x20) = 0
            *(rax_24 + 0x28) = 0
            __builtin_memset(rax_24 + 0x30, 0, 0x1c)
            *(rax_24 + 0x40) = 0
            *(rax_24 + 0x48) = 0
            __builtin_memset(rax_24, 0, 0x2c)
            *(rcx_24 + 0x1c) = 0x80
            int64_t* rax_25 = rcx_24[2]
            
            if (rax_25 != 0)
                rcx_24 = rax_25
            
            *rcx_24 = 0
            rcx_24[1] = 0
            *(rbx_4 + 0x30) = 0xffffffff
        
        var_288 = rbx_4
        void*** rax_26 = j_sub_140a82f30(0x18)
        
        if (rax_26 == 0)
            rax_26 = nullptr
        else
            rax_26[1].d = 1
            *rax_26 = &data_1433062e8
            *(rax_26 + 0xc) = 1
            rax_26[2] = rbx_4
        
        void** rcx_26 = arg1[1] + 0x120
        void*** rbx_5
        
        if (rcx_26 == &var_288)
            rbx_5 = rax_26
        else
            *rcx_26 = var_288
            rbx_5 = rax_26
            var_288 = nullptr
            int64_t* rsi_2 = rcx_26[1]
            
            if (rbx_5 != rsi_2)
                void*** var_280_1 = nullptr
                rcx_26[1] = rbx_5
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp6_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                rbx_5 = var_280_1
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp5_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx_5)[1](rbx_5, 1)
    
    int64_t* rdx_11 = arg1[3]
    int32_t i = 0
    int64_t var_178
    int80_t var_148
    
    if (rdx_11[1].d s> 0)
        int64_t* var_280_2 = &var_178
        
        do
            int128_t* rax_33 = arg1[2]
            var_178 = **arg1
            double var_168_1[0x2] = *rax_33
            double var_158_1[0x2] = rax_33[1]
            var_148 = rax_33[2][0].t
            var_288 = *rdx_11 + (sx.q(i) << 3)
            sub_142209e20(*(arg1[1] + 0x120), &var_298, &var_288, nullptr)
            rdx_11 = arg1[3]
            i += 1
        while (i s< rdx_11[1].d)
    
    int64_t* rsi_3 = *(**arg1 + 0x120)
    
    if (rsi_3 != 0)
        int32_t* r9_1 = &rsi_3[2]
        int64_t var_138
        __builtin_memset(&var_138, 0, 0x2c)
        int32_t rcx_37 = 0
        int32_t r8_4 = 0
        int32_t var_10c_1 = 0x80
        int32_t var_108_1 = 0xffffffff
        int32_t var_104_1 = 0
        int64_t var_f8_1 = 0
        int32_t var_f0_1 = 0
        int32_t r11_1 = r9_1[6]
        var_288.d = 0
        var_288:4.d = 1
        int32_t* var_280_3 = r9_1
        int32_t var_278_1 = 0xffffffff
        int64_t var_274_1 = 0
        
        if (r11_1 != 0)
            int32_t* rax_36 = *(r9_1 + 0x10)
            
            if (rax_36 != 0)
                r9_1 = rax_36
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r9_1
            
            if (rdx_15 != 0)
            label_14220decb:
                int32_t rax_43 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_43)
                var_288:4.d = rax_43
                int32_t rax_44
                
                if (rax_43 == 0)
                    rax_44 = 0x20
                else
                    rax_44 = 0x1f - temp0_2
                
                var_274_1.d = r8_4 - rax_44 + 0x1f
                
                if (r8_4 - rax_44 + 0x1f s> r11_1)
                    var_274_1.d = r11_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_37)
                    r8_4 += 0x20
                    rcx_37 += 1
                    var_274_1:4.d = r8_4
                    var_288.d = rcx_37
                    
                    if (rdx_16.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = r9_1[rdx_16 + 1]
                    var_278_1 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_14220decb
                
                var_274_1.d = r11_1
        
        double zmm4_1[0x2] = var_278_1.o
        int64_t* var_180_1 = rsi_3
        double zmm0_1[0x2] = var_288.o
        int64_t* var_1a8 = rsi_3
        var_148.q = rsi_3
        var_148:8.w = 0
        float zmm3_1[0x4] = zmm0_1
        void* rax_46 = zmm3_1[0].q
        float var_168_2[0x4] = zmm3_1
        var_178.o = var_1a8.o
        double rcx_39 = zmm4_1[0]
        zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        double var_190_1[0x2] = zmm4_1
        double var_158_2[0x2] = zmm4_1
        
        if ((rcx_39 u>> 0x20).d s< *(rax_46 + 0x18))
            float i_1 = var_168_2[3]
            float var_48_1[0x4] = zmm6
            float var_58_1[0x4] = zmm7
            float var_68_1[0x4] = zmm8
            float var_78_1[0x4] = zmm9
            float var_88_1[0x4] = zmm10
            float var_98_1[0x4] = zmm11
            float var_a8_1[0x4] = zmm12
            float var_b8_1[0x4] = zmm13
            float var_c8_1[0x4] = zmm14
            uint32_t var_d8_1[0x4] = zmm15
            
            do
                void* rbx_8 = sx.q(i_1) * 0x60 + *var_178
                
                if (*sub_1408296b0(&var_138, &var_1c0, *(rbx_8 + 0x10)) == 0xffffffff)
                    sub_141e6db90(&var_138, &var_250, rbx_8 + 0x10, nullptr)
                    zmm13 = data_143f51030
                    int128_t* rcx_43 = arg1[4]
                    zmm15 = data_143f51040
                    float zmm2_1[0x4] = zx.o(0)
                    zmm12 = *(rbx_8 + 0x40)
                    zmm14 = data_143f51110
                    zmm13[0].q = zmm2_1 u>> 0x40
                    var_1a8.o = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
                    var_190_1 = _mm_and_ps(zmm13, zmm15)
                    double var_1a0_1[0x2] = zmm2_1
                    zmm8 = rcx_43[2]
                    float zmm0_2[0x4]
                    float zmm1_2[0x4]
                    float zmm4_2[0x4]
                    float zmm5_1[0x4]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm8), zmm14, 1)) == 0)
                        zmm5_1 = *rcx_43
                        zmm2_1 = *(rbx_8 + 0x20)
                        zmm7 = rcx_43[1]
                        zmm4_2 = *(rbx_8 + 0x30)
                        zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), zmm0_2)
                        zmm1_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                        zmm6 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        zmm4_2 = _mm_mul_ps(zmm4_2, zmm8)
                        zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f51070)
                        zmm0_2 = _mm_mul_ps(zmm6, zmm2_1)
                        zmm12 = _mm_mul_ps(zmm12, zmm8)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                        zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                        zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f51060)
                        zmm2_1 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
                        zmm0_2 = __mulps_xmmps_memps(zmm0_2, data_143f51050)
                        var_190_1 = zmm12
                        zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_2), zmm0_2)
                        zmm0_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
                        var_1a8.o = zmm3_1
                        zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                        zmm0_2 = _mm_mul_ps(zmm0_2, zmm5_1)
                        zmm2_1 = _mm_sub_ps(_mm_mul_ps(zmm2_1, zmm3_1), zmm0_2)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                        zmm6 = _mm_mul_ps(zmm6, zmm2_1)
                        zmm0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                        zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2), zmm3_1)
                        zmm0_2 = _mm_mul_ps(zmm0_2, zmm5_1)
                        zmm6 = _mm_add_ps(zmm6, zmm4_2)
                        var_1a0_1 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_2, zmm0_2), zmm6), zmm7)
                    else
                        zmm3_1 = *rcx_43
                        zmm5_1 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                        zmm1_2 = _mm_add_ps(zmm3_1, zmm3_1)
                        zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                        _mm_mul_ps(zmm12, zmm8)
                        zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                        zmm4_2 = _mm_mul_ps(zmm1_2, zmm3_1)
                        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_2)
                        zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x1a), 
                            _mm_shuffle_ps(zmm4_2, zmm4_2, 1))
                        zmm10 = _mm_add_ps(zmm3_1, zmm2_1)
                        zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                        zmm3_1 = *(rbx_8 + 0x20)
                        zmm1_2 = _mm_sub_ps(zmm13, zmm0_2)
                        zmm10 = _mm_mul_ps(zmm10, zmm8)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                        zmm1_2 = _mm_mul_ps(zmm1_2, zmm8)
                        zmm8 = rcx_43[1]
                        zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                        zmm1_2 = _mm_and_ps(zmm1_2, zmm15)
                        zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32)
                        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1_2, 0), zmm0_2, 0x82)
                        zmm0_2 = _mm_shuffle_ps(zmm10, zmm1_2, 0x31)
                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_2, 0x10), zmm0_2, 0x88)
                        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm5_1, 0x12), zmm1_2, 0xe8)
                        zmm1_2 = _mm_add_ps(zmm3_1, zmm3_1)
                        zmm13[0].q = zmm8 u>> 0x40
                        zmm8 = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                        zmm5_1 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                        zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29)
                        zmm4_2 = _mm_mul_ps(zmm1_2, zmm3_1)
                        zmm2_1 = _mm_mul_ps(zmm2_1, zmm0_2)
                        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_2)
                        zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x1a), 
                            _mm_shuffle_ps(zmm4_2, zmm4_2, 1))
                        zmm6 = _mm_add_ps(zmm3_1, zmm2_1)
                        zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                        zmm1_2 = _mm_sub_ps(zmm13, zmm0_2)
                        zmm6 = _mm_mul_ps(zmm6, zmm12)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                        zmm1_2 = _mm_and_ps(_mm_mul_ps(zmm1_2, zmm12), zmm15)
                        zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1_2, 0), 
                            _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32), 0x82)
                        zmm4_2 = _mm_shuffle_ps(zmm5_1, zmm1_2, 0x10)
                        zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                        zmm4_2 = _mm_shuffle_ps(zmm4_2, _mm_shuffle_ps(zmm6, zmm1_2, 0x31), 0x88)
                        zmm2_1 = _mm_mul_ps(zmm2_1, zmm7)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm5_1, 0x12)
                        zmm5_1 = *(rbx_8 + 0x30)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm1_2, 0xe8)
                        zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10)
                        zmm13[0].q = zmm5_1 u>> 0x40
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm13, 0xc4)
                        zmm0_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8)
                        zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_2, zmm9))
                        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0), zmm9)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                        zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm10)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x55), zmm7)
                        zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
                        float var_238[0x4] = zmm2_1
                        zmm2_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                        zmm2_1 = _mm_mul_ps(zmm2_1, zmm7)
                        zmm4_2 = _mm_mul_ps(zmm4_2, zmm8)
                        zmm0_2 = _mm_shuffle_ps(zmm6, zmm6, 0)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                        zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                        zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm4_2)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm0_2)
                        zmm6 = _mm_mul_ps(zmm6, zmm8)
                        zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                        int96_t var_228_1 = zmm3_1[0].12
                        zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                        zmm3_1 = _mm_mul_ps(zmm3_1, zmm7)
                        zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10)
                        zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm6)
                        zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                        int96_t var_218_1 = zmm2_1[0].12
                        int96_t var_208_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_2), zmm5_1)[0].12
                        float zmm11_1[0x4]
                        int128_t zmm13_1
                        float zmm14_1[0x4]
                        zmm11_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_238, 0x322bcc77)
                        float zmm2_2[0x4] = var_238[0]
                        float zmm1_3 = var_238[1]
                        zmm14_1 =
                            _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11_1, 2), data_143f51100 ^ zmm13_1)
                            ^ data_143f51100
                        zmm2_2[0] = zmm2_2[0] * zmm14_1[0]
                        zmm1_3 = zmm1_3 * zmm14_1[0]
                        uint32_t zmm0_3[0x4] = var_238[2]
                        zmm0_3[0] = zmm0_3[0] f* zmm14_1[0]
                        var_238[0] = zmm2_2[0]
                        zmm2_2 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
                        var_238[2] = zmm0_3[0]
                        zmm0_3 = var_228_1:8.d
                        zmm0_3[0] = zmm0_3[0] f* zmm2_2[0]
                        var_238[1] = zmm1_3
                        zmm1_3 = var_228_1:4.d * zmm2_2[0]
                        float zmm3_2 = var_228_1.d * zmm2_2[0]
                        zmm2_2 = var_218_1.d
                        var_228_1:8.d = zmm0_3[0]
                        zmm0_3 = var_218_1:8.d
                        var_228_1:4.d = zmm1_3
                        zmm14_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
                        zmm0_3[0] = zmm0_3[0] f* zmm14_1[0]
                        zmm2_2[0] = zmm2_2[0] * zmm14_1[0]
                        zmm1_3 = var_218_1:4.d * zmm14_1[0]
                        var_218_1:8.d = zmm0_3[0]
                        var_228_1.d = zmm3_2
                        var_218_1.d = zmm2_2[0]
                        var_218_1:4.d = zmm1_3
                        sub_14077e4a0(&var_288, &var_238)
                        float zmm5_2[0x4] = var_288.o
                        float zmm6_1[0x4] = data_143f50de0
                        float zmm1_4[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                        var_298[0] = 0x322bcc77
                        var_190_1 = zmm11_1
                        zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                        float zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                        zmm1_4 = _mm_rsqrt_ps(zmm4_3)
                        float zmm3_3[0x4] = _mm_mul_ps(zmm4_3, zmm6_1)
                        float zmm2_3[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3_3)), 
                                zmm1_4), 
                            zmm1_4)
                        zmm6_1 = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_3))
                        float zmm0_4[0x4] = var_298[0]
                        zmm0_4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), zmm4_3, 2)
                        zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_3), zmm2_3)
                        zmm2_3 = _mm_unpacklo_ps(var_208_1:4.d, 0)
                        zmm6_1 = _mm_and_ps(_mm_mul_ps(zmm6_1, zmm5_2) ^ data_143f50dd0, zmm0_4)
                            ^ data_143f50dd0
                        var_1a0_1 = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(var_208_1.d, var_208_1:8.d[0].q), zmm2_3[0].q)
                        var_288.o = zmm6_1
                        var_1a8.o = zmm6_1
                    sub_142227c50(arg1[1], *(rbx_8 + 0x10), &var_1a8)
                
                int32_t var_16c
                var_168_2[2] &= not.d(var_16c)
                void var_170
                sub_14059bdd0(&var_170)
                i_1 = var_168_2[3]
            while (i_1 s< *(var_168_2[0].q + 0x18))
            
            if (var_148:8.b != 0 && var_148:9.b != 0)
                void* rcx_48 = var_148.q
                sub_142212c40(rcx_48, *(rcx_48 + 8) - *(rcx_48 + 0x34), 1)
        
        sub_142214fe0(rsi_3, 0)
        int32_t var_f0_2 = 0
        
        if (var_f8_1 != 0)
            sub_140a74f90(var_f8_1)
        
        sub_14100e680(&var_138)

int64_t* rbx_9 = arg1[1]
sub_142227570(rbx_9)
sub_1422273b0(rbx_9)
var_248 = rbx_9
void** var_280_4 = &var_248
var_288 = sub_142212290
sub_14226a4e0(&rbx_9[0x1e], &var_288)
void* rax_55 = sub_14226c380(**arg1 + 0xf0)
int64_t result = sub_142275cd0(**arg1 + 0xf0, rax_55, 0)
int64_t rcx_60 = var_1b8

if (rcx_60 != 0)
    result = sub_140a74f90(rcx_60)

int64_t (* rcx_61)(int64_t* arg1, int64_t* arg2) = var_260

if (rcx_61 != 0)
    result = sub_140a74f90(rcx_61)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
