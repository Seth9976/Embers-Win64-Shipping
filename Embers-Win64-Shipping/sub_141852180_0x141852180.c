// 函数: sub_141852180
// 地址: 0x141852180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
int64_t var_4a0 = 0
int64_t var_498 = 0
int64_t* var_4d8 = nullptr
int32_t i_14 = 0
char var_578 = 1
int32_t rdx = sub_140a464c0()
int32_t rbx = arg1[1].d
int64_t rdi_1 = *arg1
int16_t* var_4c0 = nullptr
sub_1405a4c70(&var_4c0, sbb.d(rdx, rdx, rbx != 0) + 2 + rbx, 0)
memcpy(var_4c0, rdi_1, rbx * 2)
sub_140a2cf70(&var_4c0, &data_142d40450, 0)
int16_t* const r8_2 = &data_142d40450

if (rbx != 0)
    r8_2 = var_4c0

(*(data_14399ea08 + 0x80))(&data_14399ea08, &var_4d8, r8_2, &data_142d6bbe8, 1, 0, 1)
int16_t* rcx_3 = var_4c0

if (rcx_3 != 0)
    arg5 = sub_140a74f90(rcx_3)

int64_t* rbx_1 = var_4d8
int64_t var_208 = 0
int32_t r15 = 0
int32_t var_200 = 0
int32_t r12 = 0
int64_t* r13 = nullptr
int32_t rsi = 0
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x1c)
int32_t var_1d4 = 0
int64_t var_1c8 = 0
int32_t var_1c0 = 0
int64_t var_1b8
__builtin_memset(&var_1b8, 0, 0x2c)
int32_t var_184 = 0
int64_t var_178 = 0
int32_t var_170 = 0
int64_t* var_510 = nullptr
int64_t var_508 = 0
int64_t* var_568
__builtin_memset(&var_568, 0, 0x30)
void* r14_2 = &rbx_1[sx.q(i_14) * 2]
int32_t var_1dc = 0x80
int32_t var_1d8 = 0xffffffff
int32_t var_18c = 0x80
int32_t var_188 = 0xffffffff
int64_t var_560_1
int64_t* var_558_1
int64_t* var_550_1
int64_t* var_548
int64_t var_540_1

if (rbx_1 != r14_2)
    do
        if (sub_140a237d0(rbx_1, u".chunk", 1) == 0)
            if (sub_140a237d0(rbx_1, u".chunkdb", 1) == 0)
                char rax_11 = sub_140a237d0(rbx_1, u".manifest", 1)
                char rax_12
                
                if (rax_11 == 0)
                    rax_12 = sub_140a237d0(rbx_1, u".delta", 1)
                
                if (rax_11 != 0 || rax_12 != 0)
                    int64_t rdi_4 = sx.q(var_560_1.d)
                    int32_t rax_13 = (rdi_4 + 1).d
                    var_560_1.d = rax_13
                    
                    if (rax_13 s> rsi)
                        sub_1405a4f90(&var_568)
                        rsi = var_560_1:4.d
                        r13 = var_568
                    
                    sub_140596d10(&r13[rdi_4 * 2], rbx_1)
            else
                int64_t rdi_3 = sx.q(var_508.d)
                int32_t rax_10 = (rdi_3 + 1).d
                var_508.d = rax_10
                
                if (rax_10 s> r12)
                    sub_1405a4f90(&var_510)
                    r12 = var_508:4.d
                
                sub_140596d10(&var_510[rdi_3 * 2], rbx_1)
        else
            int64_t rdi_2 = sx.q(var_540_1.d)
            int32_t rax_6 = (rdi_2 + 1).d
            var_540_1.d = rax_6
            int64_t* rcx_8
            
            if (rax_6 s<= r15)
                rcx_8 = &var_558_1[rdi_2 * 2]
            else
                sub_1405a4f90(&var_548)
                int64_t* rax_7 = var_548
                r15 = var_540_1:4.d
                rcx_8 = &rax_7[rdi_2 * 2]
                var_558_1 = rax_7
            
            sub_140596d10(rcx_8, rbx_1)
        
        rbx_1 = &rbx_1[2]
    while (rbx_1 != r14_2)
    
    var_550_1 = r13

