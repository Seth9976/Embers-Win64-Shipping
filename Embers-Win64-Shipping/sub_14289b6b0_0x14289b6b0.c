// 函数: sub_14289b6b0
// 地址: 0x14289b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 == 0 || *(arg1 + 0x20) == 0)
    return 0

int64_t* rbx = *(arg1 + 0x38)

if (rbx != 0)
    int64_t* r8_1 = rbx[1]
    int64_t rdx_1 = r8_1[1]
    int64_t rcx = *(*rbx + 8)
    
    if (rdx_1 != rcx)
        memmove(rcx, rdx_1, (*r8_1).d)
        **rbx = *rbx[1]
        *(rbx[1] + 8) = *(*rbx + 8)

return 0
