// 函数: sub_1426421c0
// 地址: 0x1426421c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = j_sub_140a82f30(0xd0)
void** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(rax, 0, 0x30)
    rax[0xa] = 0
    rax[0xb].d = 0
    rax[0xc] = 0
    rax[0xd].d = 0
    rax[0xe].d &= 0xfffffffe
    rax[0xf] = 0
    rax[0x10].d = 0
    __builtin_memset(&rax[0x11], 0, 0x30)
    rax[0x17].d &= 0xffffffe0
    sub_140d3a3a0(&rax[0x18], arg2)
    rbx[0x19].d &= 0xfffffffc

*(arg1 + 0x20) = rbx
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_143457b38
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*(arg1 + 0x28) = rax_1
sub_1408ff2f0(arg1 + 0x20, rbx)
*(arg1 + 0x30) = *(arg2 + 0xc)
return arg1
