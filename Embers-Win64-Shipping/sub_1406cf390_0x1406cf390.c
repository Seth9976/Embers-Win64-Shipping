// 函数: sub_1406cf390
// 地址: 0x1406cf390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg1
int32_t var_3b8 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_3b8_1 = 1
int64_t* var_390 = nullptr
int32_t i_2 = 0
int16_t* var_360
sub_1406c8fb0(&var_360, arg2)
sub_140a464c0()
int16_t* const r8_1 = &data_142d40450
int32_t var_358

if (var_358 != 0)
    r8_1 = var_360

(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_390, r8_1, 1, 0)
int64_t* rbx = var_390
void* rax_2 = &rbx[sx.q(i_2) * 2]

if (rbx != rax_2)
    do
        uint64_t var_3b0
        uint64_t* arg_20 = &var_3b0
        int16_t* rsi_1 = nullptr
        var_3b0 = 0
        int32_t rdi_1 = rbx[1].d
        int64_t r14_1 = *rbx
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_3b0, rdi_1, 0)
            memcpy(var_3b0, r14_1, rdi_1 * 2)
            rsi_1 = var_3b0
        else
            int32_t var_3a4_1 = 0
        
        int128_t zmm0_1 = zx.o(0)
        int64_t var_348_1 = zmm0_1.q
        __builtin_memset(&var_348_1, 0, 0x30)
        int64_t var_338_1 = zmm0_1.q
        int64_t var_328_1 = zmm0_1.q
        int64_t var_308_1 = 0
        int128_t var_318_1 = data_142d90870
        var_308_1.d = 0
        var_308_1:4.d = 0x3f000000
        int128_t var_300_1 = zx.o(0)
        int128_t var_2f0
        __builtin_memset(&var_2f0, 0, 0x18)
        var_300_1.b = 0
        __builtin_memset(&var_300_1:8, 0, 0x1c)
        char var_2d8
        memset(&var_2d8, 0, 0x108)
        var_2d8 = 0
        int32_t var_2d4_1 = 0
        char var_2d0_1 = 0
        int32_t var_2cc_1 = 0
        int128_t var_2c8_1 = data_142d90880
        int64_t var_2b8_1 = 0
        char var_2b0_1 = 0
        int64_t var_2ac_1 = 0
        int32_t var_2a4_1 = 0
        int128_t var_298_1 = zx.o(0)
        __builtin_memset(&var_298_1, 0, 0x14)
        int128_t var_280_1 = zx.o(0)
        __builtin_memset(&var_280_1, 0, 0x29)
        int64_t var_250_1 = 0
        int64_t var_248_1 = 0
        int64_t var_230_1 = 0
        char var_228_1 = 0
        int32_t var_224_1 = 0
        int64_t var_220_1 = 0x3f800000
        int32_t var_218_1 = 0
        char var_214_1 = 0
        int64_t var_210_1 = 0
        int32_t var_208_1 = 0
        char var_1f8_1 = 0
        int64_t var_1f4_1 = 0
        int32_t var_1ec_1 = 0x3f800000
        int128_t var_1e8_1 = data_142d4cc00
        int32_t var_1d8_1 = 0
        int32_t var_1d4_1 = 0x3f800000
        int16_t* const var_370
        int16_t* const rax_4
        
        if (arg2[1].d == 0)
            rax_4 = &data_142d40450
            var_370 = &data_142d40450
        else
            var_370 = *arg2
            rax_4 = &data_142d40450
        
        if (rdi_1 != 0)
            rax_4 = rsi_1
        
        int16_t* const var_368_1 = rax_4
        uint64_t var_3a0 = 0
        int64_t var_398_1 = 0
        int32_t var_3b8_2 = 5
        sub_140b0f5f0(&var_3a0, &var_370, 2)
        uint64_t rcx_5 = var_3b0
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        uint64_t rsi_2 = var_3a0
        var_3b0 = rsi_2
        int32_t rdi_2 = var_398_1.d
        int32_t var_3a8_2
        __builtin_memset(&var_3a8_2, 0, 0x18)
        int32_t var_3b8_3 = 1
        uint64_t var_380
        arg_20 = &var_380
        var_380 = 0
        int32_t var_378_1 = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_380, rdi_2, 0)
            memcpy(var_380, rsi_2, rdi_2 * 2)
        else
            int32_t var_374_1 = 0
        
        int128_t var_1c8
        int128_t* rax_5
        rax_5, arg3 = sub_1406ce7a0(&var_1c8, &var_380, arg3)
        int64_t rdi_3 = sx.q(arg1[1].d)
        int32_t rcx_9 = (rdi_3 + 1).d
        arg1[1].d = rcx_9
        
        if (rcx_9 s> *(arg1 + 0xc))
            sub_1406d1a50(arg1)
        
        sub_1406ca4d0(rdi_3 * 0x178 + *arg1, rax_5)
        int64_t var_d0
        
        if (var_d0 != 0)
            sub_140a74f90(var_d0)
        
        int64_t var_100
        
        if (var_100 != 0)
            sub_140a74f90(var_100)
        
        int64_t var_118
        
        if (var_118 != 0)
            sub_140a74f90(var_118)
        
        int64_t var_178
        
        if (var_178 != 0)
            sub_140a74f90(var_178)
        
        int64_t var_1a8
        
        if (var_1a8 != 0)
            sub_140a74f90(var_1a8)
        
        int64_t var_1b8
        
        if (var_1b8 != 0)
            sub_140a74f90(var_1b8)
        
        int64_t rcx_19 = var_1c8.q
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = var_300_1:8.q
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        if (var_328_1 != 0)
            sub_140a74f90(var_328_1)
        
        if (var_338_1 != 0)
            sub_140a74f90(var_338_1)
        
        int64_t rcx_23 = var_348_1
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_3b0
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx = &rbx[2]
    while (rbx != rax_2)
    
    rbx = var_390

int16_t* rcx_25 = var_360

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)
    rbx = var_390

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_26 = *rbx
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_390

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_28 = *arg2

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

return arg1
