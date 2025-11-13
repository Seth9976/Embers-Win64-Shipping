// 函数: sub_142702170
// 地址: 0x142702170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3

if (arg3 != 0)
    void* rax_1 = sub_14255d000()
    void* rdx = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        rbx = *(rbx + 0x258)

if (rbx != 0)
    void* rax_4 = sub_1427249f0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
        *arg2 = *(rbx + 0x308)
        return arg2

*arg2 = 0
return arg2
