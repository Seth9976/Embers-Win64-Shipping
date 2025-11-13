// 函数: sub_14258a950
// 地址: 0x14258a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:0 = var_48 != 0
int64_t rax_7 = *(arg2 + 0x20)
char r9 = arg_20
int64_t r8_12 = var_40
int64_t* rdx_12 = var_38
int64_t rdi
rdi.b = rax_7 != 0
char rax_8 = arg_10
char rax_9 = arg_18
*(arg2 + 0x20) = rdi + rax_7
char result = sub_141f415e0(arg1, rdx_12, r8_12, r9, rax_9, rax_8, cond:0)
*arg3 = result
return result
