// 函数: sub_141cbfee0
// 地址: 0x141cbfee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x180)
*(arg1 + 0x180) = 1

if (*(arg1 + 0x50) != 0)
    *(arg1 + 0x180) = result
    return result

void* i_22 = j_sub_140a82f30(0x50)
void* i_21 = i_22

if (i_22 == 0)
    i_21 = nullptr
else
    __builtin_memset(i_22, 0, 0x48)

void*** rax = j_sub_140a82f30(0x18)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_143214bf8
    rbx[2] = i_21

void* i_13 = i_21
void*** var_160 = rbx

if (arg1 + 0x50 == &i_13)
label_141cc0009:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    *(arg1 + 0x50) = i_21
    int64_t* rdi = *(arg1 + 0x58)
    i_13 = nullptr
    
    if (rbx == rdi)
        goto label_141cc0009
    
    var_160 = nullptr
    *(arg1 + 0x58) = rbx
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
        
        rbx = var_160
        goto label_141cc0009

int64_t* rax_5 = sub_141cc79c0()
int64_t* rax_6 = rax_5[0x23]
int64_t* var_120 = rax_6

if (rax_6 == 0)
    int64_t rdx_1 = *rax_5
    (*(rdx_1 + 0x390))(rax_5, rdx_1)
    rax_6 = rax_5[0x23]
    var_120 = rax_6

void* rsi_1 = arg1
sub_140597df0(rsi_1 + 0x188, &rax_6[0xa])
sub_140a20ba0(rsi_1 + 0x188, &data_1432146f0, 3)
char rax_7
int512_t zmm1
rax_7, zmm1 = sub_141cc7290()
int32_t var_188
int64_t* var_138
int64_t* var_108
void* i_10
int32_t arg_20

