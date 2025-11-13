// 函数: sub_1413d4870
// 地址: 0x1413d4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
int64_t* rsi = arg3
int64_t rbx = arg2
int64_t result = sub_14139bee0()
int64_t* var_3c8 = &data_143ec4c60
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t r12_2 = sx.q(i) * 0x5240 + *(arg1 + 0xa0)
        void var_2b8
        sub_1419928d0(&var_2b8, rbx)
        int64_t var_300
        __builtin_memset(&var_300, 0, 0x48)
        int128_t var_308
        sub_14142a030(&var_2b8, &var_308)
        int64_t* var_2b0
        int64_t* rax_3 = sub_14081d830(0x100, var_2b0, 1, 0)
        int64_t* rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            sub_14117af20(rax_3)
            __builtin_memset(&rbx_1[0x12], 0, 0x18)
            __builtin_memset(&rbx_1[0x17], 0, 0x48)
        
        memset(rbx_1, 0, 0x100)
        int64_t* rdi_1 = *rsi
        int32_t var_3d0
        int64_t var_1f8
        sub_140865c40(&var_1f8, &var_3d0, rdi_1)
        int64_t rax_4 = sx.q(var_3d0)
        void* const rcx_6
        
        if (rax_4.d == 0xffffffff)
            rcx_6 = nullptr
        else
            rcx_6 = var_1f8 + rax_4 * 0x18
        
        int64_t* rax_6 = rcx_6 + 8
        
        if (rcx_6 == 0)
            rax_6 = nullptr
        
        int64_t var_3b8
        void var_298
        void*** rcx_7
        
        if (rax_6 == 0)
            int128_t* rax_8 = (*(*rdi_1 + 0x10))(rdi_1)
            void*** rax_9 = sub_14081d830(0x88, var_2b0, 1, 0)
            void*** rcx_9 = rax_9
            
            if (rax_9 == 0)
                rcx_9 = rax_9
            else
                rcx_9[1] = u"External"
                rcx_9[2] = 0
                rcx_9[3].b = 0
                *(rcx_9 + 0x1c) = 0
                rcx_9[4] = 0
                rcx_9[5].w = 0x200
                *rcx_9 = &data_142f11960
                *(rcx_9 + 0x30) = *rax_8
                *(rcx_9 + 0x40) = rax_8[1]
                *(rcx_9 + 0x50) = rax_8[2]
                *(rcx_9 + 0x60) = rax_8[3]
                int128_t zmm0_1 = rax_8[4]
                rcx_9[0x10] = 0
                *(rcx_9 + 0x70) = zmm0_1
            
            int64_t rax_10 = *rsi
            void*** var_3e0 = rcx_9
            rcx_9[0x10] = rax_10
            int64_t* var_370_1 = rsi
            var_3e0[2] = *(*rsi + 0x10)
            void**** var_378 = &var_3e0
            void var_398
            sub_14107bc20(&var_298, &var_398, &var_378, nullptr)
            var_3b8 = *rsi
            int64_t* var_368 = &var_3b8
            void**** var_360_1 = &var_3e0
            void var_394
            sub_14107baa0(&var_1f8, &var_394, &var_368, nullptr)
            rcx_7 = var_3e0
        else
            rcx_7 = *rax_6
        
        rbx_1[0x12] = rcx_7
        rbx_1[0x13] = data_14395fa10
        sub_1405d16e0(&rbx_1[0x14], *(*(arg1 + 0xa0) + r13_1 + 0x10))
        int64_t* rax_15 = sub_14139d440(var_3c8)
        int64_t* rdi_3 = *rax_15
        int32_t var_3cc
        sub_140865c40(&var_1f8, &var_3cc, rdi_3)
        int64_t rcx_16 = sx.q(var_3cc)
        void* const rdx_11
        
        if (rcx_16.d == 0xffffffff)
            rdx_11 = nullptr
        else
            rdx_11 = var_1f8 + rcx_16 * 0x18
        
        int64_t* rax_16 = rdx_11 + 8
        
        if (rdx_11 == 0)
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
                int128_t zmm0_3 = rax_18[4]
                rcx_20[0x10] = 0
                *(rcx_20 + 0x70) = zmm0_3
            
            int64_t rax_20 = *rax_15
            void*** var_3d8 = rcx_20
            rcx_20[0x10] = rax_20
            int64_t* var_350_1 = rax_15
            var_3d8[2] = *(*rax_15 + 0x10)
            void**** var_358 = &var_3d8
            void var_390
            sub_14107bc20(&var_298, &var_390, &var_358, nullptr)
            var_3b8 = *rax_15
            int64_t* var_348 = &var_3b8
            void**** var_340_1 = &var_3d8
            void var_38c
            sub_14107baa0(&var_1f8, &var_38c, &var_348, nullptr)
            rcx_18 = var_3d8
        else
            rcx_18 = *rax_16
        
        int16_t var_3a0_1 = 1
        char var_39e_1 = 0
        int32_t var_39c_1 = 0xffffffff
        *rbx_1 = rcx_18.o
        *(rbx_1 + 0xb0) = var_308
        __builtin_memset(&rbx_1[0x18], 0, 0x40)
        int64_t* var_320_1 = var_3c8
        int64_t* var_310_1 = rbx_1
        void*** rax_25
        char rcx_24
        rax_25, rcx_24 = sub_14081d830(0x58, var_2b0, 1, 0)
        void*** rdi_5 = rax_25
        
        if (rax_25 == 0)
            rdi_5 = rax_25
        else
            sub_1413ea3e0(rcx_24)
            void* var_330_1 = &data_143ecced0
            var_3b8.o = rbx_1.o
            void var_3e8
            sub_141992bd0(rdi_5, &var_3e8, &var_3b8, 1)
            *rdi_5 = &data_142f78f28
            *(rdi_5 + 0x38) = arg1.o
            *(rdi_5 + 0x48) = r12_2.o
        
        sub_1419968d0(&var_2b8, rdi_5)
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
        rsi = arg3
        i += 1
        rbx = arg2
        r13_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

__security_check_cookie(rax_1 ^ &var_408)
return result
