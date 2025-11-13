// 函数: sub_14226fd60
// 地址: 0x14226fd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0
sub_140af2b60()
sub_140b2af40(&data_143dbb3f0, u"physxDispatcher=", &arg_18)

if (arg_18 == 0)
    sub_140af2b60()
    char rax_1 = sub_140b21a10(&data_143dbb3f0, u"physxDispatcher")
    int64_t rcx = arg_18
    
    if (rax_1 != 0)
        rcx = 4
    
    arg_18 = rcx

void*** rbx

if (sub_140b011d0() == 0)
label_14226fe63:
    void*** rax_10 = j_sub_140a82f30(0x18)
    rbx = rax_10
    
    if (rax_10 == 0)
        rbx = nullptr
    else
        rax_10[2] = 0
        *rbx = &data_1433103c8
        rbx[1] = 0
        rbx[2] = 0
else
    if (sub_140b70ca0() s< 3)
        goto label_14226fe63
    
    if (sub_140a54810() == 0)
        goto label_14226fe63
    
    int512_t zmm1_1 = sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"SingleThreadedPhysics") != 0)
        goto label_14226fe63
    
    int64_t rax_6 = arg_18
    
    if (rax_6 == 0)
        void*** rax_8 = j_sub_140a82f30(0x10)
        rbx = rax_8
        
        if (rax_8 == 0)
            rbx = nullptr
        else
            *rbx = &data_1433103a0
            rbx[1].d = TlsAlloc()
    else
        rbx = sub_1427d1ae0(rax_6.d, nullptr, zmm1_1)

*(arg1 + 0xb8) = rbx
int32_t var_308 = 3
void* var_300 = arg1
*(arg1 + 0x100) = var_308.o
int64_t* rcx_2 = data_143f52528
void*** rax_12

if (rcx_2 == 0)
    rax_12 = j_sub_140a82f30(0x10)
    
    if (rax_12 == 0)
        rax_12 = nullptr
    else
        rax_12[1] = arg1
        *rax_12 = &data_14330f4a0
else
    rax_12 = (**rcx_2)(rcx_2, arg1)

*(arg1 + 0xc0) = rax_12
int64_t* rcx_3 = data_143f52538
int64_t rax_14

if (rcx_3 == 0)
    rax_14 = 0
else
    rax_14 = (**rcx_3)(rcx_3, arg1)

*(arg1 + 0xc8) = rax_14
int64_t* rcx_4 = data_143f52548
int64_t rax_16

if (rcx_4 == 0)
    rax_16 = 0
else
    rax_16 = (**rcx_4)(rcx_4, arg1)

*(arg1 + 0xd0) = rax_16
int64_t* rcx_5 = data_143ef8520
int128_t* rax_18 = (*(*rcx_5 + 0x20))(rcx_5)
int64_t var_238 = 0
int16_t* (* rcx_6)(int16_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, 
    int16_t* arg6, int64_t* arg7) = sub_142273620
int32_t var_230 = 0
int64_t var_1f8 = 0
int32_t var_1f0 = 0
int64_t var_1e8_1
__builtin_memset(&var_1e8_1, 0, 0x30)
uint128_t zmm0
zmm0.d = (*rax_18).d f* 0.0399999991f
int32_t var_1b4 = zmm0.d
zmm0.d = (*rax_18).d f* 0.0399999991f
int32_t var_1ac = 0x200
int64_t var_1a0 = 0
int32_t var_194 = 1
int32_t var_1b0 = zmm0.d
int32_t var_174 = 0x7f7fffff
uint128_t var_168 = data_142fcae90
int32_t var_18c = 0
int64_t var_188 = 0
int64_t var_180 = 0x80
int32_t var_178 = 0x10000
int32_t var_170 = 0x2000
int32_t var_16c = 1
int32_t var_158 = 0x7e7fffff
int32_t var_154 = 0x7e7fffff
int32_t var_150 = 0x7e7fffff
int32_t var_14c = 0x2000000
int32_t var_148 = 0x1800000
int32_t var_144 = 0x1000000
int32_t var_140 = 0x80000
int32_t var_13c = 0x14000
int32_t var_138 = 0x100000
int32_t var_134 = 0x4000000
int32_t var_130 = 0x40000
int64_t var_12c = 8
uint64_t var_124 = *rax_18
int32_t var_11c = *(rax_18 + 8)
int64_t var_1a8 = *(arg1 + 0xb8)
void* arg_20
int64_t* var_210 = &arg_20
int16_t* (* rax_21)(int16_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, 
    int16_t* arg6, int64_t* arg7) = data_143f3a470
