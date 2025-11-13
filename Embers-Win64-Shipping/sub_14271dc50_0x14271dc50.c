// 函数: sub_14271dc50
// 地址: 0x14271dc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1)

if (rax == 0)
    return rax

void* rdi = *(rax + 0xa0)
void* rax_2

if (rdi != 0)
    rax_2 = sub_140d21950(rdi, sub_14273ee10())

if (rdi == 0 || rax_2 == 0)
    rax_2 = sub_1426fb720(rax)
    
    if (rax_2 != 0)
        return sub_140d21950(rax_2, sub_14273ee10()) __tailcall

return rax_2
