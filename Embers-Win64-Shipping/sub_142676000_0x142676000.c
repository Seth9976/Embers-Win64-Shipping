// 函数: sub_142676000
// 地址: 0x142676000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax
int64_t r9
rax, r9 = sub_14262e8a0()
arg3[2] = rax

if (rax == 0)
    sub_14262d160(arg2, (rax + 3).d, "BuildCompactHeightField: Out of memory 'CompactHF'.", r9)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

if (sub_14262e950(arg2, *(arg1 + 0xfc), *(arg1 + 0x100), *arg3, rax) != 0)
    return 1

int32_t rax_3
int64_t r9_2
rax_3, r9_2 = sub_1426326d0(arg2, *arg3)

if (rax_3 s<= 0)
    sub_14262d160(arg2, 2, "BuildCompactHeightField: no walkable spans - aborting", r9_2)
    int64_t rax_5
    rax_5.b = 0
    return rax_5

sub_14262d160(arg2, 3, "BuildCompactHeightField: Could not build compact data.", r9_2)
int64_t rax_4
rax_4.b = 0
return rax_4
