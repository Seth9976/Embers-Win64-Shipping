// 函数: sub_1422f1ad0
// 地址: 0x1422f1ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg2
int32_t arg_10 = 0
uint64_t var_c0
uint64_t var_b0
int32_t* rax_8
int32_t rbx_2

if (data_143f56366 == 0)
    void var_a0
    rax_8 = sub_1422e5800(&var_a0)
    rbx_2 = 2
else
    int32_t rbx = (data_143f554c8).d
    int32_t zmm1 = data_143f554b8
    int64_t rdi_1 = data_143f554c0
    int32_t var_ec_1 = data_143f55494
    int32_t var_e8_1 = data_143f55498
    int32_t var_e4_1 = data_143f5549c
    int32_t var_e0_1 = data_143f554a0
    int32_t var_dc_1 = data_143f554a4
    int32_t var_d8_1 = data_143f554a8
    int32_t rax_6 = data_143f554ac
    int32_t var_f0 = data_143f55490
    int32_t var_d4_1 = rax_6
    int32_t var_d0_1 = data_143f554b0
    int32_t var_cc_1 = data_143f554b4
    int32_t var_c8_1 = zmm1
    var_c0 = 0
    int32_t var_b8_1 = rbx
    
    if (rbx != 0)
        sub_140638750(&var_c0, rbx, 0)
        memcpy(var_c0, rdi_1, rbx << 2)
    else
        int32_t var_b4_1 = 0
    
    int32_t rbx_1 = (data_143f554d8).d
    int64_t rdi_2 = data_143f554d0
    var_b0 = 0
    int32_t var_a8_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_140638750(&var_b0, rbx_1, 0)
        memcpy(var_b0, rdi_2, rbx_1 << 2)
        rax_8 = &var_f0
        rbx_2 = 1
    else
        int32_t var_a4_1 = 0
        rax_8 = &var_f0
        rbx_2 = 1

int32_t rcx_5 = rax_8[4]
arg2 = *rax_8
int32_t r15 = rax_8[1]
int32_t r12 = rax_8[2]
int32_t r13 = rax_8[3]
int64_t rdi_3 = *(rax_8 + 0x30)
int32_t rcx_6 = rax_8[5]
int32_t rcx_7 = rax_8[6]
int32_t rcx_8 = rax_8[7]
int32_t rcx_9 = rax_8[8]
__builtin_memset(&rax_8[0xc], 0, 0x20)
int64_t rsi = *(rax_8 + 0x40)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    int64_t var_60
    
    if (var_60 != 0)
        sub_140a74f90(var_60)
    
    int64_t var_70
    
    if (var_70 != 0)
        sub_140a74f90(var_70)

if ((rbx_2.b & 1) != 0)
    uint64_t rcx_12 = var_b0
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    uint64_t rcx_13 = var_c0
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

sub_140b008a0(data_143ddb400, u"ScalabilityGroups", u"sg.ResolutionQuality", arg2, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.ViewDistanceQuality", r15, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.AntiAliasingQuality", r12, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.ShadowQuality", r13, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.PostProcessQuality", rcx_5, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.TextureQuality", rcx_6, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.EffectsQuality", rcx_7, arg1)
sub_140b00a60(data_143ddb400, u"ScalabilityGroups", u"sg.FoliageQuality", rcx_8, arg1)
int64_t* result
int512_t zmm6
result, zmm6 = sub_140b00a60(data_143ddb400, ScalabilityGroups", sg.ShadingQuality", rcx_9, arg1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

if (rdi_3 != 0)
    result = sub_140a74f90(rdi_3)

zmm6.o = var_48
return result
