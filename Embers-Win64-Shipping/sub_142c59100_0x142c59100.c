// 函数: sub_142c59100
// 地址: 0x142c59100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* const r11 = &data_1434cce10
char* const rbx = &data_14363dfe8
void* const r9 = &data_1434cce10

if (rax != 0)
    r9 = rax

char* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    rbx = rax_1

char* rax_2 = *(arg1 + 0x28)
*(arg1 + 0x40) != 0 && rax_2 != 0 && *rax_2 == 0x2e
void* const var_10 = r9
char const* const r10 = "FALSE"
char const* const rcx = "FALSE"

if (*(arg1 + 0x58) != 0)
    rcx = "TRUE"

if (*(arg1 + 0x40) != 0)
    r10 = "TRUE"

if (*(arg1 + 0x5a) != 0)
    r11 = "#HttpOnly_"

int64_t var_18 = *(arg1 + 8)
int64_t var_20 = *(arg1 + 0x30)
char const* const var_28 = rcx
char* const var_30 = rbx
char const* const var_38 = r10
int512_t entry_zmm2
return sub_142c563e0("%s%s%s\t%s\t%s\t%s\t%I64d\t%s\t%s", r11, entry_zmm2)
