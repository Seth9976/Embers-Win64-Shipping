// 函数: sub_140bc9d70
// 地址: 0x140bc9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int64_t* var_380
sub_140a956a0(&var_380)
void*** rax_2 = sub_140a491d0(0)
int64_t var_2a8 = -1
int64_t* var_358 = &var_380
void*** var_d8 = nullptr
void** const var_c8 = &data_142e86ed0
int64_t var_298 = 0
int64_t (* var_e8)(int64_t* arg1, int32_t* arg2) = sub_140bc33e0
int64_t var_58 = 0
int32_t var_50 = 0
uint128_t var_c0 = rax_2.o
int64_t var_2b0 = 0
int64_t var_2a0 = 0
var_50:3.b = 5
uint64_t var_108 = var_58
int32_t var_100 = 0x5000000
sub_140abd8c0(arg2, &var_108, &var_2b0, &var_e8)

if (var_e8 != 0)
    void** const* rcx_2 = &var_c8
    
    if (var_d8 != 0)
        rcx_2 = var_d8
    
    (*rcx_2)[2](rcx_2)

(*rax_2)[4](rax_2, 0xffffffff, 0)
int64_t* rax_6 = var_380
int32_t var_2e8 = 0
int64_t var_330 = 0
void** var_238
int512_t zmm1 = sub_140b4c8e0(&var_238, *rax_6, zx.q(rax_6[3].b) << 0x20 | zx.q(rax_6[1].d), 0, 0)
int32_t var_3a4 = 0
int64_t* var_230
int32_t* rdx_2 = *var_230
uint8_t var_20f

if (&rdx_2[1] u> var_230[1])
    int32_t* rdx_3 = &var_3a4
    void*** rcx_7 = &var_238
    
    if ((var_20f u>> 5 & 1) != 0)
        sub_140b54070(rcx_7, rdx_3, zmm1)
    else
        var_238[0x2a](rcx_7, rdx_3, 4)
else
    var_3a4 = *rdx_2
    *var_230 += 4

int64_t rcx_8 = sx.q(var_3a4)
*(arg1 + 0xe0) = (rcx_8 u/ 0x28).d
int64_t rax_12 = sub_140a82f30(rcx_8, 0)
int64_t r8_4 = sx.q(var_3a4)
*(arg1 + 0xb8) = rax_12
sub_140b53b10(&var_238, rax_12, r8_4)
int32_t rcx_10 = *(arg1 + 0xe0)
int32_t r9_1 = 0
int32_t var_398

if (rcx_10 s> 0)
    int64_t r8_5 = 0
    
    do
        int64_t rdx_7 = *(arg1 + 0xb8)
        r8_5 += 0x28
        r9_1 += 1
        int32_t var_394_1 = *(rdx_7 + r8_5 - 0x24)
        var_398 = *(*arg3 + (sx.q(*(rdx_7 + r8_5 - 0x28)) << 2))
        *(rdx_7 + r8_5 - 0x28) = var_398.q
        rcx_10 = *(arg1 + 0xe0)
    while (r9_1 s< rcx_10)

int32_t rbx_4 = rcx_10 s/ 0xa + rcx_10

if (rbx_4 s> *(arg1 + 0x30) - *(arg1 + 0x5c))
    sub_140bceb60(arg1 + 0x28, rbx_4)
    int32_t rdx_11
    
    if (rbx_4 u< 4)
        rdx_11 = 1
    else
        uint32_t rbx_5 = rbx_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rbx_5 + 8)
        int32_t var_2e4_1 = temp0_1
        int32_t rcx_14
        
        if (rbx_5 == 0xfffffff8)
            rcx_14 = 0x20
        else
            rcx_14 = 0x1f - temp0_1
        
        int32_t rcx_16 = rcx_14 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rbx_5 + 7)
        int32_t var_2e0_1 = temp0_2
        char rdx_10
        
        if (rcx_16 == 0)
            rdx_10 = 0x20
        else
            rdx_10 = 0x1f - temp0_2.b
        
        rdx_11 = 1 << ((not.d(rcx_16)).b & (0x20 - rdx_10))
    
    int32_t rax_23 = *(arg1 + 0x70)
    
    if (rax_23 == 0 || rax_23 s< rdx_11)
        *(arg1 + 0x70) = rdx_11
        zmm1 = sub_140943160(arg1 + 0x28)