arg_20 = arg1
int32_t var_208 = 8

if (rax_21 != 0)
    rcx_6 = rax_21

int64_t var_228 = *(arg1 + 0xc0)
int64_t var_220 = *(arg1 + 0xc8)
int64_t var_218 = *(arg1 + 0xd0)
int16_t* (* var_200)(int16_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, 
    int16_t* arg6, int64_t* arg7) = rcx_6
int64_t* rax_25 = sub_142565030()

if (rax_25[0x23] == 0)
    int64_t rdx_3 = *rax_25
    (*(rdx_3 + 0x390))(rax_25, rdx_3)

int32_t var_1ac_1

if (*(rax_25[0x23] + 0x51) == 0)
    var_1ac_1 = var_1ac & 0xfffffdff
else
    var_1ac_1 = var_1ac | 0x200

int64_t* rax_27 = sub_142565030()
void* rax_28 = rax_27[0x23]

if (rax_28 == 0)
    int64_t rdx_4 = *rax_27
    (*(rdx_4 + 0x390))(rax_27, rdx_4)
    rax_28 = rax_27[0x23]

int32_t var_1ac_2

if (*(rax_28 + 0x52) == 0)
    var_1ac_2 = var_1ac_1 & 0xffffbfff
else
    var_1ac_2 = var_1ac_1 | 0x4000

int64_t* rax_29 = sub_142565030()
void* rax_30 = rax_29[0x23]

if (rax_30 == 0)
    int64_t rdx_5 = *rax_29
    (*(rdx_5 + 0x390))(rax_29, rdx_5)
    rax_30 = rax_29[0x23]

int32_t var_1b8 = *(rax_30 + 0x90)
int64_t* rax_31 = sub_142565030()
void* rax_32 = rax_31[0x23]

if (rax_32 == 0)
    int64_t rdx_6 = *rax_31
    (*(rdx_6 + 0x390))(rax_31, rdx_6)
    rax_32 = rax_31[0x23]

if (*(rax_32 + 0x53) != 0)
    var_1ac_2 |= 0x1000

int64_t* rax_33 = sub_142565030()
void* rax_34 = rax_33[0x23]

if (rax_34 == 0)
    int64_t rdx_7 = *rax_33
    (*(rdx_7 + 0x390))(rax_33, rdx_7)
    rax_34 = rax_33[0x23]

if (*(rax_34 + 0xb1) == 0)
    var_1ac_2 |= 0x20001

int64_t* rax_35 = sub_142565030()
void* rax_36 = rax_35[0x23]

if (rax_36 == 0)
    int64_t rdx_8 = *rax_35
    (*(rdx_8 + 0x390))(rax_35, rdx_8)
    rax_36 = rax_35[0x23]

if (*(rax_36 + 0xb4) == 0)
    var_1ac_2 |= 4

int64_t* rax_37 = sub_142565030()
void* rax_38 = rax_37[0x23]

if (rax_38 == 0)
    int64_t rdx_9 = *rax_37
    (*(rdx_9 + 0x390))(rax_37, rdx_9)
    rax_38 = rax_37[0x23]

if (*(rax_38 + 0xb2) == 0 && data_143f51c44 == 0)
    var_1ac_2 |= 0x20

int64_t* rax_39 = sub_142565030()
void* rax_40 = rax_39[0x23]

if (rax_40 == 0)
    int64_t rdx_10 = *rax_39
    (*(rdx_10 + 0x390))(rax_39, rdx_10)
    rax_40 = rax_39[0x23]

if (*(rax_40 + 0xb3) == 0 && data_143f51c48 == 0)
    var_1ac_2 |= 0x40

int32_t var_190 = *(arg1 + 0x1e0)
int32_t var_198 = 1
int64_t* rax_42 = sub_142565030()
void* rax_43 = rax_42[0x23]

if (rax_43 == 0)
    int64_t rdx_11 = *rax_42
    (*(rdx_11 + 0x390))(rax_42, rdx_11)
    rax_43 = rax_42[0x23]

if (*(rax_43 + 0xb5) != 0)
    int32_t var_1ac_3 = var_1ac_2 | 0x100000

sub_142281ac0(&var_238)
void* rsi_1

