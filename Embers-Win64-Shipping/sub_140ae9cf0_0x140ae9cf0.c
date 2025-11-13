// 函数: sub_140ae9cf0
// 地址: 0x140ae9cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int32_t r14 = 0
int16_t* r12 = arg4
void* rsi = arg3
int32_t var_304 = 0

if (*(arg1 + 0xb8) != arg4)
    int32_t rbx_2
    
    if (arg4 == 0 || *arg4 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg4[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rdx = 0
    *(arg1 + 0xc0) = 0
    
    if (*(arg1 + 0xc4) != rbx_2)
        sub_1405947f0(arg1 + 0xb8, rbx_2)
        rdx = *(arg1 + 0xc0)
    
    int32_t rax_2 = rdx + rbx_2
    *(arg1 + 0xc0) = rax_2
    
    if (rax_2 s> *(arg1 + 0xc4))
        sub_140594770(arg1 + 0xb8)
    
    if (rbx_2 != 0)
        memcpy(*(arg1 + 0xb8), r12, rbx_2 * 2)

if (*(arg1 + 0xc8) != arg6)
    int32_t rbx_4
    
    if (arg6 == 0 || *arg6 == 0)
        rbx_4 = 0
    else
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg6[rbx_3] != 0)
        
        rbx_4 = rbx_3.d + 1
    
    int32_t rdx_3 = 0
    *(arg1 + 0xd0) = 0
    
    if (*(arg1 + 0xd4) != rbx_4)
        sub_1405947f0(arg1 + 0xc8, rbx_4)
        rdx_3 = *(arg1 + 0xd0)
    
    int32_t rax_3 = rdx_3 + rbx_4
    *(arg1 + 0xd0) = rax_3
    
    if (rax_3 s> *(arg1 + 0xd4))
        sub_140594770(arg1 + 0xc8)
    
    if (rbx_4 != 0)
        memcpy(*(arg1 + 0xc8), arg6, rbx_4 * 2)

int64_t var_78

if (rsi == 0)
    var_78 = 0
    void var_178
    void* var_70_1 = &var_178
    int32_t var_68_1 = 7
    sub_1405a7220(&var_178, 8, "Windows", 8, 0x3f)
    rsi = var_70_1
    r14 = 1

int64_t var_318 = 0
int32_t rdx_6 = 0
int64_t var_310 = 0
int32_t rcx_7 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_5 = -1
    
    do
        rbx_5 += 1
    while (*(rsi + (rbx_5 << 1)) != 0)
    
    if (rbx_5.d + 1 s> 0)
        sub_1405947f0(&var_318, rbx_5.d + 1)
        rcx_7 = var_310:4.d
        rdx_6 = var_310.d
    
    int32_t rax_4 = rdx_6 + rbx_5.d + 1
    var_310.d = rax_4
    
    if (rax_4 s> rcx_7)
        sub_140594770(&var_318)
    
    UnDecorator::getReferenceType(var_318, rsi, (rbx_5.d + 1) * 2)

if ((r14.b & 1) != 0)
    r14 &= 0xfffffffe
    
    if (var_78 != 0)
        sub_140a74f90(var_78)

int32_t var_354 = 0
int64_t result = 0
int64_t result_1 = 0
int32_t rbx_10

do
    void* r15_3 = &(&data_1439a0370)[result * 4]
    void* var_268_1 = r15_3
    int16_t var_378
    var_378.q = arg6
    char var_358
    char var_355
    int64_t var_240
    sub_140af3ce0(&var_240, r15_3, &var_318, r12, var_378, arg2, &var_358, &var_355)
    int64_t var_1d8
    int32_t rax_7
    
    if ((*(r15_3 + 0x18) & 1) != 0)
        r14 |= 2
        int16_t** rax_6 = sub_140b13890(&var_1d8)
        int16_t* rdx_10
        
        if (rax_6[1].d == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *rax_6
        
        rax_7 = sub_140a54510(r12, rdx_10)
    
    if ((*(r15_3 + 0x18) & 1) == 0 || rax_7 != 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    char var_356_1 = rsi.b
    
    if ((r14.b & 2) != 0)
        int64_t rcx_15 = var_1d8
        r14 &= 0xfffffffd
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    wchar16* rax_8 = wcsstr(*(r15_3 + 8), u"{ED}")
    wchar16* rax_9
    
    if (rax_8 == 0)
        rax_9 = wcsstr(*(r15_3 + 8), u"{EF}")
    
    int32_t var_350
    int64_t var_2c0
    int64_t var_2a8
    
    if (rax_8 != 0 || rax_9 != 0)
        rsi = nullptr
        var_350 = 0
        int64_t rax_18 = 0
        int64_t var_298_1 = 0
        
        do
            int64_t rax_19 = rax_18 * 3
            var_378.d = 0
            int64_t var_348
            sub_140a300d0(&var_240, &var_348, u"{ED}", (&data_14399f950)[rax_19], var_378)
            var_378.d = 0
            int64_t var_1c8
            int64_t* rax_20 =
                sub_140a300d0(&var_348, &var_1c8, {EF}", (&data_14399f958)[rax_19], var_378)
            int32_t var_340
            int32_t var_33c
            
            if (&var_348 != rax_20)
                int64_t rcx_36 = var_348
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
                
                var_348 = *rax_20
                *rax_20 = 0
                var_340 = rax_20[1].d
                var_33c = *(rax_20 + 0xc)
                rax_20[1] = 0
            
            int64_t rcx_38 = var_1c8
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            char rbx_12 = var_358
            int64_t var_338
            int32_t var_330
            int32_t rcx_40
            int64_t rdx_20
            
            if (((*((rax_19 << 3) + 0x14399f960) u>> 2).b & 1) == 0)
                rdx_20 = var_348
                rcx_40 = var_340
                var_338 = rdx_20
                var_348 = 0
                var_330 = rcx_40
                int32_t var_32c_1 = var_33c
                var_340.q = 0
            label_140aea2be:
                
                if (rcx_40 != 0 && rcx_40 != 1)
                    char var_357_1
                    
                    if (((*(r15_3 + 0x18) u>> 3).b & 1) == 0 || rsi.d != 7)
                        var_357_1 = 0
                    else
                        var_357_1 = 1
                    
                    void** rax_29
                    rax_29, arg5 = sub_140b1a910(&var_318, rdx_20, arg5)
                    void** r8_12 = rax_29
                    int32_t rax_31
                    
                    if (rbx_12 == 0)
                        rax_31 = 1
                    else
                        rax_31 = rax_29[1].d + 1
                    
                    int32_t r12_1 = 0
                    
                    if (rax_31 s> 0)
                        int32_t rdx_21 = rax_31 - 1
                        int64_t var_270_1 = 0
                        int64_t rcx_42 = 0
                        int32_t var_304_1 = rdx_21
                        
                        do
                            int64_t* rdi_6
                            
                            if (r12_1 != rdx_21)
                                rdi_6 = *r8_12 + rcx_42
                            else
                                rdi_6 = &var_318
                            
                            int64_t r15_4 = 0
                            int32_t rsi_1 = 0
                            int64_t rcx_54
                            void var_198
                            
                            if (r12_1 s>= rdx_21)
                                int16_t* const r9_7
                                
                                if (rdi_6[1].d == 0)
                                    r9_7 = &data_142d40450
                                else
                                    r9_7 = *rdi_6
                                
                                var_378.d = 0
                                int64_t var_188
                                int64_t* rax_46 =
                                    sub_140a300d0(&var_338, &var_188, {PLATFORM}", r9_7, var_378)
                                
                                if (&var_198 != rax_46)
                                    r15_4 = *rax_46
                                    *rax_46 = 0
                                    rsi_1 = rax_46[1].d
                                    rax_46[1] = 0
                                
                                rcx_54 = var_188
                            else
                                var_378.q = arg6
                                int64_t var_1e8
                                sub_140af3ce0(&var_1e8, var_268_1, rdi_6, arg4, var_378, arg2, 
                                    &var_358, &var_355)
                                var_378.d = 0
                                int64_t var_328
                                sub_140a300d0(&var_1e8, &var_328, {ED}", (&data_14399f950)[rax_19], 
                                    var_378)
                                var_378.d = 0
                                int64_t var_1b8
                                int64_t* rax_36 = sub_140a300d0(&var_328, &var_1b8, {EF}", 
                                    (&data_14399f958)[rax_19], var_378)
                                int32_t var_320
                                int32_t var_31c
                                
                                if (&var_328 != rax_36)
                                    int64_t rcx_46 = var_328
                                    
                                    if (rcx_46 != 0)
                                        sub_140a74f90(rcx_46)
                                    
                                    var_328 = *rax_36
                                    *rax_36 = 0
                                    var_320 = rax_36[1].d
                                    var_31c = *(rax_36 + 0xc)
                                    rax_36[1] = 0
                                
                                int64_t rcx_48 = var_1b8
                                
                                if (rcx_48 != 0)
                                    sub_140a74f90(rcx_48)
                                
                                int64_t var_300
                                int32_t var_2f8
                                
                                if (((*((rax_19 << 3) + 0x14399f960) u>> 2).b & 1) == 0)
                                    var_300 = var_328
                                    var_2f8 = var_320
                                    int32_t var_2f4_1 = var_31c
                                    var_320.q = 0
                                    var_328 = 0
                                else
                                    int64_t rcx_49 = var_328
                                    var_300 = 0
                                    var_2f8.q = 0
                                    
                                    if (rcx_49 != 0)
                                        sub_140a74f90(rcx_49)
                                int16_t* const r9_6
                                
                                if (rdi_6[1].d == 0)
                                    r9_6 = &data_142d40450
                                else
                                    r9_6 = *rdi_6
                                
                                var_378.d = 0
                                int64_t var_1a8
                                int64_t* rax_45 =
                                    sub_140a300d0(&var_300, &var_1a8, {PLATFORM}", r9_6, var_378)
                                
                                if (&var_198 != rax_45)
                                    r15_4 = *rax_45
                                    *rax_45 = 0
                                    rsi_1 = rax_45[1].d
                                    rax_45[1] = 0
                                
                                int64_t rcx_51 = var_1a8
                                
                                if (rcx_51 != 0)
                                    sub_140a74f90(rcx_51)
                                
                                int64_t rcx_52 = var_300
                                
                                if (rcx_52 != 0)
                                    sub_140a74f90(rcx_52)
                                
                                rcx_54 = var_1e8
                            
                            if (rcx_54 != 0)
                                sub_140a74f90(rcx_54)
                            
                            int64_t var_2e0
                            int64_t var_210
                            int64_t var_200
                            int32_t rax_48
                            int64_t* rcx_59
                            
                            if (var_357_1 == 0)
                                int64_t var_208_1 = 0
                                rcx_59 = &var_210
                                rax_48 = 0x10
                            else
                                var_2e0 = 0
                                int32_t rdx_27 = 0
                                int64_t var_2d8_1 = 0
                                int32_t rcx_55 = 0
                                
                                if (arg2 != 0 && *arg2 != 0)
                                    int64_t rbx_15 = -1
                                    
                                    do
                                        rbx_15 += 1
                                    while (arg2[rbx_15] != 0)
                                    
                                    if (rbx_15.d + 1 s> 0)
                                        sub_1405947f0(&var_2e0, rbx_15.d + 1)
                                        rcx_55 = var_2d8_1:4.d
                                        rdx_27 = var_2d8_1.d
                                    
                                    int32_t rax_47 = rdx_27 + rbx_15.d + 1
                                    var_2d8_1.d = rax_47
                                    
                                    if (rax_47 s> rcx_55)
                                        sub_140594770(&var_2e0)
                                    
                                    UnDecorator::getReferenceType(var_2e0, arg2, (rbx_15.d + 1) * 2)
                                
                                int64_t var_1f8_1 = 0
                                rcx_59 = &var_200
                                rax_48 = 0xc
                            
                            r14 |= rax_48
                            *rcx_59 = 0
                            int32_t var_248_1 = rcx_59[1].d
                            int32_t var_244_1 = *(rcx_59 + 0xc)
                            rcx_59[1] = 0
                            int64_t var_250 = 0
                            var_2c0 = 0
                            int32_t var_2b8_2 = rsi_1
                            
                            if (rsi_1 != 0)
                                sub_1405a4c70(&var_2c0, rsi_1, 0)
                                memcpy(var_2c0, r15_4, rsi_1 * 2)
                            else
                                int32_t var_2b4_2 = 0
                            
                            char var_2b0_2 = var_356_1
                            sub_140596d10(&var_2a8, &var_250)
                            int64_t rcx_63 = var_250
                            
                            if (rcx_63 != 0)
                                sub_140a74f90(rcx_63)
                            
                            int32_t var_2cc = (var_354 * 0x64 + rsi.d) * 0x64 + r12_1
                            sub_140ae4830(arg1 + 0x60, &var_2cc, &var_2c0)
                            int64_t rcx_66 = var_2a8
                            
                            if (rcx_66 != 0)
                                sub_140a74f90(rcx_66)
                            
                            int64_t rcx_67 = var_2c0
                            
                            if (rcx_67 != 0)
                                sub_140a74f90(rcx_67)
                            
                            if ((r14.b & 0x10) != 0)
                                int64_t rcx_68 = var_210
                                r14 &= 0xffffffef
                                
                                if (rcx_68 != 0)
                                    sub_140a74f90(rcx_68)
                            
                            if ((r14.b & 8) != 0)
                                int64_t rcx_69 = var_200
                                r14 &= 0xfffffff7
                                
                                if (rcx_69 != 0)
                                    sub_140a74f90(rcx_69)
                            
                            if ((r14.b & 4) != 0)
                                int64_t rax_54 = var_2e0
                                r14 &= 0xfffffffb
                                
                                if (rax_54 != 0)
                                    sub_140a74f90(rax_54)
                            
                            if (r15_4 != 0)
                                sub_140a74f90(r15_4)
                            
                            r12_1 += 1
                            rdx_21 = var_304_1
                            rcx_42 = var_270_1 + 0x10
                            r8_12 = rax_29
                            var_270_1 = rcx_42
                        while (r12_1 s< rax_31)
                        
                        rsi = zx.q(var_350)
                        r15_3 = var_268_1
                    
                    int64_t rcx_73 = var_338
                    
                    if (rcx_73 != 0)
                        sub_140a74f90(rcx_73)
                else if (rdx_20 != 0)
                    sub_140a74f90(rdx_20)
            else
                int64_t rcx_39 = var_348
                var_338 = 0
                var_330.q = 0
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                    rcx_40 = var_330
                    rdx_20 = var_338
                    goto label_140aea2be
            rax_18 = var_298_1 + 1
            rsi = zx.q(rsi.d + 1)
            var_350 = rsi.d
            var_298_1 = rax_18
        while (rsi.d u< 7)
        
        r12 = arg4
        rbx_10 = var_354
    else
        int64_t var_2f0
        int64_t var_230
        int64_t var_220
        int32_t rax_13
        int64_t* rcx_22
        
        if (((*(r15_3 + 0x18) u>> 3).b & 1) == 0)
            int64_t var_228_1 = 0
            rcx_22 = &var_230
            rax_13 = 0x80
        else
            var_2f0 = 0
            int32_t rdx_11 = 0
            int64_t var_2e8_1 = 0
            int32_t rcx_18 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rbx_7 = -1
                
                do
                    rbx_7 += 1
                while (arg2[rbx_7] != 0)
                
                if (rbx_7.d + 1 s> 0)
                    sub_1405947f0(&var_2f0, rbx_7.d + 1)
                    rcx_18 = var_2e8_1:4.d
                    rdx_11 = var_2e8_1.d
                
                int32_t rax_12 = rbx_7.d + 1 + rdx_11
                var_2e8_1.d = rax_12
                
                if (rax_12 s> rcx_18)
                    sub_140594770(&var_2f0)
                
                UnDecorator::getReferenceType(var_2f0, arg2, (rbx_7.d + 1) * 2)
            
            int64_t var_218_1 = 0
            rcx_22 = &var_220
            rax_13 = 0x60
        
        int64_t rdi_4 = var_240
        r14 |= rax_13
        *rcx_22 = 0
        int32_t rax_14 = rcx_22[1].d
        int64_t var_260 = 0
        var_2c0 = 0
        int32_t var_258_1 = rax_14
        int32_t var_254_1 = *(rcx_22 + 0xc)
        rcx_22[1] = 0
        int32_t var_238
        int32_t var_2b8_1 = var_238
        
        if (var_238 != 0)
            sub_1405a4c70(&var_2c0, var_238, 0)
            memcpy(var_2c0, rdi_4, var_238 * 2)
        else
            int32_t var_2b4_1 = var_238
        
        char var_2b0_1 = rsi.b
        sub_140596d10(&var_2a8, &var_260)
        int64_t rcx_26 = var_260
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        rbx_10 = var_354
        var_350 = rbx_10 * 0x2710
        sub_140ae4830(arg1 + 0x60, &var_350, &var_2c0)
        int64_t rcx_29 = var_2a8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = var_2c0
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        if (r14.b s< 0)
            int64_t rcx_31 = var_230
            r14 &= 0xffffff7f
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
        
        if ((r14.b & 0x40) != 0)
            int64_t rcx_32 = var_220
            r14 &= 0xffffffbf
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
        
        if ((r14.b & 0x20) != 0)
            int64_t rax_17 = var_2f0
            r14 &= 0xffffffdf
            
            if (rax_17 != 0)
                sub_140a74f90(rax_17)
    int64_t rcx_75 = var_240
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
    
    result = result_1 + 1
    var_354 = rbx_10 + 1
    result_1 = result
while (rbx_10 + 1 u< 9)
int64_t rcx_76 = var_318

if (rcx_76 != 0)
    result = sub_140a74f90(rcx_76)

__security_check_cookie(rax_1 ^ &var_398)
return result