int32_t i = 0

if (*(arg1 + 0xe0) s> 0)
    do
        int32_t i_4 = i
        int64_t* rbx_7 = *(arg1 + 0xb8) + sx.q(i) * 0x28
        int32_t var_2c0
        sub_140a9e570(arg1 + 0x28, &var_2c0)
        int64_t* var_2b8
        *var_2b8 = *rbx_7
        var_2b8[1].d = i
        *(var_2b8 + 0xc) = 0xffffffff
        int64_t rbx_8 = *var_2b8
        char* var_3b0_1 = nullptr
        int32_t r8_7 = (rbx_8 u>> 0x20).d + sub_140b5ead0(rbx_8.d)
        int32_t rax_28 = var_2c0
        int32_t var_2d8_1 = rax_28
        int64_t var_3b8
        var_3b8.d = rax_28
        void var_2d4
        zmm1 = sub_14095c550(arg1 + 0x28, &var_2d4, r8_7, var_2b8, var_3b8.d, var_3b0_1)
        i += 1
    while (i s< *(arg1 + 0xe0))

int32_t var_3a0 = 0
int32_t* rdx_14 = *var_230

if (&rdx_14[1] u> var_230[1])
    int32_t* rdx_15 = &var_3a0
    void*** rcx_25 = &var_238
    
    if ((var_20f u>> 5 & 1) != 0)
        sub_140b54070(rcx_25, rdx_15, zmm1)
    else
        var_238[0x2a](rcx_25, rdx_15, 4)
else
    var_3a0 = *rdx_14
    *var_230 += 4

int64_t rcx_26 = sx.q(var_3a0)
*(arg1 + 0xe4) = (rcx_26 u>> 2).d
int64_t rax_35 = sub_140a82f30(rcx_26, 0)
int64_t r8_8 = sx.q(var_3a0)
*(arg1 + 0xc8) = rax_35
sub_140b53b10(&var_238, rax_35, r8_8)
int32_t var_390 = 0
int32_t* rdx_17 = *var_230

if (&rdx_17[1] u> var_230[1])
    int32_t* rdx_18 = &var_390
    void*** rcx_29 = &var_238
    
    if ((var_20f u>> 5 & 1) != 0)
        sub_140b54070(rcx_29, rdx_18, zmm1)
    else
        var_238[0x2a](rcx_29, rdx_18, 4)
else
    var_390 = *rdx_17
    *var_230 += 4

int64_t rcx_30 = sx.q(var_390)
*(arg1 + 0x78) = (rcx_30 u>> 3).d
int64_t var_1a8
int32_t* rbx_11 = *var_380 + var_1a8
int64_t var_1a8_1 = var_1a8 + rcx_30
*(arg1 + 0x80) = sub_140a82f30(rcx_30, 0)
int32_t r9_3 = 0
int32_t i_6 = *(arg1 + 0x78)

if (i_6 s> 0)
    int32_t* r8_9 = rbx_11
    
    do
        void* rdx_20 = r8_9 - rbx_11
        r9_3 += 1
        int32_t rax_47 = *(*arg3 + (sx.q(*r8_9) << 2))
        int32_t rcx_32 = r8_9[1]
        r8_9 = &r8_9[2]
        int32_t var_394_2 = rcx_32
        int64_t rcx_33 = *(arg1 + 0x80)
        var_398 = rax_47
        *(rdx_20 + rcx_33) = var_398.q
        i_6 = *(arg1 + 0x78)
    while (r9_3 s< i_6)

int64_t i_5 = sx.q(i_6)
int64_t rax_49 = 0x10 * i_5

if (mulu.dp.q(0x10, i_5) u>> 0x40 != zx.o(0))
    rax_49 = -1

void* rax_50 = j_sub_140a82f30(rax_49)
void* const rdx_21 = rax_50

if (rax_50 == 0)
    rdx_21 = nullptr
