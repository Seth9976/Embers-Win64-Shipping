// 函数: sub_141a3e2b0
// 地址: 0x141a3e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
int128_t* r15 = arg1
void* rax_3 = (*(*arg3 + 8))(arg3)
int32_t var_4c = 8
int64_t var_58 = 0
int32_t var_50 = 0
void var_218
sub_141a30390(&var_218)
int128_t zmm0 = *r15
int64_t* var_310 = rax_3 + 0xd0
void var_78
void* var_318 = &var_78
int128_t var_300 = zmm0
int128_t var_2e0 = zmm0
int32_t var_5c4 = 0
int32_t var_5bc = 0
int64_t var_2e8 = 2.q
int64_t* var_308 = arg3
int32_t var_2b8 = 0x3f800000
int128_t var_2d0 = 2.q.o
char var_2c0 = 0
int32_t var_2b4 = 0
int32_t var_2b0 = 0
int64_t var_2a8
__builtin_memset(&var_2a8, 0, 0x24)
sub_141a4e430(arg2, &var_318, &var_218)
int32_t var_5c4_1 = 0
uint64_t var_5b8 = 2.q
int64_t var_460 = -1
int64_t var_458
__builtin_memset(&var_458, 0, 0x40)
int32_t var_5bc_1 = 0
uint64_t var_5b0 = 2.q
char var_5c8_1
var_5c8_1.q = -1
uint128_t var_478 = var_5b8.o
int64_t var_468 = -1
var_5b8 = *(rax_3 + 0xa0)
var_5b0.d = *(rax_3 + 0xa8)
uint128_t var_418 = var_5b8.o
sub_141a5bd40(r15, &var_418, &var_478)
uint64_t rsi = *r15
uint128_t var_570
sub_141a2ff30(&var_570, &var_478, rsi)
int128_t* var_598 = nullptr
int64_t var_590 = 0
label_141a3e4f3:
int64_t var_560
int64_t rdi_1 = var_560

