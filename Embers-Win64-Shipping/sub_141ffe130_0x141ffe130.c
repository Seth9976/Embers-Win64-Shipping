// 函数: sub_141ffe130
// 地址: 0x141ffe130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f3efd8
int64_t var_68 = 0
int64_t var_60 = 0
uint64_t var_e8
char rax_2 = sub_140b21e10((*(*rcx + 0x10))(rcx, &var_e8), &var_68)
uint64_t rcx_2 = var_e8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdx_2 = &var_e8
int64_t* rax_3

if (rax_2 == 0)
    int64_t* rcx_4 = data_143f3efd8
    rax_3 = (*(*rcx_4 + 0x10))(rcx_4, rdx_2)
else
    rax_3 = sub_140b291e0(&var_68, rdx_2, 1)

if (&arg1[4] != rax_3)
    int64_t rcx_5 = *(arg1 + 0x10)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0x10) = *rax_3
    *rax_3 = 0
    arg1[6] = rax_3[1].d
    arg1[7] = *(rax_3 + 0xc)
    rax_3[1] = 0

uint64_t rcx_7 = var_e8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

uint32_t rax_7 = GetCurrentProcessId()
int64_t var_58 = 0
int64_t var_50 = 0
sub_140a20c40(&var_58, rax_7)
int64_t* rax_8 = sub_141521500()
void* rdx_4 = rax_8[0x23]

if (rdx_4 == 0)
    int64_t rdx_5 = *rax_8
    (*(rdx_5 + 0x390))(rax_8, rdx_5)
    rdx_4 = rax_8[0x23]

arg1[8] = *arg1
sub_140597df0(&arg1[0xa], rdx_4 + 0xa8)
int64_t* rax_11 = sub_140b29040(j_sub_140b17d00(), &var_e8, 3)

if (&arg1[0xe] != rax_11)
    int64_t rcx_12 = *(arg1 + 0x38)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    *(arg1 + 0x38) = *rax_11
    *rax_11 = 0
    arg1[0x10] = rax_11[1].d
    arg1[0x11] = *(rax_11 + 0xc)
    rax_11[1] = 0

uint64_t rcx_14 = var_e8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

void arg_10
int64_t* rax_14 = sub_140b29d90(&arg_10)
uint64_t rbx_4 = 0
var_e8 = 0
*(arg1 + 0x48) = *rax_14
*(arg1 + 0x52) = 0
int32_t r14 = data_143f5bb50
int32_t var_e0
int32_t var_dc
int32_t r14_2
int32_t r8_1
int64_t r12

if (r14 s> 1)
    r12 = data_143f5bb48
    var_e0 = r14
    
    if (r14 != 0)
        sub_1405a4c70(&var_e8, r14, 0)
        r8_1 = r14
    label_141ffe326:
        rbx_4 = var_e8
        memcpy(rbx_4, r12, r8_1 * 2)
        r14_2 = var_dc
    else
        r14_2 = 0
else
    int32_t r14_1 = (data_143f3f018.q).d
    r12 = data_143f3f010
    var_e0 = r14_1
    
    if (r14_1 != 0)
        sub_1405a4c70(&var_e8, r14_1, 0)
        r8_1 = r14_1
        goto label_141ffe326
    
    r14_2 = 0

if (&arg1[0x16] != &var_e8)
    int64_t rcx_19 = *(arg1 + 0x58)
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    *(arg1 + 0x58) = rbx_4
    arg1[0x18] = var_e0
    arg1[0x19] = r14_2
else if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

void* rax_17 = data_143f5b298

if (rax_17 == 0 || *(rax_17 + 0xc30) == 0)
    rax_17.b = 0
else
    rax_17.b = 1

arg1[0x1a].b = rax_17.b
void var_48
int64_t* rax_19 = sub_142006bd0(arg1, &var_e8, sub_140596d10(&var_48, &arg1[4]))

if (&arg1[0x1c] != rax_19)
    int64_t rcx_23 = *(arg1 + 0x70)
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    *(arg1 + 0x70) = *rax_19
    *rax_19 = 0
    arg1[0x1e] = rax_19[1].d
    arg1[0x1f] = *(rax_19 + 0xc)
    rax_19[1] = 0

uint64_t rcx_25 = var_e8

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

bool cond:0 = arg1[8] == 0
int64_t* rax_22 = &data_143f3f260
int64_t var_d8 = 0

if (cond:0)
    rax_22 = &data_143f3f250

int32_t rbx_6 = rax_22[1].d
int64_t r13 = *rax_22
int32_t var_d0 = rbx_6

if (rbx_6 != 0)
    sub_1405a4c70(&var_d8, rbx_6, 0)
    memcpy(var_d8, r13, rbx_6 * 2)
else
    int32_t var_cc_1 = 0

bool cond:1 = *(arg1 + 0x52) != 0
int64_t* rax_23 = &data_143f3f230
int64_t var_78 = 0

if (cond:1)
    rax_23 = &data_143f3f240

int32_t rbx_7 = rax_23[1].d
int64_t r13_1 = *rax_23
int32_t var_70 = rbx_7

if (rbx_7 != 0)
    sub_1405a4c70(&var_78, rbx_7, 0)
    memcpy(var_78, r13_1, rbx_7 * 2)
else
    int32_t var_6c_1 = 0

bool cond:2 = *(arg1 + 0x53) != 0
int64_t* rax_24 = &data_143f3f230
int64_t var_88 = 0

if (cond:2)
    rax_24 = &data_143f3f240

int32_t rbx_8 = rax_24[1].d
int64_t r13_2 = *rax_24
int32_t var_80 = rbx_8

