// 函数: sub_14119ae90
// 地址: 0x14119ae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
void* r13 = arg1
int128_t var_468
sub_141170220(&var_468)
int64_t* result

while (true)
    result = data_143e6d1b8
    void* rdx = *result
    
    if (rdx == 0)
        break
    
    int64_t rbx_1 = data_143e6d1b8
    int128_t zmm1 = *(rdx + 0x18)
    var_468 = *(rdx + 8)
    int128_t var_458_1 = zmm1
    int128_t var_448_1 = *(rdx + 0x28)
    int128_t var_438_1 = *(rdx + 0x38)
    int128_t var_428_1 = *(rdx + 0x48)
    int128_t var_418_1 = *(rdx + 0x58)
    int128_t var_408_1 = *(rdx + 0x68)
    int128_t var_3f8_1 = *(rdx + 0x78)
    int128_t var_3e8_1 = *(rdx + 0x88)
    int128_t var_3d8_1 = *(rdx + 0x98)
    zmm1 = *(rdx + 0xb8)
    int128_t var_3c8_1 = *(rdx + 0xa8)
    int128_t zmm0 = *(rdx + 0xc8)
    data_143e6d1b8 = rdx
    int128_t var_3b8_1 = zmm1
    void var_118
    memset(&var_118, 0, 0xd0)
    int32_t* rax_2 = sub_141170220(&var_118)
    void* rcx_3 = data_143e6d1b8
    *(rcx_3 + 8) = *rax_2
    *(rcx_3 + 0x18) = *(rax_2 + 0x10)
    *(rcx_3 + 0x28) = *(rax_2 + 0x20)
    *(rcx_3 + 0x38) = *(rax_2 + 0x30)
    *(rcx_3 + 0x48) = *(rax_2 + 0x40)
    *(rcx_3 + 0x58) = *(rax_2 + 0x50)
    *(rcx_3 + 0x68) = *(rax_2 + 0x60)
    *(rcx_3 + 0x78) = *(rax_2 + 0x70)
    *(rcx_3 + 0x88) = *(rax_2 + 0x80)
    *(rcx_3 + 0x98) = *(rax_2 + 0x90)
    *(rcx_3 + 0xa8) = *(rax_2 + 0xa0)
    *(rcx_3 + 0xb8) = *(rax_2 + 0xb0)
    *(rcx_3 + 0xc8) = *(rax_2 + 0xc0)
    j_sub_140a74f90(rbx_1)
    int32_t rbx_2 = zmm0.d
    int64_t* r12_1 = nullptr
    int64_t* var_538_1 = nullptr
    int32_t rdi_1 = 0
    int64_t* var_550 = nullptr
    int64_t var_548_1 = 0
    
    if (rbx_2 s> 0)
        sub_14119ae20(&var_550, rbx_2)
        r12_1 = var_550
        rdi_1 = var_548_1.d
        var_538_1 = r12_1
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (rbx_2 != 0)
        do
            int32_t* rbx_3 = data_143e6d188
            void* r15_2 = sx.q(data_143e6d190) * 0x160 + rbx_3
            
            if (rbx_3 != r15_2)
                uint64_t rcx_7 = zx.q(i) * 3
                int32_t r13_1 = *(&var_468 + (rcx_7 << 2))
                void* r14_1 = &var_468 + (rcx_7 << 2)
                
                do
                    if (*rbx_3 == r13_1 && rbx_3[0x54] s>= 0)
                        int64_t rsi_1 = sx.q(rdi_1)
                        int32_t var_488_1 = *(r14_1 + 4)
                        rdi_1 = (rsi_1 + 1).d
                        int32_t var_484_1 = *(r14_1 + 8)
                        var_548_1.d = rdi_1
                        
                        if (rdi_1 s> var_548_1:4.d)
                            sub_14119a860(&var_550)
                            rdi_1 = var_548_1.d
                            r12_1 = var_550
                        
                        *(r12_1 + rsi_1 * 0x10) = rbx_3.o
                    
                    rbx_3 = &rbx_3[0x58]
                while (rbx_3 != r15_2)
                
                i = i_1
                var_538_1 = r12_1
            
            i += 1
            i_1 = i
        while (i u< zmm0.d)
        
        r13 = arg1
    
    if (rdi_1 s> 0)
        int64_t* r15_3 = zmm0:8.q
        i_1.q = 0
        int32_t rsi_2
        
        if (r15_3[0x1a] == 0)
            rsi_2 = 0
        else
            char rax_10 = (*(*r15_3 + 0x318))(r15_3)
            void* rcx_10 = r15_3[0x1a]
            
            if (rax_10 == 0)
                rsi_2 = *(rcx_10 + 0x20)
            else
                rsi_2 = sub_1423c1c80(rcx_10)
        
        int64_t* rcx_11 = r15_3[0xf]
        int32_t rax_13 = (*(*rcx_11 + 0x48))(rcx_11)
        int64_t* rcx_12 = r15_3[0xf]
        int64_t rdx_4 = *rcx_12
        int32_t rax_14 = (*(rdx_4 + 0x40))(rcx_12, rdx_4)
        int32_t var_52c_1 = rax_13
        void var_398
        sub_1419928d0(&var_398, r13)
        int64_t var_540 = 0
        int64_t* rdi_2 = r12_1
        void* r14_4 = &r12_1[sx.q(rdi_1) * 2]
        
        if (r12_1 != r14_4)
            do
                void* rcx_14 = *rdi_2
                int64_t* var_568_1 = &var_540
                sub_1411e0f70(&var_398, arg2, rax_14.q, rsi_2, *(rdi_2 + 0xc), rdi_2[1].d, 
                    *(rcx_14 + 0x150), rcx_14 + 0x78)
                rdi_2 = &rdi_2[2]
            while (rdi_2 != r14_4)
            
            r13 = arg1
        
        sub_1411cf7f0(&var_398, arg2, &var_540)
        int64_t rax_19 = var_540
        int32_t var_230
        int64_t rbx_6 = sx.q(var_230)
        int32_t* var_478_1 = &i_1
        char var_470_1 = 1
        int32_t rax_20 = (rbx_6 + 1).d
        var_230 = rax_20
        int64_t var_238
        int32_t var_22c
        
        if (rax_20 s> var_22c)
            sub_14119a720(&var_238, rbx_6.d)
        
        int64_t rax_21 = var_238
        int64_t rcx_18 = rbx_6 * 3
        *(rax_21 + (rcx_18 << 3)) = rax_19.o
        *(rax_21 + (rcx_18 << 3) + 0x10) = var_470_1.q
        sub_14199ef00(&var_398)
        int32_t rax_22 = data_143dbb190
        uint128_t zmm0_3 = zx.o(data_143dbb188.q)
        int32_t var_510_1 = rax_22
        int32_t var_504_1 = rax_22
        uint64_t var_518_1 = zmm0_3.q
        uint64_t var_50c_1 = zmm0_3.q
        uint64_t var_500_1 = zmm0_3.q
        int64_t var_4ec_1 = 1
        int64_t var_4f4_1 = 0
        int32_t var_4e4_1 = 0
        int64_t r14_5 = *(r15_3[0xf] + 0x10)
        int64_t* r15_4 = *(i_1.q + 0x10)
        
        if (data_143f0f19d == 0)
            int32_t r14_6 = 0
            int32_t var_4a0_1 = 1
            uint128_t var_4d8_1 = var_518_1.o
            uint128_t var_4c8_1 = var_50c_1:4.o
            uint64_t var_4a8_1 = var_4ec_1
            uint128_t var_4b8_1 = rax_22.o
            
            if (rsi_2 != 0)
                do
                    void*** rbx_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_43 = &rbx_14[0xc]
                    
                    if (rax_43 u> *(r13 + 0x38))
                        sub_140b0e3d0(r13 + 0x30, 0x68)
                        rbx_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_43 = &rbx_14[0xc]
                    
                    *(r13 + 0x30) = rax_43
                    void**** rax_44 = *(r13 + 8)
                    *(r13 + 0x14) += 1
                    *rax_44 = rbx_14
                    *(r13 + 8) = &rbx_14[1]
                    rbx_14[1] = 0
                    *rbx_14 = &data_142da7788
                    *(rbx_14 + 0x10) = var_4d8_1
                    *(rbx_14 + 0x20) = var_4c8_1
                    *(rbx_14 + 0x30) = var_4b8_1
                    rbx_14[8] = var_4a8_1
                    rbx_14[9].d = var_4a0_1
                    rbx_14[0xa] = r15_4
                    rbx_14[0xb] = r14_5
                    
                    if ((*(*r15_4 + 8))(r15_4) == 0)
                        int64_t* rcx_31 = rbx_14[0xa]
                        
                        if ((*(*rcx_31 + 0x10))(rcx_31) == 0)
                            int64_t* rcx_32 = rbx_14[0xa]
                            
                            if ((*(*rcx_32 + 0x18))(rcx_32) == 0)
                                int64_t* rcx_33 = rbx_14[0xa]
                                (*(*rcx_33 + 0x20))(rcx_33)
                    
                    int64_t* rcx_34 = rbx_14[0xb]
                    
                    if ((*(*rcx_34 + 8))(rcx_34) == 0)
                        int64_t* rcx_35 = rbx_14[0xb]
                        
                        if ((*(*rcx_35 + 0x10))(rcx_35) == 0)
                            int64_t* rcx_36 = rbx_14[0xb]
                            
                            if ((*(*rcx_36 + 0x18))(rcx_36) == 0)
                                int64_t* rcx_37 = rbx_14[0xb]
                                (*(*rcx_37 + 0x20))(rcx_37)
                    
                    var_4a8_1.d += 1
                    var_4a8_1:4.d += 1
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(var_4d8_1.d)
                    int32_t rax_64 = (temp1_1 - temp0_1) s>> 1
                    
                    if (rax_64 s<= 1)
                        rax_64 = 1
                    
                    var_4d8_1.d = rax_64
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(var_4d8_1:4.d)
                    int32_t rax_68 = (temp3_1 - temp2_1) s>> 1
                    
                    if (rax_68 s<= 1)
                        rax_68 = 1
                    
                    r14_6 += 1
                    var_4d8_1:4.d = rax_68
                while (r14_6 u< rsi_2)
                
                r12_1 = var_538_1
        else
            void*** rbx_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_25 = &rbx_9[0xc]
            
            if (rax_25 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x68)
                rbx_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rax_25 = &rbx_9[0xc]
            
            *(r13 + 0x30) = rax_25
            int64_t* rax_26 = *(r13 + 8)
            *(r13 + 0x14) += 1
            *rax_26 = rbx_9
            *(r13 + 8) = &rbx_9[1]
            rbx_9[1] = 0
            *rbx_9 = &data_142da7788
            *(rbx_9 + 0x10) = var_518_1.o
            *(rbx_9 + 0x20) = var_50c_1:4.o
            *(rbx_9 + 0x30) = rax_22.o
            rbx_9[8] = var_4ec_1
            rbx_9[9].d = rsi_2
            rbx_9[0xa] = r15_4
            rbx_9[0xb] = r14_5
            
            if ((*(*r15_4 + 8))(r15_4) == 0)
                int64_t* rcx_22 = rbx_9[0xa]
                
                if ((*(*rcx_22 + 0x10))(rcx_22) == 0)
                    int64_t* rcx_23 = rbx_9[0xa]
                    
                    if ((*(*rcx_23 + 0x18))(rcx_23) == 0)
                        int64_t* rcx_24 = rbx_9[0xa]
                        (*(*rcx_24 + 0x20))(rcx_24)
            
            int64_t* rcx_25 = rbx_9[0xb]
            
            if ((*(*rcx_25 + 8))(rcx_25) == 0)
                int64_t* rcx_26 = rbx_9[0xb]
                
                if ((*(*rcx_26 + 0x10))(rcx_26) == 0)
                    int64_t* rcx_27 = rbx_9[0xb]
                    
                    if ((*(*rcx_27 + 0x18))(rcx_27) == 0)
                        int64_t* rcx_28 = rbx_9[0xb]
                        (*(*rcx_28 + 0x20))(rcx_28)
        
        int32_t var_170_1 = 0
        int32_t var_16c
        void var_178
        
        if (var_16c != 0)
            sub_1410b3aa0(&var_178, 0)
        int32_t var_1e8_1 = 0
        int32_t var_1e4
        void var_1f0
        
        if (var_1e4 != 0)
            sub_1410b3aa0(&var_1f0, 0)
        int32_t var_240_1 = 0
        int32_t var_280_1 = 0
        int32_t var_27c
        void var_288
        
        if (var_27c != 0)
            sub_1410b3bb0(&var_288, 0)
        int32_t var_258_1 = 0xffffffff
        int32_t var_254_1 = 0
        void var_278
        sub_141095ed0(&var_278, 0)
        int32_t var_290_1 = 0
        int32_t var_2d0_1 = 0
        int32_t var_2cc
        void var_2d8
        
        if (var_2cc != 0)
            sub_1410b3bb0(&var_2d8, 0)
        int32_t var_2a8_1 = 0xffffffff
        int32_t var_2a4_1 = 0
        void var_2c8
        sub_141095ed0(&var_2c8, 0)
        int32_t var_2e0_1 = 0
        void var_328
        sub_141096480(&var_328, 0)
        int32_t var_330_1 = 0
        void var_378
        sub_14108c840(&var_378)
        int64_t* rcx_46 = i_1.q
        
        if (rcx_46 != 0)
            (*(*rcx_46 + 0x38))(rcx_46)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

__security_check_cookie(rax_1 ^ &var_5a8)
return result
