// 函数: sub_140b5bcf0
// 地址: 0x140b5bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140a2e390(&var_28, u"%d", 1)
int16_t* const r14 = &data_142d40450
int16_t* const r8 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    r8 = var_28

sub_140a3e8b0(arg1 + 0x48, u"PlatformIsRunningWindows", r8)
int16_t* rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

wchar16 const* const rsi = u"false"

if (sub_140b6e890() != 0)
    rsi = u"true"

int16_t* rdi = nullptr
int32_t rax_1 = 0
var_28 = nullptr
int32_t rdx = 0
int32_t var_1c = 0
int32_t var_20_1 = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax_1 = var_1c
        rdx = var_20_1
        rdi = var_28
    
    int32_t rbp_1 = rdx + rbx_1.d + 1
    
    if (rbp_1 s> rax_1)
        sub_140594770(&var_28)
        rdi = var_28
    
    UnDecorator::getReferenceType(rdi, rsi, (rbx_1.d + 1) * 2)
    
    if (rbp_1 != 0)
        r14 = rdi

int64_t result = sub_140a3e8b0(arg1 + 0x48, u"IsRunningOnBattery", r14)

if (rdi == 0)
    return result

return sub_140a74f90(rdi) __tailcall
