// 函数: sub_140656b40
// 地址: 0x140656b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* r12 = &arg_20
int64_t var_78 = 0
int32_t var_70 = 0

if (rax_2 != 0)
    r12 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* var_98 = nullptr
int32_t i_4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

bool cond:1 = var_a8 != 0
int32_t var_a4 = 0
uint64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_a4, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a4)

bool cond:2 = var_a4 != 0
int32_t var_a0 = 0
int64_t r13
r13.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_a0, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int64_t var_88 = 0
int32_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_88, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi = var_88
int64_t var_68 = 0
int64_t rcx_7
rcx_7.b = rax_9 != 0
*(arg2 + 0x20) = rcx_7 + rax_9
int32_t var_60 = var_80

if (var_80 != 0)
    sub_1405a4c70(&var_68, var_80, 0)
    memcpy(var_68, rdi, var_80 * 2)
else
    int32_t var_5c_1 = 0

int32_t i_3 = i_4
int64_t* rdi_1 = var_98
int64_t* var_58 = nullptr
int32_t i_5 = i_3

if (i_3 != 0)
    sub_1405a4be0(&var_58, i_3, 0)
    int64_t* rbx_2 = var_58
    int32_t i
    
    do
        *rbx_2 = 0
        int32_t rsi_1 = rdi_1[1].d
        int64_t r15_1 = *rdi_1
        rbx_2[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_2, rsi_1, 0)
            memcpy(*rbx_2, r15_1, rsi_1 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rdi_1 = &rdi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rsi = zx.q(rsi.b)
else
    int32_t var_4c_1 = 0

int64_t rdi_2 = var_78
int64_t var_48 = 0
int32_t var_40 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_48, var_70, 0)
    memcpy(var_48, rdi_2, var_70 * 2)
else
    int32_t var_3c_1 = 0

int64_t result = sub_14063d510(r12, &var_48, &var_58, rsi.b, r13.b, var_a0, &var_68)
int64_t rcx_17 = var_88

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int32_t i_2 = i_4
int64_t* rbx_4 = var_98

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_18 = *rbx_4
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_4 = var_98

if (rbx_4 != 0)
    result = sub_140a74f90(rbx_4)

int64_t rcx_20 = var_78

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
