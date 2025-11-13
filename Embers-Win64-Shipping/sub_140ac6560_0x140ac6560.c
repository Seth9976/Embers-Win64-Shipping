// 函数: sub_140ac6560
// 地址: 0x140ac6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_140b2f3c0(&var_48, &arg1[1])
void var_28
sub_140b2f3c0(&var_28, (&data_142e65530)[zx.q(*arg1)])
int64_t i_2 = 2
uint64_t var_58 = 0
int32_t i_5 = 2
sub_14083a1f0(&var_58, 2, 0)
uint64_t rsi = var_58
void* rbx_1 = &var_48
int32_t i_3 = 2
int32_t i

do
    sub_140b2f340(rsi, rbx_1)
    rsi += 0x20
    rbx_1 += 0x20
    i = i_3
    i_3 -= 1
while (i != 1)
sub_140b3b4b0(arg2, u"{0} ({1})", &var_58)
int32_t i_4 = i_5

if (i_4 != 0)
    int64_t* rbx_3 = var_58 + 0x10
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_3
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_3 = &rbx_3[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

uint64_t rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t __saved_rbx
int64_t* rbx_4 = &__saved_rbx

do
    int64_t rcx_7 = rbx_4[-4]
    rbx_4 = &rbx_4[-4]
    i_2 -= 1
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
while (i_2 != 0)

return arg2
