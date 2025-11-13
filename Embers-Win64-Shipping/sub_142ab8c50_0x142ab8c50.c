// 函数: sub_142ab8c50
// 地址: 0x142ab8c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
int64_t result

if (rdx != 0)
    int32_t rax_3 = sub_142ab9270(arg2 + 8, rdx, arg3, arg4)
    int64_t* rdi_1 = *(arg1 + 8)
    result = (*(*rdi_1 + 8))(rdi_1, zx.q(sub_142ab4df0(arg3)), zx.q(rax_3))
    *(arg2 + 0x78) = result
else
    int64_t rbx = *(arg1 + 8)
    result = sx.q(sx.d(sub_142ab4df0(arg3)) + 0x10)
    *(arg2 + 0x78) = *(rbx + (result << 3) + 8)

return result
