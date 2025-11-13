// 函数: sub_14202a620
// 地址: 0x14202a620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_14202a680(arg1, arg2)

if (rax == 0)
    return rax

void* rbx = *(rax + 0x250)

if (rbx != 0)
    void* rax_1 = sub_1424890f0()
    void* rcx = *(rbx + 0x10)
    int64_t rdx = sx.q(*(rax_1 + 0x38))
    
    if (rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == rax_1 + 0x30)
        return rbx

return 0
