// 函数: sub_1418c0940
// 地址: 0x1418c0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int16_t* var_68 = nullptr
int32_t var_60 = 0
sub_1405947f0(&var_68, 8)
int32_t rbx = var_60 + 8
int32_t var_5c

if (rbx s> var_5c)
    sub_140594770(&var_68)

int16_t* rsi = var_68
sub_1405a7220(rsi, 8, "Windows", 8, 0x3f)
int64_t var_38
int64_t* rax = sub_140b251a0(&var_38)
int32_t rdx_1 = rax[1].d
int32_t rdx_2 = neg.d(rdx_1)
int16_t* var_88 = *rax
*rax = 0
int32_t rcx_5 = rax[1].d
int32_t var_7c = *(rax + 0xc)
rax[1] = 0
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 7 + rcx_5

if (rdx_5 s> var_7c)
    sub_1405947f0(&var_88, rdx_5)

int32_t rcx_9 = sub_140a2cf70(&var_88, u"Build", 5)
int16_t* var_78 = var_88
int32_t rdx_7 = rcx_5 + sbb.d(rcx_9, rcx_9, rcx_5 != 0) + 0xe
var_88 = nullptr
int32_t var_80
var_80.q = 0

if (rdx_7 s> var_7c)
    sub_1405947f0(&var_78, rdx_7)

sub_140a2cf70(&var_78, u"ShaderCaches", 0xc)
int32_t rbx_1

if (rbx == 0)
    rbx_1 = 0
else
    rbx_1 = rbx - 1

int32_t r8_1

if (rcx_5 == 0)
    r8_1 = rcx_5 + 2

if (rcx_5 != 0 || rbx_1 == 0xffffffff)
    r8_1 = 1

int16_t* var_58 = var_78
int32_t rdx_9 = rcx_5 + rbx_1 + r8_1
var_78 = nullptr
int32_t var_4c = var_7c
int32_t var_70
var_70.q = 0

if (rdx_9 s> var_7c)
    sub_1405947f0(&var_58, rdx_9)

sub_140a2cf70(&var_58, rsi, rbx_1)
int16_t* rcx_17 = var_78

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int16_t* rcx_18 = var_88

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_38

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

if (rsi != 0)
    sub_140a74f90(rsi)

void* var_48 = nullptr
int32_t var_40 = 0
sub_140a464c0()
int16_t* const r8_3 = &data_142d40450

if (rcx_5 != 0)
    r8_3 = var_58

(*(data_14399ea08 + 0x70))(&data_14399ea08, &var_48, r8_3, u"cache")
void* rbx_2 = var_48
int64_t rsi_1 = sx.q(var_40)
void* r12_2 = (rsi_1 << 4) + rbx_2

if (rbx_2 != r12_2)
    do
        int32_t rax_7 = *(rbx_2 + 8)
        int32_t rsi_2 = rax_7 - 1
        
        if (rax_7 == 0)
            rsi_2 = 0
        
        int32_t rax_9
        
        if (rcx_5 == 0)
            rax_9 = rcx_5 + 2
        
        if (rcx_5 != 0 || rsi_2 == 0xffffffff)
            rax_9 = 1
        
        int16_t* r15_1 = var_58
        int32_t rcx_21 = rax_9 + rsi_2
        var_88 = nullptr
        
        if (rcx_5 != 0 || rcx_21 != 0)
            sub_1405a4c70(&var_88, rcx_5 + rcx_21, 0)
            memcpy(var_88, r15_1, rcx_5 * 2)
        else
            var_7c = 0
        
        sub_140a2cf70(&var_88, *rbx_2, rsi_2)
        int64_t rsi_3 = sx.q(arg1[1].d)
        int32_t rax_10 = (rsi_3 + 1).d
        arg1[1].d = rax_10
        
        if (rax_10 s> *(arg1 + 0xc))
            sub_1405a4f90(arg1)
        
        int64_t* rcx_28 = (rsi_3 << 4) + *arg1
        *rcx_28 = 0
        *rcx_28 = var_88
        var_88 = nullptr
        rcx_28[1].d = rcx_5
        *(rcx_28 + 0xc) = var_7c
        int16_t* rcx_29 = var_88
        int32_t var_80_1
        var_80_1.q = 0
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        rbx_2 += 0x10
    while (rbx_2 != r12_2)
    
    rsi_1 = zx.q(var_40)
    rbx_2 = var_48

if (rsi_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_30 = *rbx_2
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        rbx_2 += 0x10
        i = rsi_1.d
        rsi_1 = zx.q(rsi_1.d - 1)
    while (i != 1)
    rbx_2 = var_48

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int16_t* rcx_32 = var_58

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

return arg1
