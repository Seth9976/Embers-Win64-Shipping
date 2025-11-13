// 函数: sub_14064b9b0
// 地址: 0x14064b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* var_88 = nullptr
int32_t i_4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int32_t i_3 = i_4
int64_t r12
r12.b = arg_10 != 0
int64_t* rdi = var_88
int64_t* var_58 = nullptr
int64_t rcx_4
rcx_4.b = rax_5 != 0
int32_t i_5 = i_3
*(arg2 + 0x20) = rcx_4 + rax_5

if (i_3 != 0)
    sub_1405a4be0(&var_58, i_3, 0)
    int64_t* rbx_1 = var_58
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = rdi[1].d
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi = &rdi[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    int32_t var_4c_1 = 0

int64_t rdi_1 = var_78
int64_t var_48 = 0
int32_t var_40 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_48, var_70, 0)
    memcpy(var_48, rdi_1, var_70 * 2)
else
    int32_t var_3c_1 = 0

int64_t rdi_2 = var_68
int64_t var_38 = 0
int32_t var_30 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_38, var_60, 0)
    memcpy(var_38, rdi_2, var_60 * 2)
else
    int32_t var_2c_1 = 0

char result = sub_14062d150(&var_38, &var_48, &var_58, r12.b)
int32_t i_2 = i_4
int64_t* rbx_4 = var_88
*arg3 = result

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_14 = *rbx_4
        
        if (rcx_14 != 0)
            result = sub_140a74f90(rcx_14)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_4 = var_88

if (rbx_4 != 0)
    result = sub_140a74f90(rbx_4)

int64_t rcx_16 = var_78

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_68

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
