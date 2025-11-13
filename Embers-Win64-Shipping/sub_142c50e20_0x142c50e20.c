// 函数: sub_142c50e20
// 地址: 0x142c50e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
uint64_t result = __security_cookie ^ &var_3b8
uint64_t result_2 = result
int32_t i = 0

if (*(arg1 + 0x3f8) s> 0)
    int64_t r12_1 = 0
    
    do
        void* rdi_2 = *(arg1 + 0x3f0) + r12_1
        void* r13_2 = sx.q(*(rdi_2 + 0x70)) * 0x624 + *(arg1 + 0x400)
        
        if (sub_142c51140(arg1, rdi_2) == 0)
            int64_t rax_3 = *(arg1 + 0x38)
            
            if (rax_3 != 0)
                uint64_t rdx_2 = zx.q(*(r13_2 + 4))
                int64_t var_378
                __builtin_memset(&var_378, 0, 0x14)
                int64_t var_360
                __builtin_memset(&var_360, 0, 0x28)
                
                if (rax_3(*(arg1 + 8), rdx_2, &var_378) == 0)
                    int32_t rcx_2 = var_378.d
                    
                    if (rcx_2 != 2)
                        int32_t rax_7
                        rax_7.b = rcx_2 == 1
                        *(rdi_2 + 8) = rax_7
                    else
                        *(rdi_2 + 0x1c) = var_378:4.d
                        int32_t var_368
                        *(rdi_2 + 0x24) = var_368
                        *(rdi_2 + 8) = rcx_2
        
        int64_t rax_9 = *(arg1 + 0x48)
        void* rbx_2 = sx.q(*(rdi_2 + 0x70)) * 0x624 + *(arg1 + 0x400)
        int32_t* var_390
        int32_t var_388
        int32_t var_384
        int32_t var_380
        
        if (rax_9 == 0)
        label_142c50f8f:
            int64_t rax_12 = *(arg1 + 0x50)
            
            if (rax_12 != 0)
                uint64_t rdx_4 = zx.q(*(rbx_2 + 4))
                int32_t* var_398_2 = &var_388
                int64_t rcx_5 = *(arg1 + 8)
                var_384 = 0
                var_380 = 0
                var_388 = 0
                int32_t rax_13 =
                    rax_12(rcx_5, rdx_4, &var_384, &var_380, var_398_2, var_390, var_388, var_380)
                
                if (rax_13 == 0 && var_384 != rax_13)
                    int32_t rax_14 = var_388
                    
                    if (rax_14 == 8)
                        int64_t r14_1 = *(arg1 + 0xa0)
                        
                        if (r14_1 != 0)
                            void* rbx_4 = sx.q(*(rdi_2 + 0x70)) * 0x624 + *(arg1 + 0x400)
                            int32_t var_224
                            memset(&var_224, 0, 0x1d4)
                            int64_t rcx_7 = *(arg1 + 8)
                            int32_t var_228 = 0x1d
                            
                            if (r14_1(rcx_7, zx.q(*(rbx_4 + 4)), &var_228) == 0)
                                char rcx_8 = var_224.b
                                int32_t var_214
                                
                                if ((rcx_8 & 1) != 0)
                                    *(rdi_2 + 0x28) = var_214
                                int32_t var_194
                                
                                if ((rcx_8 & 4) != 0)
                                    *(rdi_2 + 0x2c) = var_194
                    else if (rax_14 == 7)
                        sub_142c50720(arg1, rdi_2)
                    else if (rax_14 - 5 u<= 1)
                        sub_142c50590(arg1, rdi_2)
        else
            uint64_t rdx_3 = zx.q(*(rbx_2 + 4))
            var_390 = &var_384
            var_380 = 0
            int32_t var_37c
            int32_t* var_398_1 = &var_37c
            int64_t rcx_3 = *(arg1 + 8)
            var_388 = 0
            var_37c = 0
            var_384 = 0
            
            if (rax_9(rcx_3, rdx_3, &var_380, &var_388, var_398_1, var_390, var_388, var_380) != 0)
                goto label_142c50f8f
            
            int32_t rcx_4 = var_388
            
            if (rcx_4 s<= 0)
                goto label_142c50f8f
            
            int32_t rax_11 = var_384
            
            if (rax_11 s<= 0)
                goto label_142c50f8f
            
            *(rdi_2 + 0x28) = rcx_4
            *(rdi_2 + 0x2c) = rax_11
        result = zx.q((*(rdi_2 + 0x28) * *(rdi_2 + 0x1c)) << 7)
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(result.d)).d f/ 1000000f
        *(rdi_2 + 0x34) = zmm0_1.d
        int64_t rbx_5 = *(arg1 + 0x30)
        
        if (rbx_5 != 0)
            int64_t var_338
            memset(&var_338, 0, 0x110)
            result = rbx_5(*(arg1 + 8), zx.q(*(r13_2 + 4)), &var_338)
            
            if (result.d == 0)
                *(rdi_2 + 0x40) = var_338
                int32_t result_1
                result = zx.q(result_1)
                *(rdi_2 + 0x30) = result.d
        
        i += 1
        r12_1 += 0x78
    while (i s< *(arg1 + 0x3f8))

__security_check_cookie(result_2 ^ &var_3b8)
return result
