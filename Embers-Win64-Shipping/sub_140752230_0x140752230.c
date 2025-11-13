// 函数: sub_140752230
// 地址: 0x140752230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xb6].d != 0xffffffff)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    int64_t* rax_2 = sub_140865dd0(rax_1)
    
    if (rax_2 != 0)
        sub_14086a150(rax_2, arg1)

*(arg1 + 0x57c) &= 0xffffffef
arg1[0xb6].d = 0xffffffff

if ((*(arg1 + 0x8a) & 1) == 0 || arg1[0xa5] == 0)
    sub_141edf050(arg1)
    return sub_141ef4e60(arg1, 0) __tailcall

sub_140b33630("Niagara")
void* rcx_2 = arg1[0xa5]

if ((*(rcx_2 + 0x6b8) & 1) == 0)
    sub_141edf050(arg1)
    rcx_2 = arg1[0xa5]

sub_14084d790(rcx_2, 0)
void* rax_3 = arg1[0xa5]
bool rdx_2

if (rax_3 == 0)
    rdx_2 = false
else
    rdx_2 = *(rax_3 + 0x6e8) - 3 u> 1

sub_141ef4e60(arg1, rdx_2)
return sub_140b37f60("Niagara") __tailcall
