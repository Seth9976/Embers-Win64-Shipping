// 函数: sub_140b6c580
// 地址: 0x140b6c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48 = nullptr
int64_t var_40 = 0
sub_1405947f0(&var_48, 9)
int32_t rdi = var_40:4.d
int32_t rbx = var_40.d + 9
var_40.d = rbx

if (rbx s> rdi)
    sub_140594770(&var_48)
    rdi = var_40:4.d
    rbx = var_40.d

int16_t* r12 = var_48
UnDecorator::getReferenceType(r12, u"Software", 0x12)
int32_t rax = arg1[1].d
int32_t rsi_1 = rax - 1

if (rax == 0)
    rsi_1 = 0

int32_t r14 = 2
int32_t rax_2

if (rbx == 0)
    rax_2 = 2

if (rbx != 0 || rsi_1 == 0xffffffff)
    rax_2 = 1

int16_t* var_58 = r12
int32_t rdx_2 = rsi_1 + rax_2 + rbx

if (rdx_2 s> rdi)
    sub_1405947f0(&var_58, rdx_2)

sub_140a2cf70(&var_58, *arg1, rsi_1)
int32_t rax_3 = arg2[1].d
int32_t rbx_1 = rax_3 - 1

if (rax_3 == 0)
    rbx_1 = 0

if (rbx != 0 || rbx_1 == 0xffffffff)
    r14 = 1

int16_t* var_68 = var_58
int32_t rdx_6 = rbx_1 + r14 + rbx
var_58 = nullptr
int32_t var_60 = rbx
int32_t var_5c = rdi
int32_t var_50
var_50.q = 0

if (rdx_6 s> rdi)
    sub_1405947f0(&var_68, rdx_6)

sub_140a2cf70(&var_68, *arg2, rbx_1)
int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_7 = sub_140a300d0(&var_68, &var_48, &data_142d5a024, &(*U"{}[\nt")[3], 1)

if (&var_68 != rax_7)
    int16_t* rcx_10 = var_68
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    var_68 = *rax_7
    *rax_7 = 0
    var_60 = rax_7[1].d
    int32_t var_5c_1 = *(rax_7 + 0xc)
    rax_7[1] = 0

int16_t* rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* const rdx_9 = &data_142d40450
PWSTR r8_2

if (arg3[1].d == 0)
    r8_2 = &data_142d40450
else
    r8_2 = *arg3

if (var_60 != 0)
    rdx_9 = var_68

char rax_10 = sub_140b71990(-0xffffffff80000001, rdx_9, r8_2, arg4)
int16_t* rcx_13 = var_68

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return zx.q(rax_10)
