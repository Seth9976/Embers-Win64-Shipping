// 函数: sub_140bd1060
// 地址: 0x140bd1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c0) = 0

if (sub_140a54810() == 0)
    return sub_140bc50a0(arg1) __tailcall

void*** rax_1 = j_sub_140a82f30(0x28)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    *rbx = &data_142e868e8
    rbx[1] = arg1
    rbx[2].d = 0
    rbx[3] = 0
    rbx[4] = 0

*(arg1 + 0x1b8) = rbx
int64_t rax_2 = data_143db7ad8
rbx[2].d += 1
void*** rcx = rbx[3]
rbx[4] = rax_2

if (rax_2 == 0)
    sub_140a4fc50(rcx)
    void* rcx_2 = rbx[1]
    rbx[3] = 0
    int64_t result = sub_140bc50a0(rcx_2)
    rbx[2].d -= 1
    return result

if (rcx == 0)
    rcx.b = 1
    void*** rax_3 = sub_140a491d0(rcx.b)
    rbx[3] = rax_3
    rcx = rax_3

(*rcx)[3](rcx)
jump(*(*rbx[4] + 0x10))
