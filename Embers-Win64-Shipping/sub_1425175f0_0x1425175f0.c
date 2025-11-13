// 函数: sub_1425175f0
// 地址: 0x1425175f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_38 = 0
int64_t var_30 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* r14 = &var_38
void* arg_20 = nullptr

if (rax_6 != 0)
    r14 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

uint64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_48, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

uint64_t* rax_9 = *(arg2 + 0x38)
uint64_t* rsi = &var_48
uint64_t var_58 = 0
int64_t var_50 = 0

if (rax_9 != 0)
    rsi = rax_9

*(arg2 + 0x38) = 0
int64_t* r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    r9 = sub_140d30490(arg2, &var_58, r8_15)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

uint64_t* rax_11 = *(arg2 + 0x38)
uint64_t* rcx_8 = &var_58
int512_t zmm3
zmm3.o = arg_10
int128_t zmm2 = arg_18

if (rax_11 != 0)
    rcx_8 = rax_11

int64_t var_68 = var_80
int64_t rax_12 = *(arg2 + 0x20)
int64_t* rcx_9 = var_88
int64_t rdi
rdi.b = rax_12 != 0
int32_t var_78
int32_t var_60 = var_78
void* rax_14 = arg_20
*(arg2 + 0x20) = rdi + rax_12
char result = sub_1420b50c0(rcx_9, &var_68, zmm2, r9, r14, rax_14, rsi, rcx_8)
uint64_t rcx_10 = var_58
*arg3 = result

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

uint64_t rcx_11 = var_48

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_38

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
