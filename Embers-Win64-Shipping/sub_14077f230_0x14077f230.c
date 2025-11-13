// 函数: sub_14077f230
// 地址: 0x14077f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077f7e0(arg1)
arg1[0x1a].d = 3
*arg1 = &data_142db1200
*(arg1 + 0xd4) = 3
arg1[0x1b].d = 3
*(arg1 + 0xdc) = 1
arg1[0x1c].b = 0
*(arg1 + 0xe4) = 0x42c80000
arg1[0x1d].d = 0x42c80000
void*** rax = j_sub_140a82f30(0xc8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    memset(rax, 0, 0xc8)
    sub_140744780(rdi)
    *rdi = &data_142db0b28

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rdi)
    arg1[5] = rdi
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

void* rcx_3 = &arg1[0x20]
*arg1 = &data_142db1590
arg1[0x1e] = 0
arg1[0x1f] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
void*** rax_3 = j_sub_140a82f30(0x118)
void*** rdi_1 = rax_3

if (rax_3 == 0)
    rdi_1 = nullptr
else
    sub_140744780(rax_3)
    int64_t* rcx_5 = &rdi_1[0x1b]
    *rdi_1 = &data_142db1548
    rdi_1[0x19] = 0
    rdi_1[0x1a] = 0
    rcx_5[2] = 0
    rcx_5[3].d = 0
    *(rcx_5 + 0x1c) = 0x80
    int64_t* rax_4 = rcx_5[2]
    
    if (rax_4 != 0)
        rcx_5 = rax_4
    
    *rcx_5 = 0
    rcx_5[1] = 0
    rdi_1[0x1f].d = 0xffffffff
    *(rdi_1 + 0xfc) = 0
    rdi_1[0x21] = 0
    rdi_1[0x22].d = 0

int64_t* rcx_6 = arg1[5]

if (rcx_6 != rdi_1)
    arg1[5] = rdi_1
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 1)

return arg1
