// 函数: sub_141898400
// 地址: 0x141898400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a78
int64_t rax_1 = __security_cookie ^ &var_a78
bool var_a27 = *(arg1 + 0x64) == 0
void* r13 = arg1
uint128_t zmm13 = zx.o(0)
int128_t zmm14 = zx.o(0)
int128_t zmm15 = zx.o(0)
int64_t var_368
__builtin_memset(&var_368, 0, 0x2c)
int32_t var_33c = 0x80
int32_t var_338 = 0xffffffff
int32_t var_334 = 0
int64_t var_328 = 0
int32_t var_320 = 0
int64_t var_598 = 0
int32_t var_590 = 0
int32_t var_56c = 0x80
int64_t var_588
__builtin_memset(&var_588, 0, 0x1c)
int32_t var_568 = 0xffffffff
int32_t var_564 = 0
int64_t var_558 = 0
int32_t var_550 = 0
int64_t var_548 = 0
int32_t var_540 = 0
int32_t var_51c = 0x80
int64_t var_538
__builtin_memset(&var_538, 0, 0x1c)
int32_t var_518 = 0xffffffff
int32_t var_514 = 0
void* var_508 = nullptr
int32_t var_500 = 0
int64_t var_4a8 = 0
int32_t var_4a0 = 0
int32_t var_47c = 0x80
int64_t var_498
__builtin_memset(&var_498, 0, 0x1c)
int32_t var_478 = 0xffffffff
int32_t var_474 = 0
void* var_468 = nullptr
int32_t var_460 = 0
int64_t var_4f8 = 0
int32_t var_4f0 = 0
int32_t var_4cc = 0x80
int64_t var_4e8
__builtin_memset(&var_4e8, 0, 0x1c)
int32_t var_4c8 = 0xffffffff
int32_t var_4c4 = 0
void* var_4b8 = nullptr
int32_t var_4b0 = 0
int64_t var_958 = 0
int64_t var_950 = 0
char var_a26 = 0
uint64_t var_9c8 = 0
uint128_t zmm10 = 0x3ff0000000000000
uint128_t zmm6 = zx.o(0)
uint64_t var_908 = zmm10.q
int64_t var_9c0 = (zx.o(0)).q
uint128_t zmm7 = zx.o(0)
int32_t var_a10 = 4
int128_t zmm12 = zx.o(0)
int32_t var_a00 = 0
int128_t zmm11 = zx.o(0)
int64_t var_5e8
__builtin_memset(&var_5e8, 0, 0x2c)
int32_t var_5bc = 0x80
int32_t var_5b8 = 0xffffffff
int32_t var_5b4 = 0
int64_t var_5a8 = 0
int32_t var_5a0 = 0
sub_1405af100(&var_5e8, arg1 + 0xb8)
int64_t* rcx_1 = *(r13 + 0xb0)
int64_t rax_3 = (*(*rcx_1 + 0x20))(rcx_1, &var_5e8)
int64_t var_998 = 0
int64_t var_a08 = rax_3
int64_t var_9a0 = 0
int64_t* rax_4 = j_sub_140a82f30(0x10)
int64_t* rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    int64_t rax_5 = j_sub_140a82f30(0x28)
    
    if (rax_5 == 0)
        rbx[1] = 0
        *rbx = 0
    else
        __builtin_memset(rax_5, 0, 0x28)
        rbx[1] = rax_5
        *rbx = rax_5

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *rax_6 = &data_142fe84f8
    *(rax_6 + 0xc) = 1
    rax_6[2] = rbx

uint128_t zmm0 = rbx.o
uint128_t var_928 = zmm0
void* rax_7 = _mm_bsrli_si128(zmm0, 8).q

if (rax_7 != 0)
    *(rax_7 + 0xc) += 1

int64_t* rcx_2 = *(r13 + 0xa8)
int64_t var_3b8 = 0
int32_t var_3b0 = 0
int32_t var_38c = 0x80
int64_t var_3a8
__builtin_memset(&var_3a8, 0, 0x1c)
int32_t var_388 = 0xffffffff
int32_t var_384 = 0
void* var_378 = nullptr
int32_t var_370 = 0
int64_t var_318
__builtin_memset(&var_318, 0, 0x2c)
int32_t var_2ec = 0x80
int32_t var_2e8 = 0xffffffff
int32_t var_2e4 = 0
int64_t var_2d8 = 0
int32_t var_2d0 = 0
(*(*rcx_2 + 0x38))(rcx_2, rax_3, rbx)
int64_t* rcx_3 = *(r13 + 0xa8)
(*(*rcx_3 + 0x30))(rcx_3, 0)
int64_t* rcx_4 = *(r13 + 0xa8)
(*(*rcx_4 + 0x40))(rcx_4, 4)
int64_t* rcx_5 = *(r13 + 0xa8)
(*(*rcx_5 + 0x48))(rcx_5, zx.o(0))
int64_t* rcx_6 = *(r13 + 0xa8)
(*(*rcx_6 + 0x50))(rcx_6, 0)
bool z

if (0 == *(r13 + 0x144))
    *(r13 + 0x144) = 0
    z = true
else
    *(r13 + 0x144)
    z = false

uint128_t zmm1

