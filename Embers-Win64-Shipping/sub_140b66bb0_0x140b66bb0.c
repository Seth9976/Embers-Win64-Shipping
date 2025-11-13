// 函数: sub_140b66bb0
// 地址: 0x140b66bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
char const (* r8)[0x4] = data_14399ea08

if ((*(r8 + 0x50))(&data_14399ea08, arg1, r8) != 0)
    return ShellExecuteW(nullptr, u"explore", arg1, nullptr, nullptr, SW_SHOWNORMAL)

int32_t rdx_1 = 0
int32_t rcx = 0
int64_t var_38 = 0
int64_t var_30 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx = var_30:4.d
        rdx_1 = var_30.d
    
    int32_t rax_2 = rbx_1.d + 1 + rdx_1
    var_30.d = rax_2
    
    if (rax_2 s> rcx)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg1, (rbx_1.d + 1) * 2)

int16_t* var_18
sub_140a300d0(&var_38, &var_18, &data_142d5a024, &(*U"{}[\nt")[3], 1)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* const lpParameters = &data_142d40450
int16_t* const r8_4 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r8_4 = var_18

int16_t* lpParameters_1
sub_140a2e390(&lpParameters_1, u"/select,%s", r8_4)
int32_t var_20

if (var_20 != 0)
    lpParameters = lpParameters_1

HINSTANCE result = ShellExecuteW(nullptr, open", explorer.exe"
    , lpParameters, nullptr, SW_SHOWNORMAL)
int16_t* lpParameters_2 = lpParameters_1

if (lpParameters_2 != 0)
    result = sub_140a74f90(lpParameters_2)

int16_t* rcx_7 = var_18

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
