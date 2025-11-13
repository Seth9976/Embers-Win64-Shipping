// 函数: sub_142064a90
// 地址: 0x142064a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) |= arg3
int64_t rbx = sx.q(*(arg1 + 0x128))
int32_t rax = (rbx + 1).d
*(arg1 + 0x128) = rax

if (rax s> *(arg1 + 0x12c))
    sub_1405c4e40(arg1 + 0x120)

int64_t* rbx_2 = (rbx << 5) + *(arg1 + 0x120)
*rbx_2 = 0
rbx_2[1].d = 0
rbx_2[2] = 0
rbx_2[3].d = 0

if (arg2 != rbx_2 && arg2[1].d != 0)
    int64_t* rcx_1 = *arg2
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, rbx_2)

rbx_2[2].d = arg3
int64_t result = *arg4
*(rbx_2 + 0x14) = result
return result
