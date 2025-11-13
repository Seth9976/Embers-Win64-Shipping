// 函数: sub_14064c720
// 地址: 0x14064c720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

void* var_28 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0
*(arg2 + 0x38) = 0
char* r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_9)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_6 = *(arg2 + 0x38)
char* rcx_5 = &arg_10
int512_t zmm3
zmm3.o = arg_18
void* r8_10 = arg_20
void* rdx_10 = var_28

if (rax_6 != 0)
    rcx_5 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
char* var_38 = rcx_5
int64_t* rcx_6 = var_20
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
void* result = sub_14062e9a0(rcx_6, rdx_10, r8_10, r9)
*arg3 = result
return result
