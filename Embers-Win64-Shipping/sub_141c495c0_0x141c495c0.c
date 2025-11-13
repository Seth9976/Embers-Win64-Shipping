// 函数: sub_141c495c0
// 地址: 0x141c495c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xac0)

if (result == 0)
    return result

void*** rax = j_sub_140a82f30(0x218)
void*** rbx = rax

if (rax == 0)
    rbx = rax
else
    sub_141c47bb0(rax)
    rbx[0x3d].d = 0x473b8000
    *rbx = &data_143206580
    rbx[1] = &data_1432066c0
    rbx[2] = &data_143206160
    rbx[0x41].d &= 0xfffffffc
    __builtin_memset(&rbx[0x3e], 0, 0x18)
    *(rbx + 0x1ec) = 2
    rbx[0x42] = 0

return sub_141c4d970(result, rbx) __tailcall
