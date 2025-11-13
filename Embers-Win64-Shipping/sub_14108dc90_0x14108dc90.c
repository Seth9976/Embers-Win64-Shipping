// 函数: sub_14108dc90
// 地址: 0x14108dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t result = __security_cookie ^ &var_3f8
int64_t result_1 = result
void* rbx = arg1

if (*(arg3 + 8) s> 0)
    void var_2b8
    sub_1419928d0(&var_2b8, arg2)
    int64_t i_1 = sx.q(*(rbx + 0xa8))
    int64_t* var_358_1 = &data_143ec4c60
    int64_t* rsi_1 = &data_143ec4c60
    void var_298
    int64_t var_1f8
    
    if (i_1 s> 0)
        int64_t r14_1 = 0
        int64_t i
        
        do
            void* r15_2 = *(rbx + 0xa0) + r14_1
            int64_t* var_2b0
            int64_t* rax_1 = sub_14081d830(0xe0, var_2b0, 1, 0)
            int64_t* rbx_1 = rax_1
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                *rax_1 = 0
                rax_1[1].w = 0
                *(rax_1 + 0xa) = 0
                *(rax_1 + 0xc) = 0xffffffff
                rax_1[2] = 0
                rax_1[3].w = 0
                *(rax_1 + 0x1a) = 0
                *(rax_1 + 0x1c) = 0xffffffff
                rax_1[4] = 0
                rax_1[5].w = 0
                *(rax_1 + 0x2a) = 0
                *(rax_1 + 0x2c) = 0xffffffff
                rax_1[6] = 0
                rax_1[7].w = 0
                *(rax_1 + 0x3a) = 0
                *(rax_1 + 0x3c) = 0xffffffff
                rax_1[8] = 0
                rax_1[9].w = 0
                *(rax_1 + 0x4a) = 0
                *(rax_1 + 0x4c) = 0xffffffff
                rax_1[0xa] = 0
                rax_1[0xb].w = 0
                *(rax_1 + 0x5a) = 0
                *(rax_1 + 0x5c) = 0xffffffff
                rax_1[0xc] = 0
                rax_1[0xd].w = 0
                *(rax_1 + 0x6a) = 0
                *(rax_1 + 0x6c) = 0xffffffff
                rax_1[0xe] = 0
                rax_1[0xf].w = 0
                *(rax_1 + 0x7a) = 0
                *(rax_1 + 0x7c) = 0xffffffff
                rax_1[0x10] = 0
                rax_1[0x11].w = 0
                *(rax_1 + 0x8a) = 0
                __builtin_memset(rax_1 + 0x8c, 0, 0x4c)
            
            memset(rbx_1, 0, 0xe0)
            sub_1405d16e0(&rbx_1[0x13], *(r15_2 + 0x10))
            void var_360
            sub_1405d1600(&rbx_1[0x14], sub_14137b9a0(&var_360, arg2, 0xf, *(r15_2 + 0x1548)))
            sub_1405d1550(&var_360)
            sub_1405d16e0(&rbx_1[0x12], *(*(r15_2 + 0x1540) + 0x280))
            int64_t* rdi_1 = data_1439b7120
            int32_t var_3b8
            sub_140865c40(&var_1f8, &var_3b8, rdi_1)
            int64_t rax_3 = sx.q(var_3b8)
            void* const rcx_9
            
            if (rax_3.d == 0xffffffff)
                rcx_9 = nullptr
            else
                rcx_9 = var_1f8 + rax_3 * 0x18
            
            int64_t* rax_5 = rcx_9 + 8
            
            if (rcx_9 == 0)
                rax_5 = nullptr
            
            int64_t var_3a8
            void*** rcx_10
            
            if (rax_5 == 0)
                int128_t* rax_7 = (*(*rdi_1 + 0x10))(rdi_1)
                void*** rax_8 = sub_14081d830(0x88, var_2b0, 1, 0)
                void*** rcx_12 = rax_8
                
                if (rax_8 == 0)
                    rcx_12 = rax_8
                else
                    rcx_12[1] = u"External"
                    rcx_12[2] = 0
                    rcx_12[3].b = 0
                    *(rcx_12 + 0x1c) = 0
                    rcx_12[4] = 0
                    rcx_12[5].w = 0x200
                    *rcx_12 = &data_142f11960
                    *(rcx_12 + 0x30) = *rax_7
                    *(rcx_12 + 0x40) = rax_7[1]
                    *(rcx_12 + 0x50) = rax_7[2]
                    *(rcx_12 + 0x60) = rax_7[3]
                    int128_t zmm0_1 = rax_7[4]
                    rcx_12[0x10] = 0
                    *(rcx_12 + 0x70) = zmm0_1
                
                int64_t rax_9 = data_1439b7120
                void*** var_3d0 = rcx_12
                rcx_12[0x10] = rax_9
                var_3d0[2] = *(data_1439b7120 + 0x10)
                void**** var_330 = &var_3d0
                int64_t* var_328_1 = &data_1439b7120
                void var_378
                sub_14107bc20(&var_298, &var_378, &var_330, nullptr)
                var_3a8 = data_1439b7120
                int64_t* var_320 = &var_3a8
                void**** var_318_1 = &var_3d0
                void var_374
                sub_14107baa0(&var_1f8, &var_374, &var_320, nullptr)
                rcx_10 = var_3d0
            else
                rcx_10 = *rax_5
            
            rbx_1[0x15] = rcx_10
            rbx_1[0x16] = data_14395f4d0
            int64_t* rdi_3 = data_1439b7128
            int32_t var_3b4
            sub_140865c40(&var_1f8, &var_3b4, rdi_3)
            int64_t rax_14 = sx.q(var_3b4)
            void* const rcx_17
            
            if (rax_14.d == 0xffffffff)
                rcx_17 = nullptr
            else
                rcx_17 = var_1f8 + rax_14 * 0x18
            
            int64_t* rax_16 = rcx_17 + 8
            
            if (rcx_17 == 0)
                rax_16 = nullptr
            
            void*** rcx_18
            
            if (rax_16 == 0)
                int128_t* rax_18 = (*(*rdi_3 + 0x10))(rdi_3)
                void*** rax_19 = sub_14081d830(0x88, var_2b0, 1, 0)
                void*** rcx_20 = rax_19
                
                if (rax_19 == 0)
                    rcx_20 = rax_19
                else
                    rcx_20[1] = u"External"
                    rcx_20[2] = 0
                    rcx_20[3].b = 0
                    *(rcx_20 + 0x1c) = 0
                    rcx_20[4] = 0
                    rcx_20[5].w = 0x200
                    *rcx_20 = &data_142f11960
                    *(rcx_20 + 0x30) = *rax_18
                    *(rcx_20 + 0x40) = rax_18[1]
                    *(rcx_20 + 0x50) = rax_18[2]
                    *(rcx_20 + 0x60) = rax_18[3]
                    int128_t zmm0_2 = rax_18[4]
                    rcx_20[0x10] = 0
                    *(rcx_20 + 0x70) = zmm0_2
                
                int64_t rax_20 = data_1439b7128
                void*** var_3c8 = rcx_20
                rcx_20[0x10] = rax_20
                var_3c8[2] = *(data_1439b7128 + 0x10)
                void**** var_310 = &var_3c8
                int64_t* var_308_1 = &data_1439b7128
                void var_370
                sub_14107bc20(&var_298, &var_370, &var_310, nullptr)
                var_3a8 = data_1439b7128
                int64_t* var_300 = &var_3a8
                void**** var_2f8_1 = &var_3c8
                void var_36c
                sub_14107baa0(&var_1f8, &var_36c, &var_300, nullptr)
                rcx_18 = var_3c8
            else
                rcx_18 = *rax_16
            
            rbx_1[0x17] = rcx_18
            rbx_1[0x18] = data_14395f4d0
            int64_t* rax_25 = sub_1422c6ca0(arg2)
            int64_t var_398[0x2]
            var_398[0] = rax_25
            
            if (rax_25 != 0)
                int64_t rdx_16 = *rax_25
                (*(rdx_16 + 0x30))(rax_25, rdx_16)
            
            int64_t rax_26 = sub_1419a9d70(&var_2b8, &var_398, &data_1439b70c8, u"External")
            int64_t* rcx_27 = var_398[0]
            rbx_1[0x19] = rax_26
            
            if (rcx_27 != 0)
                (*(*rcx_27 + 0x38))(rcx_27)
            
            rbx_1[0x1a] = data_14395f4d0
            int64_t* rax_29 = sub_14139d440(rsi_1)
            int64_t* rdi_5 = *rax_29
            int32_t var_3b0
            sub_140865c40(&var_1f8, &var_3b0, rdi_5)
            int64_t rcx_30 = sx.q(var_3b0)
            void* const rdx_19
            
            if (rcx_30.d == 0xffffffff)
                rdx_19 = nullptr
            else
                rdx_19 = var_1f8 + rcx_30 * 0x18
            
            int64_t* rax_30 = rdx_19 + 8
            
            if (rdx_19 == 0)
                rax_30 = nullptr
            
            void*** rcx_32
            
            if (rax_30 == 0)
                int128_t* rax_32 = (*(*rdi_5 + 0x10))(rdi_5)
                void*** rax_33 = sub_14081d830(0x88, var_2b0, 1, 0)
                void*** rcx_34 = rax_33
                
                if (rax_33 == 0)
                    rcx_34 = rax_33
                else
                    rcx_34[1] = u"External"
                    rcx_34[2] = 0
                    rcx_34[3].b = 0
                    *(rcx_34 + 0x1c) = 0
                    rcx_34[4] = 0
                    rcx_34[5].w = 0x200
                    *rcx_34 = &data_142f11960
                    *(rcx_34 + 0x30) = *rax_32
                    *(rcx_34 + 0x40) = rax_32[1]
                    *(rcx_34 + 0x50) = rax_32[2]
                    *(rcx_34 + 0x60) = rax_32[3]
                    int128_t zmm0_4 = rax_32[4]
                    rcx_34[0x10] = 0
                    *(rcx_34 + 0x70) = zmm0_4
                
                int64_t rax_34 = *rax_29
                void*** var_3c0 = rcx_34
                rcx_34[0x10] = rax_34
                int64_t* var_2e8_1 = rax_29
                var_3c0[2] = *(*rax_29 + 0x10)
                void**** var_2f0 = &var_3c0
                void var_368
                sub_14107bc20(&var_298, &var_368, &var_2f0, nullptr)
                var_3a8 = *rax_29
                int64_t* var_2e0 = &var_3a8
                void**** var_2d8_1 = &var_3c0
                void var_364
                sub_14107baa0(&var_1f8, &var_364, &var_2e0, nullptr)
                rcx_32 = var_3c0
            else
                rcx_32 = *rax_30
            
            rsi_1 = var_358_1
            int16_t var_380_1 = 1
            char var_37e_1 = 0
            int32_t var_37c_1 = 0xffffffff
            *rbx_1 = rcx_32.o
            void* var_340_1 = r15_2
            void*** rax_38
            char rcx_38
            rax_38, rcx_38 = sub_14081d830(0x50, var_2b0, 1, 0)
            void*** rdi_7 = rax_38
            
            if (rax_38 == 0)
                rdi_7 = rax_38
            else
                sub_1410972a0(rcx_38)
                void* var_2c0_1 = &data_143e3a8c0
                var_3a8.o = rbx_1.o
                void var_3d8
                sub_141992bd0(rdi_7, &var_3d8, &var_3a8, 1)
                *(rdi_7 + 0x38) = rbx_1.o
                *rdi_7 = &data_142f12dd8
                rdi_7[9] = rsi_1
            
            sub_1419968d0(&var_2b8, rdi_7)
            rbx = arg1
            r14_1 += 0x5240
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_14199ef00(&var_2b8)
    int32_t var_90_1 = 0
    int32_t var_8c
    void var_98
    
    if (var_8c != 0)
        sub_1410b3aa0(&var_98, 0)
    int32_t var_108_1 = 0
    int32_t var_104
    void var_110
    
    if (var_104 != 0)
        sub_1410b3aa0(&var_110, 0)
    int32_t var_160_1 = 0
    int32_t var_1a0_1 = 0
    int32_t var_19c
    void var_1a8
    
    if (var_19c != 0)
        sub_1410b3bb0(&var_1a8, 0)
    int32_t var_178_1 = 0xffffffff
    int32_t var_174_1 = 0
    void var_198
    sub_141095ed0(&var_198, 0)
    int32_t var_1b0_1 = 0
    int32_t var_1f0_1 = 0
    int32_t var_1ec
    
    if (var_1ec != 0)
        sub_1410b3bb0(&var_1f8, 0)
    
    int32_t var_1c8_1 = 0xffffffff
    int32_t var_1c4_1 = 0
    void var_1e8
    sub_141095ed0(&var_1e8, 0)
    int32_t var_200_1 = 0
    void var_248
    sub_141096480(&var_248, 0)
    int32_t var_250_1 = 0
    result = sub_14108c840(&var_298)

__security_check_cookie(result_1 ^ &var_3f8)
return result
