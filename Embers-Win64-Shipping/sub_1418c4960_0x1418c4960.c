// 函数: sub_1418c4960
// 地址: 0x1418c4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg3)
void* rcx = *(arg1 + 0x458)
int64_t rax_2 = *(*(*(rcx + 0x20) + 0xc8) + 8)
int64_t result = sub_1418edf80(rcx, *(rax_2 + (rdx << 2)), zx.d(*(rax_2 + (rdx << 2) + 2)), arg4)

if (*(arg1 + 0x151) != 0 && arg4 != 0)
    void* rbx_1 = *(arg1 + 0x458)
    int64_t rdi_1 = sx.q(*(rbx_1 + 0x10))
    int32_t rax_3 = (rdi_1 + 1).d
    *(rbx_1 + 0x10) = rax_3
    
    if (rax_3 s> *(rbx_1 + 0x14))
        sub_1405a4d70(rbx_1 + 8)
    
    result = *(rbx_1 + 8)
    *(result + (rdi_1 << 3)) = arg4

return result
