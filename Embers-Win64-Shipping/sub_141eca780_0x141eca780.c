// 函数: sub_141eca780
// 地址: 0x141eca780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_3f8
int64_t rax_2 = __security_cookie ^ &var_3f8
void* rax = arg1
int128_t zmm8 = 0x38d1b717
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint128_t zmm7
uint128_t var_48_1 = zmm7
int32_t i_1 = arg2
int32_t i

do
    int32_t* r13_1 = rax
    bool cond:1_1 = *(rax + 0xf4) == 0
    *(rax + 0xf0) = 0
    
    if (not(cond:1_1))
        sub_1405a5390(rax + 0xe8, 0)
    
    if (sub_140d3e110(r13_1) != 0)
        int32_t rcx_2 = r13_1[0x28]
        int32_t var_3d8
        void* var_3d0
        int64_t rax_15
        int128_t* rcx_18
        
        if (rcx_2 == 0)
        label_141eca85c:
            char rax_5 = r13_1[0x3e].b
            
            if (rax_5 == 2)
                zmm8 = sub_141ec8a30(sub_140d3c6e0(r13_1), rax + 0xe8, &r13_1[0x30], &r13_1[0x33], 
                    r13_1[0x2c].b, &r13_1[2], &r13_1[0x1e], &r13_1[0x26])
            else if (rax_5 != 1)
                int32_t rax_27 = r13_1[0x35]
                uint64_t var_318 = *(r13_1 + 0xcc)
                int32_t var_310_1 = rax_27
                int32_t rax_28 = r13_1[0x32]
                uint64_t var_308 = *(r13_1 + 0xc0)
                int32_t var_300_1 = rax_28
                var_3d8.q = &r13_1[2]
                char rax_30
                rax_30, zmm8 = sub_141ec8b10(sub_140d3c6e0(r13_1), &var_308, &var_318, 
                    (r13_1[0x2c]).b, var_3d8, &r13_1[0x1e], &r13_1[0x26])
                
                if (rax_30 != 0)
                    char var_268
                    memset(&var_268, 0, 0x88)
                    int64_t rbx_10 = sx.q(*(rax + 0xf0))
                    var_268 |= 1
                    int32_t var_260_1 = 0x3f800000
                    int32_t rax_31 = (rbx_10 + 1).d
                    *(rax + 0xf0) = rax_31
                    
                    if (rax_31 s> *(rax + 0xf4))
                        sub_1405c5340(rax + 0xe8)
                    
                    rax_15 = *(rax + 0xe8)
                    rcx_18 = rbx_10 * 0x88
                    *(rcx_18 + rax_15) = var_268.o
                    int128_t var_258
                    *(rcx_18 + rax_15 + 0x10) = var_258
                    uint128_t var_248
                    *(rcx_18 + rax_15 + 0x20) = var_248
                    int128_t var_238
                    *(rcx_18 + rax_15 + 0x30) = var_238
                    uint128_t var_228
                    *(rcx_18 + rax_15 + 0x40) = var_228
                    int128_t var_218
                    *(rcx_18 + rax_15 + 0x50) = var_218
                    uint128_t var_208
                    *(rcx_18 + rax_15 + 0x60) = var_208
                    int128_t var_1f8
                    *(rcx_18 + rax_15 + 0x70) = var_1f8
                    int64_t var_1e8
                    *(rcx_18 + rax_15 + 0x80) = var_1e8
            else
                uint128_t var_148
                memset(&var_148, 0, 0x88)
                zmm7 = zx.o(*(r13_1 + 0xcc))
                int32_t rsi_3 = r13_1[0x35]
                zmm6 = zx.o(*(r13_1 + 0xc0))
                int32_t rdi_2 = r13_1[0x32]
                int32_t var_140_1 = 0x3f800000
                void* rax_21 = sub_140d3c6e0(r13_1)
                int32_t r15_3 = data_143f3a5c8
                int32_t rbx_7 = r13_1[0x2c]
                sub_140b34200("RaycastSingle", r15_3)
                uint64_t var_338 = zmm7.q
                int32_t* var_3b8_4 = &r13_1[0x26]
                int32_t var_330_1 = rsi_3
                uint64_t var_328 = zmm6.q
                var_3d0.d = rbx_7
                var_3d8.q = &var_338
                int32_t var_320_1 = rdi_2
                void var_3a8
                char rax_25
                rax_25, zmm8 = sub_141eb32e0(rax_21, &var_148, &var_3a8, &var_328, var_3d8, 
                    var_3d0.b, &r13_1[2], &r13_1[0x1e], var_3b8_4)
                sub_140b38680("RaycastSingle", r15_3)
                
                if (rax_25 != 0)
                    int64_t rbx_9 = sx.q(*(rax + 0xf0))
                    int32_t rax_26 = (rbx_9 + 1).d
                    *(rax + 0xf0) = rax_26
                    
                    if (rax_26 s> *(rax + 0xf4))
                        sub_1405c5340(rax + 0xe8)
                    
                    rax_15 = *(rax + 0xe8)
                    rcx_18 = rbx_9 * 0x88
                    *(rcx_18 + rax_15) = var_148
                    int128_t var_138
                    *(rcx_18 + rax_15 + 0x10) = var_138
                    uint128_t var_128
                    *(rcx_18 + rax_15 + 0x20) = var_128
                    int128_t var_118
                    *(rcx_18 + rax_15 + 0x30) = var_118
                    uint128_t var_108
                    *(rcx_18 + rax_15 + 0x40) = var_108
                    int128_t var_f8
                    *(rcx_18 + rax_15 + 0x50) = var_f8
                    uint128_t var_e8
                    *(rcx_18 + rax_15 + 0x60) = var_e8
                    int128_t var_d8
                    *(rcx_18 + rax_15 + 0x70) = var_d8
                    int64_t var_c8
                    *(rcx_18 + rax_15 + 0x80) = var_c8
        else
            if (rcx_2 == 1)
                if (not(zmm8.d f< *(rax + 0xa4)) && not(zmm8.d f< *(rax + 0xa8))
                        && zmm8.d f>= *(rax + 0xac))
                    goto label_141eca85c
            else if (rcx_2 == 2)
                if (zmm8.d f>= *(rax + 0xa4) != 0)
                    goto label_141eca85c
            else if (rcx_2 != 3 || zmm8.d f>= *(rax + 0xa4) != 0)
                goto label_141eca85c
            
            char rax_7 = r13_1[0x3e].b
            
            if (rax_7 == 2)
                int32_t rax_8 = r13_1[0x35]
                uint64_t var_398 = *(r13_1 + 0xcc)
                int32_t var_390_1 = rax_8
                int32_t rax_9 = r13_1[0x32]
                uint64_t var_388 = *(r13_1 + 0xc0)
                int32_t var_380_1 = rax_9
                void* rax_10 = sub_140d3c6e0(r13_1)
                void* var_3c8
                var_3c8.d = r13_1[0x2c]
                var_3d8.q = &var_388
                zmm8 = sub_141eb14f0(rax_10, &r13_1[0x28], &data_14399f720, rax + 0xe8, var_3d8, 
                    &var_398, var_3c8.b, &r13_1[2], &r13_1[0x1e], &r13_1[0x26])
            else if (rax_7 != 1)
                int32_t rax_16 = r13_1[0x35]
                uint64_t var_358 = *(r13_1 + 0xcc)
                int32_t var_350_1 = rax_16
                int32_t rax_17 = r13_1[0x32]
                uint64_t var_348 = *(r13_1 + 0xc0)
                int32_t var_340_1 = rax_17
                void* rax_18 = sub_140d3c6e0(r13_1)
                var_3d0.d = r13_1[0x2c]
                var_3d8.q = &var_358
                char rax_19
                rax_19, zmm8 = sub_141ec3f80(rax_18, &r13_1[0x28], &data_14399f720, &var_348, 
                    var_3d8, var_3d0.b, &r13_1[2], &r13_1[0x1e], &r13_1[0x26])
                
                if (rax_19 != 0)
                    char var_2f8
                    memset(&var_2f8, 0, 0x88)
                    int64_t rbx_6 = sx.q(*(rax + 0xf0))
                    var_2f8 |= 1
                    int32_t var_2f0_1 = 0x3f800000
                    int32_t rax_20 = (rbx_6 + 1).d
                    *(rax + 0xf0) = rax_20
                    
                    if (rax_20 s> *(rax + 0xf4))
                        sub_1405c5340(rax + 0xe8)
                    
                    rax_15 = *(rax + 0xe8)
                    rcx_18 = rbx_6 * 0x88
                    *(rcx_18 + rax_15) = var_2f8.o
                    int128_t var_2e8
                    *(rcx_18 + rax_15 + 0x10) = var_2e8
                    uint128_t var_2d8
                    *(rcx_18 + rax_15 + 0x20) = var_2d8
                    int128_t var_2c8
                    *(rcx_18 + rax_15 + 0x30) = var_2c8
                    uint128_t var_2b8
                    *(rcx_18 + rax_15 + 0x40) = var_2b8
                    int128_t var_2a8
                    *(rcx_18 + rax_15 + 0x50) = var_2a8
                    uint128_t var_298
                    *(rcx_18 + rax_15 + 0x60) = var_298
                    int128_t var_288
                    *(rcx_18 + rax_15 + 0x70) = var_288
                    int64_t var_278
                    *(rcx_18 + rax_15 + 0x80) = var_278
            else
                uint128_t var_1d8
                memset(&var_1d8, 0, 0x88)
                zmm7 = zx.o(*(r13_1 + 0xcc))
                int32_t rdi_1 = r13_1[0x35]
                zmm6 = zx.o(*(r13_1 + 0xc0))
                int32_t rbx_2 = r13_1[0x32]
                int32_t var_1d0_1 = 0x3f800000
                void* rax_11 = sub_140d3c6e0(r13_1)
                int32_t r15_2 = data_143f3a5c8
                int32_t rsi_2 = r13_1[0x2c]
                sub_140b34200("GeomSweepSingle", r15_2)
                int32_t var_360_1 = rbx_2
                uint64_t var_378 = zmm7.q
                int32_t var_370_1 = rdi_1
                uint64_t var_368 = zmm6.q
                void var_b8
                sub_1417c75c0(&var_b8, &data_14399f720, &r13_1[0x28])
                void* var_78_1 = &r13_1[0x28]
                var_3d0.d = rsi_2
                var_3d8.q = &var_378
                char rax_13
                rax_13, zmm8 = sub_141eb46c0(rax_11, &var_1d8, &var_b8, &var_368, var_3d8, 
                    var_3d0.b, &r13_1[2], &r13_1[0x1e], &r13_1[0x26])
                sub_140b38680("GeomSweepSingle", r15_2)
                
                if (rax_13 != 0)
                    int64_t rbx_5 = sx.q(*(rax + 0xf0))
                    int32_t rax_14 = (rbx_5 + 1).d
                    *(rax + 0xf0) = rax_14
                    
                    if (rax_14 s> *(rax + 0xf4))
                        sub_1405c5340(rax + 0xe8)
                    
                    rax_15 = *(rax + 0xe8)
                    rcx_18 = rbx_5 * 0x88
                    *(rcx_18 + rax_15) = var_1d8
                    int128_t var_1c8
                    *(rcx_18 + rax_15 + 0x10) = var_1c8
                    uint128_t var_1b8
                    *(rcx_18 + rax_15 + 0x20) = var_1b8
                    int128_t var_1a8
                    *(rcx_18 + rax_15 + 0x30) = var_1a8
                    uint128_t var_198
                    *(rcx_18 + rax_15 + 0x40) = var_198
                    int128_t var_188
                    *(rcx_18 + rax_15 + 0x50) = var_188
                    uint128_t var_178
                    *(rcx_18 + rax_15 + 0x60) = var_178
                    int128_t var_168
                    *(rcx_18 + rax_15 + 0x70) = var_168
                    int64_t var_158
                    *(rcx_18 + rax_15 + 0x80) = var_158
    
    i = i_1
    i_1 -= 1
    rax += 0x100
while (i != 1)
__security_check_cookie(rax_2 ^ &var_3f8)
