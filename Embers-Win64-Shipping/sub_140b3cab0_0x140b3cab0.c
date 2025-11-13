// 函数: sub_140b3cab0
// 地址: 0x140b3cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int32_t rcx = 0
int32_t var_4c = 0
int64_t rbx = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        rcx = var_4c
        rdx = var_50
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_50_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg3, (rdi_1.d + 1) * 2)

arg3.b = 1
int16_t* var_28
sub_140b18720(&var_28, &var_58, arg3.b)
int16_t* var_38
sub_140af5b50(data_143ddb400, &var_38, u"RemoteConfiguration", u"ConfigPathPrefix", &data_143de5780)
int16_t* var_48
sub_140af5b50(data_143ddb400, &var_48, u"RemoteConfiguration", u"ConfigPathSuffix", &data_143de5780)
int16_t* rax_2 = sub_140b73b20(0)
int64_t var_68 = 0
int32_t var_60 = 0
int32_t rax_3 = 0
int32_t var_5c = 0
int32_t r14_1 = 0

if (rax_2 != 0 && *rax_2 != 0)
    do
        rbx += 1
    while (rax_2[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx.d + 1)
        rax_3 = var_5c
        r14_1 = var_60
        rsi = var_68
    
    if (r14_1 + rbx.d + 1 s> rax_3)
        sub_140594770(&var_68)
        rsi = var_68
    
    UnDecorator::getReferenceType(rsi, rax_2, (rbx.d + 1) * 2)

int16_t* const r8_4 = &data_142d40450
int16_t* const rdx_9 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_9 = var_28

int16_t* const rax_4 = &data_142d40450
int16_t* const var_78 = rdx_9
int32_t var_40

if (var_40 != 0)
    rax_4 = var_48

wchar16* var_80 = u"Embers"
int16_t* const var_88 = rax_4
int32_t var_30

if (var_30 != 0)
    r8_4 = var_38

sub_140a2e390(arg2, u"%s/%s/%s/%s/%s.ini", r8_4)

if (rsi != 0)
    sub_140a74f90(rsi)

int16_t* rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int16_t* rcx_14 = var_28

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg2
