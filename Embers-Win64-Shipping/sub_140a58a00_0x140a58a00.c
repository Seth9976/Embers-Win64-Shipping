// 函数: sub_140a58a00
// 地址: 0x140a58a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
void var_248
memset(&var_248, 0, 0x210)
int32_t var_474
sub_140b65640(&var_248, 0x42, &var_474)
int64_t rsi = sx.q(var_474)
void var_238
void* var_468 = &var_238
int32_t var_470 = rsi.d
AcquireSRWLockShared(arg1 + 0x48)
int32_t rbx = 0
void* rcx_5

if (*(arg1 + 0x58) == *(arg1 + 0x84))
label_140a58b14:
    rcx_5 = nullptr
else
    void* r8_1 = arg1 + 0x88
    void* rcx_3 = *(r8_1 + 8)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_3 = *(r8_1 + (((sx.q(*(arg1 + 0x98)) - 1) & rsi) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140a58b14_1:
        rcx_5 = nullptr
    else
        int64_t rdi_1 = *(arg1 + 0x50)
        int64_t r10_2
        void* r11_1
        
        while (true)
            r10_2 = sx.q(rax_3) << 5
            r11_1 = r10_2 + rdi_1
            
            if (*(r10_2 + rdi_1) == rsi.d)
                break
            
        label_140a58b3a:
            rax_3 = *(r11_1 + 0x18)
            
            if (rax_3 == 0xffffffff)
                goto label_140a58b14_2
        
        void* rcx_4 = &var_238
        
        for (int32_t i = 0; i u< 0x40; )
            int64_t rdx_4 = *(*(r11_1 + 8) - &var_238 + rcx_4)
            
            if (rdx_4 != *rcx_4)
                goto label_140a58b3a
            
            if (rdx_4 == 0)
                break
            
            i += 1
            rcx_4 += 8
        
        rcx_5 = r10_2 + rdi_1
        
        if (rax_3 == 0xffffffff)
        label_140a58b14_2:
            rcx_5 = nullptr

int32_t* rax_4 = rcx_5 + 0x10

if (rcx_5 == 0)
    rax_4 = nullptr

uint64_t result

if (rax_4 == 0)
    ReleaseSRWLockShared(arg1 + 0x48)
    int32_t rcx_7 = 0x40
    int64_t rax_5 = 0
    int32_t var_458 = 0x40
    
    while (true)
        int64_t rdx_5 = *(&var_238 + rax_5)
        
        if (rdx_5 == 0)
            if (rcx_7 == 0x40)
                rcx_7 = rbx
            
            var_458 = rcx_7
        
        void var_450
        *(&var_450 + rax_5) = rdx_5
        void var_230
        int64_t rdx_6 = *(&var_230 + rax_5)
        
        if (rdx_6 == 0 && var_458 == 0x40)
            var_458 = rbx + 1
        
        void var_448
        *(&var_448 + rax_5) = rdx_6
        void var_228
        int64_t rdx_7 = *(&var_228 + rax_5)
        
        if (rdx_7 == 0 && var_458 == 0x40)
            var_458 = rbx + 2
        
        void var_440
        *(&var_440 + rax_5) = rdx_7
        void var_220
        int64_t rdx_8 = *(&var_220 + rax_5)
        
        if (rdx_8 == 0 && var_458 == 0x40)
            var_458 = rbx + 3
        
        void var_438
        *(&var_438 + rax_5) = rdx_8
        void var_218
        int64_t rdx_9 = *(&var_218 + rax_5)
        
        if (rdx_9 == 0 && var_458 == 0x40)
            var_458 = rbx + 4
        
        void var_430
        *(&var_430 + rax_5) = rdx_9
        void var_210
        int64_t rdx_10 = *(&var_210 + rax_5)
        
        if (rdx_10 == 0 && var_458 == 0x40)
            var_458 = rbx + 5
        
        void var_428
        *(&var_428 + rax_5) = rdx_10
        void var_208
        int64_t rdx_11 = *(&var_208 + rax_5)
        
        if (rdx_11 == 0 && var_458 == 0x40)
            var_458 = rbx + 6
        
        void var_420
        *(&var_420 + rax_5) = rdx_11
        void var_200
        int64_t rdx_12 = *(&var_200 + rax_5)
        
        if (rdx_12 == 0 && var_458 == 0x40)
            var_458 = rbx + 7
        
        void var_418
        *(&var_418 + rax_5) = rdx_12
        void var_1f8
        int64_t rdx_13 = *(&var_1f8 + rax_5)
        
        if (rdx_13 == 0 && var_458 == 0x40)
            var_458 = rbx + 8
        
        void var_410
        *(&var_410 + rax_5) = rdx_13
        void var_1f0
        int64_t rdx_14 = *(&var_1f0 + rax_5)
        
        if (rdx_14 == 0 && var_458 == 0x40)
            var_458 = rbx + 9
        
        void var_408
        *(&var_408 + rax_5) = rdx_14
        void var_1e8
        int64_t rdx_15 = *(&var_1e8 + rax_5)
        
        if (rdx_15 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xa
        
        void var_400
        *(&var_400 + rax_5) = rdx_15
        void var_1e0
        int64_t rdx_16 = *(&var_1e0 + rax_5)
        
        if (rdx_16 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xb
        
        void var_3f8
        *(&var_3f8 + rax_5) = rdx_16
        void var_1d8
        int64_t rdx_17 = *(&var_1d8 + rax_5)
        
        if (rdx_17 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xc
        
        void var_3f0
        *(&var_3f0 + rax_5) = rdx_17
        void var_1d0
        int64_t rdx_18 = *(&var_1d0 + rax_5)
        
        if (rdx_18 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xd
        
        void var_3e8
        *(&var_3e8 + rax_5) = rdx_18
        void var_1c8
        int64_t rdx_19 = *(&var_1c8 + rax_5)
        
        if (rdx_19 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xe
        
        void var_3e0
        *(&var_3e0 + rax_5) = rdx_19
        void var_1c0
        int64_t rdx_20 = *(&var_1c0 + rax_5)
        
        if (rdx_20 == 0 && var_458 == 0x40)
            var_458 = rbx + 0xf
        
        void var_3d8
        *(&var_3d8 + rax_5) = rdx_20
        void var_1b8
        int64_t rdx_21 = *(&var_1b8 + rax_5)
        
        if (rdx_21 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x10
        
        void var_3d0
        *(&var_3d0 + rax_5) = rdx_21
        void var_1b0
        int64_t rdx_22 = *(&var_1b0 + rax_5)
        
        if (rdx_22 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x11
        
        void var_3c8
        *(&var_3c8 + rax_5) = rdx_22
        void var_1a8
        int64_t rdx_23 = *(&var_1a8 + rax_5)
        
        if (rdx_23 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x12
        
        void var_3c0
        *(&var_3c0 + rax_5) = rdx_23
        void var_1a0
        int64_t rdx_24 = *(&var_1a0 + rax_5)
        
        if (rdx_24 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x13
        
        void var_3b8
        *(&var_3b8 + rax_5) = rdx_24
        void var_198
        int64_t rdx_25 = *(&var_198 + rax_5)
        
        if (rdx_25 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x14
        
        void var_3b0
        *(&var_3b0 + rax_5) = rdx_25
        void var_190
        int64_t rdx_26 = *(&var_190 + rax_5)
        
        if (rdx_26 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x15
        
        void var_3a8
        *(&var_3a8 + rax_5) = rdx_26
        void var_188
        int64_t rdx_27 = *(&var_188 + rax_5)
        
        if (rdx_27 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x16
        
        void var_3a0
        *(&var_3a0 + rax_5) = rdx_27
        void var_180
        int64_t rdx_28 = *(&var_180 + rax_5)
        
        if (rdx_28 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x17
        
        void var_398
        *(&var_398 + rax_5) = rdx_28
        void var_178
        int64_t rdx_29 = *(&var_178 + rax_5)
        
        if (rdx_29 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x18
        
        void var_390
        *(&var_390 + rax_5) = rdx_29
        void var_170
        int64_t rdx_30 = *(&var_170 + rax_5)
        
        if (rdx_30 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x19
        
        void var_388
        *(&var_388 + rax_5) = rdx_30
        void var_168
        int64_t rdx_31 = *(&var_168 + rax_5)
        
        if (rdx_31 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1a
        
        void var_380
        *(&var_380 + rax_5) = rdx_31
        void var_160
        int64_t rdx_32 = *(&var_160 + rax_5)
        
        if (rdx_32 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1b
        
        void var_378
        *(&var_378 + rax_5) = rdx_32
        void var_158
        int64_t rdx_33 = *(&var_158 + rax_5)
        
        if (rdx_33 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1c
        
        void var_370
        *(&var_370 + rax_5) = rdx_33
        void var_150
        int64_t rdx_34 = *(&var_150 + rax_5)
        
        if (rdx_34 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1d
        
        void var_368
        *(&var_368 + rax_5) = rdx_34
        void var_148
        int64_t rdx_35 = *(&var_148 + rax_5)
        
        if (rdx_35 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1e
        
        void var_360
        *(&var_360 + rax_5) = rdx_35
        void var_140
        int64_t rdx_36 = *(&var_140 + rax_5)
        
        if (rdx_36 == 0 && var_458 == 0x40)
            var_458 = rbx + 0x1f
        
        void var_358
        *(&var_358 + rax_5) = rdx_36
        rbx += 0x20
        rax_5 += 0x100
        
        if (rbx u>= 0x40)
            break
        
        rcx_7 = var_458
    
    AcquireSRWLockExclusive(arg1 + 0x48)
    int64_t rsi_1 = sx.q(*(arg1 + 0xa8))
    int64_t rdi_2 = sx.q(*(arg1 + 0xa8))
    int32_t result_1 = rsi_1.d
    int32_t rax_6 = (rdi_2 + 1).d
    *(arg1 + 0xa8) = rax_6
    
    if (rax_6 s> *(arg1 + 0xac))
        sub_140a5a880(arg1 + 0xa0)
    
    int32_t* rax_7 = &var_458
    int64_t i_2 = 4
    int64_t* rdx_39 = rdi_2 * 0x208 + *(arg1 + 0xa0)
    int64_t i_1
    
    do
        rdx_39 = &rdx_39[0x10]
        int128_t zmm0_1 = *rax_7
        int128_t zmm1_1 = *(rax_7 + 0x10)
        rax_7 = &rax_7[0x20]
        *(rdx_39 - 0x80) = zmm0_1
        zmm0_1 = *(rax_7 - 0x60)
        *(rdx_39 - 0x70) = zmm1_1
        zmm1_1 = *(rax_7 - 0x50)
        *(rdx_39 - 0x60) = zmm0_1
        zmm0_1 = *(rax_7 - 0x40)
        *(rdx_39 - 0x50) = zmm1_1
        zmm1_1 = *(rax_7 - 0x30)
        *(rdx_39 - 0x40) = zmm0_1
        zmm0_1 = *(rax_7 - 0x20)
        *(rdx_39 - 0x30) = zmm1_1
        zmm1_1 = *(rax_7 - 0x10)
        *(rdx_39 - 0x20) = zmm0_1
        *(rdx_39 - 0x10) = zmm1_1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    *rdx_39 = *rax_7
    int64_t var_468_1 = rsi_1 * 0x208 + *(arg1 + 0xa0) + 8
    sub_140a55840(arg1 + 0x50, &var_470, &result_1)
    ReleaseSRWLockExclusive(arg1 + 0x48)
    result = zx.q(result_1)
else
    int32_t result_2 = *rax_4
    ReleaseSRWLockShared(arg1 + 0x48)
    result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_498)
return result