void*** rax_14 = j_sub_140a82f30(0x18)
void*** var_518 = rax_14
void*** r12_1 = rax_14

if (rax_14 == 0)
    r12_1 = nullptr
    var_518 = nullptr
else
    *r12_1 = &data_142fe5510
    sub_140a464c0()
    r12_1[1] = &data_14399ea08
    sub_140b6b7d0()
    r12_1[2] = &data_1439a9568

void*** rax_15 = j_sub_140a82f30(0x18)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1] = r12_1
    *rax_15 = &data_142fe5900
    rax_15[2].d = 0x12

int64_t* var_528 = nullptr
int64_t* r15_1 = var_558_1
void* rsi_3 = &r15_1[sx.q(var_540_1.d) * 2]
void*** var_4c8 = rax_15
int64_t var_520 = 0

if (r15_1 != rsi_3)
    do
        int64_t var_3d8
        sub_140596d10(&var_3d8, r15_1)
        int64_t var_118_1 = 0
        void**** var_3c8_1 = &var_4c8
        void*** rax_16 = sub_140a82f30(0x28, 8)
        *rax_16 = &data_142fe5d88
        sub_140596d10(&rax_16[1], &var_3d8)
        rax_16[3] = var_3c8_1
        rax_16[4] = arg1
        *rax_16 = &data_142fe5da8
        uint64_t* (* var_128)(uint64_t* arg1, int64_t* arg2)
        uint64_t* (* rax_19)(uint64_t* arg1, int64_t* arg2) = var_128
        
        if (rax_16 != -8)
            rax_19 = sub_14182a6f0
        
        int64_t rcx_22 = var_3d8
        var_128 = rax_19
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t var_328[0x2]
        var_328[0] = 0
        int64_t var_318_1 = 0
        void* var_380
        void** rax_20
        rax_20, arg5, arg3, arg4 = sub_141815230(&var_380, 3, &var_128, &var_328, arg3, arg4)
        int64_t rdi_6 = sx.q(var_520.d)
        int32_t rax_21 = (rdi_6 + 1).d
        var_520.d = rax_21
        
        if (rax_21 s> var_520:4.d)
            sub_1405a4f90(&var_528)
        
        void** rcx_27 = &var_528[rdi_6 * 2]
        *rcx_27 = *rax_20
        rcx_27[1] = rax_20[1]
        rax_20[1] = 0
        *rax_20 = nullptr
        int64_t* var_378
        
        if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t rax_26 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*var_378 + 8))(var_378, 1)
        
        if (var_128 != 0)
            void var_108
            void*** rcx_30 = &var_108
            
            if (rax_16 != 0)
                rcx_30 = rax_16
            
            (*rcx_30)[2](rcx_30)
        
        r15_1 = &r15_1[2]
    while (r15_1 != rsi_3)
    
    r13 = var_568
    r12_1 = var_518
    var_558_1 = var_548
    var_550_1 = r13

void* rsi_6 = &r13[sx.q(var_560_1.d) * 2]
int64_t* var_538 = nullptr
int64_t var_530 = 0

if (r13 != rsi_6)
    do
        int64_t var_3b8
        sub_140596d10(&var_3b8, r13)
        void*** var_158_1 = nullptr
        void** const var_148 = &data_142fe5dc8
        void var_140
        sub_140596d10(&var_140, &var_3b8)
        int64_t rcx_33 = var_3b8
        var_148 = &data_142fe5de8
        int64_t* (* var_168)(int64_t* arg1, int64_t* arg2) = sub_14182a770
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        int64_t var_2e8[0x2]
        var_2e8[0] = 0
        int64_t var_2d8_1 = 0
        void* var_370
        void** rax_31
        rax_31, arg5, arg3, arg4 = sub_141814bb0(&var_370, 3, &var_168, &var_2e8, arg3, arg4)
        int64_t rdi_7 = sx.q(var_530.d)
        int32_t rax_32 = (rdi_7 + 1).d
        var_530.d = rax_32
        
        if (rax_32 s> var_530:4.d)
            sub_1405a4f90(&var_538)
        
        void** rcx_38 = &var_538[rdi_7 * 2]
        *rcx_38 = *rax_31
        rcx_38[1] = rax_31[1]
        rax_31[1] = 0
        *rax_31 = nullptr
        int64_t* var_368
        
        if (var_368 != 0)
            var_368[1].d -= 1
            
            if (var_368[1].d == 1)
                (**var_368)(var_368)
                int32_t rax_37 = *(var_368 + 0xc)
                *(var_368 + 0xc) -= 1
                
                if (rax_37 == 1)
                    (*(*var_368 + 8))(var_368, 1)
        
        if (var_168 != 0)
            void** const* rcx_41 = &var_148
            
            if (var_158_1 != 0)
                rcx_41 = var_158_1
            
            (*rcx_41)[2](rcx_41)
        
        r13 = &r13[2]
    while (r13 != rsi_6)
    
    r13 = var_568
    r12_1 = var_518
    var_558_1 = var_548
    var_550_1 = r13

