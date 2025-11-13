// 函数: sub_140b11f00
// 地址: 0x140b11f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b26eb0(&var_28)
int64_t rdi = -1
int64_t rbx = -1

do
    rbx += 1
while (arg3[rbx] != 0)

int32_t rdx

if (rax[1].d == 0)
    rdx = 2

if (rax[1].d != 0 || (rbx + 1).d == 0)
    rdx = 1

int32_t r15 = 0
int16_t* var_38 = *rax
*rax = 0
int32_t rax_3 = rax[1].d
int32_t rax_4 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_2 = rdx + rax_3 + rbx.d

if (rdx_2 s> rax_4)
    sub_1405947f0(&var_38, rdx_2)

sub_140a2cf70(&var_38, arg3, rbx.d)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140a306e0(&var_38, &(*U"{}[\nt")[3], &data_142d5a024, 0)
int16_t* rax_5 = sub_140a4fcd0()
int16_t* var_48 = nullptr
int32_t rcx_6 = 0
int32_t var_3c = 0
int32_t var_40 = 0

if (rax_5 != 0 && *rax_5 != 0)
    do
        rdi += 1
    while (rax_5[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi.d + 1)
        rcx_6 = var_3c
        r15 = var_40
    
    int32_t rax_6 = rdi.d + 1 + r15
    var_40 = rax_6
    
    if (rax_6 s> rcx_6)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, rax_5, (rdi.d + 1) * 2)

Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_48)
sub_140a306e0(&var_48, &(*U"{}[\nt")[3], &data_142d5a024, 0)
sub_140b11c80(arg1, arg2)
int16_t* const rbx_2 = &data_142d40450

if (sub_140a32a50(arg1, &var_48, 1) == 0)
    int16_t* const rax_8 = &data_142d40450
    
    if (var_40 != 0)
        rax_8 = var_48
    
    int16_t* const r9_1
    
    if (*(arg1 + 8) == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *arg1
    
    int16_t* const var_58_1 = rax_8
    sub_140af98a0("Unknown", 0x4f6, 
        %s does not start with %s so this is not a valid sandbox path.", r9_1)
    sub_140afbb40()

int16_t* const r8_3 = &data_142d40450

if (rax_3 != 0)
    r8_3 = var_38

if (var_40 != 0)
    rbx_2 = var_48

sub_140a306e0(arg1, rbx_2, r8_3, 1)
int16_t* rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_38

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg1
