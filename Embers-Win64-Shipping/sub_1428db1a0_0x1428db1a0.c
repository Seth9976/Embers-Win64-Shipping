// 函数: sub_1428db1a0
// 地址: 0x1428db1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0x20
__chkstk(0x20)
int64_t* rcx = *arg1

if (rcx != 0)
    if ((*(arg2 + 0x20) & 1) != 0)
        int64_t rax_1 = sub_14288fbf0(rcx)
        *arg1 = 0
        return rax_1
    
    rax = sub_1428901a0(rcx)
    *arg1 = 0

return rax