int64_t* rdi_8 = var_528
void* r14_6 = &rdi_8[sx.q(var_520.d) * 2]

if (rdi_8 != r14_6)
    do
        void* rbx_7 = *rdi_8
        
        while (true)
            bool z_1
            
            if (0 == *(rbx_7 + 0x78))
                *(rbx_7 + 0x78) = 0
                z_1 = true
            else
                int64_t rax_42
                rax_42.b = *(rbx_7 + 0x78)
                z_1 = false
            
            if (not(z_1))
                break
            
            int64_t* rcx_42 = *(rbx_7 + 0x70)
            (*(*rcx_42 + 0x20))(rcx_42, 0xffffffff, 0)
        
        int64_t var_3a8
        sub_140596d10(&var_3a8, rbx_7 + 0x80)
        char rax_44 = *(rbx_7 + 0x90)
        int128_t var_394
        int128_t* r8_5 = &var_394
        int64_t rsi_7 = var_3a8
        char var_398_1 = rax_44
        var_394 = *(rbx_7 + 0x94)
        void var_408
        
        if (rax_44 == 0)
            void var_404
            int32_t rcx_46
            rcx_46, arg5 = sub_140acafe0(&var_208, &var_404, r8_5, nullptr)
            int64_t var_4f8 = 0
            int32_t var_3a0
            sub_1405a4c70(&var_4f8, sbb.d(rcx_46, rcx_46, var_3a0 != 0) + 3 + var_3a0, 0)
            memcpy(var_4f8, rsi_7, var_3a0 * 2)
            sub_140a20ba0(&var_4f8, &data_142d6acb4, 2)
            int64_t rbx_9 = var_4f8
            int64_t var_360_1 = rbx_9
            var_4f8 = 0
            int32_t r8_8 = var_3a0 - 1
            int32_t var_4f0_1
            var_4f0_1.q = 0
            
            if (var_3a0 == 0)
                r8_8 = 0
            
            sub_140a20ba0(&var_4a0, rbx_9, r8_8)
            
            if (rbx_9 != 0)
                arg5 = sub_140a74f90(rbx_9)
            
            var_578 = 0
        else
            arg5 = sub_140acafe0(&var_1b8, &var_408, r8_5, nullptr)
        
        if (rsi_7 != 0)
            arg5 = sub_140a74f90(rsi_7)
        
        rdi_8 = &rdi_8[2]
    while (rdi_8 != r14_6)
    
    r13 = var_568
    var_558_1 = var_548
    var_550_1 = r13

int64_t* rax_49 = var_510
int64_t* rsi_8 = rax_49
void* r14_9 = &rax_49[sx.q(var_508.d) * 2]
int64_t* var_500_1 = rax_49
void* var_3e8 = r14_9

