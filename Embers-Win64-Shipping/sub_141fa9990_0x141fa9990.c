// 函数: sub_141fa9990
// 地址: 0x141fa9990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xb28))
int32_t rax = (rdi + 1).d
*(arg1 + 0xb28) = rax

if (rax s> *(arg1 + 0xb2c))
    sub_1405a4f90(arg1 + 0xb20)

int64_t* rdi_2 = (rdi << 4) + *(arg1 + 0xb20)
*rdi_2 = arg2
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = arg2

rdi_2[1] = rax_1
uint64_t result = sub_140918950(rdi_2, arg2)

if (*(arg1 + 0xb28) s<= 0 && *(arg1 + 0xb30) == 0)
    return sub_141fbfea0(arg1, arg3)

return result
