// 函数: sub_1406d2ea0
// 地址: 0x1406d2ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg1
int64_t* var_48
arg_8 = &var_48
var_48 = nullptr
int32_t i_2 = arg2[1].d
void* rdi = *arg2
int32_t i_4 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_48, i_2, 0)
    int64_t* rbx_1 = var_48
    int32_t i
    
    do
        int64_t* arg_18 = rbx_1
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t var_3c_1 = 0

sub_1406d4bd0(arg1, &var_48)
int32_t i_3 = arg2[1].d
int64_t* rbx_2 = *arg2

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t rcx_5 = *arg2

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1
