// 函数: sub_14084daa0
// 地址: 0x14084daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140862460(arg1)

while (*(arg1 + 0xcb8) != 0)
    void* rdi_1 = *(*(arg1 + 0xcb0) + (sx.q(*(arg1 + 0xcb8)) << 3) - 8)
    int64_t* rcx = *(rdi_1 + 0x28)
    
    if (rcx == 0)
        if (*(rdi_1 + 0x6bc) != 0)
            sub_1408622c0(rdi_1)
            sub_14084fd50(rdi_1)
        
        if (*(rdi_1 + 0x6e8) - 3 u> 1)
            sub_14084b160(rdi_1)
    else
        sub_140752310(rcx)

while (*(arg1 + 0xce8) != 0)
    void* rdi_2 = *(*(arg1 + 0xce0) + (sx.q(*(arg1 + 0xce8)) << 3) - 8)
    int64_t* rcx_5 = *(rdi_2 + 0x28)
    
    if (rcx_5 == 0)
        if (*(rdi_2 + 0x6bc) != 0)
            sub_1408622c0(rdi_2)
            sub_14084fd50(rdi_2)
        
        if (*(rdi_2 + 0x6e8) - 3 u> 1)
            sub_14084b160(rdi_2)
    else
        sub_140752310(rcx_5)

*(arg1 + 0xcb8) = 0

if (*(arg1 + 0xcbc) != 0)
    sub_1405c5570(arg1 + 0xcb0, 0)

*(arg1 + 0xce8) = 0

if (*(arg1 + 0xcec) != 0)
    sub_1405c5570(arg1 + 0xce0, 0)

sub_140865dd0(*(arg1 + 0x38))
sub_1408400b0(arg1 + 0x478)
return sub_1408400b0(arg1 + 0x7e0) __tailcall
