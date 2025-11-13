// 函数: sub_1426ea0d0
// 地址: 0x1426ea0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
int64_t* rsi = arg1
uint128_t var_3f8
sub_14265ad90(&var_3f8, arg1, arg2, *(arg3 + 8))
int32_t rax_3 = arg5[1].d
int64_t var_588 = 0
int64_t var_580 = 0

if (rax_3 s> 0)
    sub_1408cf3a0(&var_588, rax_3)
    rax_3 = arg5[1].d

void* rdi = *arg5
void* r15 = rdi + sx.q(rax_3) * 0x18
uint128_t zmm0_1

if (rdi != r15)
    do
        int64_t rsi_1 = sx.q(var_580.d)
        int32_t var_440_1 = arg4[1].d
        int32_t rax_6 = *(rdi + 8)
        int32_t var_434_1 = rax_6
        int32_t rax_7 = (rsi_1 + 1).d
        uint64_t var_448_1 = *arg4
        zmm0_1 = zx.o(*rdi)
        uint64_t var_43c_1 = zmm0_1.q
        uint64_t var_430_1 = zmm0_1.q
        int64_t var_420_1 = 0
        char var_418_1 = 0
        var_580.d = rax_7
        
        if (rax_7 s> var_580:4.d)
            sub_1407c3b60(&var_588)
        
        rdi += 0x18
        uint128_t* rcx_5 = rsi_1 * 0x38 + var_588
        *rcx_5 = var_448_1.o
        rcx_5[1] = var_43c_1:4.o
        rcx_5[2] = rax_6.o
        rcx_5[3].q = var_418_1.q
    while (rdi != r15)
    
    rsi = arg1

zmm0_1 = var_3f8
uint128_t var_3e8 = zmm0_1
void* rax_8 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_8 != 0)
    *(rax_8 + 8) += 1

uint64_t result = (*(*rsi + 0x6e8))(rsi, &var_588, &var_3e8, 0)
arg5[1].d = 0

if (*(arg5 + 0xc) s<= 0xffffffff)
    result = sub_1405a5130(arg5, 0)

int32_t i = var_580.d
void* r13 = nullptr
void* var_570 = nullptr
int32_t i_9 = 0
int64_t var_568 = 0
int32_t r15_1 = 0
int32_t var_578 = 0

