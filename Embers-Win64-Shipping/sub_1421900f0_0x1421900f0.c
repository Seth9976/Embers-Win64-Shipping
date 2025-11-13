// 函数: sub_1421900f0
// 地址: 0x1421900f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t* var_48 = __security_cookie ^ &var_d8
int32_t r12 = 0
int32_t var_88 = 0
int32_t rdi = 0
int64_t* rax_1

if (arg1[9].d s<= 0)
label_142190195:
    rax_1.b = 0
else
    int64_t rbx_1 = 0
    
    while (true)
        rax_1 = *(arg1[8] + rbx_1)
        
        if (rax_1 != 0)
            void* rcx = *rax_1[8]
            
            if (rcx != 0)
                void* rsi_1 = *(rcx + 0x48)
                
                if (rsi_1 != 0)
                    void* rax_3 = sub_1425599a0()
                    void* rdx = *(rsi_1 + 0x10)
                    rax_1 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_1.d s<= *(rdx + 0x38) && (*(rdx + 0x30))[rax_1] == rax_3 + 0x30)
                        rax_1.b = 1
                        break
        
        rdi += 1
        rbx_1 += 8
        
        if (rdi s>= arg1[9].d)
            goto label_142190195

int64_t var_b8 = 0
int32_t var_b0 = 0
wchar16 const* const rsi_2 = u"False"
int32_t rax_4 = 0

if (rax_1.b != 0)
    rsi_2 = u"True"

int32_t var_ac = 0
int64_t r15_1 = 0
int32_t rdi_1 = 0

