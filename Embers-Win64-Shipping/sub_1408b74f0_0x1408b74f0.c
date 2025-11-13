// 函数: sub_1408b74f0
// 地址: 0x1408b74f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_34 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_34, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

int32_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_30, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_6 = *(arg2 + 0x38)
void* rsi = &var_30
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

void var_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int128_t* rax_8 = *(arg2 + 0x38)
int128_t* rcx_6 = &var_20
char r9 = arg_10
int32_t zmm2 = arg_20
int32_t zmm1 = var_38

if (rax_8 != 0)
    rcx_6 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int32_t rcx_7 = var_34
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
return sub_1408ae230(rcx_7, zmm1, zmm2, r9, rsi, rcx_6)
