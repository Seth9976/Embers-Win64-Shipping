// 函数: sub_141c73cb0
// 地址: 0x141c73cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e6bac0(arg1)
uint128_t zmm1 = *(arg1 + 0x24)
int32_t var_160
float zmm0_1[0x4]

if (not(zmm1.d f== *(arg1 + 0x2c)))
    int64_t* rax_1 = *(arg1 + 0xa8)
    
    if (not(zmm1.d f== *(rax_1 + 0x84)))
        void* rcx = *rax_1
        *(rax_1 + 0x84) = zmm1.d
        var_160 = *(rax_1 + 0x8c)
        zmm0_1 = rcx.o
        void** const var_b8_1 = &data_142d42ed8
        int64_t var_c8_1 = 0
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
        temp0_1[0] = zmm1.d
        int64_t (* var_d8)(int64_t* arg1) = sub_141c56fc0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
        void* var_168_1
        var_168_1.o = temp0_2
        float var_b0_1[0x4] = temp0_2
        sub_141c56770(rcx, &var_d8)
        zmm1 = *(arg1 + 0x24)
    
    *(arg1 + 0x2c) = zmm1.d

zmm1 = *(arg1 + 0x28)

if (not(zmm1.d f== *(arg1 + 0x30)))
    int64_t* rax_3 = *(arg1 + 0xa8)
    
    if (not(zmm1.d f== rax_3[0x11].d))
        void* rcx_1 = *rax_3
        rax_3[0x11].d = zmm1.d
        var_160 = *(rax_3 + 0x8c)
        zmm0_1 = rcx_1.o
        void** const var_78_1 = &data_142d42ed8
        int64_t var_88_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
        temp0_3[0] = zmm1.d
        int64_t (* var_98)(int64_t* arg1) = sub_141c56c60
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        void* var_168_2
        var_168_2.o = temp0_4
        float var_70_1[0x4] = temp0_4
        sub_141c56770(rcx_1, &var_98)
        zmm1 = *(arg1 + 0x28)
    
    *(arg1 + 0x30) = zmm1.d

float zmm7[0x4] = zx.o(0)
int128_t zmm9 = 0x3f800000
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm8[0x4]
float var_48[0x4] = zmm8

