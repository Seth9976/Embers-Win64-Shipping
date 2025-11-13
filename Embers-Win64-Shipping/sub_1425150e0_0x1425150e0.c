// 函数: sub_1425150e0
// 地址: 0x1425150e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_38 = 0x42c80000
int64_t var_48 = 0
int64_t var_40 = 0
int64_t var_34 = 0
char var_2c = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* r8_4 = &var_48
int32_t zmm1 = arg_10

if (rax_3 != 0)
    r8_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
*(arg2 + 0x20) = rcx_2 + rax_4
int64_t var_28
int64_t* rax_5 = sub_1420b1160(&var_28, zmm1, r8_4)

if (arg3 != rax_5)
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg3 = *rax_5
    *rax_5 = 0
    arg3[1].d = rax_5[1].d
    *(arg3 + 0xc) = *(rax_5 + 0xc)
    rax_5[1] = 0

int64_t rcx_7 = var_28
arg3[2].d = rax_5[2].d
*(arg3 + 0x14) = *(rax_5 + 0x14)
arg3[3].d = rax_5[3].d
char result = *(rax_5 + 0x1c)
*(arg3 + 0x1c) = result

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_48

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
