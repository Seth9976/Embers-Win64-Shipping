// 函数: sub_1406d9aa0
// 地址: 0x1406d9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr
int32_t i_4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t* var_48
int64_t* arg_10 = &var_48
var_48 = nullptr
int32_t i_2 = i_4
int64_t* rdi = var_58
int32_t i_5 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_48, i_2, 0)
    int64_t* rbx_1 = var_48
    int32_t i
    
    do
        int64_t* arg_18 = rbx_1
        *rbx_1 = 0
        int32_t rsi_1 = rdi[1].d
        int64_t r14_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r14_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi = &rdi[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t var_3c_1 = 0

int64_t var_38
int64_t* result = sub_1406d2ea0(&var_38, &var_48)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_7 = *arg3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int32_t i_3 = i_4
int64_t* rbx_2 = var_58

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_58

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
