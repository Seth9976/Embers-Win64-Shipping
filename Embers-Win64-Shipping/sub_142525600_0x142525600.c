// 函数: sub_142525600
// 地址: 0x142525600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_38 = 0
int64_t var_30 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r14 = &var_38
void* arg_18 = nullptr

if (rax_5 != 0)
    r14 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_8 = *(arg2 + 0x38)
int64_t* rsi = &var_48
uint64_t var_58 = 0
int64_t var_50 = 0

if (rax_8 != 0)
    rsi = rax_8

*(arg2 + 0x38) = 0
int64_t r8_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_14 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_14[4]
    r8_13 = sub_140d30490(arg2, &var_58, r8_14)
else
    r8_13 = sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

uint64_t* rax_10 = *(arg2 + 0x38)
uint64_t* rcx_7 = &var_58
int512_t zmm2
zmm2.o = arg_10
int64_t var_68 = var_78

if (rax_10 != 0)
    rcx_7 = rax_10

int64_t rax_11 = *(arg2 + 0x20)
int64_t* rcx_8 = arg_20
int64_t rdi
rdi.b = rax_11 != 0
int32_t var_70
int32_t var_60 = var_70
void* rax_13 = arg_18
*(arg2 + 0x20) = rdi + rax_11
char result = sub_1420d4a10(rcx_8, &var_68, r8_13, r14, rax_13, rsi, rcx_7)
uint64_t rcx_9 = var_58
*arg3 = result

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
