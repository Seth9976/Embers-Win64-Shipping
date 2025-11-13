// 函数: sub_140975e90
// 地址: 0x140975e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int16_t* r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t var_78
sub_1423fb9e0(&var_78, nullptr, r8, 0)

if (sub_1409662f0(arg1, &var_78) != 0)
    sub_140597df0(&arg1[0x5c], arg3)
    sub_14094ded0(&arg1[0x5f], arg4)
    sub_14094d8f0(&arg1[0x64], arg5)
    *(arg1 + 0x341) = 0
    rsi.b = 1

arg1[0x68].b = rsi.b

if (rsi.b == 0)
    (*(*arg1 + 0x640))(arg1)

int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_30
int64_t* rbx_1 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_30

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_12 = var_78

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return zx.q(rsi.b)
