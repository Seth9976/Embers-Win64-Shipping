// 函数: sub_141d3e9b0
// 地址: 0x141d3e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

int64_t* rcx = *(arg1 + 0x60)
void* rax_2 = (*(*rcx + 0x20))(rcx)
void* rbx_1 = *(arg1 + 0x50)
sub_14177af60(rbx_1, 1, 0)
*(rbx_1 + 0x18) = *(rax_2 + 0x10)
*(rbx_1 + 0x20) = *(rax_2 + 0x18)
void* rbx_2 = *(arg1 + 0x50)
sub_14177af60(rbx_2, 2, 0)
*(rbx_2 + 0x30) = *(rax_2 + 0x20)
void* rbx_3 = *(arg1 + 0x50)
sub_14177af60(rbx_3, 4, 0)
*(rbx_3 + 0xd0) = *(rax_2 + 0xa8)
*(rbx_3 + 0xd8) = *(rax_2 + 0xb0)
void* rbx_4 = *(arg1 + 0x50)
sub_14177af60(rbx_4, 8, 0)
*(rbx_4 + 0xdc) = *(rax_2 + 0xb4)
*(rbx_4 + 0xe4) = *(rax_2 + 0xbc)
sub_141782210(*(arg1 + 0x50))
void* rcx_7 = *(arg1 + 0x50)

if (((*(rcx_7 + 0xcc) u>> 0x14).b & 1) != 0)
    return 

char rax_6 = *(rax_2 + 0x1f0)

if (*(rcx_7 + 0x220) != 4 && rax_6 == 4)
    *(rcx_7 + 0x225) |= 1

*(rcx_7 + 0x220) = rax_6
sub_14177af60(rcx_7, 0x100000, 1)
