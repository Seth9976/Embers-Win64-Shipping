// 函数: sub_14258ab00
// 地址: 0x14258ab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char var_18 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:1 = *(arg2 + 0x20) == 0
char arg_20 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_14 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_14, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_14)

int64_t rax_5 = *(arg2 + 0x20)
char r8_8 = arg_20
char rdx_8 = var_18
int64_t rdi
rdi.b = rax_5 != 0
bool cond:4 = var_14 != 0
*(arg2 + 0x20) = rdi + rax_5
rax_5.b = cond:4
char var_28 = rax_5.b
return sub_141f41620(arg1, rdx_8, r8_8)