else if (i_5 != 0)
    void* rcx_35 = rax_50 + 8
    int64_t i_1
    
    do
        *(rcx_35 - 8) = 0
        *rcx_35 = 0
        *rcx_35
        *(rcx_35 + 4) = 0
        rcx_35 += 0x10
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

*(arg1 + 0x90) = rdx_21
int32_t* rdx_22 = *var_230
int32_t var_38c

if (&rdx_22[1] u> var_230[1])
    int32_t* rdx_23 = &var_38c
    void*** rcx_37 = &var_238
    
    if ((var_20f & 0x20) != 0)
        sub_140b54070(rcx_37, rdx_23, zmm1)
    else
        var_238[0x2a](rcx_37, rdx_23, 4)
else
    var_38c = *rdx_22
    *var_230 += 4

int64_t rax_55 = sub_140a82f30(sx.q(var_38c), 0)
int64_t r8_10 = sx.q(var_38c)
*(arg1 + 0xd0) = rax_55
sub_140b53b10(&var_238, rax_55, r8_10)
int64_t var_158
__builtin_memset(&var_158, 0, 0x2c)
int32_t var_12c = 0x80
int32_t var_128 = 0xffffffff
int32_t var_124 = 0
int64_t var_118 = 0
int32_t var_110 = 0
sub_140bc0850(&var_238, &var_158, zmm1)
char* rax_56 = sub_140a752e0()
int64_t* rbx_12 = *(rax_56 + 0x30)

if (rbx_12 != 0)
    rbx_12[1].d += 1

int64_t* rax_57 = sub_140903440(*(rax_56 + 0x28))
int64_t var_370 = 0
int32_t rdi_2 = rax_57[1].d
int64_t r15 = *rax_57
int32_t var_368 = rdi_2

if (rdi_2 != 0)
    sub_1405a4c70(&var_370, rdi_2, 0)
    memcpy(var_370, r15, rdi_2 * 2)
else
    int32_t var_364_1 = 0

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t rax_60 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (rax_60 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"CULTURE=", &var_370, 1)
int32_t var_378
sub_140bc6c10(&var_158, &var_378, &var_370)
int64_t rax_62 = sx.q(var_378)