if (i s> 0)
    int64_t rsi_2 = 0
    uint64_t var_59c
    
    do
        int64_t r14_1 = var_588
        
        if (*(r14_1 + rsi_2 + 0x30) == 0)
            int64_t r12_1 = sx.q(arg5[1].d)
            int32_t rax_12 = (r12_1 + 1).d
            arg5[1].d = rax_12
            
            if (rax_12 s> *(arg5 + 0xc))
                sub_1405a4df0(arg5)
            
            int64_t rdx_7 = *arg5
            int64_t rcx_12 = r12_1 * 3
            *(rdx_7 + (rcx_12 << 3)) = *(rsi_2 + r14_1 + 0x18)
            *(rdx_7 + (rcx_12 << 3) + 0x10) = *(rsi_2 + r14_1 + 0x28)
        else
            if (r15_1 == i_9 && i s> r15_1)
                sub_1405a5130(&var_570, i)
                r14_1 = var_588
                r15_1 = var_568:4.d
                i_9 = var_568.d
                r13 = var_570
            
            uint64_t var_5a8_1 = *(r14_1 + rsi_2 + 0x18)
            int32_t var_5a0_1 = *(r14_1 + rsi_2 + 0x20)
            int64_t i_10 = sx.q(i_9)
            var_59c = *(r14_1 + rsi_2 + 0xc)
            int32_t var_594_1 = *(r14_1 + rsi_2 + 0x14)
            i_9 = (i_10 + 1).d
            var_568.d = i_9
            
            if (i_9 s> r15_1)
                sub_1405a4df0(&var_570)
                r15_1 = var_568:4.d
                i_9 = var_568.d
                r13 = var_570
            
            int64_t rcx_10 = i_10 * 3
            *(r13 + (rcx_10 << 3)) = var_5a8_1.o
            *(r13 + (rcx_10 << 3) + 0x10) = var_59c
        
        rsi_2 += 0x38
        i = var_580.d
        result = zx.q(var_578 + 1)
        var_578 = result.d
    while (result.d s< i)
    
    if (i_9 s> 0)
        int32_t rax_14
        int128_t zmm6_1
        rax_14, zmm6_1 = sub_141ffde90(zx.d(*(arg3 + 0x28)))
        int32_t zmm2_1 = *(arg3 + 0x20)
        uint64_t zmm1_2 = *(arg3 + 0x1c)
        TEB* gsbase
        int64_t rcx_15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        int32_t var_528 = *(arg3 + 0x18)
        int32_t var_524_1 = zmm1_2.d
        int32_t var_520_1 = zmm2_1
        
        if (data_143f722b0 s> *(0x14 + rcx_15))
            _Init_thread_header(&data_143f722b0)
            
            if (data_143f722b0 == 0xffffffff)
                zmm6_1 = sub_140b58170(&data_143f722a8, "EnvQueryTrace", 1)
                _Init_thread_footer(&data_143f722b0)
        
        void var_590
        void var_c8
        sub_141eb54c0(&var_c8, data_143f722a8, &var_590, *(arg3 + 0x2c) & 1, nullptr)
        sub_141eb8b70(&var_c8, arg6)
        void* var_168
        result = sub_1426c5200(&var_168, (*(*arg1 + 0x150))(arg1), rax_14, &var_c8, &var_528, arg7)
        uint32_t rcx_20 = zx.d(*(arg3 + 0x2a))
        char var_5d0_1
        void var_150
        int32_t var_e0
        char var_dc
        
        if (rcx_20 == 0)
            if (i_9 s> 0)
                void* rsi_7 = r13
                uint64_t i_8 = zx.q(i_9)
                int64_t* r14_5 = r13 + 0xc
                uint64_t i_1
                
                do
                    uint64_t var_548 = *rsi_7
                    int32_t rax_32 = *(rsi_7 + 8)
                    uint64_t var_538 = *(rsi_7 + 0xc)
                    int32_t var_530_1 = rax_32.d
                    void var_1f8
                    memset(&var_1f8, 0, 0x88)
                    var_5d0_1.q = &var_150
                    int64_t* var_5d8_2
                    var_5d8_2.d = var_e0
                    int32_t var_1f0_1 = 0x3f800000
                    result = sub_141ec6a20(var_168, &var_1f8, &var_548, r14_5, var_5d8_2.b, 
                        var_5d0_1, &data_143f3a660)
                    int64_t var_1e8
                    uint64_t var_498 = var_1e8
                    int32_t var_1e0
                    int32_t var_490_1 = var_1e0
                    
                    if (result.b != 0 || var_dc != 1)
                        int64_t rdi_4 = sx.q(arg5[1].d)
                        uint64_t* rcx_46 = &var_498
                        var_59c = 0
                        
                        if (result.b == 0)
                            rcx_46 = &var_538
                        
                        int32_t var_5a0_5 = rcx_46[1].d
                        int32_t rax_35 = (rdi_4 + 1).d
                        uint64_t var_5a8_5 = *rcx_46
                        arg5[1].d = rax_35
                        
                        if (rax_35 s> *(arg5 + 0xc))
                            sub_1405a4df0(arg5)
                        
                        result = *arg5
                        int64_t rcx_48 = rdi_4 * 3
                        *(result + (rcx_48 << 3)) = var_5a8_5.o
                        *(result + (rcx_48 << 3) + 0x10) = var_59c
                    
                    r14_5 = &r14_5[3]
                    rsi_7 += 0x18
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
        else
            float var_160
            float var_158
            
            if (rcx_20 == 1)
                if (i_9 s> 0)
                    int128_t var_48_1 = zmm6_1
                    int64_t* rsi_6 = r13 + 0xc
                    uint64_t i_5 = zx.q(i_9)
                    uint64_t i_2
                    
                    do
                        uint64_t var_560 = *(rsi_6 - 0xc)
                        zmm6_1 = *(rsi_6 - 4)
                        int32_t var_4c0_1 = zmm6_1.d
                        uint64_t var_4c8 = *rsi_6
                        void var_288
                        memset(&var_288, 0, 0x88)
                        int32_t var_15c
                        int32_t var_4b0_1 = var_15c.d
                        zmm1_2.d = (*rsi_6).d f- var_560.d
                        float var_4b4_1 = var_160
                        float var_4ac_1 = var_158
                        float zmm0_6 = *(rsi_6 + 4) f- var_560:4.d
                        int32_t var_4d8 = zmm1_2.d
                        zmm1_2.d = rsi_6[1].d.d f- zmm6_1.d
                        int32_t var_280_1 = 0x3f800000
                        int32_t var_4b8 = 1
                        float var_4d4_1 = zmm0_6
                        int32_t var_4d0_1 = zmm1_2.d
                        void var_3c8
                        float var_3b8[0x4]
                        float (* rax_28)[0x4] =
                            sub_140ade170(sub_140adf3c0(&var_4d8, &var_3c8), &var_3b8)
                        void* rcx_38 = var_168
                        uint64_t var_5b8_3 = &data_143f3a660
                        void* var_5c0_3 = &var_150
                        int32_t* var_5c8_3 = &var_4b8
                        var_5d0_1.d = var_e0
                        float var_3d8[0x4]
                        int128_t* var_5d8_5 = &var_3d8
                        var_3d8 = *rax_28
                        result = sub_141ecd380(rcx_38, &var_288, &var_560, rsi_6, var_5d8_5, 
                            var_5d0_1, var_5c8_3, var_5c0_3, var_5b8_3)
                        int64_t var_278
                        uint64_t var_4a8 = var_278
                        int32_t var_270
                        int32_t var_4a0_1 = var_270
                        
                        if (result.b != 0 || var_dc != 1)
                            int64_t rdi_3 = sx.q(arg5[1].d)
                            uint64_t* rcx_40 = &var_4a8
                            var_59c = 0
                            
                            if (result.b == 0)
                                rcx_40 = &var_4c8
                            
                            int32_t var_5a0_4 = rcx_40[1].d
                            int32_t rax_31 = (rdi_3 + 1).d
                            uint64_t var_5a8_4 = *rcx_40
                            arg5[1].d = rax_31
                            
                            if (rax_31 s> *(arg5 + 0xc))
                                sub_1405a4df0(arg5)
                            
                            result = *arg5
                            int64_t rcx_42 = rdi_3 * 3
                            *(result + (rcx_42 << 3)) = var_5a8_4.o
                            *(result + (rcx_42 << 3) + 0x10) = var_59c
                        
                        rsi_6 = &rsi_6[3]
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
            else if (rcx_20 == 2)
                if (i_9 s> 0)
                    uint64_t i_7 = zx.q(i_9)
                    int64_t* r14_4 = r13 + 0xc
                    void* rsi_5 = r13
                    uint64_t i_3
                    
                    do
                        uint64_t var_4f8 = *rsi_5
                        int32_t rax_22 = *(rsi_5 + 8)
                        uint64_t var_4e8 = *(rsi_5 + 0xc)
                        int32_t var_4e0_1 = rax_22.d
                        void var_318
                        memset(&var_318, 0, 0x88)
                        void* rcx_30 = var_168
                        uint64_t var_5b8_2 = &data_143f3a660
                        void* var_5c0_2 = &var_150
                        float var_40c_1 = var_160
                        int32_t var_410
                        int32_t* var_5c8_2 = &var_410
                        var_5d0_1.d = var_e0
                        int128_t* var_5d8_4 = &data_14399f720
                        int32_t var_310_1 = 0x3f800000
                        var_410 = 2
                        result = sub_141ecd380(rcx_30, &var_318, &var_4f8, r14_4, var_5d8_4, 
                            var_5d0_1, var_5c8_2, var_5c0_2, var_5b8_2)
                        int64_t var_308
                        uint64_t var_458 = var_308
                        int32_t var_300
                        int32_t var_450_1 = var_300
                        
                        if (result.b != 0 || var_dc != 1)
                            int64_t rdi_2 = sx.q(arg5[1].d)
                            uint64_t* rcx_32 = &var_458
                            var_59c = 0
                            
                            if (result.b == 0)
                                rcx_32 = &var_4e8
                            
                            int32_t var_5a0_3 = rcx_32[1].d
                            int32_t rax_25 = (rdi_2 + 1).d
                            uint64_t var_5a8_3 = *rcx_32
                            arg5[1].d = rax_25
                            
                            if (rax_25 s> *(arg5 + 0xc))
                                sub_1405a4df0(arg5)
                            
                            result = *arg5
                            int64_t rcx_34 = rdi_2 * 3
                            *(result + (rcx_34 << 3)) = var_5a8_3.o
                            *(result + (rcx_34 << 3) + 0x10) = var_59c
                        
                        r14_4 = &r14_4[3]
                        rsi_5 += 0x18
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
            else if (rcx_20 == 3 && i_9 s> 0)
                uint64_t i_6 = zx.q(i_9)
                int64_t* r14_3 = r13 + 0xc
                void* rsi_4 = r13
                uint64_t i_4
                
                do
                    uint64_t var_518 = *rsi_4
                    int32_t rax_18 = *(rsi_4 + 8)
                    uint64_t var_508 = *(rsi_4 + 0xc)
                    int32_t var_500_1 = rax_18.d
                    void var_3a8
                    memset(&var_3a8, 0, 0x88)
                    void* rcx_24 = var_168
                    uint64_t var_5b8_1 = &data_143f3a660
                    void* var_5c0_1 = &var_150
                    int32_t var_468
                    int32_t* var_5c8_1 = &var_468
                    var_5d0_1.d = var_e0
                    int128_t* var_5d8_3 = &data_14399f720
                    float var_464_1 = var_160
                    int32_t var_460_1 = var_158.d
                    int32_t var_3a0_1 = 0x3f800000
                    var_468 = 3
                    result = sub_141ecd380(rcx_24, &var_3a8, &var_518, r14_3, var_5d8_3, var_5d0_1, 
                        var_5c8_1, var_5c0_1, var_5b8_1)
                    int64_t var_398
                    uint64_t var_478 = var_398
                    int32_t var_390
                    int32_t var_470_1 = var_390
                    
                    if (result.b != 0 || var_dc != 1)
                        int64_t rdi_1 = sx.q(arg5[1].d)
                        uint64_t* rcx_26 = &var_478
                        var_59c = 0
                        
                        if (result.b == 0)
                            rcx_26 = &var_508
                        
                        int32_t var_5a0_2 = rcx_26[1].d
                        int32_t rax_21 = (rdi_1 + 1).d
                        uint64_t var_5a8_2 = *rcx_26
                        arg5[1].d = rax_21
                        
                        if (rax_21 s> *(arg5 + 0xc))
                            sub_1405a4df0(arg5)
                        
                        result = *arg5
                        int64_t rcx_28 = rdi_1 * 3
                        *(result + (rcx_28 << 3)) = var_5a8_2.o
                        *(result + (rcx_28 << 3) + 0x10) = var_59c
                    
                    r14_3 = &r14_3[3]
                    rsi_4 += 0x18
                    i_4 = i_6
                    i_6 -= 1
                while (i_4 != 1)
        int64_t var_d8
        
        if (var_d8 != 0)
            result = sub_140a74f90(var_d8)
        
        int64_t var_f0
        
        if (var_f0 != 0)
            result = sub_140a74f90(var_f0)
        
        int64_t var_110
        
        if (var_110 != 0)
            result = sub_140a74f90(var_110)
        
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t var_88
        
        if (var_88 != 0)
            result = sub_140a74f90(var_88)
    
    if (r13 != 0)
        result = sub_140a74f90(r13)

int64_t rcx_55 = var_588

if (rcx_55 != 0)
    result = sub_140a74f90(rcx_55)

int64_t* rbx_1 = var_3f8:8.q

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_5 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_5 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_5))

__security_check_cookie(rax_1 ^ &var_5f8)
return result
