// 函数: sub_14271a410
// 地址: 0x14271a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[8].d = 0x7f7fffff
*arg1 = &data_14347ef08
sub_142704050(arg1 + 0x44)
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[6].d &= 0xfffffffb
arg1[5].d = 0x7f7fffff

if (((arg1[1].d u>> 4).b & 1) == 0)
    int64_t* rdi_1 = arg1[2]
    void* rax_2 = rdi_1[0x23]
    
    if (rax_2 == 0)
        (*(*rdi_1 + 0x390))(rdi_1)
        rax_2 = rdi_1[0x23]
    
    char rcx_2 = *(rax_2 + 0x44)
    arg1[9] = *(rax_2 + 0x48)
    *(arg1 + 0x44) = rcx_2

return arg1
