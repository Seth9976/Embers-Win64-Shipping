// 函数: sub_1419d4860
// 地址: 0x1419d4860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int64_t r15
r15.b = 0
char rax_2
int64_t r8
rax_2, r8 = sub_14198add0(arg4)

if (rax_2 != 0)
    int32_t rax_3 = *arg4
    
    if (rax_3 == 1)
        int64_t var_10c
        __builtin_memset(&var_10c, 0, 0x43)
        int128_t var_160
        __builtin_memset(&var_160, 0, 0x28)
        int128_t var_120_1 = zx.o(0)
        int16_t var_c8_1 = 0
        int64_t* rax_4
        int64_t r8_1
        rax_4, r8_1 = sub_141972c20(&arg4[0x1f])
        int64_t* var_168 = rax_4
        void* const var_1b0 = nullptr
        int64_t var_b0
        __builtin_memset(&var_b0, 0, 0x14)
        
        if (*(arg4 + 0x18) != 0 || *(arg4 + 0x20) != 0 || arg4[0xa] != 0)
            int64_t* rcx_3 = data_143f1d988
            void* const var_218
            void* const rbx_1
            
            if (rcx_3 == 0)
                rbx_1 = nullptr
            else
                void var_1a8
                rbx_1 = *sub_1419cce80(rcx_3, &var_1a8, 0, arg4 + 0x18)
                var_218 = rbx_1
                
                if (rbx_1 != 0)
                    *(rbx_1 + 8) += 1
                    rbx_1 = var_218
                
                sub_1405d1550(&var_1a8)
            
            var_1b0 = rbx_1
            var_218 = nullptr
            sub_141962470(&var_218)
            var_160.q = rbx_1
        
        void* const var_1b8 = nullptr
        int64_t var_9c
        __builtin_memset(&var_9c, 0, 0x14)
        
        if (*(arg4 + 0x54) != 0 || *(arg4 + 0x5c) != 0 || arg4[0x19] != 0)
            int64_t* rcx_6 = data_143f1d988
            void* const var_210
            void* const rbx_2
            
            if (rcx_6 == 0)
                rbx_2 = nullptr
            else
                r8_1.b = 1
                void var_1a0
                rbx_2 = *sub_1419cce80(rcx_6, &var_1a0, r8_1, arg4 + 0x54)
                var_210 = rbx_2
                
                if (rbx_2 != 0)
                    *(rbx_2 + 8) += 1
                    rbx_2 = var_210
                
                sub_1405d1550(&var_1a0)
            
            var_1b8 = rbx_2
            var_210 = nullptr
            sub_141962470(&var_210)
            var_160:8.q = rbx_2
        
        void* const var_1c0 = nullptr
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x14)
        int128_t var_150
        
        if (*(arg4 + 0x68) != 0 || *(arg4 + 0x70) != 0 || arg4[0x1e] != 0)
            int64_t* rcx_9 = data_143f1d988
            void* const var_208
            void* const rbx_3
            
            if (rcx_9 == 0)
                rbx_3 = nullptr
            else
                r8_1.b = 2
                void var_198
                rbx_3 = *sub_1419cce80(rcx_9, &var_198, r8_1, arg4 + 0x68)
                var_208 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 8) += 1
                    rbx_3 = var_208
                
                sub_1405d1550(&var_198)
            
            var_1c0 = rbx_3
            var_208 = nullptr
            sub_141962470(&var_208)
            var_150.q = rbx_3
        
        void* const var_1c8 = nullptr
        int64_t var_74
        __builtin_memset(&var_74, 0, 0x14)
        
        if (*(arg4 + 0x2c) != 0 || *(arg4 + 0x34) != 0 || arg4[0xf] != 0)
            int64_t* rcx_12 = data_143f1d988
            void* const var_200
            void* const rbx_4
            
            if (rcx_12 == 0)
                rbx_4 = nullptr
            else
                r8_1.b = 3
                void var_190
                rbx_4 = *sub_1419cce80(rcx_12, &var_190, r8_1, arg4 + 0x2c)
                var_200 = rbx_4
                
                if (rbx_4 != 0)
                    *(rbx_4 + 8) += 1
                    rbx_4 = var_200
                
                sub_1405d1550(&var_190)
            
            var_1c8 = rbx_4
            var_200 = nullptr
            sub_141962470(&var_200)
            var_150:8.q = rbx_4
        
        void* const var_1d0 = nullptr
        int64_t var_60
        __builtin_memset(&var_60, 0, 0x14)
        
        if (*(arg4 + 0x40) != 0 || *(arg4 + 0x48) != 0 || arg4[0x14] != 0)
            int64_t* rcx_15 = data_143f1d988
            void* const var_1f8
            void* const rbx_5
            
            if (rcx_15 == 0)
                rbx_5 = nullptr
            else
                r8_1.b = 4
                void var_188
                rbx_5 = *sub_1419cce80(rcx_15, &var_188, r8_1, arg4 + 0x40)
                var_1f8 = rbx_5
                
                if (rbx_5 != 0)
                    *(rbx_5 + 8) += 1
                    rbx_5 = var_1f8
                
                sub_1405d1550(&var_188)
            
            var_1d0 = rbx_5
            var_1f8 = nullptr
            sub_141962470(&var_1f8)
            void* const var_140_1 = rbx_5
        
        int64_t* rcx_18 = data_143f0f180
        int64_t var_1d8
        (*(*rcx_18 + 0x40))(rcx_18, &var_1d8, &arg4[0x41])
        int64_t* rcx_19 = data_143f0f180
        int32_t zmm0_1 = arg4[0x50]
        int32_t zmm1_1 = arg4[0x51]
        int64_t var_138_1 = var_1d8
        char var_c0 = arg4[0x52].b
        char var_bf_1 = *(arg4 + 0x149)
        char var_b4_1 = *(arg4 + 0x14a)
        char var_b3_1 = *(arg4 + 0x14b)
        int32_t var_bc_1 = zmm0_1
        int32_t var_b8_1 = zmm1_1
        int64_t var_1e0
        (*(*rcx_19 + 0x30))(rcx_19, &var_1e0, &var_c0)
        int64_t* rcx_20 = data_143f0f180
        int64_t var_130_1 = var_1e0
        int64_t var_1e8
        (*(*rcx_20 + 0x38))(rcx_20, &var_1e8, &arg4[0x53])
        int64_t var_128_1 = var_1e8
        var_10c:4.b = arg4[0x57].b
        int64_t var_100
        var_100.d = arg4[0x5f]
        var_10c:5.b = arg4[0x58].b
        var_100:4.d = arg4[0x60]
        var_10c:6.b = arg4[0x59].b
        int64_t var_f8
        var_f8.d = arg4[0x61]
        var_10c:7.b = arg4[0x5a].b
        var_f8:4.d = arg4[0x62]
        int32_t var_104
        var_104.b = arg4[0x5b].b
        int64_t var_f0
        var_f0.d = arg4[0x63]
        var_104:1.b = arg4[0x5c].b
        var_f0:4.d = arg4[0x64]
        var_104:2.b = arg4[0x5d].b
        int64_t var_e8
        var_e8.d = arg4[0x65]
        var_104:3.b = arg4[0x5e].b
        var_e8:4.d = arg4[0x66]
        var_10c.d = arg4[0x67]
        int32_t var_d0
        var_d0.w = arg4[0x68].w
        var_d0:2.b = arg4[0x6d].b
        var_d0:3.b = *(arg4 + 0x1b5)
        int64_t var_e0
        var_e0.d = arg4[0x69]
        var_e0:4.d = arg4[0x6a]
        int64_t var_d8
        var_d8.b = arg4[0x6b].b
        var_d8:2.b = *(arg4 + 0x1ad)
        var_d8:1.b = *(arg4 + 0x1ae)
        var_d8:3.b = *(arg4 + 0x1af)
        int32_t var_110_1 = arg4[0x6c]
        int16_t var_c8_2 = var_c8_1 | 0x8000
        sub_1419870b0(arg2, &var_168, 0)
        r15.b = 1
        sub_1405d1550(&var_1e8)
        sub_1405d1550(&var_1e0)
        sub_1405d1550(&var_1d8)
        sub_141962470(&var_1d0)
        sub_141962470(&var_1c8)
        sub_141962470(&var_1c0)
        sub_141962470(&var_1b8)
        sub_141962470(&var_1b0)
    else if (rax_3 == 0)
        int64_t* rcx_30 = data_143f1d988
        void* const var_1f0
        
        if (rcx_30 == 0)
            var_1f0 = nullptr
        else
            r8.b = 5
            void var_180
            void* rdi_1 = *sub_1419cce80(rcx_30, &var_180, r8, arg4 + 4)
            void* const rbx_6 = rdi_1
            var_1f0 = rbx_6
            
            if (rdi_1 != 0)
                *(rdi_1 + 8) += 1
                rbx_6 = var_1f0
            
            sub_1405d1550(&var_180)
            
            if (rdi_1 != 0)
                r15.b = sub_141971d60(arg2, rbx_6) != 0
        
        sub_1405d1550(&var_1f0)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0xf8) += 1
*(arg1 + 0x100) += performanceCount - performanceCount_1
__security_check_cookie(rax_1 ^ &var_238)
return zx.q(r15.b)
