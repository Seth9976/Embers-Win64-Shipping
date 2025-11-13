// 函数: sub_140532250
// 地址: 0x140532250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_58 = nullptr
int64_t var_50 = 0
sub_1405947f0(&var_58, 8)
int32_t rax = var_50.d + 8
var_50.d = rax

if (rax s> 0)
    sub_140594770(&var_58)

sub_1405a7220(var_58, 8, "Windows", 8, 0x3f)
int16_t* var_48 = nullptr
int64_t var_40 = 0
sub_1405947f0(&var_48, 0x10)
int32_t rax_1 = var_40.d + 0x10
var_40.d = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_48)

int32_t rcx_6 = UnDecorator::getReferenceType(var_48, u"../../../Engine", 0x20)
int32_t rdx_2 = var_40.d
int16_t* var_38 = var_48
int32_t rax_4 = var_40:4.d
int32_t rdx_3 = rdx_2 + sbb.d(rcx_6, rcx_6, rdx_2 != 0) + 0x17
var_48 = nullptr
int64_t var_40_1 = 0

if (rdx_3 s> rax_4)
    sub_1405947f0(&var_38, rdx_3)

int32_t rdx_4 = sub_140a2cf70(&var_38, u"GlobalShaderCache-SF_", 0x15)
int16_t* rax_5
int32_t rcx_12
int32_t r8

if (rdx_2 s> 1)
    int32_t rbx_1 = var_50.d
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    int32_t rdx_5
    
    if (rdx_2 == 0)
        rdx_5 = rdx_2 + 1
    
    if (rdx_2 != 0 || rbx_2 == 0)
        rdx_5 = 0
    
    int16_t* var_28 = var_38
    int32_t rdx_7 = rdx_5 + rbx_2 + rdx_2
    var_38 = nullptr
    int32_t var_30
    var_30.q = 0
    
    if (rdx_7 s> rax_4)
        sub_1405947f0(&var_28, rdx_7)
    
    rdx_4 = sub_140a20ba0(&var_28, var_58, rbx_2)
    rax_5 = var_28
    rcx_12 = rdx_2
    r8 = rax_4
    var_28 = nullptr
    int32_t var_20_1
    var_20_1.q = 0
else
    rax_5 = var_58
    rcx_12 = var_50.d
    r8 = var_50:4.d
    var_58 = nullptr
    int64_t var_50_1 = 0

int16_t* var_18 = rax_5
int32_t var_c = r8
int32_t rdx_11 = sbb.d(rdx_4, rdx_4, rcx_12 != 0) + 5 + rcx_12

if (rdx_11 s> r8)
    sub_1405947f0(&var_18, rdx_11)

sub_140a20ba0(&var_18, u".bin", 4)
int16_t* const rdx_12 = &data_142d40450
int16_t* rbx_3 = var_18
var_18 = nullptr
int32_t var_10
var_10.q = 0

if (rcx_12 != 0)
    rdx_12 = rbx_3

sub_140b2f000(&data_143f562f0, rdx_12)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int16_t* rcx_18 = var_38

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int16_t* rcx_19 = var_48

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* rcx_20 = var_58

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return atexit(sub_142d0d070) __tailcall
