// 函数: sub_141b90a10
// 地址: 0x141b90a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_140596d10(rax, arg2)

void*** result = j_sub_140a82f30(0x18)

if (result != 0)
    result[1].d = 1
    *result = &data_142ee2130
    *(result + 0xc) = 1
    result[2] = rbx_1

int64_t rdi = sx.q(*(arg1 + 0xdb0))
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0xdb0) = rax_2

if (rax_2 s> *(arg1 + 0xdb4))
    sub_1405a4f90(arg1 + 0xda8)

int64_t* rcx_4 = (rdi << 4) + *(arg1 + 0xda8)
*rcx_4 = rbx_1
rcx_4[1] = result
void* rcx_5 = *(arg1 + 0xdb8)

if (rcx_5 == 0)
    return result

int64_t* rcx_6 = *(rcx_5 + 0x450)
return (*(*rcx_6 + 0x240))(rcx_6)