if (arg2 == 0 || (*(arg2 + 0x22e) & 0x40) == 0)
    int64_t* rax_44 = sub_142565030()
    void* rsi_2 = rax_44[0x23]
    
    if (rsi_2 == 0)
        int64_t rdx_12 = *rax_44
        (*(rdx_12 + 0x390))(rax_44, rdx_12)
        rsi_2 = rax_44[0x23]
    
    rsi_1 = rsi_2 + 0xf0
else
    rsi_1 = arg2 + 0x304

uint32_t rbx_11 = zx.d(*rsi_1)
void*** rax_45

if (rbx_11.b == 0)
    rax_45 = nullptr
else
    rax_45 = j_sub_140a82f30(8)
    
    if (rax_45 == 0)
        rax_45 = nullptr
        int32_t var_1f0_2 = 1
        int64_t var_1e8_3 = 0
    else
        *rax_45 = &data_14330f4d8
        int32_t var_1f0_1 = 1
        void*** var_1e8_2 = rax_45

*(arg1 + 0xd8) = rax_45
int64_t* rcx_18 = data_143ef8520
int64_t* rax_47 = (*(*rcx_18 + 0x90))(rcx_18, &var_238)
int64_t rdx_14 = *rax_47
int64_t* rax_48 = (*(rdx_14 + 0x3a8))(rax_47, rdx_14)

if (rax_48 != 0)
    int64_t r8_1 = *rax_48
    char arg_8 = 7
    (*(r8_1 + 8))(rax_48, &arg_8, r8_1)

int64_t i_6 = 2

