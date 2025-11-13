// 函数: sub_14210fee0
// 地址: 0x14210fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x190)
void* result = (*(*rcx + 0x2e8))(rcx, arg4, 3)

if (result != 0 && sub_1405948b0(result) != 0)
    return result

uint64_t rbx_1 = zx.q(*(*(arg1 + 0x190) + 0x150))
sub_142111bd0()
int64_t* rcx_2 = *(&data_143f48af0 + (rbx_1 << 3))
int64_t* rax_5 = (*(*rcx_2 + 0x280))(rcx_2)
*arg3 = rax_5
int64_t r9_1 = *rax_5
return (*(r9_1 + 0x40))(rax_5, zx.q(arg2), arg3, r9_1)
