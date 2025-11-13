// 函数: sub_1425019a0
// 地址: 0x1425019a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint64_t var_48 = 0
int64_t rcx_3
rcx_3.b = rax_4 != 0
int64_t* rax_5 = &var_28
bool cond:1 = arg_10 == 0
*(arg2 + 0x20) = rcx_3 + rax_4

if (cond:1)
    rax_5 = &var_38

int32_t r14 = rax_5[1].d
int64_t rbx_1 = *rax_5
uint64_t rbx_2

if (r14 != 0)
    sub_1405a4c70(&var_48, r14, 0)
    rbx_2 = var_48
    memcpy(rbx_2, rbx_1, r14 * 2)
    int32_t var_3c
    rdi = var_3c
else
    rbx_2 = 0

uint64_t* result = &var_48

if (arg3 != &var_48)
    int64_t rcx_7 = *arg3
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    *arg3 = rbx_2
    arg3[1].d = r14
    *(arg3 + 0xc) = rdi
else if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