if ((*(arg1 + 0x74) & 1) != 0)
    void* rcx_2 = *(arg1 + 0x10)
    char rax_5 = *(rcx_2 + 0x170)
    
    if (rax_5 != 2)
        zmm0_1 = *(rcx_2 + 0x17c)
        zmm8 = *(rcx_2 + 0x160)
        zmm1.d = (*(rcx_2 + 0x180)).d f- zmm0_1[0]
        zmm8[0] = zmm8[0] - zmm0_1[0]
        zmm1 = _mm_max_ss(zmm1.d, 0x3f800000)
        zmm8[0] = zmm8[0] f/ zmm1.d
        
        if (zmm8[0] >= 0f)
            zmm8 = _mm_min_ss(zmm8[0], 0x3f800000)
        else
            zmm8 = zx.o(0)
        
        if (rax_5 != 0)
            zmm0_1, zmm7, zmm9 = sub_141f86ef0(sub_141f8b8d0(rcx_2 + 0x188), zmm8, zx.o(0))
            zmm6 = zmm0_1
        else
            zmm0_1 = *(rcx_2 + 0x174)
            zmm6 = *(rcx_2 + 0x178)
            zmm6[0] = zmm6[0] - zmm0_1[0]
            zmm6[0] = zmm6[0] * zmm8[0]
            zmm6[0] = zmm6[0] + zmm0_1[0]
    else
        zmm6 = *(rcx_2 + 0x210)
    
    if (zmm6[0] >= zmm7[0])
        zmm6 = _mm_min_ss(zmm6[0], zmm9.d)
    else
        zmm6 = zx.o(0)
    
    if (*(*(arg1 + 0x18) + 0xc) - 1 u<= 1)
        void* rcx_7 = *(arg1 + 8)
        
        if ((*(rcx_7 + 0x358) & 8) != 0 && *(*(arg1 + 0x10) + 0x118) != 0)
            int64_t* rcx_8 = *(rcx_7 + 0x40)
            
            if (rcx_8 != 0)
                int64_t rax_10 = (*(*rcx_8 + 0x38))(rcx_8)
                void var_128
                int64_t* rax_11 = sub_141c5eea0(*(arg1 + 0x88), &var_128, rax_10)
                int64_t var_158_1 = 0
                int64_t* var_150
                sub_141c4d620(&var_150, &rax_11[1])
                int64_t* rbx_1 = var_150
                
                if (rbx_1 != 0)
                    var_158_1 = *rax_11
                    *rax_11 = 0
                
                int64_t* var_120
                
                if (var_120 != 0)
                    int32_t rax_12 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (rax_12 == 1 && var_120 != 0)
                        (*(*var_120 + 8))(var_120, 1)
                    
                    rbx_1 = var_150
                
                if (var_158_1 != 0)
                    float var_118[0x4] = var_158_1.o
                    
                    if (rbx_1 != 0)
                        *(rbx_1 + 0xc) += 1
                        rbx_1 = var_150
                    
                    zmm6 = sub_141c6f200(*(arg1 + 0xa8), &var_118, zmm6)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        int64_t* rbx_2 = var_150
                        (**rbx_2)(rbx_2)
                        int32_t rax_16 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_16 == 1)
                            int64_t* rcx_15 = var_150
                            (*(*rcx_15 + 8))(rcx_15, 1)
    
    void* rcx_16 = *(*(arg1 + 0x88) + 0x7e0)
    int64_t var_138 = *(rcx_16 + 0x10)
    void* rax_20 = *(rcx_16 + 0x18)
    void* var_130_1 = rax_20
    
    if (rax_20 != 0)
        *(rax_20 + 0xc) += 1
    
    sub_141c6f200(*(arg1 + 0xa8), &var_138, zmm6)

void* rcx_27 = *(arg1 + 0x10)

if (*(rcx_27 + 0x220) s> 0)
    int64_t* rdi_2 = *(rcx_27 + 0x218)
    void* r15_2 = sx.q(*(rcx_27 + 0x220)) * 0xa8 + rdi_2
    
    if (rdi_2 != r15_2)
        do
            if (*rdi_2 != 0)
                if (rdi_2[1].b != 2)
                    void* rax_22 = *(arg1 + 0x10)
                    zmm1.d = rdi_2[3].d.d f- *(rdi_2 + 0x14)
                    zmm8 = *(rax_22 + 0x160)
                    zmm8[0] = zmm8[0] f- *(rdi_2 + 0x14)
                    zmm1 = _mm_max_ss(zmm1.d, zmm9.d)
                    zmm8[0] = zmm8[0] f/ zmm1.d
                    
                    if (zmm8[0] >= zmm7[0])
                        zmm8 = _mm_min_ss(zmm8[0], zmm9.d)
                    else
                        zmm8 = zmm7
                    
                    if (*(rax_22 + 0x170) != 0)
                        zmm0_1, zmm7, zmm9 = sub_141f86ef0(sub_141f8b8d0(&rdi_2[4]), zmm8, zmm7)
                        zmm6 = zmm0_1
                    else
                        zmm6 = rdi_2[2].d
                        zmm6[0] = zmm6[0] f- *(rdi_2 + 0xc)
                        zmm6[0] = zmm6[0] * zmm8[0]
                        zmm6[0] = zmm6[0] f+ *(rdi_2 + 0xc)
                else
                    zmm6 = *(rdi_2 + 0x1c)
                
                if (zmm6[0] >= zmm7[0])
                    zmm6 = _mm_min_ss(zmm6[0], zmm9.d)
                else
                    zmm6 = zmm7
                
                void var_108
                int64_t* rax_24 = sub_141c5eea0(*(arg1 + 0x88), &var_108, *rdi_2)
                int64_t var_168_3 = 0
                sub_141c4d620(&var_160, &rax_24[1])
                void* rbx_3 = var_160.q
                
                if (rbx_3 != 0)
                    var_168_3 = *rax_24
                    *rax_24 = 0
                
                int64_t* var_100
                
                if (var_100 != 0)
                    int32_t rax_25 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_25 == 1 && var_100 != 0)
                        (*(*var_100 + 8))(var_100, 1)
                    
                    rbx_3 = var_160.q
                
                float var_f8[0x4] = var_168_3.o
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                    rbx_3 = var_160.q
                
                sub_141c6f200(*(arg1 + 0xa8), &var_f8, zmm6)
                
                if (rbx_3 != 0)
                    int32_t rax_27 = *(rbx_3 + 8)
                    *(rbx_3 + 8) -= 1
                    
                    if (rax_27 == 1)
                        int64_t* rbx_4 = var_160.q
                        (**rbx_4)(rbx_4)
                        int32_t rax_29 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            int64_t* rcx_26 = var_160.q
                            (*(*rcx_26 + 8))(rcx_26, 1)
            
            rdi_2 = &rdi_2[0x15]
        while (rdi_2 != r15_2)
        
        rcx_27 = *(arg1 + 0x10)