if (rax_49 != r14_9)
    do
        char r15_2 = 0
        int16_t* const r8_9
        
        if (rsi_8[1].d == 0)
            r8_9 = &data_142d40450
        else
            r8_9 = *rsi_8
        
        int64_t* var_570
        void* rdx_24 = (*r12_1)[9](r12_1, &var_570, r8_9, 0)
        int64_t* rcx_55 = var_570
        int64_t* rcx_56
        
        if (rcx_55 != 0)
            int32_t var_470 = 1
            int32_t var_46c_1 = 0x18
            void* var_460_1 = nullptr
            int32_t var_458_1 = 0
            sub_141824770(rcx_55, &var_470, arg5)
            rcx_56 = var_570
            
            if ((*(rcx_56 + 0x29) & 1) != 0)
                rdx_24 = var_460_1
            else
                int64_t rax_52 = (*(*rcx_56 + 0x28))(rcx_56)
                rdx_24 = var_460_1
                r15_2 = 1
                void* i = (sx.q(var_458_1) << 5) + rdx_24
                
                if (rdx_24 == i)
                    rcx_56 = var_570
                    r12_1 = var_518
                else
                    int64_t* r14_10 = rdx_24 + 0x10
                    char rcx_62
                    
                    do
                        rsi_8.b = 0
                        int64_t rdi_10 = zx.q(r14_10[1].d) + *r14_10
                        
                        if (rax_52 s>= rdi_10)
                            int64_t* rcx_57 = var_570
                            (*(*rcx_57 + 0x178))(rcx_57)
                            void*** rcx_58 = var_4c8
                            char var_577
                            int64_t* rax_55 = (*rcx_58)[3](rcx_58, var_570, &var_577)
                            int64_t* rcx_59 = var_570
                            int64_t rax_57 = (*(*rcx_59 + 0x20))(rcx_59)
                            
                            if (var_577 != 0 || rax_55 == 0 || rax_57 != rdi_10)
                                rsi_8.b = 0
                            else
                                rsi_8.b = 1
                            
                            if (rax_55 != 0)
                                (**rax_55)(rax_55, 1)
                        
                        char temp7_1 = rsi_8.b
                        char rcx_61 = 0
                        
                        if (temp7_1 != 0)
                            rcx_61 = r15_2
                        
                        r15_2 = rcx_61
                        rcx_62 = 0
                        
                        if (temp7_1 != 0)
                            rcx_62 = var_578
                        
                        r14_10 = &r14_10[4]
                        var_578 = rcx_62
                    while (&r14_10[-2] != i)
                    
                    rsi_8 = var_500_1
                    r14_9 = var_3e8
                    r12_1 = var_518
                    var_578 = rcx_62
                    rcx_56 = var_570
                    rdx_24 = var_460_1
            
            if (rdx_24 != 0)
                rdx_24, arg5 = sub_140a74f90(rdx_24)
                rcx_56 = var_570
        
        if (rcx_55 == 0 || r15_2 == 0)
            int32_t rbx_11 = rsi_8[1].d
            int64_t rdi_12 = *rsi_8
            int64_t var_4e8 = 0
            sub_1405a4c70(&var_4e8, sbb.d(rdx_24.d, rdx_24.d, rbx_11 != 0) + 3 + rbx_11, 0)
            memcpy(var_4e8, rdi_12, rbx_11 * 2)
            sub_140a20ba0(&var_4e8, &data_142d6acb4, 2)
            int64_t rbx_12 = var_4e8
            int64_t var_350_1 = rbx_12
            var_4e8 = 0
            int32_t r8_13 = rbx_11 - 1
            int32_t var_4e0_1
            var_4e0_1.q = 0
            
            if (rbx_11 == 0)
                r8_13 = 0
            
            sub_140a20ba0(&var_4a0, rbx_12, r8_13)
            
            if (rbx_12 != 0)
                arg5 = sub_140a74f90(rbx_12)
            
            rcx_56 = var_570
            var_578 = 0
        
        if (rcx_56 != 0)
            (**rcx_56)(rcx_56, 1)
        
        rsi_8 = &rsi_8[2]
        var_500_1 = rsi_8
    while (rsi_8 != r14_9)
    
    r13 = var_550_1

int64_t* r14_11 = var_538
void* r15_5 = &r14_11[sx.q(var_530.d) * 2]
char var_598
int64_t* rsi_10

if (r14_11 == r15_5)
    rsi_10 = var_558_1
