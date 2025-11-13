// 函数: sub_1426a2600
// 地址: 0x1426a2600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xc0)
void* const rdi

if (rdx == 0 || arg2 == 0xff)
    rdi = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (arg2 u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rdi = nullptr
        else
            rdi = sub_1426b21a0(rcx_3, arg2)
    else
        rdi = *(rdx + 0x38) + (zx.q(arg2) - zx.q(rax_1)) * 0x18

if (rdi != 0)
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272e650())
        int64_t r8_2
        
        if (*(arg1 + 0xd0) == 0 || zx.d(arg2) s>= *(arg1 + 0xe0))
            r8_2 = 0
        else
            r8_2 = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg2) << 1))) + *(arg1 + 0xc8)
        
        int64_t* rax_10 = r8_2 + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rax_10 == 0)
            return 0
        
        int64_t arg_8 = *rax_10
        return sub_140d3c6e0(&arg_8)

return 0