if (rbx_11.b != 0)
    int32_t rax_49 = data_143f51c34
    int32_t rcx_21 = *(rsi_1 + 0x3c)
    
    if (rax_49 s> 0)
        rcx_21 = rax_49
    
    int32_t rbx_13 = sbb.d(rbx_11, rbx_11, *(rsi_1 + 2) != 0) + 0x10
    
    if (rcx_21 u< 1)
        rbx_13 = 1
    else if (rcx_21 u< rbx_13)
        rbx_13 = rcx_21
    
    void* rcx_22 = nullptr
    int32_t zmm1_2 = *(rsi_1 + 0x18)
    int32_t r12_2 = rbx_13 * rbx_13
    int128_t var_2b8 = *(rsi_1 + 4)
    int32_t var_2ec_1 = 0
    int32_t var_2a8_1 = (*(rsi_1 + 0x14)).d
    int32_t var_2a4_1 = zmm1_2
    int32_t r13_1 = r12_2
    void* var_2f8 = nullptr
    
    if (r12_2 s> 0)
        sub_1405a4df0(&var_2f8)
        rcx_22 = var_2f8
        r13_1 = r12_2
    
    memset(rcx_22, 0, sx.q(r12_2) * 0x18)
    void* rbx_14 = var_2f8
    sub_1427f4f00(rbx_14, &var_2b8, rbx_13, 2)
    void* i = rbx_14 + sx.q(r13_1) * 0x18
    int32_t zmm1_3
    
    if (rbx_14 != i)
        int32_t* rbx_15 = rbx_14 + 0x14
        
        do
            int64_t rax_53 = *rax_47
            zmm1_3 = *rbx_15
            int128_t var_118 = *(rbx_15 - 0x14)
            int64_t var_100_1 = 0
            int32_t var_108_1 = rbx_15[-1].d
            int32_t var_104_1 = zmm1_3
            (*(rax_53 + 0x330))(rax_47, &var_118, 0)
            rbx_15 = &rbx_15[6]
        while (&rbx_15[-5] != i)
    
    if (*(rsi_1 + 2) != 0)
        zmm1_3 = *(rsi_1 + 4)
        
        if (not(zmm1_3 f<= *(rsi_1 + 0x20)))
            int32_t zmm2_1 = *(rsi_1 + 0x24)
            int32_t zmm3_1 = *(rsi_1 + 8)
            
            if (not(zmm2_1 f>= zmm3_1))
                int32_t zmm4_1 = *(rsi_1 + 0x2c)
                
                if (not(zmm4_1 f<= *(rsi_1 + 0x10)) && not((*(rsi_1 + 0x14)).d f>= *(rsi_1 + 0x30)))
                    int32_t var_298_1 = (*(rsi_1 + 0xc)).d
                    int32_t var_28c_1 = (*(rsi_1 + 0x18)).d
                    int32_t var_2a0 = zmm1_3
                    int32_t var_29c_1 = zmm2_1
                    int32_t var_294_1 = zmm4_1
                    int32_t var_290_1 = zmm3_1
                    void* var_2e8 = nullptr
                    int32_t var_2e0_1 = 1
                    sub_1405a4df0(&var_2e8)
                    void* r12_3 = var_2e8
                    __builtin_memset(r12_3, 0, 0x18)
                    sub_1427f4f00(r12_3, &var_2a0, 1, 2)
                    void* i_1 = r12_3 + sx.q(var_2e0_1) * 0x18
                    int32_t zmm1_4
                    
                    if (r12_3 != i_1)
                        int32_t* rbx_16 = r12_3 + 0x14
                        
                        do
                            int64_t rax_56 = *rax_47
                            zmm1_4 = *rbx_16
                            int128_t var_f8 = *(rbx_16 - 0x14)
                            int64_t var_e0_1 = 0
                            int32_t var_e8_1 = rbx_16[-1].d
                            int32_t var_e4_1 = zmm1_4
                            (*(rax_56 + 0x330))(rax_47, &var_f8, 0)
                            rbx_16 = &rbx_16[6]
                        while (&rbx_16[-5] != i_1)
                    
                    if (r12_3 != 0)
                        sub_140a74f90(r12_3)
                    
                    zmm1_4 = *(rsi_1 + 0x14)
                    int32_t var_288 = (*(rsi_1 + 0x20)).d
                    int32_t var_284_1 = zmm1_4
                    int32_t var_280_1 = (*(rsi_1 + 0xc)).d
                    int32_t var_27c_1 = *(rsi_1 + 0x10)
                    int32_t var_278_1 = (*(rsi_1 + 0x30)).d
                    int32_t var_274_1 = *(rsi_1 + 0x18)
                    void* var_2d8 = nullptr
                    int32_t var_2d0_1 = 1
                    sub_1405a4df0(&var_2d8)
                    void* r12_4 = var_2d8
                    __builtin_memset(r12_4, 0, 0x18)
                    sub_1427f4f00(r12_4, &var_288, 1, 2)
                    void* i_2 = r12_4 + sx.q(var_2d0_1) * 0x18
                    int32_t zmm1_5
                    
                    if (r12_4 != i_2)
                        int32_t* rbx_17 = r12_4 + 0x14
                        
                        do
                            int64_t rax_59 = *rax_47
                            zmm1_5 = *rbx_17
                            int128_t var_d8 = *(rbx_17 - 0x14)
                            int64_t var_c0_1 = 0
                            int32_t var_c8_1 = rbx_17[-1].d
                            int32_t var_c4_1 = zmm1_5
                            (*(rax_59 + 0x330))(rax_47, &var_d8, 0)
                            rbx_17 = &rbx_17[6]
                        while (&rbx_17[-5] != i_2)
                    
                    if (r12_4 != 0)
                        sub_140a74f90(r12_4)
                    
                    zmm1_5 = *(rsi_1 + 8)
                    int32_t var_270 = (*(rsi_1 + 0x10)).d
                    int32_t var_26c_1 = zmm1_5
                    int32_t var_268_1 = (*(rsi_1 + 0xc)).d
                    int32_t var_264_1 = *(rsi_1 + 0x2c)
                    int32_t var_260_1 = (*(rsi_1 + 0x30)).d
                    int32_t var_25c_1 = *(rsi_1 + 0x18)
                    void* var_2c8 = nullptr
                    int32_t var_2c0_1 = 1
                    sub_1405a4df0(&var_2c8)
                    void* r12_5 = var_2c8
                    __builtin_memset(r12_5, 0, 0x18)
                    sub_1427f4f00(r12_5, &var_270, 1, 2)
                    void* i_3 = r12_5 + sx.q(var_2c0_1) * 0x18
                    int32_t zmm1_6
                    
                    if (r12_5 != i_3)
                        int32_t* rbx_18 = r12_5 + 0x14
                        
                        do
                            int64_t rax_62 = *rax_47
                            zmm1_6 = *rbx_18
                            int128_t var_b8 = *(rbx_18 - 0x14)
                            int64_t var_a0_1 = 0
                            int32_t var_a8_1 = rbx_18[-1].d
                            int32_t var_a4_1 = zmm1_6
                            (*(rax_62 + 0x330))(rax_47, &var_b8, 0)
                            rbx_18 = &rbx_18[6]
                        while (&rbx_18[-5] != i_3)
                    
                    if (r12_5 != 0)
                        sub_140a74f90(r12_5)
                    
                    zmm1_6 = *(rsi_1 + 0x24)
                    int32_t var_258 = (*(rsi_1 + 0x20)).d
                    int32_t var_254_1 = zmm1_6
                    int32_t var_250_1 = (*(rsi_1 + 0xc)).d
                    int32_t var_24c_1 = *(rsi_1 + 4)
                    int32_t var_248_1 = (*(rsi_1 + 0x14)).d
                    int32_t var_244_1 = *(rsi_1 + 0x18)
                    var_308.q = 0
                    int32_t var_300_1 = 1
                    sub_1405a4df0(&var_308)
                    void* rsi_3 = var_308.q
                    __builtin_memset(rsi_3, 0, 0x18)
                    sub_1427f4f00(rsi_3, &var_258, 1, 2)
                    void* i_4 = rsi_3 + sx.q(var_300_1) * 0x18
                    
                    if (rsi_3 != i_4)
                        int32_t* rbx_19 = rsi_3 + 0x14
                        
                        do
                            int64_t rax_65 = *rax_47
                            int32_t zmm1_7 = *rbx_19
                            int128_t var_98 = *(rbx_19 - 0x14)
                            int64_t var_80_1 = 0
                            int32_t var_88_1 = rbx_19[-1].d
                            int32_t var_84_1 = zmm1_7
                            (*(rax_65 + 0x330))(rax_47, &var_98, 0)
                            rbx_19 = &rbx_19[6]
                        while (&rbx_19[-5] != i_4)
                    
                    if (rsi_3 != 0)
                        sub_140a74f90(rsi_3)
    
    void* rcx_47 = var_2f8
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)