if (*rsi_2 != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rsi_2[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_b8, rbx_2.d + 1)
        rax_4 = var_ac
        rdi_1 = var_b0
        r15_1 = var_b8
    
    rdi_1 += rbx_2.d + 1
    
    if (rdi_1 s> rax_4)
        sub_140594770(&var_b8)
        r15_1 = var_b8
    
    UnDecorator::getReferenceType(r15_1, rsi_2, (rbx_2.d + 1) * 2)

int64_t* rax_5 = sub_140b58170(&var_88, "HasGPUEmitter", 1)
uint64_t var_a0 = 0
uint64_t rsi_3 = 0
int64_t rbx_4 = *rax_5
int64_t var_a8 = rbx_4
int32_t var_94

if (rdi_1 != 0)
    sub_1405a4c70(&var_a0, rdi_1, 0)
    rsi_3 = var_a0
    memcpy(rsi_3, r15_1, rdi_1 * 2)
    r12 = var_94
    rbx_4 = var_a8

int64_t r13 = sx.q(arg2[1].d)
int32_t rax_6 = (r13 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_9 = (r13 << 5) + *arg2
*rax_9 = rbx_4
rax_9[1] = rsi_3
rax_9[2].d = rdi_1
*(rax_9 + 0x14) = r12
rax_9[3] = 1

if (r15_1 != 0)
    sub_140a74f90(r15_1)

bool cond:0 = (arg1[0x16].b & 2) == 0
float zmm0 = arg1[0x13].d
float zmm2[0x2] = *(arg1 + 0x94)
zmm2[0] = zmm2[0] f- arg1[0x11].d
float temp0_1[0x2] =
    _mm_max_ss(_mm_max_ss(zmm2[0], zmm0 f- *(arg1 + 0x8c))[0], *(arg1 + 0x9c) f- arg1[0x12].d)
int32_t rbx_5
int64_t* rdi_2

if (cond:0)
    rbx_5 = 2
    var_b8 = 0
    var_b0.q = 0
    sub_1405947f0(&var_b8, 5)
    int32_t rax_10 = var_b0 + 5
    var_b0 = rax_10
    
    if (rax_10 s> var_ac)
        sub_140594770(&var_b8)
    
    UnDecorator::getReferenceType(var_b8, u"None", 0xa)
    rdi_2 = &var_b8
else
    rbx_5 = 1
    sub_140a2e390(&var_a8, u"%.2f", _mm_cvtps_pd(temp0_1))
    rdi_2 = &var_a8

int64_t rcx_15 = *sub_140b58170(&var_88, "FixedBoundsSize", 1)
int64_t var_78
sub_140596d10(&var_78, rdi_2)
int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_12 = (rdi_3 + 1).d
arg2[1].d = rax_12

if (rax_12 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_20 = (rdi_3 << 5) + *arg2
*rcx_20 = rcx_15
rcx_20[1] = var_78
int32_t var_70
rcx_20[2].d = var_70
int32_t var_6c
*(rcx_20 + 0x14) = var_6c
rcx_20[3] = 2

if ((rbx_5.b & 2) != 0)
    int64_t rcx_21 = var_b8
    rbx_5 &= 0xfffffffd
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

if ((rbx_5.b & 1) != 0)
    int64_t rcx_22 = var_a8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

int64_t var_58
sub_140a2e390(&var_58, u"%d", zx.q(arg1[9].d))
int64_t* rax_17 = sub_140b58170(&var_88, "NumEmitters", 1)
int64_t rdi_4 = var_58
uint64_t r12_1 = 0
var_a0 = 0
int64_t rbx_6 = *rax_17
var_a8 = rbx_6
int32_t var_50
int32_t r15_2

if (var_50 != 0)
    sub_1405a4c70(&var_a0, var_50, 0)
    r12_1 = var_a0
    memcpy(r12_1, rdi_4, var_50 * 2)
    r15_2 = var_94
    rbx_6 = var_a8
else
    r15_2 = 0

int64_t rdi_5 = sx.q(arg2[1].d)
int32_t rax_18 = (rdi_5 + 1).d
arg2[1].d = rax_18

if (rax_18 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_21 = (rdi_5 << 5) + *arg2
*rax_21 = rbx_6
rax_21[1] = r12_1
int32_t r12_2 = 0
rax_21[2].d = var_50
*(rax_21 + 0x14) = r15_2
rax_21[3] = 2
int64_t rcx_28 = var_58

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

sub_140a2e390(&var_58, u"%d", zx.q(arg1[0xe].d))
int64_t* rax_22 = sub_140b58170(&var_88, "NumLODs", 1)
uint64_t r15_3 = 0
int64_t rdi_6 = var_58
var_a0 = 0
int64_t rbx_7 = *rax_22
var_a8 = rbx_7

if (var_50 != 0)
    sub_1405a4c70(&var_a0, var_50, 0)
    r15_3 = var_a0
    memcpy(r15_3, rdi_6, var_50 * 2)
    r12_2 = var_94
    rbx_7 = var_a8

int64_t rdi_7 = sx.q(arg2[1].d)
int32_t rax_23 = (rdi_7 + 1).d
arg2[1].d = rax_23

if (rax_23 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_26 = (rdi_7 << 5) + *arg2
*rax_26 = rbx_7
rax_26[1] = r15_3
*(rax_26 + 0x14) = r12_2
int32_t r12_3 = 0
rax_26[2].d = var_50
rax_26[3] = 2
int64_t rcx_34 = var_58

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_140a2e390(&var_58, u"%f", _mm_cvtps_pd(arg1[7].d))
int64_t* rax_27 = sub_140b58170(&var_88, "WarmupTime", 1)
uint64_t r15_4 = 0
int64_t rdi_8 = var_58
var_a0 = 0
int64_t rbx_8 = *rax_27
var_a8 = rbx_8

if (var_50 != 0)
    sub_1405a4c70(&var_a0, var_50, 0)
    r15_4 = var_a0
    memcpy(r15_4, rdi_8, var_50 * 2)
    r12_3 = var_94
    rbx_8 = var_a8

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t rax_28 = (rdi_9 + 1).d
arg2[1].d = rax_28

if (rax_28 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_31 = (rdi_9 << 5) + *arg2
*rax_31 = rbx_8
rax_31[1] = r15_4
*(rax_31 + 0x14) = r12_3
int32_t r12_4 = 0
rax_31[2].d = var_50
rax_31[3] = 2
int64_t rcx_40 = var_58

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

var_b8 = 0
var_b0.q = 0
sub_1405947f0(&var_b8, 8)
int32_t rbx_9 = var_ac
int32_t rdi_10 = var_b0 + 8

if (rdi_10 s> rbx_9)
    sub_140594770(&var_b8)
    rbx_9 = var_ac

int64_t rsi_7 = var_b8
UnDecorator::getReferenceType(rsi_7, u"Unknown", 0x10)
uint32_t rcx_44 = zx.d(*(arg1 + 0xb3))

if (rcx_44 == 0)
    if (rsi_7 != u"Automatic")
        int32_t rdx_23 = 0
        int32_t var_b0_6 = 0
        
        if (rbx_9 != 0xa)
            sub_1405947f0(&var_b8, 0xa)
            rdx_23 = var_b0_6
            rbx_9 = var_ac
            rsi_7 = var_b8
        
        rdi_10 = rdx_23 + 0xa
        
        if (rdi_10 s> rbx_9)
            sub_140594770(&var_b8)
            rsi_7 = var_b8
        
        __builtin_memcpy(rsi_7, u"Automatic", 0x14)
else if (rcx_44 == 1)
    if (rsi_7 != u"DirectSet")
        int32_t rdx_22 = 0
        int32_t var_b0_4 = 0
        
        if (rbx_9 != 0xa)
            sub_1405947f0(&var_b8, 0xa)
            rdx_22 = var_b0_4
            rbx_9 = var_ac
            rsi_7 = var_b8
        
        rdi_10 = rdx_22 + 0xa
        
        if (rdi_10 s> rbx_9)
            sub_140594770(&var_b8)
            rsi_7 = var_b8
        
        __builtin_memcpy(rsi_7, u"DirectSet", 0x14)
else if (rcx_44 == 2 && rsi_7 != u"Activate Automatic")
    int32_t rdx_20 = 0
    int32_t var_b0_2 = 0
    
    if (rbx_9 != 0x13)
        sub_1405947f0(&var_b8, rcx_44 + 0x11)
        rdx_20 = var_b0_2
        rbx_9 = var_ac
        rsi_7 = var_b8
    
    rdi_10 = rdx_20 + 0x13
    
    if (rdi_10 s> rbx_9)
        sub_140594770(&var_b8)
        rsi_7 = var_b8
    
    __builtin_wcscpy(rsi_7, u"Activate Automatic")

int64_t* rax_32 = sub_140b58170(&var_88, "LODMethod", 1)
var_a0 = 0
uint64_t r15_5 = 0
int64_t rbx_10 = *rax_32
var_a8 = rbx_10

if (rdi_10 != 0)
    sub_1405a4c70(&var_a0, rdi_10, 0)
    r15_5 = var_a0
    memcpy(r15_5, rsi_7, rdi_10 * 2)
    r12_4 = var_94
    rbx_10 = var_a8

int64_t rsi_8 = sx.q(arg2[1].d)
int32_t rax_33 = (rsi_8 + 1).d
arg2[1].d = rax_33

if (rax_33 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_36 = (rsi_8 << 5) + *arg2
*rax_36 = rbx_10
rax_36[1] = r15_5
*(rax_36 + 0x14) = r12_4
rax_36[2].d = rdi_10
rax_36[3] = 1
void** r15_6 = arg1[8]
void* r12_5 = &r15_6[sx.q(arg1[9].d)]
int64_t rax_37

if (r15_6 == r12_5)
label_142190966:
    rax_37.b = 0
else
    while (true)
        void* r8_18 = *r15_6
        
        if (r8_18 != 0)
            int64_t* rcx_56 = *(r8_18 + 0x40)
            void* rdx_27 = &rcx_56[sx.q(*(r8_18 + 0x48))]
            
            if (rcx_56 != rdx_27)
                while (true)
                    rax_37 = *rcx_56
                    
                    if (rax_37 != 0 && (*(rax_37 + 0x2c) & 1) != 0)
                        break
                    
                    rcx_56 = &rcx_56[1]
                    
                    if (rcx_56 == rdx_27)
                        goto label_142190959
                
                if (*(r8_18 + 0x48) s> 0)
                    void* rcx_57 = **(r8_18 + 0x40)
                    
                    if (rcx_57 != 0)
                        void** rbx_11 = *(rcx_57 + 0x38)
                        void* rsi_9 = &rbx_11[sx.q(*(rcx_57 + 0x40))]
                        
                        if (rbx_11 != rsi_9)
                            while (true)
                                void* rdi_11 = *rbx_11
                                
                                if (*(rdi_11 + 0x28) s< 0)
                                    void* rax_38 = sub_142551590()
                                    void* rdx_28 = *(rdi_11 + 0x10)
                                    rax_37 = sx.q(*(rax_38 + 0x38))
                                    
                                    if (rax_37.d s<= *(rdx_28 + 0x38)
                                            && *(*(rdx_28 + 0x30) + (rax_37 << 3))
                                            == rax_38 + 0x30)
                                        rax_37.b = 1
                                        break
                                
                                rbx_11 = &rbx_11[1]
                                
                                if (rbx_11 == rsi_9)
                                    goto label_142190959
                            
                            break
        
    label_142190959:
        r15_6 = &r15_6[1]
        
        if (r15_6 == r12_5)
            goto label_142190966

wchar16 const* const rsi_10 = u"False"

if (rax_37.b != 0)
    rsi_10 = u"True"

int32_t r13_2 = 0
int32_t rax_39 = 0
var_58 = 0
int64_t r15_7 = 0
int32_t var_50_1 = 0
int32_t rdi_12 = 0
int32_t var_4c = 0

if (*rsi_10 != 0)
    int64_t rbx_12 = -1
    
    do
        rbx_12 += 1
    while (rsi_10[rbx_12] != 0)
    
    if (rbx_12.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_12.d + 1)
        rax_39 = var_4c
        rdi_12 = var_50_1
        r15_7 = var_58
    
    rdi_12 += rbx_12.d + 1
    
    if (rdi_12 s> rax_39)
        sub_140594770(&var_58)
        r15_7 = var_58
    
    UnDecorator::getReferenceType(r15_7, rsi_10, (rbx_12.d + 1) * 2)

int64_t* rax_40 = sub_140b58170(&var_88, "CPUCollision", 1)
var_a0 = 0
uint64_t r12_6 = 0
int64_t rbx_14 = *rax_40
var_a8 = rbx_14

if (rdi_12 != 0)
    sub_1405a4c70(&var_a0, rdi_12, 0)
    r12_6 = var_a0
    memcpy(r12_6, r15_7, rdi_12 * 2)
    r13_2 = var_94
    rbx_14 = var_a8

int64_t rsi_11 = sx.q(arg2[1].d)
int32_t rax_41 = (rsi_11 + 1).d
arg2[1].d = rax_41

if (rax_41 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_44 = (rsi_11 << 5) + *arg2
*rax_44 = rbx_14
rax_44[1] = r12_6
*(rax_44 + 0x14) = r13_2
int32_t r13_3 = 0
rax_44[2].d = rdi_12
rax_44[3] = 1

if (r15_7 != 0)
    sub_140a74f90(r15_7)

wchar16 const* const rsi_12 = u"False"
int64_t r15_8 = 0
var_58 = 0
int32_t rdi_13 = 0
int32_t var_50_3 = 0

if ((*(arg1 + 0xb6) & 1) != 0)
    rsi_12 = u"True"

int32_t rax_46 = 0
int32_t var_4c_1 = 0

if (*rsi_12 != 0)
    int64_t rbx_15 = -1
    
    do
        rbx_15 += 1
    while (rsi_12[rbx_15] != 0)
    
    if (rbx_15.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_15.d + 1)
        rax_46 = var_4c_1
        rdi_13 = var_50_3
        r15_8 = var_58
    
    rdi_13 += rbx_15.d + 1
    
    if (rdi_13 s> rax_46)
        sub_140594770(&var_58)
        r15_8 = var_58
    
    UnDecorator::getReferenceType(r15_8, rsi_12, (rbx_15.d + 1) * 2)

int64_t* rax_47 = sub_140b58170(&var_88, "Looping", 1)
var_a0 = 0
uint64_t r12_7 = 0
int64_t rbx_17 = *rax_47
var_a8 = rbx_17

if (rdi_13 != 0)
    sub_1405a4c70(&var_a0, rdi_13, 0)
    r12_7 = var_a0
    memcpy(r12_7, r15_8, rdi_13 * 2)
    r13_3 = var_94
    rbx_17 = var_a8

int64_t rsi_13 = sx.q(arg2[1].d)
int32_t rax_48 = (rsi_13 + 1).d
arg2[1].d = rax_48

if (rax_48 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_51 = (rsi_13 << 5) + *arg2
*rax_51 = rbx_17
rax_51[1] = r12_7
*(rax_51 + 0x14) = r13_3
int32_t r13_4 = 0
rax_51[2].d = rdi_13
rax_51[3] = 1

if (r15_8 != 0)
    sub_140a74f90(r15_8)

wchar16 const* const rsi_14 = u"False"
int64_t r15_9 = 0
var_58 = 0
int32_t rdi_14 = 0
int32_t var_50_5 = 0

if ((*(arg1 + 0x10a) & 2) != 0)
    rsi_14 = u"True"

int32_t rax_53 = 0
int32_t var_4c_2 = 0

if (*rsi_14 != 0)
    int64_t rbx_18 = -1
    
    do
        rbx_18 += 1
    while (rsi_14[rbx_18] != 0)
    
    if (rbx_18.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_18.d + 1)
        rax_53 = var_4c_2
        rdi_14 = var_50_5
        r15_9 = var_58
    
    rdi_14 += rbx_18.d + 1
    
    if (rdi_14 s> rax_53)
        sub_140594770(&var_58)
        r15_9 = var_58
    
    UnDecorator::getReferenceType(r15_9, rsi_14, (rbx_18.d + 1) * 2)

int64_t* rax_54 = sub_140b58170(&var_88, "Immortal", 1)
var_a0 = 0
uint64_t r12_8 = 0
int64_t rbx_20 = *rax_54
var_a8 = rbx_20

if (rdi_14 != 0)
    sub_1405a4c70(&var_a0, rdi_14, 0)
    r12_8 = var_a0
    memcpy(r12_8, r15_9, rdi_14 * 2)
    r13_4 = var_94
    rbx_20 = var_a8

int64_t rsi_15 = sx.q(arg2[1].d)
int32_t rax_55 = (rsi_15 + 1).d
arg2[1].d = rax_55

if (rax_55 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_58 = (rsi_15 << 5) + *arg2
*rax_58 = rbx_20
rax_58[1] = r12_8
*(rax_58 + 0x14) = r13_4
int32_t r13_5 = 0
rax_58[2].d = rdi_14
rax_58[3] = 1

if (r15_9 != 0)
    sub_140a74f90(r15_9)

wchar16 const* const rsi_16 = u"False"
int64_t r15_10 = 0
var_58 = 0
int32_t rdi_15 = 0
int32_t var_50_7 = 0

if ((*(arg1 + 0x10a) & 4) != 0)
    rsi_16 = u"True"

int32_t rax_60 = 0
int32_t var_4c_3 = 0

if (*rsi_16 != 0)
    int64_t rbx_21 = -1
    
    do
        rbx_21 += 1
    while (rsi_16[rbx_21] != 0)
    
    if (rbx_21.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_21.d + 1)
        rax_60 = var_4c_3
        rdi_15 = var_50_7
        r15_10 = var_58
    
    rdi_15 += rbx_21.d + 1
    
    if (rdi_15 s> rax_60)
        sub_140594770(&var_58)
        r15_10 = var_58
    
    UnDecorator::getReferenceType(r15_10, rsi_16, (rbx_21.d + 1) * 2)

int64_t* rax_61 = sub_140b58170(&var_88, "Becomes Zombie", 1)
var_a0 = 0
uint64_t r12_9 = 0
int64_t rbx_23 = *rax_61
var_a8 = rbx_23

if (rdi_15 != 0)
    sub_1405a4c70(&var_a0, rdi_15, 0)
    r12_9 = var_a0
    memcpy(r12_9, r15_10, rdi_15 * 2)
    r13_5 = var_94
    rbx_23 = var_a8

int64_t rsi_17 = sx.q(arg2[1].d)
int32_t rax_62 = (rsi_17 + 1).d
arg2[1].d = rax_62

if (rax_62 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_65 = (rsi_17 << 5) + *arg2
*rax_65 = rbx_23
rax_65[1] = r12_9
*(rax_65 + 0x14) = r13_5
int32_t r13_6 = 0
rax_65[2].d = rdi_15
rax_65[3] = 1

if (r15_10 != 0)
    sub_140a74f90(r15_10)

wchar16 const* const r15_11 = u"True"
int64_t rsi_18 = 0
var_58 = 0
int32_t rdi_16 = 0
int32_t var_50_9 = 0

if (*(arg1 + 0xb5) == 0)
    r15_11 = u"False"

int32_t rax_67 = 0
int32_t var_4c_4 = 0

if (*r15_11 != 0)
    int64_t rbx_24 = -1
    
    do
        rbx_24 += 1
    while (r15_11[rbx_24] != 0)
    
    if (rbx_24.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_24.d + 1)
        rax_67 = var_4c_4
        rdi_16 = var_50_9
        rsi_18 = var_58
    
    rdi_16 += rbx_24.d + 1
    
    if (rdi_16 s> rax_67)
        sub_140594770(&var_58)
        rsi_18 = var_58
    
    UnDecorator::getReferenceType(rsi_18, r15_11, (rbx_24.d + 1) * 2)

int64_t* rax_68 = sub_140b58170(&var_88, "CanBeOccluded", 1)
var_a0 = 0
uint64_t r12_10 = 0
int64_t rbx_26 = *rax_68
var_a8 = rbx_26

if (rdi_16 != 0)
    sub_1405a4c70(&var_a0, rdi_16, 0)
    r12_10 = var_a0
    memcpy(r12_10, rsi_18, rdi_16 * 2)
    r13_6 = var_94
    rbx_26 = var_a8

int64_t r15_12 = sx.q(arg2[1].d)
int32_t rax_69 = (r15_12 + 1).d
arg2[1].d = rax_69

if (rax_69 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_72 = (r15_12 << 5) + *arg2
*rax_72 = rbx_26
rax_72[1] = r12_10
int32_t r12_11 = 0
rax_72[2].d = rdi_16
*(rax_72 + 0x14) = r13_6
rax_72[3] = 1

if (rsi_18 != 0)
    sub_140a74f90(rsi_18)

int32_t r13_7 = 0
var_58 = 0
int32_t r9 = 0
var_50_9.q = 0
int64_t rdx_59 = 0
int64_t* rcx_99 = arg1[8]
uint64_t r8_41 = sx.q(arg1[9].d) << 3 u>> 3

if (rcx_99 u> &rcx_99[arg1[9]])
    r8_41 = 0

if (r8_41 != 0)
    do
        void* rax_76 = *rcx_99
        
        if (rax_76 != 0)
            uint64_t rax_77 = zx.q(*(rax_76 + 0x35))
            *(&var_58 + (rax_77 << 2)) += 1
        
        rcx_99 = &rcx_99[1]
        rdx_59 += 1
    while (rdx_59 != r8_41)
    
    r9 = var_4c_4
    r13_7 = var_50_9

sub_140a2e390(&var_a8, u"%u", zx.q(r9))
int64_t* rax_78 = sub_140b58170(&var_88, "Critical Emitters", 1)
int32_t rsi_19 = var_a0.d
int64_t r15_13 = 0
int64_t rdi_17 = var_a8
var_78 = 0
int64_t rbx_27 = *rax_78

if (rsi_19 != 0)
    sub_1405a4c70(&var_78, rsi_19, 0)
    r15_13 = var_78
    memcpy(r15_13, rdi_17, rsi_19 * 2)
    r12_11 = var_6c

int64_t rdi_18 = sx.q(arg2[1].d)
int32_t rax_79 = (rdi_18 + 1).d
arg2[1].d = rax_79

if (rax_79 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_82 = (rdi_18 << 5) + *arg2
*rax_82 = rbx_27
rax_82[1] = r15_13
rax_82[2].d = rsi_19
*(rax_82 + 0x14) = r12_11
rax_82[3] = 2
int64_t rcx_105 = var_a8

if (rcx_105 != 0)
    sub_140a74f90(rcx_105)

sub_140a2e390(&var_a8, u"%u", zx.q(r13_7))
int64_t* rax_83 = sub_140b58170(&var_88, "High Emitters", 1)
int32_t rsi_20 = var_a0.d
int64_t rdi_19 = var_a8
int64_t r15_14 = 0
var_78 = 0
int64_t rbx_28 = *rax_83
int32_t var_70_2 = rsi_20
int32_t r12_12

if (rsi_20 != 0)
    sub_1405a4c70(&var_78, rsi_20, 0)
    r15_14 = var_78
    memcpy(r15_14, rdi_19, rsi_20 * 2)
    r12_12 = var_6c
    rsi_20 = var_70_2
else
    r12_12 = 0

int64_t rdi_20 = sx.q(arg2[1].d)
int32_t rax_84 = (rdi_20 + 1).d
arg2[1].d = rax_84

if (rax_84 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_87 = (rdi_20 << 5) + *arg2
*rax_87 = rbx_28
rax_87[1] = r15_14
rax_87[2].d = rsi_20
*(rax_87 + 0x14) = r12_12
rax_87[3] = 2
int64_t rcx_111 = var_a8

if (rcx_111 != 0)
    sub_140a74f90(rcx_111)

sub_140a2e390(&var_a8, u"%u", zx.q(var_58:4.d))
int64_t rcx_114 = *sub_140b58170(&var_88, "Medium Emitters", 1)
sub_140596d10(&var_78, &var_a8)
int64_t rbx_29 = sx.q(arg2[1].d)
int32_t rax_89 = (rbx_29 + 1).d
arg2[1].d = rax_89

if (rax_89 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_119 = (rbx_29 << 5) + *arg2
*rcx_119 = rcx_114
rcx_119[1] = var_78
rcx_119[2].d = var_70_2
*(rcx_119 + 0x14) = var_6c
rcx_119[3] = 2
int64_t rcx_120 = var_a8

if (rcx_120 != 0)
    sub_140a74f90(rcx_120)

sub_140a2e390(&var_a8, u"%u", zx.q(var_58.d))
int64_t rcx_123 = *sub_140b58170(&var_88, "Low Emitters", 1)
sub_140596d10(&var_78, &var_a8)
int64_t rbx_30 = sx.q(arg2[1].d)
int32_t rax_95 = (rbx_30 + 1).d
arg2[1].d = rax_95

if (rax_95 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* r8_52 = (rbx_30 << 5) + *arg2
*r8_52 = rcx_123
r8_52[1] = var_78
r8_52[2].d = var_70_2
*(r8_52 + 0x14) = var_6c
r8_52[3] = 2
int64_t rcx_126 = var_a8

if (rcx_126 != 0)
    sub_140a74f90(rcx_126)

void* result = sub_140cdbf60(arg1, arg2)
int64_t rcx_128 = var_b8

if (rcx_128 != 0)
    result = sub_140a74f90(rcx_128)

__security_check_cookie(var_48 ^ &var_d8)
return result