if (rax_62.d != 0xffffffff)
    int64_t r15_1 = rax_62 * 0x68
    void* r15_2 = r15_1 + var_158
    
    if (r15_1 != neg.q(var_158) && r15_2 != -0x10)
        int32_t r11_1 = *(r15_2 + 0x38)
        void* r9_5 = r15_2 + 0x20
        int32_t var_34c_1 = 1
        int32_t rcx_47 = 0
        int32_t var_350_1 = 0
        int32_t r8_15 = 0
        void* var_348_1 = r9_5
        int32_t var_340_1 = 0xffffffff
        int64_t var_33c_1 = 0
        
        if (r11_1 != 0)
            void* rax_63 = *(r9_5 + 0x10)
            
            if (rax_63 != 0)
                r9_5 = rax_63
            
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(r11_1 - 1)
            int32_t rdx_31 = *r9_5
            
            if (rdx_31 != 0)
            label_140bca508:
                int32_t rax_70 = neg.d(rdx_31) & rdx_31
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_70)
                int32_t var_34c_2 = rax_70
                int32_t var_2d0_1 = temp0_5
                int32_t r13_1
                
                if (rax_70 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_5
                
                var_33c_1.d = r8_15 - r13_1 + 0x1f
                
                if (r8_15 - r13_1 + 0x1f s> r11_1)
                    var_33c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_32 = sx.q(rcx_47)
                    r8_15 += 0x20
                    rcx_47 += 1
                    var_33c_1:4.d = r8_15
                    var_350_1 = rcx_47
                    
                    if (rdx_32.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_31 = *(r9_5 + (rdx_32 << 2) + 4)
                    int32_t var_340_2 = 0xffffffff
                    
                    if (rdx_31 != 0)
                        goto label_140bca508
                
                var_33c_1.d = r11_1
        
        int64_t* var_248_1 = r15_2 + 0x10
        int128_t zmm0_1 = var_350_1.o
        int128_t var_258_1 = 0xffffffff
        int16_t var_2f0_1 = 0
        int128_t var_318_1 = zmm0_1
        int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        void* rax_72 = zmm0_1.q
        int32_t temp0_7 = _mm_bsrli_si128(0xffffffff, 4)
        zmm0_1.q = temp0_6
        int128_t var_328 = (r15_2 + 0x10).o
        int128_t var_308_1 = zmm0_1
        
        if (temp0_7 s< *(rax_72 + 0x18))
            int32_t i_2 = var_318_1:0xc.d
            
            do
                int64_t* r12_1 = var_328.q
                int64_t rdi_4 = sx.q(i_2) * 2
                int64_t rbx_14 = *(*(arg1 + 0xb8) + sx.q(*(*r12_1 + (rdi_4 << 3))) * 0x28)
                
                if (*(arg1 + 0x30) != *(arg1 + 0x5c))
                    int32_t rax_77 = sub_140b5ead0(rbx_14.d) + rbx_14:4.d
                    void* r8_17 = arg1 + 0x60
                    void* rcx_52 = *(r8_17 + 8)
                    
                    if (rcx_52 != 0)
                        r8_17 = rcx_52
                    
                    int32_t j = *(r8_17 + (((sx.q(*(arg1 + 0x70)) - 1) & sx.q(rax_77)) << 2))
                    
                    if (j != 0xffffffff)
                        int64_t r8_18 = *(arg1 + 0x28)
                        
                        do
                            int64_t j_2 = sx.q(j)
                            int64_t rcx_53 = j_2 * 5
                            
                            if (*(r8_18 + (rcx_53 << 2)) == rbx_14)
                                if (j != 0xffffffff)
                                    void* rdx_36 = r8_18 + j_2 * 0x14
                                    
                                    if (rdx_36 != 0 && rdx_36 != -8)
                                        *(rdx_36 + 8) = *(*r12_1 + (rdi_4 << 3) + 4)
                                
                                break
                            
                            j = *(r8_18 + (rcx_53 << 2) + 0xc)
                        while (j != 0xffffffff)
                
                var_318_1:8.d &= not.d(var_328:0xc.d)
                sub_14059bdd0(&var_328:8)
                i_2 = var_318_1:0xc.d
            while (i_2 s< *(var_318_1.q + 0x18))
            
            if (var_2f0_1.b != 0 && var_2f0_1:1.b != 0)
                sub_1409ffd20(r15_2 + 0x10, *(r15_2 + 0x18) - *(r15_2 + 0x44), 1)
        
        int32_t i_3 = 0
        
        if (*(arg1 + 0xe4) s> 0)
            int64_t r11_2 = 0
            
            do
                int32_t* rbx_15 = *(arg1 + 0xc8)
                int64_t r9_6 = sx.q(*(rbx_15 + r11_2))
                
                if (*(r15_2 + 0x18) != *(r15_2 + 0x44))
                    void* rcx_57 = *(r15_2 + 0x50)
                    void* r8_20 = r15_2 + 0x48
                    
                    if (rcx_57 != 0)
                        r8_20 = rcx_57
                    
                    int32_t j_1 = *(r8_20 + (((sx.q(*(r15_2 + 0x58)) - 1) & r9_6) << 2))
                    
                    if (j_1 != 0xffffffff)
                        int64_t r8_21 = *(r15_2 + 0x10)
                        
                        do
                            int64_t j_3 = sx.q(j_1)
                            int64_t rcx_59 = j_3 * 2
                            
                            if (*(r8_21 + (rcx_59 << 3)) == r9_6.d)
                                if (j_1 != 0xffffffff)
                                    int64_t rdx_43 = j_3 << 4
                                    void* rdx_44 = rdx_43 + r8_21
                                    
                                    if (rdx_43 != neg.q(r8_21) && rdx_44 != -4)
                                        *(rbx_15 + r11_2) = *(rdx_44 + 4)
                                
                                break
                            
                            j_1 = *(r8_21 + (rcx_59 << 3) + 8)
                        while (j_1 != 0xffffffff)
                
                i_3 += 1
                r11_2 += 4
            while (i_3 s< *(arg1 + 0xe4))

int64_t rcx_60 = var_370

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

int32_t var_110_1 = 0

if (var_118 != 0)
    sub_140a74f90(var_118)

sub_140bc5ae0(&var_158, 0)
int64_t var_138

if (var_138 != 0)
    sub_140a74f90(var_138)

int64_t rcx_64 = var_158

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

sub_140a956a0(&var_398)
int32_t* var_358_1 = &var_398
void** const var_88 = &data_142e86ed0
void*** var_98 = nullptr
int64_t (* var_a8)(int64_t* arg1, int32_t* arg2) = sub_140bc33e0
int32_t var_60 = 0
uint128_t var_80 = rax_2.o
var_60:3.b = 6
uint64_t var_f8 = 0
int32_t var_f0 = 0
int64_t var_278 = 0
int64_t var_290 = 0
int64_t var_288 = -1
int64_t var_280 = 0
sub_140abd8c0(arg2, &var_f8, &var_290, &var_a8)

if (var_a8 != 0)
    void** const* rcx_67 = &var_88
    
    if (var_98 != 0)
        rcx_67 = var_98
    
    (*rcx_67)[2](rcx_67)

(*rax_2)[4](rax_2, 0xffffffff, 0)
sub_140a4fc50(rax_2)
int64_t* rbx_17 = var_398.q
int64_t* rdi_5 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = rbx_17

if (rbx_17 != 0)
    *(rbx_17 + 0xc) += 1
    rbx_17 = var_398.q

if (rdi_5 != 0)
    int32_t rax_89 = *(rdi_5 + 0xc)
    *(rdi_5 + 0xc) -= 1
    
    if (rax_89 == 1)
        sub_140a99090(rdi_5)
        j_sub_140a74f90(rdi_5)
    
    rbx_17 = var_398.q

if (rbx_17 != 0)
    int32_t rax_90 = *(rbx_17 + 0xc)
    *(rbx_17 + 0xc) -= 1
    
    if (rax_90 == 1 && rbx_17 != 0)
        sub_140a99090(rbx_17)
        j_sub_140a74f90(rbx_17)

int32_t* rcx_74 = **(arg1 + 0xb0)
int64_t rdx_49 = sx.q(rcx_74[1])
int64_t rax_92 = sx.q(*rcx_74)
*(arg1 + 0xc0) = &rcx_74[2]
*(arg1 + 0x7c) = rdx_49.d
void* rcx_76 = &rcx_74[2 + rax_92 * 2]
*(arg1 + 0x88) = rcx_76
*(arg1 + 0xd8) = rcx_76 + (rdx_49 << 2)
int64_t* rax_93 = sub_140a84c80(0, 0x20, 0)
int64_t* var_168 = rax_93

if (rax_93 != 0)
    rax_93[1] = arg1
    *rax_93 = &data_142e86ef0
    rax_93[3] = sub_140a387b0()
    int64_t r8_23 = *rax_93
    (*(r8_23 + 0x40))(rax_93, &data_143e1a478, r8_23)
    (*(*rax_93 + 0x38))(rax_93, 0)
    int64_t rax_96 = sub_140a84c80(rax_93, 0, 0)
    int64_t var_168_1 = rax_96
    
    if (rax_96 != 0)
        sub_140a74f90(rax_96)
else if (data_143e1a480 != 0)
    int64_t* rcx_82 = data_143e1a478
    
    if (rcx_82 != 0)
        (*(*rcx_82 + 0x38))(rcx_82, 0)
        int64_t rcx_83 = data_143e1a478
        
        if (rcx_83 != 0)
            data_143e1a478 = sub_140a84c80(rcx_83, 0, 0)
        
        data_143e1a480 = 0

int64_t result = sub_140b4cbc0(&var_238)
int64_t* rbx_19 = var_380

if (rbx_19 != 0)
    int32_t r12_2 = *(rbx_19 + 0xc)
    *(rbx_19 + 0xc) -= 1
    
    if (r12_2 == 1 && rbx_19 != 0)
        sub_140a99090(rbx_19)
        result = j_sub_140a74f90(rbx_19)

__security_check_cookie(rax_1 ^ &var_3d8)
return result
