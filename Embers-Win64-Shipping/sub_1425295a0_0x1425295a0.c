// 函数: sub_1425295a0
// 地址: 0x1425295a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_5c = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_5c, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5c)

int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t var_64 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_64, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_68, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_50 = 0
int64_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_50, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t rax_10 = *(arg2 + 0x20)
char r8_18 = arg_10
int32_t rdx_18 = var_58
int64_t rdi
rdi.b = rax_10 != 0
int32_t rax_11 = var_68
int32_t rax_12 = var_64
int32_t rax_13 = var_60
int32_t rax_14 = var_5c
*(arg2 + 0x20) = rdi + rax_10
void var_40
int64_t* rax_15 =
    sub_1420b19f0(&var_40, rdx_18, r8_18, r15.b, r14.b, rax_14, rax_13, rax_12, rax_11, &var_50)
int64_t rdx_19 = *arg3
*arg3 = *rax_15
*rax_15 = rdx_19
int64_t rdx_20 = arg3[1]
arg3[1] = rax_15[1]
rax_15[1] = rdx_20
int32_t result = rax_15[2].d
arg3[2].d = result
int64_t* var_38

if (var_38 != 0)
    result = var_38[1].d
    var_38[1].d -= 1
    
    if (result == 1)
        result = (**var_38)(var_38)
        int32_t rdi_2 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_38 + 8))(var_38, zx.q(rdi_2))

int64_t rcx_14 = var_50

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
