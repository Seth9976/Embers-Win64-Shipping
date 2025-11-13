// 函数: sub_142789710
// 地址: 0x142789710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[0x57].b = *(*arg1 + 0xd0)
void* rcx = *arg1
void* r9 = sub_140d21e40(rcx, rcx, arg2)
void* rax_1 = *arg1

if (*(rax_1 + 0xfc) == 0)
    arg2[0x4e] = *(rax_1 + 0x100)
    arg2[0x4f].d = *(rax_1 + 0x108)
    void* rax_3 = *arg1
    *(arg2 + 0x27c) = *(rax_3 + 0x10c)
    *(arg2 + 0x284) = *(rax_3 + 0x114)
    rax_1 = *arg1

arg2[0x51] = *(rax_1 + 0x130)
arg2[0x52].b = *(*arg1 + 0xd2)
*(arg2 + 0x2ac) = *(*arg1 + 0xd4)
arg2[0x56].d = *(*arg1 + 0xd8)
*(arg2 + 0x2b4) = *(*arg1 + 0xdc)
*(arg2 + 0x291) = *(*arg1 + 0xe0)
*(arg2 + 0x294) = *(*arg1 + 0xe4)
arg2[0x53].d = *(*arg1 + 0xe8)
*(arg2 + 0x29c) = *(*arg1 + 0xec)
arg2[0x54].d = *(*arg1 + 0xf0)
*(arg2 + 0x2a4) = *(*arg1 + 0xf4)
arg2[0x55].d = *(*arg1 + 0xf8)
int64_t* r8_2 = arg1[2]
void* rax_17 = r8_2[0x86]
int512_t zmm3

if (rax_17 != 0)
    void* rcx_12 = *arg1
    void* r9_1 = *(rcx_12 + 0xc8)
    
    if (r9_1 == 0)
        r9_1 = *(rax_17 + 0x148)
    
    r9, zmm3 = sub_14278ab30(rcx_12, arg1[1], r8_2, r9_1, arg2)
    r8_2 = arg1[2]

zmm3.o = zx.o(0)
int64_t* var_18_2 = arg2
return sub_142797950(*arg1, arg1[1], r8_2, r9)