int64_t rax_67 = data_143ef85b0
int64_t* rcx_48 = data_143ef8530
int64_t var_78 = 0
int64_t var_68 = 0
int32_t var_58 = 0x1010000
int64_t* var_70 = rax_47
int64_t var_60 = rax_67
int64_t* rax_69
int64_t rdx_32
rax_69, rdx_32 = (*(*rcx_48 + 0x28))(rcx_48, &var_78)
rdx_32.b = 1
int64_t r8_5 = *rax_69
(*(r8_5 + 0xd8))(rax_69, rdx_32, r8_5)
int64_t r8_6 = *rax_69
(*(r8_6 + 0x68))(rax_69, 1, r8_6)
*(arg1 + 0x60) = rax_69
rax_47[1] = arg1 + 0x100
rax_69[3] = arg1 + 0x100
void* rax_71 = j_sub_140a82f30(0xe8)
void* const r8_7 = rax_71

if (rax_71 == 0)
    r8_7 = nullptr
else
    void* rdx_33 = rax_71 + 0x20
    int64_t i_5
    
    do
        *(rdx_33 - 0x20) = 0
        void* rcx_51 = rdx_33 - 0x10
        *(rdx_33 - 0x18) = 0
        *rdx_33 = 0
        *(rdx_33 + 8) = 0
        *(rdx_33 + 0xc) = 0x80
        void* rax_72 = *rdx_33
        rdx_33 += 0x50
        
        if (rax_72 != 0)
            rcx_51 = rax_72
        
        *rcx_51 = 0
        *(rcx_51 + 8) = 0
        *(rdx_33 - 0x40) = 0xffffffff
        *(rdx_33 - 0x3c) = 0
        *(rdx_33 - 0x30) = 0
        *(rdx_33 - 0x28) = 0
        i_5 = i_6
        i_6 -= 1
    while (i_5 != 1)
    *(r8_7 + 0xa0) = i_6
    *(r8_7 + 0xa8) = 0
    *(r8_7 + 0xac) = 0
    *(r8_7 + 0xb0) = 0
    *(r8_7 + 0xb8) = i_6
    *(r8_7 + 0xc0) = i_6
    *(r8_7 + 0xc8) = 0
    *(r8_7 + 0xd0) = 0
    *(r8_7 + 0xd8) = arg1
    *(r8_7 + 0xe0) = rax_69

*(arg1 + 0x110) = r8_7
int64_t* rax_74 = (*(*rax_47 + 0x3a8))(rax_47)

if (rax_74 != 0)
    int64_t r8_8 = *rax_74
    char arg_10 = 7
    (*(r8_8 + 8))(rax_74, &arg_10, r8_8)

return sub_140920c10(&data_143a2f340, arg1)
