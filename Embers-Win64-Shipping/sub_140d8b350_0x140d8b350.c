// 函数: sub_140d8b350
// 地址: 0x140d8b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140d9faf0(arg1, arg2)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax = (rdi_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t* rdx_3 = (rdi_1 << 4) + *arg1
*rdx_3 = *arg2
void* rax_1 = arg2[1]
rdx_3[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

return rdi_1.d
