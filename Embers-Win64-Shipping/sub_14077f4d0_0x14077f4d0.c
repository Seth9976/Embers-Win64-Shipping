// 函数: sub_14077f4d0
// 地址: 0x14077f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077f7e0(arg1)
*arg1 = &data_142db0eb8
__builtin_memcpy(&arg1[0x1a], 
    "\x03\x00\x00\x00\x03\x00\x00\x00\x03\x00\x00\x00\x00\x00\x80\x3f\x00", 0x11)
*(arg1 + 0xe4) = 0x42c80000
arg1[0x1d].d = 0x42c80000
*(arg1 + 0xec) = 0x42c80000
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

arg1[0x1e].d = 8
*arg1 = &data_142db2568
void*** rax_2 = j_sub_140a82f30(0x118)
void*** rdi_1 = rax_2

if (rax_2 == 0)
    rdi_1 = nullptr
else
    memset(rax_2, 0, 0x118)
    sub_140744780(rdi_1)
    int64_t* rcx_5 = &rdi_1[0x1b]
    *rdi_1 = &data_142db2520
    rdi_1[0x19] = 0
    rdi_1[0x1a] = 0
    rcx_5[2] = 0
    rcx_5[3].d = 0
    *(rcx_5 + 0x1c) = 0x80
    int64_t* rax_3 = rcx_5[2]
    
    if (rax_3 != 0)
        rcx_5 = rax_3
    
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
