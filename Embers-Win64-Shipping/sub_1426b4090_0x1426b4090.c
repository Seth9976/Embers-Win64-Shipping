// 函数: sub_1426b4090
// 地址: 0x1426b4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1426b21d0(arg1, arg2)
void* rdx = *(arg1 + 0xc0)
void* const rdi

if (rdx == 0 || rax == 0xff)
    rdi = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (rax u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rdi = nullptr
        else
            rdi = sub_1426b21a0(rcx_3, rax)
    else
        rdi = *(rdx + 0x38) + (zx.q(rax) - zx.q(rax_1)) * 0x18

if (rdi != 0)
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272e220())
        int64_t r8_2
        
        if (*(arg1 + 0xd0) == 0 || zx.d(rax) s>= *(arg1 + 0xe0))
            r8_2 = 0
        else
            r8_2 = zx.q(*(*(arg1 + 0xd8) + (zx.q(rax) << 1))) + *(arg1 + 0xc8)
        
        int32_t* rcx_5 = r8_2 + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rcx_5 != 0)
            return zx.q(*rcx_5)

return 0
