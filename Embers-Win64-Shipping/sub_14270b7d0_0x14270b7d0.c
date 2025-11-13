// 函数: sub_14270b7d0
// 地址: 0x14270b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rbx = arg4[1]

if (rbx != 0)
    rbx[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_4 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rbx + 8))(rbx, 1)

uint128_t zmm6
uint128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7

if (arg1[0x42].w == 0)
    zmm6 = *(arg3 + 0x24)
    zmm7 = 0xbf800000
    
    if (not(zmm6.d f!= -1f))
        zmm6 = arg1[0x22].d

if (arg1[0x42].w != 0 || *arg4 == 0 || zmm6.d f< 0f)
    *arg2 = data_143b57f9c
    int64_t* rbx_3 = arg4[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t r14_3 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (r14_3 == 1)
                (*(*rbx_3 + 8))(rbx_3, zx.q(r14_3))
else
    int64_t r8 = *arg1
    char rax_6
    int32_t r8_1
    rax_6, r8_1 = (*(r8 + 0x518))(arg1, 0, r8)
    
    if (rax_6 != 0)
        int32_t rbx_1 = arg1[0x47].d
        
        if (arg1[0x37].b != 2)
        label_14270b93f:
            
            if (arg1[0x37].b != 0)
                int16_t rax_10 = data_143b58116
                *(arg1 + 0x1b9) &= 0xbf
                int16_t var_208 = rax_10 | 0x80
                char var_206_1 = 3
                (*(*arg1 + 0x440))(arg1, &var_208)
            
            int64_t rax_12 = *arg1
            *(arg1 + 0x1b9) |= 0x40
            (*(rax_12 + 0x4b0))(arg1)
            int32_t rbx_2 = data_143b58068
            data_143b58068 = rbx_2 + 1
            arg1[0x47].d = rbx_2
            int64_t* rcx_10 = arg4[1]
            int64_t var_200 = *arg4
            int64_t* var_1f8_1 = rcx_10
            
            if (rcx_10 != 0)
                rcx_10[1].d += 1
                rcx_10 = var_1f8_1
            
            if (&var_200 != &arg1[0x20])
                int128_t zmm1 = var_200.o
                int128_t var_98_1 = zmm1
                var_200.o = *(arg1 + 0x100)
                rcx_10 = var_1f8_1
                *(arg1 + 0x100) = zmm1
            
            if (rcx_10 != 0)
                rcx_10[1].d -= 1
                
                if (rcx_10[1].d == 1)
                    (**var_1f8_1)(var_1f8_1)
                    int32_t rax_17 = *(var_1f8_1 + 0xc)
                    *(var_1f8_1 + 0xc) -= 1
                    
                    if (rax_17 == 1)
                        (*(*var_1f8_1 + 8))(var_1f8_1, 1)
            
            int32_t var_1d8_1 = 0
            uint64_t (* var_1e0_1)(int64_t* arg1, void* arg2, int32_t arg3) = sub_1427056f0
            int64_t var_1b8 = 0
            int32_t var_1b0_1 = 0
            void*** rax_19 = sub_1405978f0(0x30, &var_1b8)
            
            if (rax_19 != 0)
                *rax_19 = &data_143084528
                sub_140d3a3a0(&rax_19[1], arg1)
                *(rax_19 + 0x10) = var_1e0_1.o
                rax_19[5] = sub_140a387b0()
                *rax_19 = &data_143084580
            
            void var_138
            sub_14091e890(arg1[0x20] + 0x80, &var_138, &var_1b8)
            sub_140745b20(&var_1b8)
            void* rdx_7 = arg1[0x1d]
            
            if (rdx_7 != 0)
                void* rdx_8 = *(rdx_7 + 0xa0)
                
                if (rdx_8 != 0)
                    sub_142668c00(arg1[0x20], rdx_8)
            
            void* rax_21
            
            if ((arg3[4].b & 2) != 0)
                rax_21 = *arg3
            
            int64_t* rax_25
            uint128_t zmm0_2
            float zmm1_1[0x4]
            
            if ((arg3[4].b & 2) == 0 || rax_21 == 0)
                int32_t var_180_1 = arg3[2].d
                uint64_t var_188
                rax_25 = &var_188
                var_188 = arg3[1]
            else
                void* rcx_18 = *(rax_21 + 0x130)
                int32_t* rax_22
                
                if (rcx_18 == 0)
                    int32_t var_198_1 = data_143dbb200
                    uint64_t var_1a0
                    rax_22 = &var_1a0
                    var_1a0 = data_143dbb1f8.q
                else
                    zmm1_1 = *(rcx_18 + 0x1d0)
                    float var_1d0
                    rax_22 = &var_1d0
                    var_1d0 = zmm1_1[0]
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float var_118_1[0x4] = zmm1_1
                    float var_1c8_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    int32_t var_1cc_1 = zmm0_2.d
                
                int32_t var_18c_1 = rax_22[2]
                uint64_t var_194
                rax_25 = &var_194
                var_194 = *rax_22
            
            int32_t rax_27 = rax_25[1].d
            int64_t* rdi_3 = arg1[0x20]
            *(arg1 + 0x1a4) = *rax_25
            *(arg1 + 0x1ac) = rax_27
            int32_t rax_28
            int32_t* rcx_19
            
            if (rdi_3[0xe].d != data_143b580b8)
                rcx_19 = rdi_3[0xf]
                
                if (rcx_19 != 0)
                    rax_28 = sub_14268a5a0(rcx_19, &data_143b580b8)
            
            if (rdi_3[0xe].d == data_143b580b8 || (rcx_19 != 0 && rax_28.b != 0))
                rax_28.b = 1
            else
                rax_28.b = 0
            
            int64_t* rcx_20 = nullptr
            
            if (rax_28.b != 0)
                rcx_20 = rdi_3
            
            if (rcx_20 != 0)
                *(arg1 + 0x1b9) |= 0x80
                void* rax_29 = arg1[0x1d]
                uint64_t* rax_33
                
                if (rax_29 == 0)
                    int32_t var_15c_1 = data_143b580b0
                    uint64_t var_164
                    rax_33 = &var_164
                    var_164 = data_143b580a8
                else
                    void* rdx_9 = *(rax_29 + 0xb0)
                    int32_t* rax_30
                    
                    if (rdx_9 == 0)
                        int32_t var_174_1 = data_143b58090
                        uint64_t var_17c
                        rax_30 = &var_17c
                        var_17c = data_143b58088
                    else
                        zmm1_1 = *(rdx_9 + 0x1d0)
                        float var_1c4
                        rax_30 = &var_1c4
                        var_1c4 = zmm1_1[0]
                        zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        float var_108_1[0x4] = zmm1_1
                        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                        zmm1_1[0] = zmm1_1[0] f- *(rdx_9 + 0x114)
                        int32_t var_1c0_1 = zmm0_2.d
                        float var_1bc_1 = zmm1_1[0]
                    
                    int32_t var_168_1 = rax_30[2]
                    uint64_t var_170
                    rax_33 = &var_170
                    var_170 = *rax_30
                
                zmm0_2 = zx.o(*rax_33)
                int32_t var_150_1 = rax_33[1].d
                int64_t rax_36 = *rcx_20
                uint64_t var_158 = zmm0_2.q
                (*(rax_36 + 0x68))(zmm0_2, &var_158)
            
            arg1[0x36].d = 0
            (*(*arg1 + 0x450))(arg1)
            
            if (arg1[0x47].d == rbx_2)
                *(arg1 + 0x114) = zmm6.d
                *(arg1 + 0x1b9) ^= ((arg3[4].d u>> 5).b ^ *(arg1 + 0x1b9)) & 1
                char rax_40 = *(arg1 + 0x1b9)
                *(arg1 + 0x1b9) = ((((arg3[4].d u>> 6).b * 2) ^ rax_40) & 2) ^ rax_40
                int64_t* rcx_24 = arg3[6]
                int64_t var_1f0 = arg3[5]
                int64_t* var_1e8_1 = rcx_24
                
                if (rcx_24 != 0)
                    rcx_24[1].d += 1
                    rcx_24 = var_1e8_1
                
                if (&var_1f0 != &arg1[0x25])
                    zmm1_1 = var_1f0.o
                    float var_88_1[0x4] = zmm1_1
                    var_1f0.o = *(arg1 + 0x128)
                    rcx_24 = var_1e8_1
                    *(arg1 + 0x128) = zmm1_1
                
                if (rcx_24 != 0)
                    rcx_24[1].d -= 1
                    
                    if (rcx_24[1].d == 1)
                        (**var_1e8_1)(var_1e8_1)
                        int32_t r14_1 = *(var_1e8_1 + 0xc)
                        *(var_1e8_1 + 0xc) -= 1
                        
                        if (r14_1 == 1)
                            (*(*var_1e8_1 + 8))(var_1e8_1, zx.q(r14_1))
                
                void* const rdi_5
                
                if ((arg3[4].b & 2) == 0)
                    rdi_5 = nullptr
                else
                    rdi_5 = *arg3
                
                int64_t var_1a8
                sub_140d3a3a0(&var_1a8, rdi_5)
                arg1[0x27] = var_1a8
                void* rcx_29
                
                if (rdi_5 == 0)
                    rcx_29 = nullptr
                else
                    rcx_29 = sub_140d21950(rdi_5, sub_142548ca0())
                
                arg1[0x28] = rcx_29
                int64_t* rax_49
                void var_130
                
                if (rcx_29 == 0)
                    int32_t var_140_1 = data_143dbb200
                    uint64_t var_148
                    rax_49 = &var_148
                    var_148 = data_143dbb1f8.q
                else
                    rax_49 = (*(*rcx_29 + 0x28))(rcx_29, &var_130, arg1[0x14])
                void* rdx_16 = arg1[0x20]
                *(arg1 + 0x18c) = *rax_49
                int32_t rax_51 = rax_49[1].d
                *(arg1 + 0x114) = zmm6.d
                *(arg1 + 0x194) = rax_51
                
                if (rdx_16 != 0)
                    char rax_52 = (*(rdx_16 + 0x98)).b
                    
                    if ((rax_52 & 2) != 0 && *(rdx_16 + 0x30) s> 1 && (rax_52 & 1) != 0)
                        uint128_t zmm3 = data_143b580a8.d
                        int32_t zmm2 = *(arg1 + 0x1a4)
                        
                        if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
                            zmm3 = data_143b580a8:4.d
                            zmm2 = arg1[0x35].d
                            
                            if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
                                zmm3 = data_143b580b0
                                zmm2 = *(arg1 + 0x1ac)
                                
                                if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
                                    int32_t rax_53
                                    rax_53, zmm7 = sub_1426f9ae0(arg1, rdx_16, arg1 + 0x1a4)
                                    *(arg1 + 0x1b4) = rax_53
                
                (*(*arg1 + 0x4f0))(arg1)
                
                if (*(arg1 + 0x1b9) s< 0)
                label_14270bf00:
                    arg1[0x37].b = 1
                    int64_t (* var_1e0_2)(int64_t* arg1) = sub_141f05cfc
                    void* rax_58 = arg1[0x15]
                    int32_t var_1d8_2 = 0
                    
                    if (rax_58 == 0)
                        rax_58 = sub_141ee69e0(arg1)
                    
                    void* rcx_36 = *(rax_58 + 0x188)
                    void* r14_2
                    
                    if (rcx_36 == 0)
                        r14_2 = *(rax_58 + 0x300)
                    else
                        r14_2 = *(rcx_36 + 0xc0)
                    
                    zmm6 = *(arg1 + 0x124)
                    int64_t* rax_59 = sub_140a84c80(0, 0x30, 0)
                    
                    if (rax_59 != 0)
                        *rax_59 = &data_142e33ea8
                        sub_140d3a3a0(&rax_59[1], arg1)
                        *(rax_59 + 0x10) = var_1e0_2.o
                        rax_59[5] = sub_140a387b0()
                        *rax_59 = &data_142e33f00
                    
                    int64_t var_f8 = 0
                    int32_t var_f0_1 = 0
                    
                    if (rax_59 != 0)
                        (*(*rax_59 + 0x40))(rax_59, &var_f8)
                    
                    void var_e8
                    sub_140d3a3a0(&var_e8, nullptr)
                    int64_t var_e0_1 = 0
                    int64_t var_d8_1 = 0
                    void* var_c8_1 = nullptr
                    sub_1423e6200(r14_2, &arg1[0x46], &var_f8, zmm6, 0, zmm7.d)
                    
                    if (var_d8_1 != 0)
                        void var_b8
                        void* rcx_41 = &var_b8
                        
                        if (var_c8_1 != 0)
                            rcx_41 = var_c8_1
                        
                        (*(*rcx_41 + 0x10))(rcx_41)
                    
                    sub_140745b20(&var_f8)
                    
                    if (rax_59 != 0)
                        (*(*rax_59 + 0x38))(rax_59, 0)
                        int64_t rax_65 = sub_140a84c80(rax_59, 0, 0)
                        
                        if (rax_65 != 0)
                            sub_140a74f90(rax_65)
                else
                    void* rax_55 = arg1[0x20]
                    
                    if (rax_55 == 0)
                        goto label_14270bf00
                    
                    char rcx_32 = (*(rax_55 + 0x98)).b
                    
                    if ((rcx_32 & 2) == 0 || *(rax_55 + 0x30) s<= 1 || (rcx_32 & 1) == 0)
                        goto label_14270bf00
                    
                    arg1[0x37].b = 3
                    int32_t rax_57 = (*(*arg1 + 0x508))(arg1, *arg4)
                    int64_t r8_5 = *arg1
                    (*(r8_5 + 0x4c8))(arg1, zx.q(rax_57), r8_5)
            
            *arg2 = rbx_2
            sub_1405970a0(arg4)
        else
            int64_t rax_7 = arg1[0x20]
            
            if (rax_7 == 0 || *arg4 != rax_7)
                goto label_14270b93f
            
            void* const rdx
            
            if ((arg3[4].b & 2) == 0)
                rdx = nullptr
            else
                rdx = *arg3
            
            if (sub_1405a66e0(&arg1[0x27], rdx, r8_1) == 0)
                goto label_14270b93f
            
            (*(*arg1 + 0x430))(arg1, zx.q(data_143f7206c))
            *arg2 = rbx_1
            sub_1405970a0(arg4)
    else
        *arg2 = data_143b57f9c
        sub_1405970a0(arg4)

__security_check_cookie(rax_1 ^ &var_238)
return arg2
