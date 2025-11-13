// 函数: sub_1426ccb50
// 地址: 0x1426ccb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg2)

void* const rcx_2

if (rax == 0)
    rcx_2 = nullptr
else
    void* rbx_1 = *(rax + 0x138)
    
    if (rbx_1 == 0)
        rcx_2 = nullptr
    else
        void* rax_1 = sub_14272b250()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rcx_2 = nullptr
        else
            rcx_2 = *(rbx_1 + 0xa8)

if (rcx_2 != 0)
    sub_1426cc830(rcx_2, *arg3)

return 2
