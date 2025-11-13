// 函数: sub_1409f0520
// 地址: 0x1409f0520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* r15 = &var_28
int64_t var_38 = 0
int64_t var_30 = 0

if (rax_2 != 0)
    r15 = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r14 = &var_38
int64_t var_48 = 0
int64_t var_40 = 0

if (rax_4 != 0)
    r14 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_48
uint64_t var_58 = 0
int64_t var_50 = 0

if (rax_6 != 0)
    rsi = rax_6

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

uint64_t* rax_8 = *(arg2 + 0x38)
uint64_t* rcx_4 = &var_58

if (rax_8 != 0)
    rcx_4 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
double zmm11[0x2]
double zmm12[0x2]
double zmm13[0x2]
double zmm14[0x2]
double zmm15[0x2]
void* result = sub_1409dfcb0(arg1, r15, r14, rsi, zmm11, zmm12, zmm13, zmm14, zmm15, rcx_4)
uint64_t rcx_6 = var_58

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_48

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
