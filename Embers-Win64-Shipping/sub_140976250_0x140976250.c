// 函数: sub_140976250
// 地址: 0x140976250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int16_t* r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t var_78
sub_1423fb9e0(&var_78, nullptr, r8, 0)

if (sub_1409662f0(arg1, &var_78) != 0)
    sub_140597df0(&arg1[0x5c], arg3)
    sub_14094ded0(&arg1[0x5e], arg4)
    sub_14094ded0(&arg1[0x63], arg5)
    sub_140597df0(&arg1[0x68], arg5 + 0x28)
    sub_140597df0(&arg1[0x6a], arg5 + 0x38)
    rbp.b = 1
    arg1[0x6c].b = *(arg5 + 0x48)
    *(arg1 + 0x364) = *(arg5 + 0x4c)
    *(arg1 + 0x369) = 0

arg1[0x6d].b = rbp.b

if (rbp.b == 0)
    (*(*arg1 + 0x640))(arg1)

int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_30
int64_t* rbx_2 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_2 = var_30

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_14 = var_78

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return zx.q(rbp.b)