if (rbx_8 != 0)
    sub_1405a4c70(&var_88, rbx_8, 0)
    memcpy(var_88, r13_2, rbx_8 * 2)
else
    int32_t var_7c_1 = 0

bool cond:3 = arg1[0x15].b != 0
int64_t* rax_25 = &data_143f3f230
int64_t var_98 = 0

if (cond:3)
    rax_25 = &data_143f3f240

int32_t rbx_9 = rax_25[1].d
int64_t r13_3 = *rax_25
int32_t var_90 = rbx_9

if (rbx_9 != 0)
    sub_1405a4c70(&var_98, rbx_9, 0)
    memcpy(var_98, r13_3, rbx_9 * 2)
else
    int32_t var_8c_1 = 0

bool cond:4 = *(arg1 + 0x55) != 0
int64_t* rax_26 = &data_143f3f230
int64_t var_a8 = 0

if (cond:4)
    rax_26 = &data_143f3f240

int32_t rbx_10 = rax_26[1].d
int64_t r13_4 = *rax_26
int32_t var_a0 = rbx_10

if (rbx_10 != 0)
    sub_1405a4c70(&var_a8, rbx_10, 0)
    memcpy(var_a8, r13_4, rbx_10 * 2)
else
    int32_t var_9c_1 = 0

bool cond:5 = arg1[0x1a].b != 0
int64_t* rax_27 = &data_143f3f230
int64_t var_b8 = 0

if (cond:5)
    rax_27 = &data_143f3f240

int32_t rbx_11 = rax_27[1].d
int64_t r13_5 = *rax_27
int32_t var_b0 = rbx_11

if (rbx_11 != 0)
    sub_1405a4c70(&var_b8, rbx_11, 0)
    memcpy(var_b8, r13_5, rbx_11 * 2)
else
    int32_t var_ac_1 = 0

bool cond:6 = *(arg1 + 0x69) != 0
int64_t* rax_28 = &data_143f3f230
int64_t var_c8 = 0

if (cond:6)
    rax_28 = &data_143f3f240

int32_t rbx_12 = rax_28[1].d
int64_t r13_6 = *rax_28
int32_t var_c0 = rbx_12

if (rbx_12 != 0)
    sub_1405a4c70(&var_c8, rbx_12, 0)
    memcpy(var_c8, r13_6, rbx_12 * 2)
else
    int32_t var_bc_1 = 0

sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f100, &var_d8)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f110, &arg1[0xa])
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f130, &data_143f3f230)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f190, &arg1[0xe])
int32_t var_100 = 0
int32_t var_108 = 0
sub_140a2e390(&var_e8, %lld", 
    (*(arg1 + 0x48) - *sub_140b0a2c0(&arg_10, 0x7b2, 1, 1, 0, 0, 0, 0)) s/ 0x989680)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1a0, &var_e8)
uint64_t rcx_42 = var_e8

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1e0, &var_78)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f1f0, &var_88)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f150, &var_98)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f160, &var_a8)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f200, &arg1[0x16])
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f210, &var_b8)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f170, &var_c8)
sub_140b729b0(&data_143f3f020, &arg1[0x1c], &data_143f3f180, &var_58)
int64_t r14_4 = sx.q(arg1[0x22])
int32_t rax_31 = (r14_4 + 1).d
arg1[0x22] = rax_31

if (rax_31 s> arg1[0x23])
    sub_14090a6a0(&arg1[0x20])

sub_141ff46f0(r14_4 * 0x60 + *(arg1 + 0x80), &arg1[4])
void* rcx_47 = data_143ddb400
var_108.q = &data_143de5780
char arg_8 = 0
sub_140af2fd0(rcx_47, u"EngineSessionManager", u"UseWatchdogMTBF", &arg_8, &data_143de5780)

if (*(arg1 + 0x53) == 0 && arg_8 != 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"NoWatchdog") == 0)
        goto label_141ffe896
    
    goto label_141ffe873

label_141ffe873:
sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"ForceWatchdog")

if (result != 0)
label_141ffe896:
    var_e8 = 0
    var_e0.q = 0
    sub_1405947f0(&var_e8, 0x10)
    int32_t var_e0_1 = var_e0 + 0x10
    
    if (var_e0 + 0x10 s> var_dc)
        sub_140594770(&var_e8)
    
    var_108.w = 0x3f
    sub_1405a7220(var_e8, 0x10, "WindowsNoEditor", 0x10, 0x3f)
    var_100.q = &arg1[0xe]
    var_108.q = &arg1[4]
    result = sub_14200fd70(arg1, &var_d8, &arg1[0xa], &var_e8)
    uint64_t rcx_52 = var_e8
    
    if (rcx_52 != 0)
        result = sub_140a74f90(rcx_52)

int64_t rcx_53 = var_c8

if (rcx_53 != 0)
    result = sub_140a74f90(rcx_53)

int64_t rcx_54 = var_b8

if (rcx_54 != 0)
    result = sub_140a74f90(rcx_54)

int64_t rcx_55 = var_a8

if (rcx_55 != 0)
    result = sub_140a74f90(rcx_55)

int64_t rcx_56 = var_98

if (rcx_56 != 0)
    result = sub_140a74f90(rcx_56)

int64_t rcx_57 = var_88

if (rcx_57 != 0)
    result = sub_140a74f90(rcx_57)

int64_t rcx_58 = var_78

if (rcx_58 != 0)
    result = sub_140a74f90(rcx_58)

int64_t rcx_59 = var_d8

if (rcx_59 != 0)
    result = sub_140a74f90(rcx_59)

int64_t rcx_60 = var_58

if (rcx_60 == 0)
    return result

return sub_140a74f90(rcx_60)
