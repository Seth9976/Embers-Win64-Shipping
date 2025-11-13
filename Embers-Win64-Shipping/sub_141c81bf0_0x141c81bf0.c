// 函数: sub_141c81bf0
// 地址: 0x141c81bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
arg1[4] = 0
arg1[5] = 0
*arg1 = &data_14320f420
*(arg1 + 0x30) = zmm0
arg1[1] = &data_14320f440
arg1[2] = &data_14320f470
arg1[3] = &data_14320f488
arg1[9] = 0
arg1[0xa] = 0
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x28)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)

arg1[8] = lpCriticalSection_1
arg1[0x13] = *arg3
void* rax_2 = arg3[1]
arg1[0x14] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0x15].b = 0
sub_140b214c0(arg1 + 0xac)
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = *arg4
void* rax_4 = arg4[1]
arg1[0x1b] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t* rcx_4 = arg1[0x13]
int32_t var_20 = 0
uint64_t* rax_6 = (*(*rcx_4 + 0x70))(rcx_4)
int64_t* rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    rax_7[1] = arg1
    *rax_7 = &data_142e22de8
    *(rax_7 + 0x10) = sub_141c893c0.o
    rax_7[5] = sub_140a387b0()
    *rax_7 = &data_142e22e40

if (rax_7 != 0)
    sub_140599630(rax_6, 1)
    void arg_8
    (*(*rax_7 + 0x30))(rax_7, &arg_8)
    int64_t rbp_1 = sx.q(rax_6[1].d)
    int32_t rax_10 = (rbp_1 + 1).d
    rax_6[1].d = rax_10
    
    if (rax_10 s> *(rax_6 + 0xc))
        sub_1405a4f90(rax_6)
    
    void** rax_13 = (rbp_1 << 4) + *rax_6
    *rax_13 = rax_7
    rax_13[1].d = 3

return arg1
