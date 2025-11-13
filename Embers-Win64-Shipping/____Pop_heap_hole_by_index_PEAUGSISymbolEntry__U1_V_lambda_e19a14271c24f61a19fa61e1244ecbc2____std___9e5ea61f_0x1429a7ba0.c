// 函数: ??$_Pop_heap_hole_by_index@PEAUGSISymbolEntry@@U1@V<lambda_e19a14271c24f61a19fa61e1244ecbc2>@@@std@@YAXPEAUGSISymbolEntry@@_J1$$QEAU1@V<lambda_e19a14271c24f61a19fa61e1244ecbc2>@@@Z
// 地址: 0x1429a7ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx_1 = (arg3 - 1) s>> 1
int64_t rdi = arg2
int64_t r11 = arg2

if (arg2 s< rbx_1)
    do
        int64_t r8 = r11 * 2
        int64_t rcx = r8 * 0x38
        int64_t* rdx_1 = arg2 * 0x38 + arg1
        r11 = sbb.q(r11, r11, *(rcx + arg1 + 0x70) u< *(rcx + arg1 + 0x38)) + 2 + r8
        int64_t* rcx_2 = r11 * 0x38 + arg1
        *rdx_1 = *rcx_2
        rdx_1[1].b = rcx_2[1].b
        *(rdx_1 + 0xa) = *(rcx_2 + 0xa)
        rdx_1[2] = rcx_2[2]
        rdx_1[3].d = rcx_2[3].d
        rdx_1[4] = rcx_2[4]
        rdx_1[5] = rcx_2[5]
        rdx_1[6].d = rcx_2[6].d
        *(rdx_1 + 0x34) = *(rcx_2 + 0x34)
        arg2 = r11
    while (r11 s< rbx_1)

if (r11 == rbx_1 && (arg3.b & 1) == 0)
    void* rcx_4 = arg3 * 0x38 + arg1
    int64_t* rdx_3 = arg2 * 0x38 + arg1
    *rdx_3 = *(rcx_4 - 0x38)
    rdx_3[1].b = *(rcx_4 - 0x30)
    *(rdx_3 + 0xa) = *(rcx_4 - 0x2e)
    rdx_3[2] = *(rcx_4 - 0x28)
    rdx_3[3].d = *(rcx_4 - 0x20)
    rdx_3[4] = *(rcx_4 - 0x18)
    rdx_3[5] = *(rcx_4 - 0x10)
    rdx_3[6].d = *(rcx_4 - 8)
    *(rdx_3 + 0x34) = *(rcx_4 - 4)
    arg2 = arg3 - 1

if (rdi s< arg2)
    int64_t r8_2
    
    do
        r8_2 = (arg2 - 1) s>> 1
        int64_t* rax_20 = r8_2 * 0x38
        int64_t rcx_5 = *(rax_20 + arg1)
        
        if (rcx_5 u>= *arg4)
            break
        
        int64_t* rdx_5 = arg2 * 0x38 + arg1
        *rdx_5 = rcx_5
        rdx_5[1].b = *(rax_20 + arg1 + 8)
        *(rdx_5 + 0xa) = *(rax_20 + arg1 + 0xa)
        rdx_5[2] = *(rax_20 + arg1 + 0x10)
        rdx_5[3].d = *(rax_20 + arg1 + 0x18)
        rdx_5[4] = *(rax_20 + arg1 + 0x20)
        rdx_5[5] = *(rax_20 + arg1 + 0x28)
        rdx_5[6].d = *(rax_20 + arg1 + 0x30)
        *(rdx_5 + 0x34) = *(rax_20 + arg1 + 0x34)
        arg2 = r8_2
    while (rdi s< r8_2)

int64_t* rcx_15 = arg2 * 0x38 + arg1
*rcx_15 = *arg4
rcx_15[1].b = arg4[1].b
*(rcx_15 + 0xa) = *(arg4 + 0xa)
rcx_15[2] = arg4[2]
rcx_15[3].d = arg4[3].d
rcx_15[4] = arg4[4]
rcx_15[5] = arg4[5]
rcx_15[6].d = arg4[6].d
int32_t result = *(arg4 + 0x34)
*(rcx_15 + 0x34) = result
return result