else
    do
        void* rbx_13 = *r14_11
        
        while (true)
            bool z_2
            
            if (0 == *(rbx_13 + 0x78))
                *(rbx_13 + 0x78) = 0
                z_2 = true
            else
                int64_t rax_66
                rax_66.b = *(rbx_13 + 0x78)
                z_2 = false
            
            if (not(z_2))
                break
            
            int64_t* rcx_69 = *(rbx_13 + 0x70)
            (*(*rcx_69 + 0x20))(rcx_69, 0xffffffff, 0)
        
        int64_t* var_450 = *(rbx_13 + 0x80)
        void* rax_69 = *(rbx_13 + 0x88)
        void* var_448_1 = rax_69
        
        if (rax_69 != 0)
            *(rax_69 + 8) += 1
        
        int64_t var_440
        sub_140596d10(&var_440, rbx_13 + 0x90)
        int64_t* rcx_71 = var_450
        
        if (rcx_71 == 0)
        label_1418530ae:
            int64_t rdx_48 = var_440
            int64_t var_4b0 = 0
            int32_t var_438
            var_598.d = sbb.d(rcx_71.d, rcx_71.d, var_438 != 0) + 3
            sub_140596860(&var_4b0, rdx_48, var_438, 0, var_598)
            sub_140a20ba0(&var_4b0, &data_142d6acb4, 2)
            int64_t rbx_20 = var_4b0
            int32_t var_4a8
            bool cond:4_1 = var_4a8 == 0
            int64_t var_340_1 = rbx_20
            var_4b0 = 0
            int32_t r8_24 = var_4a8 - 1
            var_4a8.q = 0
            
            if (cond:4_1)
                r8_24 = 0
            
            sub_140a20ba0(&var_4a0, rbx_20, r8_24)
            
            if (rbx_20 != 0)
                sub_140a74f90(rbx_20)
            
            var_578 = 0
        else if ((*(*rcx_71 + 0x1d0))(rcx_71) == 0)
            int64_t* rcx_72 = var_450
            int64_t var_258 = 0
            int32_t var_250_1 = 0
            int32_t var_22c_1 = 0x80
            int64_t var_248
            __builtin_memset(&var_248, 0, 0x1c)
            int32_t var_228_1 = 0xffffffff
            int32_t var_224_1 = 0
            int64_t var_218_1 = 0
            int32_t var_210_1 = 0
            (*(*rcx_72 + 0x1b8))(rcx_72, &var_258)
            int32_t rcx_74 = var_200 - var_1d4
            int64_t* rdi_13 = &var_208
            int64_t* rsi_9 = &var_258
            int32_t rax_74 = var_250_1 - var_224_1
            int64_t var_2a8 = 0
            int32_t var_2a0_1 = 0
            
            if (rax_74 s<= rcx_74)
                rdi_13 = &var_258
            
            int64_t var_288_1 = 0
            int32_t var_280_1 = 0
            
            if (rax_74 s<= rcx_74)
                rsi_9 = &var_208
            
            int32_t var_27c_1 = 0x80
            int64_t var_298_1 = 0
            int32_t rbx_15 = rdi_13[1].d - *(rdi_13 + 0x34)
            int64_t var_290_1 = 0
            int32_t var_278_1 = 0xffffffff
            int32_t var_274_1 = 0
            int64_t var_268_1 = 0
            int32_t var_260_1 = 0
            
            if (rbx_15 s> 0)
                sub_1409d93a0(&var_2a8, rbx_15)
                int32_t rdx_37
                
                if (rbx_15 u< 4)
                    rdx_37 = 1
                else
                    uint32_t rbx_16 = rbx_15 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_5
                    temp0_5, rflags_1 = _bit_scan_reverse(rbx_16 + 8)
                    int32_t var_400_1 = temp0_5
                    int32_t rcx_76
                    
                    if (rbx_16 == 0xfffffff8)
                        rcx_76 = 0x20
                    else
                        rcx_76 = 0x1f - temp0_5
                    
                    int32_t rcx_78 = rcx_76 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    int32_t temp0_6
                    temp0_6, rflags_2 = _bit_scan_reverse(rbx_16 + 7)
                    int32_t var_3f0_1 = temp0_6
                    char rdx_36
                    
                    if (rcx_78 == 0)
                        rdx_36 = 0x20
                    else
                        rdx_36 = 0x1f - temp0_6.b
                    
                    rdx_37 = 1 << ((not.d(rcx_78)).b & (0x20 - rdx_36))
                
                if (var_260_1 == 0 || var_260_1 s< rdx_37)
                    int32_t var_260_2 = rdx_37
                    sub_140943380(&var_2a8)
            
            int32_t r10_1 = rdi_13[5].d
            void* r9_3 = &rdi_13[2]
            int32_t var_48c_1 = 1
            int32_t rcx_82 = 0
            int32_t var_490_1 = 0
            int32_t r8_15 = 0
            void* var_488_1 = r9_3
            int32_t var_480_1 = 0xffffffff
            int64_t var_47c_1 = 0
            
            if (r10_1 != 0)
                void* rax_79 = *(r9_3 + 0x10)
                
                if (rax_79 != 0)
                    r9_3 = rax_79
                
                int32_t temp11_1
                int32_t temp12_1
                temp11_1:temp12_1 = sx.q(r10_1 - 1)
                int32_t rdx_40 = *r9_3
                
                if (rdx_40 != 0)
                label_141852ea8:
                    int32_t rax_86 = neg.d(rdx_40) & rdx_40
                    uint64_t rflags_3
                    int32_t temp0_7
                    temp0_7, rflags_3 = _bit_scan_reverse(rax_86)
                    int32_t var_48c_2 = rax_86
                    int32_t var_3fc_1 = temp0_7
                    int32_t rax_87
                    
                    if (rax_86 == 0)
                        rax_87 = 0x20
                    else
                        rax_87 = 0x1f - temp0_7
                    
                    var_47c_1.d = r8_15 - rax_87 + 0x1f
                    
                    if (r8_15 - rax_87 + 0x1f s> r10_1)
                        var_47c_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_41 = sx.q(rcx_82)
                        r8_15 += 0x20
                        rcx_82 += 1
                        var_47c_1:4.d = r8_15
                        var_490_1 = rcx_82
                        
                        if (rdx_41.d s>= (temp12_1 + (temp11_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_40 = *(r9_3 + (rdx_41 << 2) + 4)
                        int32_t var_480_2 = 0xffffffff
                        
                        if (rdx_40 != 0)
                            goto label_141852ea8
                    
                    var_47c_1.d = r10_1
            
            int64_t* var_e8 = rdi_13
            int128_t var_d0_1 = 0xffffffff
            arg5.o = var_490_1.o
            int128_t var_430 = var_e8.o
            int64_t var_410_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int128_t var_420_1 = arg5.o
            
            if (0 s< r10_1)
                int32_t i_1 = var_420_1:0xc.d
                
                do
                    void** rbx_18 = var_430.q
                    int64_t rdi_14 = sx.q(i_1) * 0x18
                    void var_3f8
                    void var_3f4
                    
                    if (*sub_140b162a0(rsi_9, &var_3f8, *rbx_18 + rdi_14) != 0xffffffff)
                        sub_140acafe0(&var_2a8, &var_3f4, *rbx_18 + rdi_14, nullptr)
                    var_420_1:8.d &= not.d(var_430:0xc.d)
                    sub_14059bdd0(&var_430:8)
                    i_1 = var_420_1:0xc.d
                while (i_1 s< *(var_420_1.q + 0x18))
            
            void var_98
            sub_141835020(sub_141835020(&var_258, &var_e8, &var_208), &var_98, &var_1b8)
            int32_t var_a0_1 = 0
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            sub_14094b3a0(&var_e8)
            char rbx_19 = 0
            int32_t var_50_1 = 0
            int32_t rax_96
            rax_96.b = var_2a0_1 - var_274_1 s<= 0
            int32_t var_90
            int32_t var_64
            
            if (var_90 - var_64 s<= 0)
                rbx_19 = rax_96.b
            
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            sub_14094b3a0(&var_98)
            int32_t var_260_3 = 0
            
            if (var_268_1 != 0)
                sub_140a74f90(var_268_1)
            
            sub_14094b3a0(&var_2a8)
            int32_t var_210_2 = 0
            
            if (var_218_1 != 0)
                sub_140a74f90(var_218_1)
            
            rcx_71, arg5 = sub_14094b3a0(&var_258)
            
            if (rbx_19 == 0)
                goto label_1418530ae
        
        int64_t rcx_105 = var_440
        
        if (rcx_105 != 0)
            sub_140a74f90(rcx_105)
        
        sub_1405970a0(&var_450)
        r14_11 = &r14_11[2]
    while (r14_11 != r15_5)
    
    rsi_10 = var_548
    r13 = var_568

if (arg2[1].d s> 1)
    int64_t rbx_21 = *arg2
    sub_140a464c0()
    var_598.d = 0
    sub_140b27210(&var_4a0, rbx_21, 0, &data_14399ea08, var_598)

int32_t i_8 = var_530.d
int64_t* rbx_22 = var_538

if (i_8 != 0)
    int32_t i_2
    
    do
        sub_1405970a0(rbx_22)
        rbx_22 = &rbx_22[2]
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)

int64_t* rcx_109 = var_538

if (rcx_109 != 0)
    sub_140a74f90(rcx_109)

int32_t i_9 = var_520.d
int64_t* rbx_23 = var_528

if (i_9 != 0)
    int32_t i_3
    
    do
        sub_1405970a0(rbx_23)
        rbx_23 = &rbx_23[2]
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)

int64_t* rcx_111 = var_528

if (rcx_111 != 0)
    sub_140a74f90(rcx_111)

void*** rcx_112 = var_4c8

if (rcx_112 != 0)
    (**rcx_112)(rcx_112, 1)

if (r12_1 != 0)
    (**r12_1)(r12_1, 1)

int32_t i_10 = var_560_1.d
int64_t* rbx_24 = r13

if (i_10 != 0)
    int32_t i_4
    
    do
        int64_t rcx_114 = *rbx_24
        
        if (rcx_114 != 0)
            sub_140a74f90(rcx_114)
        
        rbx_24 = &rbx_24[2]
        i_4 = i_10
        i_10 -= 1
    while (i_4 != 1)

if (r13 != 0)
    sub_140a74f90(r13)

int32_t i_11 = var_508.d
int64_t* r14_12 = var_510
int64_t* rbx_25 = r14_12

if (i_11 != 0)
    int32_t i_5
    
    do
        int64_t rcx_116 = *rbx_25
        
        if (rcx_116 != 0)
            sub_140a74f90(rcx_116)
        
        rbx_25 = &rbx_25[2]
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

if (r14_12 != 0)
    sub_140a74f90(r14_12)

int32_t i_12 = var_540_1.d
int64_t* rbx_26 = rsi_10

if (i_12 != 0)
    int32_t i_6
    
    do
        int64_t rcx_118 = *rbx_26
        
        if (rcx_118 != 0)
            sub_140a74f90(rcx_118)
        
        rbx_26 = &rbx_26[2]
        i_6 = i_12
        i_12 -= 1
    while (i_6 != 1)

if (rsi_10 != 0)
    sub_140a74f90(rsi_10)

int32_t var_170_1 = 0

if (var_178 != 0)
    sub_140a74f90(var_178)

sub_14094b3a0(&var_1b8)
int32_t var_1c0_1 = 0

if (var_1c8 != 0)
    sub_140a74f90(var_1c8)

sub_14094b3a0(&var_208)
int32_t i_13 = i_14
int64_t* rbx_27 = var_4d8

if (i_13 != 0)
    int32_t i_7
    
    do
        int64_t rcx_124 = *rbx_27
        
        if (rcx_124 != 0)
            sub_140a74f90(rcx_124)
        
        rbx_27 = &rbx_27[2]
        i_7 = i_13
        i_13 -= 1
    while (i_7 != 1)
    rbx_27 = var_4d8

if (rbx_27 != 0)
    sub_140a74f90(rbx_27)

int64_t rcx_126 = var_4a0

if (rcx_126 != 0)
    sub_140a74f90(rcx_126)

__security_check_cookie(rax_1 ^ &var_5b8)
return zx.q(var_578)
