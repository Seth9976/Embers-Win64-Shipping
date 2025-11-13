// 函数: sub_142529a70
// 地址: 0x142529a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_48 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:1 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:1)
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

bool cond:2 = arg_18 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = arg_20 != 0
int32_t var_4c = 0
int64_t r14
r14.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_4c, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_4c)

int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_50, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_54 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_54, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int32_t var_58 = 0
int64_t rdx_15

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    rdx_15 = sub_140d30490(arg2, &var_58, r8_15)
else
    rdx_15 = sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_9 = *(arg2 + 0x20)
char r8_16 = arg_10
int512_t zmm1
zmm1.o = var_48
int64_t rdi
rdi.b = rax_9 != 0
int32_t rax_10 = var_58
int32_t rax_11 = var_54
int32_t rax_12 = var_50
int32_t rax_13 = var_4c
*(arg2 + 0x20) = rdi + rax_9
void var_40
int64_t* rax_14 =
    sub_1420b1c40(&var_40, rdx_15, r8_16, r15.b, r14.b, rax_13, rax_12, rax_11, rax_10)
int64_t rdx_17 = *arg3
*arg3 = *rax_14
*rax_14 = rdx_17
int64_t rdx_18 = arg3[1]
arg3[1] = rax_14[1]
rax_14[1] = rdx_18
int32_t result = rax_14[2].d
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
            return (*(*var_38 + 8))(var_38, zx.q(rdi_2))

return result
