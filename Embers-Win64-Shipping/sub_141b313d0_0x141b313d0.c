// 函数: sub_141b313d0
// 地址: 0x141b313d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b211f0(arg2)

if (rax != 0)
    void* rax_2 = sub_140d21950(rax, sub_141ae8e30())
    
    if (rax_2 != 0)
        int64_t rdx_1 = *rax_2
        (*(rdx_1 + 0x48))(rax_2, rdx_1)
        int64_t rdx_2 = *rax_2
        (*(rdx_2 + 0x40))(rax_2, rdx_2)

sub_141af5b30(arg2)
*(arg2 + 0x5a4) = *(arg1 + 8)
int32_t rdi_2 = *(arg1 + 0xc)

if (sub_141f3ba00(arg2) != rdi_2)
    sub_141f477c0(arg2, rdi_2)

void* rcx_7 = *(arg1 + 0x10)

if (rcx_7 != 0)
    void* rcx_8 = *(rcx_7 + 0x10)
    
    if (rcx_8 != 0)
        arg2[0xca] = rcx_8
        void* rax_5 = *(arg1 + 0x10)
        
        if (rax_5 != 0)
            *(rax_5 + 0x10) = 0
            rcx_8 = arg2[0xca]
        
        if (rcx_8 != 0)
            void* rax_6 = arg2[0x86]
            
            if (rax_6 != 0)
                *(rcx_8 + 0x28) = *(rax_6 + 0x60)
                sub_141f3fb10(arg2, 1, 0)

sub_141f4b670(arg2, zx.o(0), 0)
(*(*arg2 + 0x8d8))(arg2, 0)
sub_141f6f060(arg2)
sub_1405c6ac0(arg2, 0, 0)
(*(*arg2 + 0x908))(arg2)
sub_141ee8690(arg2)
sub_141ee8470(arg2)
void* result

if (arg2[0x15] == 0)
    result = sub_141ee69e0(arg2)

if (arg2[0x15] != 0 || result != 0)
    void* rax_11 = arg2[0x15]
    
    if (rax_11 == 0)
        rax_11 = sub_141ee69e0(arg2)
    
    result = sub_14243ade0(rax_11)
    
    if (result.b == 0)
        return sub_141f58bd0(arg2)

return result
