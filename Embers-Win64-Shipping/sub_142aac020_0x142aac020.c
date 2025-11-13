// 函数: sub_142aac020
// 地址: 0x142aac020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = arg1 + 8
    int64_t i_4 = 0x1c
    void* r14_3 = arg2 - rbx_1 + 8
    int64_t i
    
    do
        sub_142a49d00(rbx_1, r14_3 + rbx_1)
        rbx_1 += 0x40
        i = i_4
        i_4 -= 1
    while (i != 1)
    void* rbx_2 = arg1 + 0x978
    void* r14_5 = arg2 - arg1
    int64_t i_5 = 3
    int64_t i_1
    
    do
        sub_142a49d00(rbx_2, r14_5 + rbx_2)
        sub_142a49d00(rbx_2 + 0xc0, r14_5 + 0xc0 + rbx_2)
        rbx_2 += 0x40
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    sub_142a45c20(arg1 + 0x750, arg2 + 0x750)
    char* rcx_4 = arg2 + 0x8cd
    void* rdx_6 = arg1 - rcx_4
    char i_2
    
    do
        i_2 = *rcx_4
        *(rdx_6 + rcx_4 + 0x8cd) = i_2
        rcx_4 = &rcx_4[1]
    while (i_2 != 0)
    void* rcx_5 = arg2 + 0x830
    void* rdx_8 = arg1 - rcx_5
    char i_3
    
    do
        i_3 = *rcx_5
        *(rdx_8 + rcx_5 + 0x830) = i_3
        rcx_5 += 1
    while (i_3 != 0)
    *(arg1 + 0xaf8) = *(arg2 + 0xaf8)
    *(arg1 + 0xaf9) = *(arg2 + 0xaf9)
    *(arg1 + 0x748) = *(arg2 + 0x748)

return arg1
