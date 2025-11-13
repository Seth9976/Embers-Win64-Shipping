// 函数: sub_14252aa30
// 地址: 0x14252aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_44 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_44, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_18 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = arg_18 != 0
int32_t var_48 = 0
int64_t rbp
rbp.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_6 = *(arg2 + 0x20)
int32_t rdx_10 = var_44
int64_t rdi
rdi.b = rax_6 != 0
int32_t var_50 = arg_20
int32_t rax_8 = var_48
*(arg2 + 0x20) = rdi + rax_6
void var_40
int64_t* rax_9 = sub_1420b77a0(&var_40, rdx_10, r14.b, zx.d(rbp.b), rax_8)
int64_t rdx_11 = *arg3
*arg3 = *rax_9
*rax_9 = rdx_11
int64_t rdx_12 = arg3[1]
arg3[1] = rax_9[1]
rax_9[1] = rdx_12
int32_t result = rax_9[2].d
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
