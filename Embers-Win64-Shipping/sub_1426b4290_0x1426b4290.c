// 函数: sub_1426b4290
// 地址: 0x1426b4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1426b21d0(arg1, arg2)
void* rdx = *(arg1 + 0xc0)
void* const rsi

if (rdx == 0 || rax == 0xff)
    rsi = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (rax u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rsi = nullptr
        else
            rsi = sub_1426b21a0(rcx_3, rax)
    else
        rsi = *(rdx + 0x38) + (zx.q(rax) - zx.q(rax_1)) * 0x18

if (rsi != 0)
    void* rbx_1 = *(rsi + 8)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272e650())
        int64_t r8_2
        
        if (*(arg1 + 0xd0) == 0 || zx.d(rax) s>= *(arg1 + 0xe0))
            r8_2 = 0
        else
            r8_2 = zx.q(*(*(arg1 + 0xd8) + (zx.q(rax) << 1))) + *(arg1 + 0xc8)
        
        int64_t* rax_10 = r8_2 + ((zx.q(*(*(rsi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rax_10 != 0)
            int64_t arg_8 = *rax_10
            return sub_140d3c6e0(&arg_8)

return 0