if (z)
    uint64_t r12
    uint64_t var_10_1 = r12
    uint128_t zmm8 = 0x3dcccccd
    double zmm9[0x2] = 0x43f0000000000000
    bool z_4
    
    do
        r12.b = 0
        int64_t var_9d8 = 0
        int64_t var_9d0_1 = 0
        
        while (true)
            void* rdx_4 = **(r13 + 0x218)
            
            if (rdx_4 == 0)
                break
            
            zmm0 = *(rdx_4 + 8)
            int64_t rcx_7 = *(r13 + 0x218)
            *(r13 + 0x218) = rdx_4
            var_9d8.o = zmm0
            int64_t var_8e8_1 = 0
            *(rdx_4 + 8) = 0.o
            j_sub_140a74f90(rcx_7)
            
            if (var_4a0 != var_474)
                void var_470
                void* rsi_1 = &var_470
                int64_t rax_18 = sx.q(sub_140a6b260(&var_9d8, 0x10))
                int64_t r14_1 = sx.q(var_460 - 1)
                
                if (var_468 != 0)
                    rsi_1 = var_468
                
                int64_t rax_19 = rax_18 & r14_1
                void* r9_1 = rsi_1 + (rax_19 << 2)
                int32_t i = *(rsi_1 + (rax_19 << 2))
                
                if (i != 0xffffffff)
                    int64_t r8_1 = var_4a8
                    
                    do
                        int64_t rdx_6 = sx.q(i) * 3
                        int32_t rcx_15 = (*(r8_1 + (rdx_6 << 3) + 0xc) ^ var_9d0_1:4.d)
                            | (*(r8_1 + (rdx_6 << 3) + 8) ^ var_9d0_1.d)
                            | (*(r8_1 + (rdx_6 << 3) + 4) ^ var_9d8:4.d)
                        
                        if ((rcx_15 | (*(r8_1 + (rdx_6 << 3)) ^ var_9d8.d)) == 0)
                            int64_t rdx_7 = sx.q(*r9_1)
                            
                            if (var_4a0 != var_474)
                                int64_t r9_3 = rdx_7 * 3
                                int64_t rax_29 = sx.q(*(r8_1 + (r9_3 << 3) + 0x14)) & r14_1
                                void* rcx_17 = rsi_1 + (rax_29 << 2)
                                int32_t j = *(rsi_1 + (rax_29 << 2))
                                
                                while (j != 0xffffffff)
                                    if (j == rdx_7.d)
                                        *rcx_17 = *(r8_1 + (r9_3 << 3) + 0x10)
                                        break
                                    
                                    int64_t j_4 = sx.q(j)
                                    int64_t rcx_19 = j_4 + ((j_4 + 1) << 1)
                                    j = *(r8_1 + (rcx_19 << 3))
                                    rcx_17 = r8_1 + (rcx_19 << 3)
                            
                            sub_1405c3640(&var_4a8, rdx_7.d, 1)
                            int64_t* rcx_21 = *(r13 + 0xb0)
                            var_9a0 += (*(*rcx_21 + 0x28))(rcx_21, &var_9d8)
                            r12.b = 1
                            break
                        
                        i = *(r8_1 + 0x10 + (rdx_6 << 3))
                        r9_1 = r8_1 + 0x10 + (rdx_6 << 3)
                    while (i != 0xffffffff)
        
        int64_t var_638 = 0
        int32_t var_630_1 = 0
        int64_t var_628
        __builtin_memset(&var_628, 0, 0x1c)
        int32_t var_604_1 = 0
        int64_t var_5f8_1 = 0
        int32_t var_5f0_1 = 0
        int64_t r15_1 = var_a08
        int32_t var_608_1 = 0xffffffff
        int32_t var_60c_1 = 0x80
        int64_t* rcx_38
        void*** rsi_2
        
        while (true)
            rsi_2 = **(r13 + 0x208)
            void var_600
            int64_t* rax_33
            
            if (rsi_2 != 0)
                void* rbx_2 = &rsi_2[1]
                
                if (&var_638 != rbx_2)
                    sub_140780e10(&var_638, rbx_2)
                    
                    if (*(rbx_2 + 0x40) == 0)
                        memmove(&var_600, rbx_2 + 0x38, 4)
                    
                    if (var_5f8_1 != 0)
                        sub_140a74f90(var_5f8_1)
                    
                    var_5f8_1 = *(rbx_2 + 0x40)
                    *(rbx_2 + 0x40) = 0
                    int32_t var_5f0_2 = *(rbx_2 + 0x48)
                    *(rbx_2 + 0x48) = 0
                
                void* r14_2 = *(r13 + 0x208)
                *(r13 + 0x208) = rsi_2
                rsi_2 = nullptr
                int64_t var_458
                __builtin_memset(&var_458, 0, 0x2c)
                int32_t rax_36 = 0
                int32_t var_42c_1 = 0x80
                int32_t var_428_1 = 0xffffffff
                int32_t var_424_1 = 0
                int64_t var_418_1 = 0
                int32_t var_410_1 = 0
                
                if (rbx_2 != &var_458)
                    sub_140780e10(rbx_2, &var_458)
                    void var_420
                    
                    if (var_418_1 == 0)
                        memmove(rbx_2 + 0x38, &var_420, (var_418_1 + 4).d)
                    int64_t rcx_27 = *(rbx_2 + 0x40)
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    *(rbx_2 + 0x40) = var_418_1
                    rsi_2 = nullptr
                    *(rbx_2 + 0x48) = var_410_1
                    int32_t var_44c
                    rax_36 = var_44c
                    int64_t var_418_2 = 0
                
                int32_t var_410_2 = 0
                int32_t var_450_1 = 0
                
                if (rax_36 != 0)
                    sub_1405a5130(&var_458, 0)
                
                int32_t var_428_2 = 0xffffffff
                int32_t var_424_2 = 0
                int64_t var_448
                sub_14059a8e0(&var_448, 0)
                int64_t var_438
                
                if (var_438 != 0)
                    sub_140a74f90(var_438)
                
                int64_t rcx_31 = var_458
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                if (r14_2 != 0)
                    *(r14_2 + 0x50) = 0
                    int64_t rcx_32 = *(r14_2 + 0x48)
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                    
                    bool cond:2_1 = *(r14_2 + 0x14) == 0
                    *(r14_2 + 0x10) = 0
                    
                    if (not(cond:2_1))
                        sub_1405a5130(r14_2 + 8, 0)
                    
                    *(r14_2 + 0x38) = 0xffffffff
                    *(r14_2 + 0x3c) = 0
                    sub_14059a8e0(r14_2 + 0x18, 0)
                    int64_t rcx_35 = *(r14_2 + 0x28)
                    
                    if (rcx_35 != 0)
                        sub_140a74f90(rcx_35)
                    
                    int64_t rcx_36 = *(r14_2 + 8)
                    
                    if (rcx_36 != 0)
                        sub_140a74f90(rcx_36)
                    
                    j_sub_140a74f90(r14_2)
                
                rax_33.b = 1
            else
                rax_33.b = 0
            
            rcx_38 = *(r13 + 0x88)
            
            if (rax_33.b == 0)
                break
            
            void var_268
            void var_218
            int64_t* rax_40 = sub_141842470(&var_638, &var_268, (*(*rcx_38 + 8))(rcx_38, &var_218))
            
            if (&var_638 != rax_40)
                sub_140780e10(&var_638, rax_40)
                
                if (rax_40[8] == 0)
                    memmove(&var_600, &rax_40[7], 4)
                
                if (var_5f8_1 != 0)
                    sub_140a74f90(var_5f8_1)
                
                var_5f8_1 = rax_40[8]
                rax_40[8] = rsi_2
                int32_t var_5f0_3 = rax_40[9].d
                rax_40[9].d = rsi_2.d
            
            int32_t var_220_1 = rsi_2.d
            int64_t var_228
            
            if (var_228 != 0)
                sub_140a74f90(var_228)
            
            sub_14094b3a0(&var_268)
            int32_t var_1d0_1 = rsi_2.d
            int64_t var_1d8
            
            if (var_1d8 != 0)
                sub_140a74f90(var_1d8)
            
            sub_14094b3a0(&var_218)
            void var_1c8
            int64_t* rax_43 = sub_141835020(&var_638, &var_1c8, &var_5e8)
            
            if (&var_638 != rax_43)
                sub_140780e10(&var_638, rax_43)
                
                if (rax_43[8] == 0)
                    memmove(&var_600, &rax_43[7], 4)
                
                if (var_5f8_1 != 0)
                    sub_140a74f90(var_5f8_1)
                
                var_5f8_1 = rax_43[8]
                rax_43[8] = rsi_2
                int32_t var_5f0_4 = rax_43[9].d
                rax_43[9].d = rsi_2.d
            
            int32_t var_180_1 = rsi_2.d
            int64_t var_188
            
            if (var_188 != 0)
                sub_140a74f90(var_188)
            
            sub_14094b3a0(&var_1c8)
            
            if (var_630_1 - var_604_1 s> 0)
                int64_t* rcx_53 = *(r13 + 0xb0)
                r15_1 += (*(*rcx_53 + 0x20))(rcx_53, &var_638)
                sub_1418544b0(&var_5e8, &var_638)
                r12.b = 1
        
        uint64_t r8_5 = zx.q(*(r13 + 0x38))
        int64_t* var_728_1 = &var_3b8
        var_a08 = r15_1
        void** const var_288 = &data_142d42ed8
        int32_t* (* var_2a8)(int64_t* arg1, int64_t* arg2) = sub_14187b290
        uint128_t var_280_1 = (&var_5e8).o
        char var_a28_1 = r12.b
        int32_t var_a58
        int64_t* var_a50
        uint64_t var_a48
        int64_t* var_a40
        int64_t* var_a38
        int32_t var_a30
        int128_t* var_798
        (*(*rcx_38 + 0x28))(rcx_38, &var_798, r8_5, &var_2a8, var_a58, var_a50, var_a48, var_a40, 
            var_a38, var_a30, var_a28_1)
        int128_t* rsi_4 = var_798
        int32_t var_790
        void* r15_4 = &rsi_4[sx.q(var_790)]
        
        if (rsi_4 != r15_4)
            void* r14_3 = var_928:8.q
            
            do
                int32_t var_720
                sub_140598750(&var_3b8, &var_720)
                int128_t* var_718
                *var_718 = *rsi_4
                var_718[1].d = 0xffffffff
                int32_t rax_51 = sub_140a6b260(var_718, 0x10)
                var_a50 = nullptr
                var_a58 = var_720
                void var_83c
                sub_14093ebb0(&var_3b8, &var_83c, rax_51, var_718, var_a58, var_a50)
                int64_t var_9f8
                __builtin_memset(&var_9f8, 0, 0x20)
                int32_t var_9b0
                sub_141884510(&var_368, &var_9b0, rsi_4)
                int64_t rax_52 = sx.q(var_9b0)
                int64_t rcx_61
                void* rcx_62
                
                if (rax_52.d != 0xffffffff)
                    rcx_61 = rax_52 << 6
                    rcx_62 = rcx_61 + var_368
                
                int32_t rax_53
                
                if (rax_52.d == 0xffffffff || rcx_61 == neg.q(var_368) || rcx_62 == -0x10)
                    rax_53 = 0
                else
                    rax_53 = *(rcx_62 + 0x20)
                
                int64_t* rax_57 =
                    (sx.q(mods.dp.d(sx.q(rax_53), *(r13 + 0x28))) << 4) + *(r13 + 0x20)
                
                if (&var_9f8 != rax_57)
                    int32_t rbx_6 = rax_57[1].d
                    int64_t rdi_2 = *rax_57
                    int64_t var_9f0_1
                    int32_t r8_8 = var_9f0_1:4.d
                    var_9f0_1.d = rbx_6
                    
                    if (rbx_6 != 0 || r8_8 != 0)
                        sub_1405a4c70(&var_9f8, rbx_6, r8_8)
                        memcpy(var_9f8, rdi_2, rbx_6 * 2)
                    else
                        var_9f0_1:4.d = 0
                
                int64_t* rcx_66 = *(r13 + 0xb0)
                int64_t var_900 = 0
                int64_t var_8f8_1 = 0
                int64_t var_6f8
                int64_t* rax_59 = (*(*rcx_66 + 0x38))(rcx_66, &var_6f8, &var_900, rsi_4)
                int64_t var_9e8
                
                if (&var_9e8 != rax_59)
                    int64_t rcx_67 = var_9e8
                    
                    if (rcx_67 != 0)
                        sub_140a74f90(rcx_67)
                    
                    var_9e8 = *rax_59
                    *rax_59 = 0
                    int64_t var_9e0_1
                    var_9e0_1.d = rax_59[1].d
                    var_9e0_1:4.d = *(rax_59 + 0xc)
                    rax_59[1] = 0
                
                int64_t rcx_69 = var_6f8
                
                if (rcx_69 != 0)
                    sub_140a74f90(rcx_69)
                
                int64_t rcx_70 = var_900
                
                if (rcx_70 != 0)
                    sub_140a74f90(rcx_70)
                
                sub_140a2fcd0(&var_9e8, &data_142d5a024, 1)
                
                if (r14_3 != 0)
                    *(r14_3 + 0xc) += 1
                    r14_3 = var_928:8.q
                
                zmm6 = *rsi_4
                int64_t var_688_1 = 0
                uint128_t var_648_1 = zmm6
                void*** rax_62 = sub_140a82f30(0x28, 8)
                rax_62[1] = var_928.q
                rax_62[2] = r14_3
                *(rax_62 + 0x18) = zmm6
                *rax_62 = &data_142fe8328
                void*** var_688_2 = rax_62
                int64_t (* var_698)(int64_t* arg1, int64_t* arg2)
                int64_t (* rax_63)(int64_t* arg1, int64_t* arg2) = var_698
                
                if (rax_62 != -8)
                    rax_63 = sub_14187ae60
                
                var_698 = rax_63
                void var_6b8
                sub_140596d10(&var_6b8, &var_9f8)
                void var_6a8
                sub_140596d10(&var_6a8, &var_9e8)
                int64_t* rcx_75 = *(r13 + 0x98)
                (*(*rcx_75 + 0x18))(rcx_75, &var_6b8, &var_698)
                int64_t rcx_76 = var_9e8
                
                if (rcx_76 != 0)
                    sub_140a74f90(rcx_76)
                
                int64_t rcx_77 = var_9f8
                
                if (rcx_77 != 0)
                    sub_140a74f90(rcx_77)
                
                rsi_4 = &rsi_4[1]
            while (rsi_4 != r15_4)
            
            zmm6 = zx.o(var_9c0)
            r12 = zx.q(var_a28_1)
        
        int64_t var_978
        __builtin_memset(&var_978, 0, 0x20)
        int64_t var_968
        
        while (true)
            void* rdi_3 = *rbx[1]
            
            if (rdi_3 == 0)
                break
            
            var_978.o = *(rdi_3 + 8)
            sub_140597da0(&var_968, rdi_3 + 0x18)
            void* rsi_5 = rbx[1]
            int64_t var_948
            __builtin_memset(&var_948, 0, 0x20)
            int128_t zmm0_2 = var_948.o
            rbx[1] = rdi_3
            *(rdi_3 + 8) = zmm0_2
            int64_t var_938
            sub_140597da0(rdi_3 + 0x18, &var_938)
            int64_t rcx_80 = var_938
            
            if (rcx_80 != 0)
                sub_140a74f90(rcx_80)
            
            if (rsi_5 != 0)
                int64_t rcx_81 = *(rsi_5 + 0x18)
                
                if (rcx_81 != 0)
                    sub_140a74f90(rcx_81)
                
                j_sub_140a74f90(rsi_5)
            
            int64_t* var_760 = &var_978
            int64_t* var_758_1 = &var_968
            void var_844
            sub_141859e80(&var_318, &var_844, &var_760, nullptr)
        
        int128_t* var_820 = nullptr
        EnterCriticalSection(r13 + 0x1c0)
        int128_t* rdi_4 = nullptr
        uint64_t rbx_8 = 0
        
        if (&var_820 != r13 + 0x1e8)
            rdi_4 = *(r13 + 0x1e8)
            *(r13 + 0x1e8) = 0
            rbx_8 = zx.q(*(r13 + 0x1f0))
            *(r13 + 0x1f0) = 0
            var_820 = rdi_4
        
        LeaveCriticalSection(r13 + 0x1c0)
        int64_t r15_5 = var_a08
        void* rsi_8 = &rdi_4[sx.q(rbx_8.d)]
        
        if (rdi_4 != rsi_8)
            var_a27 = true
            
            do
                void var_858
                void var_854
                
                if (*sub_141884510(&var_368, &var_858, rdi_4) == 0xffffffff
                        && *sub_140b162a0(&var_4a8, &var_854, rdi_4) == 0xffffffff)
                    int32_t var_750
                    sub_140598750(&var_4f8, &var_750)
                    uint64_t var_748
                    *var_748 = *rdi_4
                    *(var_748 + 0x10) = 0xffffffff
                    int32_t rax_69 = sub_140a6b260(var_748, 0x10)
                    var_a50 = nullptr
                    var_a58 = var_750
                    void var_850
                    sub_14093ebb0(&var_4f8, &var_850, rax_69, var_748, var_a58, var_a50)
                    void var_84c
                    
                    if (*sub_140b162a0(&var_5e8, &var_84c, rdi_4) == 0xffffffff)
                        int32_t var_740
                        sub_140598750(&var_5e8, &var_740)
                        uint64_t var_738
                        *var_738 = *rdi_4
                        *(var_738 + 0x10) = 0xffffffff
                        int32_t rax_71 = sub_140a6b260(var_738, 0x10)
                        var_a50 = nullptr
                        var_a58 = var_740
                        void var_848
                        sub_14093ebb0(&var_5e8, &var_848, rax_71, var_738, var_a58, var_a50)
                        int64_t* rcx_97 = *(r13 + 0xb0)
                        r15_5 += (*(*rcx_97 + 0x28))(rcx_97, rdi_4)
                        r12.b = 1
                
                rdi_4 = &rdi_4[1]
            while (rdi_4 != rsi_8)
            
            var_a08 = r15_5
        
        int64_t* rcx_108
        
        if (var_a26 != 0 || var_a27 == 0)
        label_14189953b:
            
            if (r12.b != 0)
                rcx_108 = *(r13 + 0xa8)
                (*(*rcx_108 + 0x38))(rcx_108, var_9a0 + r15_5)
        else
            int64_t* rcx_98 = *(r13 + 0x88)
            var_a26 = 1
            void var_178
            void var_128
            uint64_t rax_76 = sub_141842470(&var_5e8, &var_178, (*(*rcx_98 + 8))(rcx_98, &var_128))
            
            if (&var_5e8 != rax_76)
                sub_140780e10(&var_5e8, rax_76)
                void var_5b0
                
                if (*(rax_76 + 0x40) == 0)
                    memmove(&var_5b0, rax_76 + 0x38, 4)
                
                if (var_5a8 != 0)
                    sub_140a74f90(var_5a8)
                
                var_5a8 = *(rax_76 + 0x40)
                *(rax_76 + 0x40) = 0
                int32_t var_5a0_1 = *(rax_76 + 0x48)
                *(rax_76 + 0x48) = 0
            
            int32_t var_130_1 = 0
            int64_t var_138
            
            if (var_138 != 0)
                sub_140a74f90(var_138)
            
            sub_14094b3a0(&var_178)
            int32_t var_e0_1 = 0
            int64_t var_e8
            
            if (var_e8 != 0)
                sub_140a74f90(var_e8)
            
            sub_14094b3a0(&var_128)
            int64_t* rcx_107 = *(r13 + 0xb0)
            int64_t rax_80 = (*(*rcx_107 + 0x20))(rcx_107, &var_5e8)
            
            if (rax_80 == r15_5)
                goto label_14189953b
            
            var_a08 = rax_80
            rcx_108 = *(r13 + 0xa8)
            (*(*rcx_108 + 0x38))(rcx_108, var_9a0 + rax_80)
        int64_t var_408 = 0
        int32_t var_400_1 = 0
        int32_t var_3dc_1 = 0x80
        int64_t var_3f8
        __builtin_memset(&var_3f8, 0, 0x1c)
        int32_t var_3d8_1 = 0xffffffff
        int32_t var_3d4_1 = 0
        int64_t var_3c8_1 = 0
        int32_t var_3c0_1 = 0
        EnterCriticalSection(r13 + 0x148)
        
        if (&var_408 != r13 + 0x170)
            sub_1413c6350(&var_408, r13 + 0x170)
            rdi_4 = *(r13 + 0x1b0)
            void var_3d0
            
            if (rdi_4 == 0)
                memmove(&var_3d0, r13 + 0x1a8, (rdi_4 + 4).d)
            
            if (var_3c8_1 != 0)
                sub_140a74f90(var_3c8_1)
                rdi_4 = *(r13 + 0x1b0)
            
            int128_t* var_3c8_2 = rdi_4
            *(r13 + 0x1b0) = 0
            int32_t var_3c0_2 = *(r13 + 0x1b8)
            *(r13 + 0x1b8) = 0
        
        LeaveCriticalSection(r13 + 0x148)
        int32_t var_3e0
        int32_t r8_21 = var_3e0
        int64_t* var_898_1 = &var_3f8
        int32_t var_8a0 = 0
        int32_t var_89c_1 = 1
        int32_t var_890_1 = 0xffffffff
        int64_t var_88c_1 = 0
        
        if (r8_21 != 0)
            sub_14059bdd0(&var_8a0)
            r8_21 = var_3e0
        
        double zmm2[0x2] = var_890_1.o
        double var_770_1[0x2] = zmm2
        zmm1 = var_8a0.o
        uint128_t var_780_1
        var_780_1:8.d = 0xffffffff << (r8_21.b & 0x1f)
        var_780_1:0xc.d = r8_21
        double temp0_1[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        uint128_t var_810 = (&var_408).o
        uint128_t var_800_1 = zmm1
        int64_t var_7f0_1 = temp0_1.q
        
        while (true)
            int64_t rdx_58 = sx.q(var_800_1:0xc.d)
            char rax_84
            
            if (rdx_58.d != (var_780_1:8.q u>> 0x20).d || var_800_1.q != &var_3f8)
                rax_84 = 0
            else
                rax_84 = 1
            
            int64_t rcx_116 = var_810.q
            
            if (rax_84 == 0 || rcx_116 != &var_408)
                rax_84 = 1
            else
                rax_84 = 0
            
            if (rax_84 == 0)
                break
            
            int32_t* r12_3 = (rdx_58 << 5) + *rcx_116
            int32_t var_9ac
            sub_1418843c0(&var_598, &var_9ac, *r12_3)
            int64_t rax_85 = sx.q(var_9ac)
            void* const rax_87
            
            if (rax_85.d == 0xffffffff)
                rax_87 = nullptr
            else
                rax_87 = rax_85 * 0x1c + var_598
            
            int128_t* rax_89 = sub_14185c470(&var_368, sub_140a6b260(rax_87 + 4, 0x10), rax_87 + 4)
            int64_t* rcx_120 = *(r12_3 + 8)
            int64_t rdx_61 = *rcx_120
            void* r15_6
            
            if ((*(rdx_61 + 0x10))(rcx_120, rdx_61) == 0)
                r15_6 = arg1
                int64_t* rcx_135 = *(r15_6 + 0xa8)
                (*(*rcx_135 + 0x18))(rcx_135, rax_87 + 4, rax_89)
            label_141899967:
                void var_840
                sub_140acafe0(&var_548, &var_840, rax_87 + 4, nullptr)
                int32_t rax_104 = *(r15_6 + 0x30)
                
                if (rax_104 s>= 0 && rax_89[1].d s>= rax_104)
                    TEB* gsbase
                    
                    if (data_143cd6ff0 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cd6ff0)
                        
                        if (data_143cd6ff0 == 0xffffffff)
                            sub_140a96080(&data_143cd6fd8)
                            atexit(sub_142cb0d20)
                            _Init_thread_footer(&data_143cd6ff0)
                    
                    int64_t var_710 = data_143cd6fd8
                    void* rax_108 = data_143cd6fe0
                    void* var_708_1 = rax_108
                    
                    if (rax_108 != 0)
                        *(rax_108 + 8) += 1
                    
                    int64_t* rcx_138 = *(r15_6 + 0xa0)
                    int32_t var_700_1 = data_143cd6fe8
                    var_a58.q = &var_710
                    (*(*rcx_138 + 0x38))(rcx_138, 1, data_1439c6808, 0, var_a58, var_a50)
                    *(r15_6 + 0x144)
                    *(r15_6 + 0x144) = 1
                
                rax_89[1].d += 1
                rax_89[2].q = sub_141840270()
                
                if (var_3b0 != var_384)
                    void var_380
                    void* rsi_11 = &var_380
                    int64_t rax_114 = sx.q(sub_140a6b260(rax_87 + 4, 0x10))
                    int64_t r15_7 = sx.q(var_370 - 1)
                    
                    if (var_378 != 0)
                        rsi_11 = var_378
                    
                    int64_t rax_115 = rax_114 & r15_7
                    void* r9_10 = rsi_11 + (rax_115 << 2)
                    int32_t i_1 = *(rsi_11 + (rax_115 << 2))
                    
                    if (i_1 != 0xffffffff)
                        int64_t r8_34 = var_3b8
                        
                        do
                            int64_t rdx_76 = sx.q(i_1) * 3
                            
                            if (((*(r8_34 + (rdx_76 << 3) + 4) ^ *(rax_87 + 8))
                                    | (*(r8_34 + (rdx_76 << 3) + 8) ^ *(rax_87 + 0xc))
                                    | (*(r8_34 + (rdx_76 << 3) + 0xc) ^ *(rax_87 + 0x10))
                                    | (*(rax_87 + 4) ^ *(r8_34 + (rdx_76 << 3)))) == 0)
                                int64_t rdx_77 = sx.q(*r9_10)
                                
                                if (var_3b0 != var_384)
                                    int64_t r9_12 = rdx_77 * 3
                                    int64_t rax_125 = sx.q(*(r8_34 + (r9_12 << 3) + 0x14)) & r15_7
                                    void* rcx_148 = rsi_11 + (rax_125 << 2)
                                    int32_t j_1 = *(rsi_11 + (rax_125 << 2))
                                    
                                    while (j_1 != 0xffffffff)
                                        if (j_1 == rdx_77.d)
                                            *rcx_148 = *(r8_34 + (r9_12 << 3) + 0x10)
                                            break
                                        
                                        int64_t j_5 = sx.q(j_1)
                                        int64_t rcx_150 = j_5 + ((j_5 + 1) << 1)
                                        j_1 = *(r8_34 + (rcx_150 << 3))
                                        rcx_148 = r8_34 + (rcx_150 << 3)
                                
                                sub_1405c3640(&var_3b8, rdx_77.d, 1)
                                break
                            
                            i_1 = *(r8_34 + 0x10 + (rdx_76 << 3))
                            r9_10 = r8_34 + 0x10 + (rdx_76 << 3)
                        while (i_1 != 0xffffffff)
                
                sub_141892d50(&var_318, rax_87 + 4)
            else
                int64_t* rcx_121 = *(r12_3 + 8)
                int64_t rdx_62 = *rcx_121
                int64_t* rax_91 = (*(rdx_62 + 0x20))(rcx_121, rdx_62)
                int64_t var_988 = 0
                uint32_t count = rax_91[1].d
                int64_t rsi_10 = *rax_91
                uint32_t count_1 = count
                
                if (count != 0)
                    sub_1405da9e0(&var_988, count, 0)
                    memcpy(var_988, rsi_10, count)
                else
                    uint32_t count_2 = count
                
                r15_6 = arg1
                int64_t var_2c8
                __builtin_memset(&var_2c8, 0, 0x14)
                int64_t* rcx_124 = *(r15_6 + 0xb0)
                
                if ((*(*rcx_124 + 0x30))(rcx_124, rax_87 + 4, &var_2c8) != 0)
                    int64_t* rcx_125 = *(r15_6 + 0x90)
                    (*(*rcx_125 + 0x38))(rcx_125, &var_988, &var_2c8)
                
                int64_t* rcx_126 = *(r15_6 + 0x90)
                char var_a25
                uint64_t rax_96 = (*(*rcx_126 + 0x10))(rcx_126, &var_988, &var_a25)
                char r9_9 = var_a25
                rsi_10.b = r9_9 == 0
                
                if (r9_9 != 0)
                    int64_t* rcx_132 = *(r15_6 + 0xa8)
                    (*(*rcx_132 + 0x20))(rcx_132, rax_87 + 4, rax_89, r9_9, var_a58, var_a50)
                    
                    if (rax_96 != 0)
                        (**rax_96)(rax_96, 1)
                else
                    var_998 += sx.q(*(rax_89 + 0x14))
                    sub_141892eb0(&var_368, rax_87 + 4)
                    void var_828
                    sub_140acafe0(&var_4a8, &var_828, rax_87 + 4, nullptr)
                    int64_t* rcx_129 = *(r15_6 + 0x78)
                    uint64_t var_830 = rax_96
                    (*(*rcx_129 + 8))(rcx_129, rax_87 + 4, &var_830)
                    int64_t* rcx_130 = *(r15_6 + 0xa8)
                    (*(*rcx_130 + 0x10))(rcx_130, rax_87 + 4)
                    int64_t* rcx_131 = *(r15_6 + 0xa8)
                    (*(*rcx_131 + 0x30))(rcx_131, var_998)
                
                int64_t rcx_134 = var_988
                
                if (rcx_134 != 0)
                    sub_140a74f90(rcx_134)
                
                if (rsi_10.b == 0)
                    goto label_141899967
                
                zmm0.q = sub_141840270().q f- *(rax_89 + 0x18)
                var_9c8 += 1
                zmm7.q = zmm7.q f+ zmm10.q
                zmm6.q = zmm6.q f+ zmm10.q
                zmm14.q = zmm14.q f+ zmm0.q
                zmm0.q = zmm0.q f* zmm0.q
                zmm15.q = zmm15.q f+ zmm0.q
            sub_141892860(&var_598, *r12_3)
            var_800_1:8.d &= not.d(var_810:0xc.d)
            sub_14059bdd0(&var_810:8)
            zmm12.q = zmm12.q f+ zmm10.q
            zmm11.q = zmm11.q f+ zmm10.q
        
        var_9c0 = zmm6.q
        int64_t var_9b8_1 = zmm7.q
        
        if (var_540 - var_514 s> 0 || var_590 - var_564 s> 0)
            rdi_4.b = 1
        else
            rdi_4.b = 0
        
        int64_t* rcx_155 = &var_588
        int64_t* var_8d8_1 = &var_588
        int32_t var_8e0 = 0
        int32_t var_8dc_1 = 1
        int32_t var_8d0_1 = 0xffffffff
        int64_t var_8cc_1 = 0
        int32_t var_570
        
        if (var_570 != 0)
            sub_14059bdd0(&var_8e0)
            rcx_155 = var_8d8_1
        
        zmm2 = var_8d0_1.o
        uint128_t var_7b8_1 = var_8e0.o
        uint32_t rax_134 = (zmm2[0] u>> 0x20).d
        double var_7a8_1[0x2] = zmm2
        uint128_t var_880 = (&var_598).o
        uint64_t var_860_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        uint128_t var_870_1 = var_7b8_1
        
        if (rax_134 s< rcx_155[3].d)
            int32_t i_2 = var_870_1:0xc.d
            
            do
                char rsi_12 = rdi_4.b
                
                if (rdi_4.b == 0)
                    break
                
                void* rbx_10 = sx.q(i_2) * 0x1c + *var_880.q
                rbx_8 = zx.q(
                    *(sub_14185c470(&var_368, sub_140a6b260(rbx_10 + 4, 0x10), rbx_10 + 4) + 0x10))
                var_870_1:8.d &= not.d(var_880:0xc.d)
                sub_14059bdd0(&var_880:8)
                i_2 = var_870_1:0xc.d
                rdi_4 = nullptr
                
                if (rbx_8.d != 0)
                    rdi_4 = zx.q(rsi_12)
            while (i_2 s< *(var_870_1.q + 0x18))
        
        r13 = arg1
        uint128_t zmm0_6 = sub_141831760(_Query_perf_frequency() - *(r13 + 0x138))
        uint128_t zmm1_1
        
        if (rdi_4.b != 0)
            zmm1_1 = _mm_cvtps_pd((*(r13 + 0x60)).q)
        
        if (rdi_4.b == 0 || zmm0_6.q f<= zmm1_1.q)
            rbx_8.b = 0
        else
            rbx_8.b = 1
        
        if (zmm11.q f> 0.0)
            zmm0_6.q = zmm6.q f/ zmm11.q
        else
            zmm0_6 = zx.o(0)
        
        zmm6.d = fconvert.s(zmm0_6.q)
        int32_t rdx_81
        
        if (rbx_8.b == 0)
            void* rax_145 = *(r13 + 0x50)
            
            if (not(zmm6.d f< *(rax_145 + 0x10)))
                rdx_81 = 4
            else if (zmm6.d f< *(rax_145 + 0xc))
                int32_t rdx_82
                rdx_82.b = zmm6.d f>= *(rax_145 + 8)
                rdx_81 = rdx_82 + 1
            else
                rdx_81 = 3
        else
            rdx_81 = 0
        
        if (var_a10 != rdx_81)
            int64_t* rcx_162 = *(r13 + 0xa8)
            var_a10 = rdx_81
            (*(*rcx_162 + 0x40))(rcx_162)
        
        if (var_400_1 - var_3d4_1 s> 0)
            int64_t* rcx_163 = *(r13 + 0xa8)
            (*(*rcx_163 + 0x48))(rcx_163, zmm6)
        
        if (zmm12.q f< 3.0)
            zmm0_6 = zx.o(var_908)
        else
            zmm0_6 = zmm7
            zmm7 = zx.o(0)
            zmm0_6.q = zmm0_6.q f/ zmm12.q
            var_9b8_1 = (zx.o(0)).q
            zmm12 = zx.o(0)
            var_908 = zmm0_6.q
        
        zmm0_6.d = fconvert.s(zmm0_6.q)
        int32_t r15_8
        
        if (rbx_8.b == 0)
            void* rax_150 = *(r13 + 0x50)
            
            if (not(zmm0_6.d f< *(rax_150 + 0x10)))
                r15_8 = 4
            else if (zmm0_6.d f< *(rax_150 + 0xc))
                int32_t r15_9
                r15_9.b = zmm0_6.d f>= *(rax_150 + 8)
                r15_8 = r15_9 + 1
            else
                r15_8 = 3
        else
            r15_8 = 0
        
        if (var_a27 != 0)
            var_a30 = r15_8
            var_a38 = &var_958
            int64_t var_a20 = 0
            var_a40 = &var_4a8
            int64_t var_a18_1 = 0
            var_a48 = &var_548
            var_a50 = &var_4f8
            var_a58.q = &var_5e8
            void var_6e8
            zmm1_1 = *sub_141887960(r13, &var_6e8, &var_368, &var_598, var_a58, var_a50, var_a48, 
                var_a40, var_a38, var_a30)
            uint32_t rcx_167 = (zmm1_1.q u>> 0x20).d | (_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d
            int32_t rax_154 = _mm_bsrli_si128(zmm1_1, 8).d
            var_a20.o = zmm1_1
            
            if ((rcx_167 | rax_154 | zmm1_1.d) != 0)
                int32_t rax_197
                uint32_t rcx_207
                
                do
                    int32_t var_9a8
                    sub_140910250(&var_318, &var_9a8, &var_a20)
                    int64_t rax_156 = sx.q(var_9a8)
                    
                    if (rax_156.d == 0xffffffff)
                        break
                    
                    void* rdi_5 = var_318 + rax_156 * 0x28
                    
                    if (rdi_5 == 0)
                        break
                    
                    if (rdi_5 == -0x10)
                        break
                    
                    uint64_t* rax_159 =
                        sub_14185c470(&var_368, sub_140a6b260(&var_a20, 0x10), &var_a20)
                    
                    if (rax_159 != rdi_5 + 0x10)
                        var_a58 = 0
                        sub_140596860(rax_159, *(rdi_5 + 0x10), *(rdi_5 + 0x18), *(rax_159 + 0xc), 
                            var_a58)
                    
                    int64_t* rcx_174 = *(r13 + 0xb0)
                    int64_t r8_40 = *rcx_174
                    *(rax_159 + 0x14) = (*(r8_40 + 0x28))(rcx_174, &var_a20, r8_40)
                    rax_159[3] = sub_141840270()
                    int64_t* rcx_175 = *(r13 + 0x80)
                    int32_t var_9a4 = (*(*rcx_175 + 8))(rcx_175, rax_159, r13 + 0x128, r13 + 0x118, 
                        var_a58, var_a50, var_a48, var_a40, var_a38, var_a30)
                    sub_1418597e0(&var_598, &var_9a4, &var_a20)
                    
                    if (var_4f0 != var_4c4)
                        void var_4c0
                        void* rsi_13 = &var_4c0
                        int64_t rax_165 = sx.q(sub_140a6b260(&var_a20, 0x10))
                        int64_t r14_6 = sx.q(var_4b0 - 1)
                        
                        if (var_4b8 != 0)
                            rsi_13 = var_4b8
                        
                        int64_t rax_166 = rax_165 & r14_6
                        void* r9_16 = rsi_13 + (rax_166 << 2)
                        int32_t i_3 = *(rsi_13 + (rax_166 << 2))
                        
                        if (i_3 != 0xffffffff)
                            int64_t r8_43 = var_4f8
                            
                            do
                                int64_t rdx_91 = sx.q(i_3) * 3
                                int32_t rcx_184 = (*(r8_43 + (rdx_91 << 3) + 0xc) ^ var_a18_1:4.d)
                                    | (*(r8_43 + (rdx_91 << 3) + 8) ^ var_a18_1.d)
                                    | (*(r8_43 + (rdx_91 << 3) + 4) ^ var_a20:4.d)
                                
                                if ((rcx_184 | (*(r8_43 + (rdx_91 << 3)) ^ var_a20.d)) == 0)
                                    int64_t rdx_92 = sx.q(*r9_16)
                                    
                                    if (var_4f0 != var_4c4)
                                        int64_t r9_18 = rdx_92 * 3
                                        int64_t rax_176 =
                                            sx.q(*(r8_43 + (r9_18 << 3) + 0x14)) & r14_6
                                        void* rcx_186 = rsi_13 + (rax_176 << 2)
                                        int32_t j_2 = *(rsi_13 + (rax_176 << 2))
                                        
                                        while (j_2 != 0xffffffff)
                                            if (j_2 == rdx_92.d)
                                                *rcx_186 = *(r8_43 + (r9_18 << 3) + 0x10)
                                                break
                                            
                                            int64_t j_6 = sx.q(j_2)
                                            int64_t rcx_188 = j_6 + ((j_6 + 1) << 1)
                                            j_2 = *(r8_43 + (rcx_188 << 3))
                                            rcx_186 = r8_43 + (rcx_188 << 3)
                                    
                                    sub_1405c3640(&var_4f8, rdx_92.d, 1)
                                    break
                                
                                i_3 = *(r8_43 + 0x10 + (rdx_91 << 3))
                                r9_16 = r8_43 + 0x10 + (rdx_91 << 3)
                            while (i_3 != 0xffffffff)
                    
                    if (var_540 != var_514)
                        void var_510
                        void* rsi_14 = &var_510
                        int64_t rax_180 = sx.q(sub_140a6b260(&var_a20, 0x10))
                        int64_t r14_7 = sx.q(var_500 - 1)
                        
                        if (var_508 != 0)
                            rsi_14 = var_508
                        
                        int64_t rax_181 = rax_180 & r14_7
                        void* r9_19 = rsi_14 + (rax_181 << 2)
                        int32_t i_4 = *(rsi_14 + (rax_181 << 2))
                        
                        if (i_4 != 0xffffffff)
                            int64_t r8_44 = var_548
                            
                            do
                                int64_t rdx_93 = sx.q(i_4) * 3
                                int32_t rcx_197 = (*(r8_44 + (rdx_93 << 3) + 0xc) ^ var_a18_1:4.d)
                                    | (*(r8_44 + (rdx_93 << 3) + 8) ^ var_a18_1.d)
                                    | (*(r8_44 + (rdx_93 << 3) + 4) ^ var_a20:4.d)
                                
                                if ((rcx_197 | (*(r8_44 + (rdx_93 << 3)) ^ var_a20.d)) == 0)
                                    int64_t rdx_94 = sx.q(*r9_19)
                                    
                                    if (var_540 != var_514)
                                        int64_t r9_21 = rdx_94 * 3
                                        int64_t rax_191 =
                                            sx.q(*(r8_44 + (r9_21 << 3) + 0x14)) & r14_7
                                        void* rcx_199 = rsi_14 + (rax_191 << 2)
                                        int32_t j_3 = *(rsi_14 + (rax_191 << 2))
                                        
                                        while (j_3 != 0xffffffff)
                                            if (j_3 == rdx_94.d)
                                                *rcx_199 = *(r8_44 + (r9_21 << 3) + 0x10)
                                                break
                                            
                                            int64_t j_7 = sx.q(j_3)
                                            int64_t rcx_201 = j_7 + ((j_7 + 1) << 1)
                                            j_3 = *(r8_44 + (rcx_201 << 3))
                                            rcx_199 = r8_44 + (rcx_201 << 3)
                                    
                                    sub_1405c3640(&var_548, rdx_94.d, 1)
                                    break
                                
                                i_4 = *(r8_44 + 0x10 + (rdx_93 << 3))
                                r9_19 = r8_44 + 0x10 + (rdx_93 << 3)
                            while (i_4 != 0xffffffff)
                    
                    int64_t* rcx_203 = *(r13 + 0xa8)
                    (*(*rcx_203 + 8))(rcx_203, &var_a20)
                    var_a30 = r15_8
                    var_a38 = &var_958
                    var_a40 = &var_4a8
                    var_a48 = &var_548
                    var_a50 = &var_4f8
                    var_a58.q = &var_5e8
                    zmm1_1 = *sub_141887960(r13, &var_6e8, &var_368, &var_598, var_a58, var_a50, 
                        var_a48, var_a40, var_a38, var_a30)
                    rcx_207 = (zmm1_1.q u>> 0x20).d | (_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d
                    rax_197 = _mm_bsrli_si128(zmm1_1, 8).d
                    var_a20.o = zmm1_1
                while ((rcx_207 | rax_197 | zmm1_1.d) != 0)
        
        int32_t rdx_100 = var_590 - var_564 - var_514 + var_540
        
        if (var_a00 != rdx_100)
            int64_t* rcx_210 = *(r13 + 0xa8)
            var_a00 = rdx_100
            (*(*rcx_210 + 0x50))(rcx_210)
        
        if (var_9c8 u> 0xa)
            int32_t r8_46 = var_570
            r15_8.b = 0
            int32_t var_8c0 = 0
            int32_t var_8bc_1 = 1
            int64_t* var_8b8_1 = &var_588
            int32_t var_8b0_1 = 0xffffffff
            int64_t var_8ac_1 = 0
            
            if (r8_46 != 0)
                sub_14059bdd0(&var_8c0)
                r8_46 = var_570
            
            zmm2 = var_8b0_1.o
            int32_t var_6c4_1 = r8_46
            uint128_t var_7b8_2 = var_8c0.o
            double var_7a8_2[0x2] = zmm2
            double temp0_9[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
            uint128_t var_7e8 = (&var_598).o
            uint128_t var_7d8_1 = var_7b8_2
            int64_t var_7c8_1 = temp0_9.q
            
            while (true)
                int64_t rdx_102 = sx.q(var_7d8_1:0xc.d)
                char rax_201
                
                if (rdx_102.d != ((0xffffffff << (r8_46.b & 0x1f)).q u>> 0x20).d
                        || var_7d8_1.q != &var_588)
                    rax_201 = 0
                else
                    rax_201 = 1
                
                int64_t rcx_213 = var_7e8.q
                
                if (rax_201 == 0 || rcx_213 != &var_598)
                    rax_201 = 1
                else
                    rax_201 = 0
                
                if (rax_201 == 0)
                    break
                
                int32_t* rdi_10 = rdx_102 * 0x1c + *rcx_213
                int64_t* rax_203 =
                    sub_14185c470(&var_368, sub_140a6b260(&rdi_10[1], 0x10), &rdi_10[1])
                
                if (rax_203[2].d == 0)
                    zmm2 = zx.o(0)
                    zmm8.q = sub_141840270().q f- rax_203[3]
                    zmm2[0] = float.d(var_9c8)
                    
                    if (var_9c8 s< 0)
                        zmm2[0] = zmm2[0] + zmm9[0]
                    
                    zmm1_1.q = zmm10.q f/ zmm2[0]
                    zmm7 = zmm1_1
                    zmm1_1.q = zmm1_1.q f* zmm15.q
                    zmm7.q = zmm7.q f* zmm14.q
                    uint128_t zmm0_8
                    zmm0_8.q = zmm7.q f* zmm7.q
                    zmm1_1.q = zmm1_1.q f- zmm0_8.q
                    zmm0_8.d = fconvert.s(zmm1_1.q)
                    zmm1_1 = _mm_sqrt_ss(0, zmm0_8.d)
                    zmm0_8 = *(r13 + 0x68)
                    double temp0_11[0x2] = _mm_cvtps_pd(zmm1_1.q)
                    zmm6.q = temp0_11.q f* 4.0
                    zmm6.q = zmm6.q f+ zmm7.q
                    zmm6 = _mm_max_sd(zmm6.q, _mm_cvtps_pd(zmm0_8.q).q)
                    
                    if (not(zmm8.q f<= zmm6.q) && sub_140a237d0(rax_203, u".chunk", 1) != 0)
                        int64_t* rcx_217 = *(r13 + 0x80)
                        r15_8.b = 1
                        (*(*rcx_217 + 0x10))(rcx_217, zx.q(*rdi_10))
                        int64_t* rcx_218 = *(r13 + 0xa8)
                        var_a48 = zmm6.q
                        int512_t zmm3
                        zmm3.o = zmm7
                        var_a50 = zmm8.q
                        var_a58.q = temp0_11.q
                        (*(*rcx_218 + 0x28))(rcx_218, &rdi_10[1], rax_203, zmm3, var_a58, var_a50, 
                            var_a48, var_a40, var_a38, var_a30)
                    
                    zmm9 = 0x43f0000000000000
                
                var_7d8_1:8.d &= not.d(var_7e8:0xc.d)
                sub_14059bdd0(&var_7e8:8)
            
            zmm7 = zx.o(var_9b8_1)
            zmm8 = 0x3dcccccd
            
            if (r15_8.b != 0)
                var_9c8 = 0
                zmm14 = zx.o(0)
                zmm15 = zx.o(0)
        
        bool z_1
        
        if (0 == *(r13 + 0x140))
            *(r13 + 0x140) = 0
            z_1 = true
        else
            *(r13 + 0x140)
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (0 == *(r13 + 0x144))
                    *(r13 + 0x144) = 0
                    z_2 = true
                else
                    *(r13 + 0x144)
                    z_2 = false
                
                if (not(z_2))
                    break
                
                int64_t* rcx_220 = *(r13 + 0x70)
                (*(*rcx_220 + 0x10))(rcx_220, zmm8)
                
                if (0 == *(r13 + 0x140))
                    *(r13 + 0x140) = 0
                    z_3 = true
                else
                    *(r13 + 0x140)
                    z_3 = false
            while (not(z_3))
        
        int64_t* rcx_221 = *(r13 + 0x70)
        (*(*rcx_221 + 0x10))(rcx_221, 0x3c23d70a)
        sub_1418661f0(&var_408)
        int128_t* rcx_223 = var_820
        
        if (rcx_223 != 0)
            sub_140a74f90(rcx_223)
        
        int64_t rcx_224 = var_968
        
        if (rcx_224 != 0)
            sub_140a74f90(rcx_224)
        
        int128_t* rcx_225 = var_798
        
        if (rcx_225 != 0)
            sub_140a74f90(rcx_225)
        
        if (var_2a8 != 0)
            void** const* rcx_226 = &var_288
            
            if (rsi_2 != 0)
                rcx_226 = rsi_2
            
            (*rcx_226)[2](rcx_226)
        
        int32_t var_5f0_5 = 0
        
        if (var_5f8_1 != 0)
            sub_140a74f90(var_5f8_1)
        
        sub_14094b3a0(&var_638)
        
        if (0 == *(r13 + 0x144))
            *(r13 + 0x144) = 0
            z_4 = true
        else
            *(r13 + 0x144)
            z_4 = false
        
        zmm6 = zx.o(var_9c0)
    while (z_4)

int64_t* rcx_229 = *(r13 + 0xa8)
(*(*rcx_229 + 0x40))(rcx_229, zx.q(var_a10))

if (not(zmm11.q f<= 0.0))
    zmm13.q = zmm6.q f/ zmm11.q

int64_t* rcx_230 = *(r13 + 0xa8)
zmm1.d = fconvert.s(zmm13.q)
(*(*rcx_230 + 0x48))(rcx_230, zmm1)
int64_t* rcx_231 = *(r13 + 0xa8)
(*(*rcx_231 + 0x50))(rcx_231, 0)
int32_t var_2d0_1 = 0

if (var_2d8 != 0)
    sub_140a74f90(var_2d8)

sub_1408ffc10(&var_318)
int32_t var_370_1 = 0

if (var_378 != 0)
    sub_140a74f90(var_378)

sub_14094b3a0(&var_3b8)
void* rcx_236 = var_928:8.q

if (rcx_236 != 0)
    int32_t rax_220 = *(rcx_236 + 0xc)
    *(rcx_236 + 0xc) -= 1
    
    if (rax_220 == 1)
        int64_t* rcx_237 = var_928:8.q
        (*(*rcx_237 + 8))(rcx_237, 1)

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        (**rax_6)(rax_6)
        int32_t rdi_11 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (rdi_11 == 1)
            (*rax_6)[1](rax_6, zx.q(rdi_11))

int32_t var_5a0_2 = 0

if (var_5a8 != 0)
    sub_140a74f90(var_5a8)

sub_14094b3a0(&var_5e8)
int64_t rcx_242 = var_958

if (rcx_242 != 0)
    sub_140a74f90(rcx_242)

int32_t var_4b0_1 = 0

if (var_4b8 != 0)
    sub_140a74f90(var_4b8)

sub_14094b3a0(&var_4f8)
int32_t var_460_1 = 0

if (var_468 != 0)
    sub_140a74f90(var_468)

sub_14094b3a0(&var_4a8)
int32_t var_500_1 = 0

if (var_508 != 0)
    sub_140a74f90(var_508)

sub_14094b3a0(&var_548)
sub_140f23e90(&var_598)
int32_t var_320_1 = 0

if (var_328 != 0)
    sub_140a74f90(var_328)

void* result = sub_1418663d0(&var_368)
__security_check_cookie(rax_1 ^ &var_a78)
return result