char* i = *(rcx_27 + 0x78)
uint64_t result = sx.q(*(rcx_27 + 0x80))

for (void* r14_3 = result * 0xb0 + i; i != r14_3; i = &i[0xb0])
    int64_t r8_3 = *(i + 8)
    
    if (r8_3 != 0)
        float var_148[0x4]
        sub_141c5eea0(*(arg1 + 0x88), &var_148, r8_3)
        char rcx_29 = *i
        float zmm2_1[0x4]
        
        if (rcx_29 != 2)
            zmm0_1 = *(i + 0x20)
            void* rax_31 = *(arg1 + 0x10)
            zmm0_1[0] = zmm0_1[0] f- *(i + 0x1c)
            int32_t zmm3_1 = *(i + 0x14)
            zmm2_1 = *(i + 0x18)
            zmm6 = *(rax_31 + 0x160)
            zmm6[0] = zmm6[0] f- *(i + 0x1c)
            float temp0_17[0x4] = _mm_max_ss(zmm0_1[0], zmm9.d)
            zmm6[0] = zmm6[0] / temp0_17[0]
            
            if (zmm6[0] >= zmm7[0])
                zmm6 = _mm_min_ss(zmm6[0], zmm9.d)
            else
                zmm6 = zmm7
            
            if (rcx_29 != 0)
                zmm0_1, zmm7, zmm9 = sub_141f86ef0(sub_141f8b8d0(&i[0x28]), zmm6, zmm7)
                zmm2_1 = zmm0_1
            else
                zmm2_1[0] = zmm2_1[0] f- zmm3_1
                zmm2_1[0] = zmm2_1[0] * zmm6[0]
                zmm2_1[0] = zmm2_1[0] f+ zmm3_1
        else
            zmm2_1 = *(i + 0x10)
        
        if (zmm2_1[0] >= zmm7[0])
            zmm2_1 = _mm_min_ss(zmm2_1[0], zmm9.d)
        else
            zmm2_1 = zmm7
        
        zmm0_1 = var_148
        float var_e8[0x4] = zmm0_1
        void* rbx_5 = _mm_bsrli_si128(zmm0_1, 8)[0].q
        
        if (rbx_5 != 0)
            *(rbx_5 + 0xc) += 1
            rbx_5 = var_148[2].q
        
        result = sub_141c6f200(*(arg1 + 0xa8), &var_e8, zmm2_1)
        
        if (rbx_5 != 0)
            result = zx.q(*(rbx_5 + 0xc))
            *(rbx_5 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_33 = var_148[2].q
                result = (*(*rcx_33 + 8))(rcx_33, 1)

return result