if (rax_7 != 0)
    int64_t* rdi_1 = nullptr
    var_138 = nullptr
    int32_t i_12 = 0
    int32_t var_12c_1 = 0
    int32_t r13_1 = 0
    int64_t* rax_8 = sub_141cc79c0()
    void* rcx_8 = rax_8[0x23]
    
    if (rcx_8 != 0)
    label_141cc00e2:
        int64_t* i = *(rcx_8 + 0xa8)
        
        for (void* r15_3 = &i[sx.q(*(rcx_8 + 0xb0)) * 4]; i != r15_3; i = &i[4])
            if (i[1].d != 0)
                *i
            
            int64_t* rax_9 = sub_140b24f00(&var_108)
            int16_t* const r8_1
            
            if (rax_9[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *rax_9
            
            sub_140a2e390(&i_13, u"%sTags/%s", r8_1)
            int64_t i_15 = sx.q(i_12)
            i_12 = (i_15 + 1).d
            
            if (i_12 s> r13_1)
                sub_1405a4f90(&var_138)
                r13_1 = var_12c_1
            
            rdi_1 = var_138
            int64_t* rcx_15 = &rdi_1[i_15 * 2]
            *rcx_15 = 0
            *rcx_15 = i_13
            i_13 = nullptr
            rcx_15[1].d = var_160.d
            *(rcx_15 + 0xc) = var_160:4.d
            void* i_17 = i_13
            var_160 = nullptr
            
            if (i_17 != 0)
                sub_140a74f90(i_17)
            
            int64_t* rcx_16 = var_108
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
    else
        int64_t rdx_3 = *rax_8
        (*(rdx_3 + 0x390))(rax_8, rdx_3)
        rcx_8 = rax_8[0x23]
        
        if (rcx_8 != 0)
            goto label_141cc00e2
    
    sub_140688010(rdi_1, i_12, arg1.b)
    int64_t* r15_4 = rdi_1
    void* r13_4 = &rdi_1[sx.q(i_12) * 2]
    
    if (rdi_1 != r13_4)
        do
            int64_t* rax_13 = sub_140b18970(&var_108, r15_4)
            int16_t* rdx_7
            
            if (rax_13[1].d == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *rax_13
            
            sub_140b58260(&arg_20, rdx_7, 1)
            int64_t* rcx_20 = var_108
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int32_t rcx_21
            rcx_21.b = arg2 == 0
            
            if ((rcx_21.b & sub_140b5b8a0(arg_20, 0)) == 0)
                sub_14090a150(rsi_1 + 0x120, &i_13)
                void** rax_15 = arg_20.q
                *var_160 = rax_15
                var_160[1].d = 0xffffffff
                sub_1407ec830(rsi_1 + 0x120, &i_10, (rax_15 u>> 0x20).d + sub_140b5ead0(rax_15.d), 
                    var_160, i_13.d, nullptr)
                rsi_1 = arg1
                int64_t* rax_18 = sub_141cc2580(rsi_1, arg_20.q, 3)
                sub_141cc2580(rsi_1, arg_20.q, 2)
                
                if (rax_18 != 0 && rax_18[3] != 0)
                    int16_t* rbx_6
                    
                    if (r15_4[1].d == 0)
                        rbx_6 = &data_142d40450
                    else
                        rbx_6 = *r15_4
                    
                    void* rax_19 = sub_141cc74b0()
                    var_188.q = 0
                    sub_140ce1310(rax_18[3], rax_19, rbx_6, 0, 0)
                    void* rax_20 = rax_18[3]
                    void* i_1 = *(rax_20 + 0x38)
                    
                    for (void* rdi_5 = i_1 + sx.q(*(rax_20 + 0x40)) * 0x28; i_1 != rdi_5; 
                            i_1 += 0x28)
                        sub_141cbf650(rsi_1, i_1, (arg_20.q).b, 1)
            
            r15_4 = &r15_4[2]
        while (r15_4 != r13_4)
        
        rdi_1 = var_138
    
    int64_t* rbx_7 = rdi_1
    
    if (i_12 != 0)
        int32_t i_2
        
        do
            int64_t rcx_30 = *rbx_7
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            rbx_7 = &rbx_7[2]
            i_2 = i_12
            i_12 -= 1
        while (i_2 != 1)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

int32_t var_154 = 1
int32_t r11 = *(rsi_1 + 0xf8)
void* var_150 = rsi_1 + 0xe0
int32_t rcx_32 = 0
int32_t var_158 = 0
int32_t r8_8 = 0
int32_t var_148 = 0xffffffff
int64_t var_144 = 0

if (r11 != 0)
    void* rax_22 = *(rsi_1 + 0xf0)
    void* r9_4 = rsi_1 + 0xe0
    
    if (rax_22 != 0)
        r9_4 = rax_22
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_16 = *r9_4
    
    if (rdx_16 != 0)
    label_141cc042c:
        int32_t rax_29 = ((rdx_16 - 1) & rdx_16) ^ rdx_16
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_29)
        int32_t var_154_1 = rax_29
        int32_t rax_30
        
        if (rax_29 == 0)
            rax_30 = 0x20
        else
            rax_30 = 0x1f - temp0_2
        
        var_144.d = r8_8 - rax_30 + 0x1f
        
        if (r8_8 - rax_30 + 0x1f s> r11)
            var_144.d = r11
    else
        while (true)
            int64_t rdx_17 = sx.q(rcx_32)
            r8_8 += 0x20
            rcx_32 += 1
            var_144:4.d = r8_8
            var_158 = rcx_32
            
            if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_16 = *(r9_4 + (rdx_17 << 2) + 4)
            var_148 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_141cc042c
        
        var_144.d = r11

int32_t r15_5 = *(rsi_1 + 0xf8)
double zmm2[0x2] = var_148.o
int128_t var_80 = var_158.o
int32_t r8_11 = r15_5 s>> 5
int32_t r9_6 = r15_5 & 0xffffffe0
double var_70[0x2] = zmm2
int64_t var_b8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
zmm1.o = var_80
int128_t var_d8 = (rsi_1 + 0xd0).o
uint128_t var_c8 = zmm1.o

if (r15_5 != r11)
    void* rax_32 = *(rsi_1 + 0xf0)
    void* r10_1 = rsi_1 + 0xe0
    
    if (rax_32 != 0)
        r10_1 = rax_32
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r11 - 1)
    int32_t rdx_21 = *(r10_1 + (sx.q(r8_11) << 2)) & 0xffffffff << (r15_5.b & 0x1f)
    
    if (rdx_21 != 0)
    label_141cc04fc:
        int32_t rax_39 = ((rdx_21 - 1) & rdx_21) ^ rdx_21
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_39)
        int32_t rax_40
        
        if (rax_39 == 0)
            rax_40 = 0x20
        else
            rax_40 = 0x1f - temp0_4
        
        r15_5 = r9_6 - rax_40 + 0x1f
        
        if (r15_5 s> r11)
            r15_5 = r11
    else
        while (true)
            int64_t rcx_37 = sx.q(r8_11)
            r9_6 += 0x20
            r8_11 += 1
            
            if (rcx_37.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_21 = *(r10_1 + (rcx_37 << 2) + 4)
            
            if (rdx_21 != 0)
                goto label_141cc04fc
        
        r15_5 = r11

TEB* gsbase
void* i_16 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
i_10 = i_16

while (true)
    int64_t rdx_22 = sx.q(var_c8:0xc.d)
    void* rax_41
    
    if (rdx_22.d != r15_5 || var_c8.q != rsi_1 + 0xe0)
        rax_41.b = 0
    else
        rax_41.b = 1
    
    int64_t* rcx_40 = var_d8.q
    
    if (rax_41.b == 0 || rcx_40 != rsi_1 + 0xd0)
        rax_41.b = 1
    else
        rax_41.b = 0
    
    if (rax_41.b == 0)
        break
    
    int64_t rbx_11 = *(*rcx_40 + rdx_22 * 0x10)
    
    if (data_143f35900 s> *(0x14 + *i_16))
        _Init_thread_header(&data_143f35900)
        
        if (data_143f35900 == 0xffffffff)
            sub_140b58260(&data_143f358f8, u"Native", 1)
            _Init_thread_footer(&data_143f35900)
    
    var_158.q = &data_143213a30
    int64_t var_150_1 = rbx_11
    var_148.q = 0
    var_144 = 0
    zmm1 = sub_141cbf650(rsi_1, &var_158, (data_143f358f8).b, 0)
    int64_t rcx_42 = var_148.q
    
    if (rcx_42 != 0)
        zmm1 = sub_140a74f90(rcx_42)
    
    var_c8:8.d &= not.d(var_d8:0xc.d)
    sub_14059bdd0(&var_d8:8)
    i_16 = i_10

if (*(rsi_1 + 0x1b8) == 0)
    sub_141cc3e90(rsi_1, 0, zmm1)

int64_t rdi_7 = 0
int64_t* rbx_12 = *(rsi_1 + 0x1b0)
uint64_t r15_7 = sx.q(*(rsi_1 + 0x1b8)) << 3 u>> 3

if (rbx_12 u> &rbx_12[sx.q(*(rsi_1 + 0x1b8))])
    r15_7 = 0

if (r15_7 != 0)
    do
        int64_t* rdx_24 = *rbx_12
        
        if (rdx_24 != 0)
            sub_141cc5d50(rsi_1, rdx_24)
        
        rbx_12 = &rbx_12[1]
        rdi_7 += 1
    while (rdi_7 != r15_7)

int32_t* r12_2 = 0x14 + *i_10

if (data_143f35900 s> *r12_2)
    _Init_thread_header(&data_143f35900)
    
    if (data_143f35900 == 0xffffffff)
        sub_140b58260(&data_143f358f8, u"Native", 1)
        _Init_thread_footer(&data_143f35900)

void* i_3 = data_143f358f8
int64_t rdx_25 = sx.q(*(rsi_1 + 0xc8))
int64_t* rcx_46 = *(rsi_1 + 0xc0)
void* r8_15 = &rcx_46[rdx_25 * 4]
i_10 = i_3

if (rcx_46 == r8_15)
label_141cc06ae:
    int32_t rcx_47 = (rdx_25 + 1).d
    *(rsi_1 + 0xc8) = rcx_47
    
    if (rcx_47 s> *(rsi_1 + 0xcc))
        sub_1405c4e40(rsi_1 + 0xc0)
        i_3 = i_10
    
    int64_t rbx_14 = rdx_25 << 5
    void** rbx_15 = rbx_14 + *(rsi_1 + 0xc0)
    
    if (rbx_14 != neg.q(*(rsi_1 + 0xc0)))
        *rbx_15 = i_3
        rbx_15[1].b = 0
        rbx_15[2] = 0
        rbx_15[3] = 0
else
    while (*rcx_46 != i_3)
        rcx_46 = &rcx_46[4]
        
        if (rcx_46 == r8_15)
            goto label_141cc06ae

int16_t* var_118

if (sub_141cc7290() != 0)
    var_188.q = &data_143de5780
    void* rcx_50 = data_143ddb400
    i_13 = nullptr
    int64_t var_160_1 = 0
    sub_140af2c50(rcx_50, /Script/GameplayTags.GameplayTagsSettings", +GameplayTags", &i_13, 
        &data_143de5780)
    void* i_18 = i_13
    int64_t rdi_9 = sx.q(var_160_1.d)
    void* r15_10 = (rdi_9 << 4) + i_18
    
    if (i_18 != r15_10)
        do
            int16_t* rdx_26
            
            if (*(i_18 + 8) == 0)
                rdx_26 = &data_142d40450
            else
                rdx_26 = *i_18
            
            int64_t* rax_53 = sub_140b58260(&i_10, rdx_26, 1)
            var_158.q = &data_143213a30
            var_148.q = 0
            var_144 = 0
            int64_t var_150_2 = *rax_53
            sub_141cbd4b0(&var_120[7], &var_158)
            int64_t rcx_53 = var_148.q
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            i_18 += 0x10
        while (i_18 != r15_10)
        
        rdi_9 = zx.q(var_160_1.d)
        i_18 = i_13
        rsi_1 = arg1
    
    if (rdi_9.d != 0)
        int32_t i_4
        
        do
            int64_t rcx_54 = *i_18
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            i_18 += 0x10
            i_4 = rdi_9.d
            rdi_9 = zx.q(rdi_9.d - 1)
        while (i_4 != 1)
    
    bool cond:5_1 = var_160_1:4.d == 0
    var_160_1.d = 0
    
    if (not(cond:5_1))
        sub_14061cd70(&i_13, 0)
    
    var_188.q = sub_140cdcc40(var_120, &var_108)
    sub_140af2c50(data_143ddb400, /Script/GameplayTags.GameplayTagsSettings", +GameplayTags", 
        &i_13, &data_143de5780)
    int64_t* rcx_58 = var_108
    
    if (rcx_58 != 0)
        sub_140a74f90(rcx_58)
    
    void* i_19 = i_13
    void* rdi_12 = (sx.q(var_160_1.d) << 4) + i_19
    
    if (i_19 != rdi_12)
        do
            int16_t* rdx_29
            
            if (*(i_19 + 8) == 0)
                rdx_29 = &data_142d40450
            else
                rdx_29 = *i_19
            
            int64_t* rax_56 = sub_140b58260(&i_10, rdx_29, 1)
            var_158.q = &data_143213a30
            var_148.q = 0
            var_144 = 0
            int64_t var_150_3 = *rax_56
            sub_141cbd4b0(&var_120[7], &var_158)
            int64_t rcx_61 = var_148.q
            
            if (rcx_61 != 0)
                sub_140a74f90(rcx_61)
            
            i_19 += 0x10
        while (i_19 != rdi_12)
        
        rsi_1 = arg1
    
    if (data_143f35910 s> *r12_2)
        _Init_thread_header(&data_143f35910)
        
        if (data_143f35910 == 0xffffffff)
            sub_140b58260(&data_143f35908, u"DefaultGameplayTags.ini", 1)
            _Init_thread_footer(&data_143f35910)
    
    uint64_t rbx_16 = data_143f35908
    sub_141cc2580(rsi_1, rbx_16, 1)
    void* i_5 = var_120[7]
    
    for (void* rsi_4 = (sx.q(var_120[8].d) << 5) + i_5; i_5 != rsi_4; i_5 += 0x20)
        sub_141cbf650(arg1, i_5, rbx_16.b, 0)
    
    int64_t* rax_59 = sub_140b24f00(&var_108)
    bool cond:8_1 = rax_59[1].d == 0
    var_118 = *rax_59
    *rax_59 = 0
    int32_t rcx_66 = rax_59[1].d
    int32_t rcx_67 = *(rax_59 + 0xc)
    int32_t rcx_68
    rcx_68.b = cond:8_1
    rax_59[1] = 0
    int32_t rdx_36 = rcx_66 + 5 + rcx_68
    
    if (rdx_36 s> rcx_67)
        sub_1405947f0(&var_118, rdx_36)
    
    sub_140a2cf70(&var_118, u"Tags", 4)
    var_138 = nullptr
    int32_t var_130
    var_130.q = 0
    sub_140a464c0()
    int16_t* const r8_18 = &data_142d40450
    
    if (rcx_66 != 0)
        r8_18 = var_118
    
    (*(data_14399ea08 + 0x80))(&data_14399ea08, &var_138, r8_18, u"*.ini", 1, 0, 1)
    uint64_t rdi_13 = zx.q(var_130)
    int64_t* rbx_17
    
    if (rdi_13.d s<= 0)
        rsi_1 = arg1
        rbx_17 = var_138
    else
        sub_140688010(var_138, rdi_13.d, arg1.b)
        rbx_17 = var_138
        rdi_13 = sx.q(var_130)
        void* r15_13 = &rbx_17[rdi_13 * 2]
        
        if (rbx_17 != r15_13)
            do
                if (sub_1406daa50(arg1 + 0x170, rbx_17) == 0xffffffff)
                    int64_t rsi_5 = sx.q(*(arg1 + 0x178))
                    int32_t rax_61 = (rsi_5 + 1).d
                    *(arg1 + 0x178) = rax_61
                    
                    if (rax_61 s> *(arg1 + 0x17c))
                        sub_1405a4f90(arg1 + 0x170)
                    
                    sub_140596d10((rsi_5 << 4) + *(arg1 + 0x170), rbx_17)
                
                rbx_17 = &rbx_17[2]
            while (rbx_17 != r15_13)
            
            rdi_13 = zx.q(var_130)
            rbx_17 = var_138
        
        rsi_1 = arg1
        
        if (*(rsi_1 + 0x180) == 0)
            sub_141cc1270(rsi_1, sub_141cbfa10(rsi_1, &var_138))
            sub_140599090(&data_143a19668)
            rdi_13 = zx.q(var_130)
            rbx_17 = var_138
    
    if (rdi_13.d != 0)
        int32_t i_6
        
        do
            int64_t rcx_79 = *rbx_17
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            rbx_17 = &rbx_17[2]
            i_6 = rdi_13.d
            rdi_13 = zx.q(rdi_13.d - 1)
        while (i_6 != 1)
        rbx_17 = var_138
    
    if (rbx_17 != 0)
        sub_140a74f90(rbx_17)
    
    int16_t* rcx_81 = var_118
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    int64_t* rcx_82 = var_108
    
    if (rcx_82 != 0)
        sub_140a74f90(rcx_82)
    
    sub_141cbfa10(rsi_1, rsi_1 + 0x170)
    int32_t i_11 = var_160_1.d
    void* i_20 = i_13
    
    if (i_11 != 0)
        int32_t i_7
        
        do
            int64_t rcx_84 = *i_20
            
            if (rcx_84 != 0)
                sub_140a74f90(rcx_84)
            
            i_20 += 0x10
            i_7 = i_11
            i_11 -= 1
        while (i_7 != 1)
        i_20 = i_13
    
    if (i_20 != 0)
        sub_140a74f90(i_20)

void* rdi_15 = rsi_1 + 0xb0
bool cond:4 = *(rdi_15 + 0xc) == 0
*(rdi_15 + 8) = 0

if (not(cond:4))
    sub_1405c5570(rdi_15, 0)

int64_t r12_3 = 0
int64_t* r15_14 = var_120[0x12]
uint64_t r13_9 = sx.q(var_120[0x13].d) << 3 u>> 3

if (r15_14 u> &r15_14[var_120[0x13]])
    r13_9 = 0

if (r13_9 != 0)
    do
        int64_t r8_20 = *r15_14
        arg_20.q = r8_20
        sub_141cc6810(rsi_1, &i_10, r8_20, 1)
        void* i_14 = i_10
        int32_t rcx_88
        rcx_88.b = sub_140b5b8a0(i_14.d, 0) == 0
        rcx_88.b |= i_10:4.d != 0
        
        if (rcx_88.b != 0)
            int64_t rsi_6 = sx.q(*(rdi_15 + 8))
            int32_t rax_66 = (rsi_6 + 1).d
            *(rdi_15 + 8) = rax_66
            
            if (rax_66 s> *(rdi_15 + 0xc))
                sub_1405a4d70(rdi_15)
            
            *(*rdi_15 + (rsi_6 << 3)) = i_14
            rsi_1 = arg1
        
        r15_14 = &r15_14[1]
        r12_3 += 1
    while (r12_3 != r13_9)

char rdx_47 = *(var_120 + 0x4a)
*(rsi_1 + 0x181) = rdx_47
*(rsi_1 + 0x182) = *(var_120 + 0x49)
*(rsi_1 + 0x30) = var_120[0x14].d
*(rsi_1 + 0x2c) = *(var_120 + 0xa4)

if (rdx_47 != 0)
    sub_141cc1270(rsi_1, rdx_47)

sub_140599090(&data_143a19668)
int64_t* rdi_16 = rsi_1 + 0x1c0
int64_t* var_90 = rdi_16
sub_1405b8890(rdi_16, 0)
int64_t* rax_71 = sub_140af5690(data_143ddb400, u"/Script/Engine.Engine", 0, 1, &data_143de5780)

if (rax_71 != 0)
    int32_t r11_1 = rax_71[5].d
    void* r9_12 = &rax_71[2]
    int32_t var_154_2 = 1
    int32_t rcx_93 = 0
    var_158 = 0
    int32_t r8_21 = 0
    void* var_150_4 = r9_12
    int32_t var_148_1 = 0xffffffff
    int64_t var_144_1 = 0
    
    if (r11_1 != 0)
        void* rax_72 = *(r9_12 + 0x10)
        
        if (rax_72 != 0)
            r9_12 = rax_72
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(r11_1 - 1)
        int32_t rdx_50 = *r9_12
        
        if (rdx_50 != 0)
        label_141cc0d0d:
            int32_t rax_79 = neg.d(rdx_50) & rdx_50
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_79)
            int32_t var_154_3 = rax_79
            int32_t rax_80
            
            if (rax_79 == 0)
                rax_80 = 0x20
            else
                rax_80 = 0x1f - temp0_5
            
            var_144_1.d = r8_21 - rax_80 + 0x1f
            
            if (r8_21 - rax_80 + 0x1f s> r11_1)
                var_144_1.d = r11_1
        else
            while (true)
                int64_t rdx_51 = sx.q(rcx_93)
                r8_21 += 0x20
                rcx_93 += 1
                var_144_1:4.d = r8_21
                var_158 = rcx_93
                
                if (rdx_51.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_50 = *(r9_12 + (rdx_51 << 2) + 4)
                var_148_1 = 0xffffffff
                
                if (rdx_50 != 0)
                    goto label_141cc0d0d
            
            var_144_1.d = r11_1
    
    uint128_t zmm4_1 = var_148_1.o
    int64_t* var_60_1 = rax_71
    uint128_t zmm0_1 = var_158.o
    uint128_t var_70_1 = zmm4_1
    int16_t var_a0_1 = 0
    var_c8 = zmm0_1
    void* rax_82 = zmm0_1.q
    zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
    int32_t rcx_95 = _mm_bsrli_si128(zmm4_1, 4).d
    var_d8 = rax_71.o
    var_b8.o = zmm0_1
    
    if (rcx_95 s< *(rax_82 + 0x18))
        int32_t i_8 = var_c8:0xc.d
        
        do
            void** rdi_17 = var_d8.q
            int64_t rbx_20 = sx.q(i_8) * 0x30
            
            if (sub_140b5b9d0(*rdi_17 + rbx_20, u"+GameplayTagRedirects") != 0)
                i_10 = nullptr
                arg_20.q = 0
                void* rdx_52 = *rdi_17
                int16_t** rcx_99 = rdx_52 + 0x18 + rbx_20
                int32_t rax_85 = rcx_99[1].d
                
                if (rax_85 == 0 || rax_85 - 1 s<= 0)
                    rcx_99 = rdx_52 + 8 + rbx_20
                
                int16_t* rcx_101
                
                if (rcx_99[1].d == 0)
                    rcx_101 = &data_142d40450
                else
                    rcx_101 = *rcx_99
                
                if (sub_140b2ac50(rcx_101, u"OldTagName=", &i_10) != 0)
                    void* rdx_53 = *rdi_17
                    void* rcx_103 = rdx_53 + 0x18 + rbx_20
                    int32_t rax_88 = *(rcx_103 + 8)
                    
                    if (rax_88 == 0 || rax_88 - 1 s<= 0)
                        rcx_103 = rdx_53 + 8 + rbx_20
                    
                    int16_t* rcx_105
                    
                    if (*(rcx_103 + 8) == 0)
                        rcx_105 = &data_142d40450
                    else
                        rcx_105 = *rcx_103
                    
                    if (sub_140b2ac50(rcx_105, u"NewTagName=", &arg_20) != 0)
                        i_13 = i_10
                        int64_t var_160_2 = arg_20.q
                        sub_141cbd410(&var_120[0x10], &i_13)
            
            var_c8:8.d &= not.d(var_d8:0xc.d)
            sub_14059bdd0(&var_d8:8)
            i_8 = var_c8:0xc.d
        while (i_8 s< *(var_c8.q + 0x18))
        
        if (var_a0_1.b != 0 && var_a0_1:1.b != 0)
            sub_140a6d3f0(rax_71, rax_71[1].d - *(rax_71 + 0x34), 1)
        
        rdi_16 = rsi_1 + 0x1c0

int64_t* i_9 = var_120[0x10]
int16_t* r12_6 = &i_9[sx.q(var_120[0x11].d) * 2]
var_118 = r12_6

for (; i_9 != r12_6; i_9 = &i_9[2])
    int64_t r8_26 = *i_9
    int64_t rbx_21 = i_9[1]
    int64_t var_e8 = r8_26
    
    if (*sub_1409bd4b0(rdi_16, &i_10, r8_26) == 0xffffffff)
        int32_t var_f8
        sub_141cc6810(rsi_1, &var_f8, var_e8, 0)
        int32_t rcx_111
        rcx_111.b = sub_140b5b8a0(var_f8, 0) == 0
        int32_t var_f4
        rcx_111.b |= var_f4 != 0
        
        if (rcx_111.b != 0)
            sub_141cc6a00(rsi_1, &var_d8, &var_f8)
            int64_t* rax_98 = sub_140b63b70(&var_e8, &var_158)
            int16_t* const r8_29
            
            if (rax_98[1].d == 0)
                r8_29 = &data_142d40450
            else
                r8_29 = *rax_98
            
            int64_t var_58
            sub_140a2e390(&var_58, 
                Old tag (%s) which is being redirected still exists in the table!  Generally yo", r8_29)
            int64_t rcx_115 = var_158.q
            
            if (rcx_115 != 0)
                sub_140a74f90(rcx_115)
            
            if (var_d8:8.d != 0)
                sub_140a20ba0(&var_58, 
                    \nSuppressed warning due to redirected tag being a single component that matched "
                "other hierarchy element", 0x69)
            
            int64_t rcx_117 = var_58
            
            if (rcx_117 != 0)
                sub_140a74f90(rcx_117)
            
            int64_t rcx_118 = var_c8.q
            
            if (rcx_118 != 0)
                sub_140a74f90(rcx_118)
            
            int64_t rcx_119 = var_d8.q
            
            if (rcx_119 != 0)
                sub_140a74f90(rcx_119)
        
        int32_t rsi_7 = rbx_21:4.d
        int32_t rcx_120
        rcx_120.b = sub_140b5b8a0(rbx_21.d, 0) == 0
        rcx_120.b |= rsi_7 != 0
        int64_t* rax_100
        
        if (rcx_120.b == 0)
            int64_t var_98 = 0
            rax_100 = &var_98
        else
            rax_100 = sub_141cc6810(arg1, &var_138, rbx_21, 0)
        
        int64_t rax_101 = *rax_100
        int64_t var_128 = rax_101
        int32_t rdi_18 = 0xa
        int32_t rcx_122
        rcx_122.b = sub_140b5b8a0(rax_101.d, 0) == 0
        
        if ((var_128:4.d != 0 | rcx_122.b) == 0)
            int32_t rcx_129
            
            do
                int32_t rcx_123
                rcx_123.b = sub_140b5b8a0(rbx_21.d, 0) == 0
                rcx_123.b |= rsi_7 != 0
                
                if (rcx_123.b == 0)
                    break
                
                int64_t* j = var_120[0x10]
                char rdx_62 = 0
                
                for (; j != &j[sx.q(var_120[0x11].d) * 2]; j = &j[2])
                    if (*j == rbx_21)
                        rbx_21 = j[1]
                        rsi_7 = rbx_21:4.d
                        rdx_62 = 1
                        var_128 = *sub_141cc6810(arg1, &i_13, rbx_21, 0)
                        break
                
                rdi_18 -= 1
                
                if (rdx_62 == 0)
                    break
                
                if (rdi_18 s<= 0)
                    break
                
                rcx_129.b = sub_140b5b8a0(var_128.d, 0) == 0
            while ((var_128:4.d != 0 | rcx_129.b) == 0)
            r12_6 = var_118
        
        rdi_16 = var_90
        int32_t rcx_130
        rcx_130.b = sub_140b5b8a0(var_128.d, 0) == 0
        
        if ((var_128:4.d != 0 | rcx_130.b) != 0)
            var_108 = &var_e8
            int64_t* var_100_1 = &var_128
            sub_140bbe950(rdi_16, &arg_20, &var_108, nullptr)
        
        rsi_1 = arg1

*(rsi_1 + 0x180) = result
return result