while (true)
    uint64_t var_568
    uint64_t rbx_1 = var_568
    
    while (true)
        int64_t var_448
        int64_t var_438
        int64_t var_428
        
        if ((rdi_1.d != 0xffffffff || var_560:4.d == 0) && rsi.b != 2)
            uint128_t* r9_4
            
            if (rdi_1.d != 0xffffffff)
            label_141a3e531:
                r9_4 = ((sx.q(*(var_458 + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                    + var_448
            label_141a3e563:
                
                if (r9_4 != 0)
                    int64_t r11_1
                    
                    while (true)
                        r11_1 = sx.q(*(r9_4 + 0x1c))
                        int64_t* rax_19
                        
                        if (r11_1.d == 0xffffffff)
                            int64_t var_378 = 0
                            rax_19 = &var_378
                            int32_t var_370_1 = 0
                        else
                            int64_t r8_3 = r11_1 * 3
                            int32_t var_380_1 = *(var_438 + (r8_3 << 2) + 4)
                            int64_t var_388
                            rax_19 = &var_388
                            var_388 = var_428 + (sx.q(*(var_438 + (r8_3 << 2))) << 2)
                        
                        if (_mm_bsrli_si128(*rax_19, 8).d s> 0)
                            break
                        
                        if (r9_4[1].d == 0xffffffff && *(r9_4 + 0x14) != 0)
                            goto label_141a3e63d
                        
                        int64_t rdx_4 = r9_4[1].q
                        
                        if (rdx_4.d == 0xffffffff)
                            r9_4 = &var_478
                        else
                            r9_4 = ((sx.q(*(var_458 + sx.q(rdx_4.d) * 0xc))
                                + sx.q((rdx_4 u>> 0x20).d)) << 5) + var_448
                        
                        if (r9_4 == 0)
                            goto label_141a3e63d
                    
                    uint128_t* rax_29
                    
                    if (r11_1.d == 0xffffffff)
                        int64_t var_358 = 0
                        rax_29 = &var_358
                        int32_t var_350_1 = 0
                    else
                        int64_t r8_8 = r11_1 * 3
                        int32_t var_360_1 = *(var_438 + (r8_8 << 2) + 4)
                        int64_t var_368
                        rax_29 = &var_368
                        var_368 = var_428 + (sx.q(*(var_438 + (r8_8 << 2))) << 2)
                    
                    if (_mm_bsrli_si128(*rax_29, 8).d s> 0)
                        if (rbx_1.b == 0)
                            uint32_t var_584_1 = (rbx_1 u>> 0x20).d
                            rsi = 1.q
                        else if (rbx_1.b != 1)
                            char var_588
                            var_588.q = rbx_1
                            rsi = rbx_1
                        else
                            uint32_t var_584_2 = (rbx_1 u>> 0x20).d
                            rsi = 0.q
                        
                        uint128_t* var_558
                        uint128_t* rdx_14
                        
                        if (rdi_1.d != 0xffffffff)
                            rdx_14 = ((sx.q(*(var_558[2].q + sx.q(rdi_1.d) * 0xc))
                                + sx.q((rdi_1 u>> 0x20).d)) << 5) + var_558[3].q
                        else if (var_560:4.d != 0)
                            continue
                        else if (rdi_1.d == rdi_1.d)
                            rdx_14 = var_558
                        else
                            rdx_14 = ((sx.q(*(var_558[2].q + sx.q(rdi_1.d) * 0xc))
                                + sx.q((rdi_1 u>> 0x20).d)) << 5) + var_558[3].q
                        
                        var_5b8.o = *rdx_14
                        uint64_t rax_40 = var_5b0
                        
                        if (rax_40.b == rbx_1.b
                                && (rax_40.b == 2 || (rax_40 u>> 0x20).d == (rbx_1 u>> 0x20).d))
                            int64_t rax_42 = rdx_14[1].q
                            rdx_14.b = 1
                            var_560 = rax_42
                            sub_141a58090(&var_570, rdx_14.b)
                            goto label_141a3e4f3
                        
                        char rdx_15 = var_570.b
                        
                        if (rdx_15 == 2 || rbx_1.b == 2)
                        label_141a3e832:
                            
                            if (rbx_1.b != 0)
                            label_141a3e84a:
                                char var_580
                                
                                if (rbx_1.b != 1)
                                    var_580.q = rbx_1
                                else
                                    uint32_t var_57c_2 = (rbx_1 u>> 0x20).d
                                    rbx_1 = 0.q
                            else
                                uint32_t var_57c_1 = (rbx_1 u>> 0x20).d
                                rbx_1 = 1.q
                        else
                            int32_t rax_43 = var_570:4.d
                            int32_t temp0_3 = var_568:4.d
                            int32_t var_4c4_1
                            
                            if (rax_43 s> temp0_3)
                                var_4c4_1 = 0
                                rbx_1 = 2.q
                            else
                                if (rax_43 != temp0_3)
                                    goto label_141a3e832
                                
                                if (rdx_15 != 0 && rbx_1.b != 0)
                                    goto label_141a3e84a
                                
                                var_4c4_1 = 0
                                rbx_1 = 2.q
                        
                        int64_t var_4b0
                        sub_141a4b4f0(&var_570, &var_4b0, rdi_1, rbx_1, 1)
                        int64_t rax_44 = var_4b0
                        
                        while (true)
                            uint128_t* r8_13
                            
                            if (rax_44.d != 0xffffffff)
                                r8_13 = ((sx.q(*(var_558[2].q + sx.q(rax_44.d) * 0xc))
                                    + sx.q((rax_44 u>> 0x20).d)) << 5) + var_558[3].q
                            else
                                if ((rax_44 u>> 0x20).d != 0)
                                    break
                                
                                if (rax_44.d == rax_44.d)
                                    r8_13 = var_558
                                else
                                    r8_13 = ((sx.q(*(var_558[2].q + sx.q(rax_44.d) * 0xc))
                                        + sx.q((rax_44 u>> 0x20).d)) << 5) + var_558[3].q
                            
                            var_5b8.o = *r8_13
                            uint64_t rcx_29 = var_5b8
                            
                            if (rcx_29.b != rbx_1.b)
                                break
                            
                            if (rcx_29.b != 2 && (rcx_29 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                                break
                            
                            var_560 = rax_44
                            rdi_1 = rax_44
                            int32_t var_258
                            rax_44 = *sub_141a4b4f0(&var_570, &var_258, rax_44, rbx_1, 1)
                            var_4b0 = rax_44
                        
                        uint128_t* r8_18
                        
                        if (rdi_1.d == 0xffffffff)
                            r8_18 = var_558
                        else
                            r8_18 = ((sx.q(*(var_558[2].q + sx.q(rdi_1.d) * 0xc))
                                + sx.q((rdi_1 u>> 0x20).d)) << 5) + var_558[3].q
                        
                        var_5b8.o = *r8_18
                        uint64_t rcx_37 = var_5b0
                        uint128_t* r9_13
                        
                        if (rax_44.d != 0xffffffff)
                        label_141a3e96d:
                            r9_13 = ((sx.q(*(var_558[2].q + sx.q(rax_44.d) * 0xc))
                                + sx.q((rax_44 u>> 0x20).d)) << 5) + var_558[3].q
                        label_141a3e993:
                            uint128_t zmm0_2 = *r9_13
                            var_5b8.o = zmm0_2
                            uint64_t rax_47 = var_5b8
                            
                            if (rax_47.b != rbx_1.b)
                            label_141a3e9b8:
                                var_5b8.o = zmm0_2
                                rcx_37 = var_5b8
                                
                                if (rcx_37.b == 0)
                                    uint32_t var_574_1 = (rcx_37 u>> 0x20).d
                                    rcx_37 = 1.q
                                else
                                    char var_578
                                    
                                    if (rcx_37.b != 1)
                                        var_578.q = rcx_37
                                    else
                                        uint32_t var_574_2 = (rcx_37 u>> 0x20).d
                                        rcx_37 = 0.q
                            else if (rax_47.b != 2 && (rax_47 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                                goto label_141a3e9b8
                        else if ((rax_44 u>> 0x20).d == 0)
                            if (rax_44.d != rax_44.d)
                                goto label_141a3e96d
                            
                            r9_13 = var_558
                            goto label_141a3e993
                        uint64_t var_340_1 = rcx_37
                        var_570 = rbx_1.o
                        break
            else if ((rdi_1 u>> 0x20).d == 0)
                if (rdi_1.d != rdi_1.d)
                    goto label_141a3e531
                
                r9_4 = &var_478
                goto label_141a3e563
        label_141a3e63d:
            uint128_t var_550 = var_570
            int128_t var_250
            void var_1d8
            sub_141a2ff30(&var_250, &var_1d8, rsi)
            int128_t var_338
            void var_178
            sub_141a2ff30(&var_338, &var_178, rsi)
            int128_t var_3f0
            sub_141a2ff30(&var_3f0, &var_218, rsi)
            int128_t zmm1_1 = var_3f0
            int64_t r8_7 = var_3f0:8.q
            int64_t rdx_9 = zmm1_1.q
            var_5b8.o = var_338
            int128_t var_4c0 = zmm1_1
            uint32_t rax_25
            uint32_t rcx_13
            
            if (rdx_9.b != 2 && r8_7.b != 2)
                rax_25 = (rdx_9 u>> 0x20).d
                rcx_13 = (r8_7 u>> 0x20).d
            
            int64_t rax_26
            uint64_t rcx_14
            
            if (rdx_9.b != 2 && r8_7.b != 2
                    && (rax_25 s> rcx_13 || (rax_25 == rcx_13 && (rdx_9.b == 0 || r8_7.b == 0))))
                int32_t var_49c_1 = 0
                rcx_14 = 0.q
                int32_t var_4a4_1 = 0
                rax_26 = 0.q
            else
                rax_26 = var_338.q
                int64_t rcx_40 = var_338:8.q
                uint32_t r9_15
                uint32_t r10_2
                
                if (rax_26.b != 2 && rcx_40.b != 2)
                    r9_15 = (rax_26 u>> 0x20).d
                    r10_2 = (rcx_40 u>> 0x20).d
                
                if (rax_26.b != 2 && rcx_40.b != 2 &&
                        (r9_15 s> r10_2 || (r9_15 == r10_2 && (rax_26.b == 0 || rcx_40.b == 0))))
                    int32_t var_48c_1 = 0
                    rcx_14 = 0.q
                    int32_t var_494_1 = 0
                    rax_26 = 0.q
                else
                    uint64_t* rcx_41
                    
                    if (r8_7.b == 2)
                        rcx_41 = &var_5b0
                    else if (rcx_40.b != 2)
                        uint32_t rcx_42 = (rcx_40 u>> 0x20).d
                        uint32_t r9_17 = (r8_7 u>> 0x20).d
                        
                        if (r9_17 s< rcx_42)
                            rcx_41 = &var_4c0:8
                        else if (r9_17 s<= rcx_42)
                            rcx_41 = &var_4c0:8
                            
                            if (r8_7.b != 0)
                                rcx_41 = &var_5b0
                        else
                            rcx_41 = &var_5b0
                    else
                        rcx_41 = &var_4c0:8
                    
                    if (rdx_9.b != 2)
                        if (rax_26.b != 2)
                            uint32_t r8_21 = (rdx_9 u>> 0x20).d
                            uint32_t r9_19 = (rax_26 u>> 0x20).d
                            
                            if (r8_21 s> r9_19)
                                rax_26 = rdx_9
                            else if (r8_21 s>= r9_19 && rdx_9.b == 0)
                                rax_26 = rdx_9
                        else
                            rax_26 = rdx_9
                    
                    rcx_14 = *rcx_41
            
            int128_t zmm0_3 = var_250
            int64_t r8_22 = var_250:8.q
            int64_t var_540_1 = rax_26
            int64_t rdx_29 = zmm0_3.q
            uint64_t var_538 = rcx_14
            var_5b8.o = zmm0_3
            uint32_t r9_21
            uint32_t r10_4
            
            if (rdx_29.b != 2 && r8_22.b != 2)
                r9_21 = (rdx_29 u>> 0x20).d
                r10_4 = (r8_22 u>> 0x20).d
            
            uint64_t rcx_43
            
            if (rdx_29.b != 2 && r8_22.b != 2
                    && (r9_21 s> r10_4 || (r9_21 == r10_4 && (rdx_29.b == 0 || r8_22.b == 0))))
                int32_t var_50c_1 = 0
                rcx_43 = 0.q
                int32_t var_484_1 = 0
                rax_26 = 0.q
            else
                uint32_t r9_23
                uint32_t r10_6
                
                if (rax_26.b != 2 && rcx_14.b != 2)
                    r9_23 = (rax_26 u>> 0x20).d
                    r10_6 = (rcx_14 u>> 0x20).d
                
                if (rax_26.b != 2 && rcx_14.b != 2 &&
                        (r9_23 s> r10_6 || (r9_23 == r10_6 && (rax_26.b == 0 || rcx_14.b == 0))))
                    int32_t var_4fc_1 = 0
                    rcx_43 = 0.q
                    int32_t var_504_1 = 0
                    rax_26 = 0.q
                else
                    uint64_t* rcx_44
                    
                    if (r8_22.b == 2)
                        rcx_44 = &var_538
                    else if (rcx_14.b != 2)
                        uint32_t rcx_45 = (rcx_14 u>> 0x20).d
                        uint32_t r9_25 = (r8_22 u>> 0x20).d
                        
                        if (r9_25 s< rcx_45)
                            rcx_44 = &var_5b0
                        else if (r9_25 s<= rcx_45)
                            rcx_44 = &var_5b0
                            
                            if (r8_22.b != 0)
                                rcx_44 = &var_538
                        else
                            rcx_44 = &var_538
                    else
                        rcx_44 = &var_5b0
                    
                    if (rdx_29.b != 2)
                        if (rax_26.b != 2)
                            uint32_t r8_24 = (rax_26 u>> 0x20).d
                            uint32_t r9_27 = (rdx_29 u>> 0x20).d
                            
                            if (r9_27 s> r8_24)
                                rax_26 = rdx_29
                            else if (r9_27 s>= r8_24 && rdx_29.b == 0)
                                rax_26 = rdx_29
                        else
                            rax_26 = rdx_29
                    
                    rcx_43 = *rcx_44
            
            int64_t rdx_30 = var_550.q
            int64_t rdi_2 = var_550:8.q
            uint32_t r10_7 = var_550:0xc.d
            int32_t r11_2 = var_550:4.d
            int64_t var_530_1 = rax_26
            uint64_t var_528 = rcx_43
            var_4c0.q = rdi_2
            uint64_t rbx_4
            
            if (rdx_30.b == 2 || rdi_2.b == 2
                    || (r11_2 s<= r10_7 && (r11_2 != r10_7 || (rdx_30.b != 0 && rdi_2.b != 0))))
                uint32_t r8_26
                uint32_t r9_29
                
                if (rax_26.b != 2 && rcx_43.b != 2)
                    r8_26 = (rax_26 u>> 0x20).d
                    r9_29 = (rcx_43 u>> 0x20).d
                
                if (rax_26.b != 2 && rcx_43.b != 2 &&
                        (r8_26 s> r9_29 || (r8_26 == r9_29 && (rax_26.b == 0 || rcx_43.b == 0))))
                    int32_t var_4dc_1 = 0
                    rbx_4 = 0.q
                    int32_t var_4e4_1 = 0
                    rax_26 = 0.q
                else
                    uint64_t* rbx_5
                    
                    if (rdi_2.b == 2)
                        rbx_5 = &var_528
                    else if (rcx_43.b != 2)
                        rcx_43 u>>= 0x20
                        
                        if (r10_7 s< rcx_43.d)
                            rbx_5 = &var_550:8
                        else if (r10_7 s<= rcx_43.d)
                            rbx_5 = &var_550:8
                            
                            if (rdi_2.b != 0)
                                rbx_5 = &var_528
                        else
                            rbx_5 = &var_528
                    else
                        rbx_5 = &var_550:8
                    
                    if (rdx_30.b != 2)
                        if (rax_26.b != 2)
                            rcx_43 = rax_26 u>> 0x20
                            
                            if (r11_2 s> rcx_43.d)
                                rax_26 = rdx_30
                            else if (r11_2 s>= rcx_43.d && rdx_30.b == 0)
                                rax_26 = rdx_30
                        else
                            rax_26 = rdx_30
                    
                    rbx_4 = *rbx_5
            else
                int32_t var_4ec_1 = 0
                rbx_4 = 0.q
                int32_t var_4f4_1 = 0
                rax_26 = 0.q
            
            uint64_t var_518_1 = rbx_4
            
            if (rax_26.b == 2 || rbx_4.b == 2)
            label_141a3ed27:
                bool r8_27 = *r15
                
                if (r8_27 == 2)
                label_141a3ed67:
                    
                    if (rbx_4.b == 2 || r8_27 == 2)
                        rcx_43.b = 1
                    else
                        rcx_43.b = 0
                    
                    if (rax_26.b == 2 || *(r15 + 8) == 2)
                        r11_2.b = 1
                    else
                        r11_2.b = 0
                    
                    r10_7.b = 1
                    bool r9_31 = true
                    
                    if (rcx_43.b == 0)
                        int32_t rdx_33 = *(r15 + 4)
                        uint32_t rcx_49 = (rbx_4 u>> 0x20).d
                        r10_7.b = rcx_49 s> rdx_33
                        rcx_49.b = rcx_49 s>= rdx_33
                        
                        if (rbx_4.b != 1 || r8_27 != 1)
                            rdx_33.b = 0
                        else
                            rdx_33 = 1
                        
                        r10_7 = zx.d(r10_7.b)
                        
                        if (rdx_33.b != 0)
                            r10_7 = zx.d(rcx_49.b)
                    
                    if (r11_2.b == 0)
                        int32_t rdx_34 = *(r15 + 0xc)
                        uint32_t rcx_52 = (rax_26 u>> 0x20).d
                        r8_27 = rcx_52 s< rdx_34
                        rdx_34.b = rcx_52 s<= rdx_34
                        
                        if (rax_26.b != 1 || *(r15 + 8) != rax_26.b)
                            rcx_52.b = 0
                        else
                            rcx_52 = zx.d(rax_26.b)
                        
                        r9_31 = r8_27
                        
                        if (rcx_52.b != 0)
                            r9_31 = rdx_34.b
                    
                    if (r10_7.b != 0 && r9_31 != 0)
                        bool cond:20_1 = var_590:4.d s>= 0
                        var_590.d = 0
                        
                        if (not(cond:20_1))
                            sub_1405c5660(&var_598, 0)
                        
                        int64_t var_240
                        sub_141a2e8d0(&var_5b8, &var_1d8, var_240)
                        zmm1_1 = var_5b8.o
                        sub_141a2e8d0(&var_3f0, zmm1_1.q, -1)
                        void* i_1 = zmm1_1.q
                        int32_t var_5a8
                        int32_t r15_1 = var_5a8
                        void* const i = zmm1_1:8.q
                        int32_t rdi_3 = var_590.d
                        int32_t var_3e0
                        
                        while (i_1 != var_3f0.q || i != var_3f0:8.q || r15_1 != var_3e0)
                            int64_t rax_50 = sx.q(*(i + 0x1c))
                            int64_t* rax_54
                            
                            if (rax_50.d == 0xffffffff)
                                int64_t var_3a8 = 0
                                rax_54 = &var_3a8
                                int32_t var_3a0_1 = 0
                            else
                                int64_t rdx_37 = *(i_1 + 0x40)
                                int64_t r8_29 = rax_50 * 3
                                int32_t var_3b0_1 = *(rdx_37 + (r8_29 << 2) + 4)
                                int64_t var_3b8
                                rax_54 = &var_3b8
                                var_3b8 = *(i_1 + 0x50) + sx.q(*(rdx_37 + (r8_29 << 2))) * 0x28
                            
                            int64_t r13_1 = sx.q(rdi_3)
                            int64_t rdx_38 = (*rax_54).q
                            var_550.q = rdx_38
                            rdi_3 = (r13_1 + 1).d
                            int64_t r12_2 = sx.q(r15_1) * 5
                            var_590.d = rdi_3
                            
                            if (rdi_3 s> var_590:4.d)
                                sub_1405c4ec0(&var_598)
                                rdx_38 = var_550.q
                                rdi_3 = var_590.d
                            
                            int128_t* rax_56 = var_598
                            int64_t rcx_60 = r13_1 * 5
                            r15_1 += 1
                            *(rax_56 + (rcx_60 << 3)) = *(rdx_38 + (r12_2 << 3))
                            *(rax_56 + (rcx_60 << 3) + 0x10) = *(rdx_38 + (r12_2 << 3) + 0x10)
                            *(rax_56 + (rcx_60 << 3) + 0x20) = *(rdx_38 + (r12_2 << 3) + 0x20)
                            
                            do
                                int64_t rax_57 = sx.q(*(i + 0x1c))
                                uint128_t* rax_61
                                
                                if (rax_57.d == 0xffffffff)
                                    var_418.q = 0
                                    rax_61 = &var_418
                                    var_418:8.d = 0
                                else
                                    int64_t rdx_40 = *(i_1 + 0x40)
                                    int64_t r8_30 = rax_57 * 3
                                    int32_t var_390_1 = *(rdx_40 + (r8_30 << 2) + 4)
                                    int64_t var_398
                                    rax_61 = &var_398
                                    var_398 = *(i_1 + 0x50) + sx.q(*(rdx_40 + (r8_30 << 2))) * 0x28
                                
                                var_5b8.o = *rax_61
                                
                                if (r15_1 s>= 0 && r15_1 s< var_5b0.d)
                                    break
                                
                                if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
                                    int64_t rdx_41 = *(i + 0x10)
                                    
                                    if (rdx_41.d == 0xffffffff)
                                        i = i_1
                                    else
                                        i = ((sx.q(*(*(i_1 + 0x20) + sx.q(rdx_41.d) * 0xc))
                                            + sx.q((rdx_41 u>> 0x20).d)) << 5) + *(i_1 + 0x30)
                                else
                                    i = nullptr
                                
                                r15_1 = 0
                            while (i != 0)
                        
                        var_550.q = sub_141a69d40
                        sub_141a2e4b0(var_598, rdi_3, &var_550)
                        int64_t var_108
                        __builtin_memset(&var_108, 0, 0x6c)
                        int128_t var_118 = rax_26.o
                        int32_t var_9c_1 = 0x80
                        int32_t var_98_1 = 0xffffffff
                        int32_t var_94_1 = 0
                        int64_t var_88_1 = 0
                        int32_t var_80_1 = 0
                        sub_141a5bbe0(&var_118, &var_598)
                        int64_t var_328
                        int128_t var_230
                        sub_141a2e9f0(&var_230, &var_178, var_328)
                        int128_t var_278 = var_230
                        int64_t var_220
                        int64_t var_268_1 = var_220
                        char var_5d8
                        var_5d8.q = &var_278
                        sub_141a5bf60(&var_118, rax_3 + 0xd0, arg3, &var_598)
                        int64_t var_e8
                        sub_141a55140(rax_3 + 0xa0, &var_118, &var_108, &var_e8)
                        int64_t rdi_4 = var_4c0.q
                        
                        if (rbx_4.b == 0)
                            uint32_t var_5bc_2 = (rbx_4 u>> 0x20).d
                            rsi = 1.q
                        else if (rbx_4.b != 1)
                            char var_5c0_1
                            var_5c0_1.q = rbx_4
                            rsi = rbx_4
                        else
                            uint32_t var_5bc_3 = (rbx_4 u>> 0x20).d
                            rsi = 0.q
                        
                        if (rbx_4.b == rdi_4.b
                                && (rbx_4.b == 2 || (rbx_4 u>> 0x20).d == (rdi_4 u>> 0x20).d))
                            if (rbx_4.b == 0)
                                uint32_t var_5c4_2 = (rbx_4 u>> 0x20).d
                                rsi = 1.q
                            else if (rbx_4.b != 1)
                                var_5c8_1.q = rbx_4
                                rsi = rbx_4
                            else
                                uint32_t var_5c4_3 = (rbx_4 u>> 0x20).d
                                rsi = 0.q
                            
                            sub_141a58090(&var_570, 1)
                        
                        int64_t var_c8
                        sub_1405ae180(&var_c8)
                        int64_t var_d8
                        
                        if (var_d8 != 0)
                            sub_140a74f90(var_d8)
                        
                        int64_t rcx_72 = var_e8
                        
                        if (rcx_72 != 0)
                            sub_140a74f90(rcx_72)
                        
                        int64_t var_f8
                        
                        if (var_f8 != 0)
                            sub_140a74f90(var_f8)
                        
                        int64_t rcx_74 = var_108
                        
                        if (rcx_74 == 0)
                            r15 = arg1
                            goto label_141a3e4f3
                        
                        sub_140a74f90(rcx_74)
                        r15 = arg1
                        goto label_141a3e4f3
                else
                    char r9_30 = *(r15 + 8)
                    
                    if (r9_30 == 2)
                        goto label_141a3ed67
                    
                    rcx_43 = zx.q(*(r15 + 4))
                    int32_t temp1_1 = *(r15 + 0xc)
                    
                    if (rcx_43.d s<= temp1_1)
                        if (rcx_43.d != temp1_1)
                            goto label_141a3ed67
                        
                        if (r8_27 != 0 && r9_30 != 0)
                            goto label_141a3ed67
            else
                rcx_43 = rax_26 u>> 0x20
                uint32_t rdx_32 = (rbx_4 u>> 0x20).d
                
                if (rcx_43.d s<= rdx_32)
                    if (rcx_43.d != rdx_32)
                        goto label_141a3ed27
                    
                    if (rax_26.b != 0 && rbx_4.b != 0)
                        goto label_141a3ed27
        
        int128_t* rcx_75 = var_598
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
        
        if (var_428 != 0)
            sub_140a74f90(var_428)
        
        if (var_438 != 0)
            sub_140a74f90(var_438)
        
        if (var_448 != 0)
            sub_140a74f90(var_448)
        
        int64_t rcx_79 = var_458
        
        if (rcx_79 != 0)
            sub_140a74f90(rcx_79)
        
        int64_t var_298
        
        if (var_298 != 0)
            sub_140a74f90(var_298)
        
        int64_t rcx_81 = var_2a8
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
        
        int64_t result = sub_141a32e20(&var_218)
        
        if (var_58 != 0)
            result = sub_140a74f90(var_58)
        
        __security_check_cookie(rax_1 ^ &var_5f8)
        return result
