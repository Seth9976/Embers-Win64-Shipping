// 函数: sub_1426b1350
// 地址: 0x1426b1350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b2ca0(arg1)

if (rax == 0)
    return 0

char rax_1 = sub_1426b21d0(rax, arg2 + 0x10)
void* rdx_1 = *(rax + 0xc0)
void* const rsi

if (rdx_1 == 0 || rax_1 == 0xff)
    rsi = nullptr
else
    char rax_2 = *(rdx_1 + 0x4c)
    
    if (rax_1 u< rax_2)
        void* rcx_4 = *(rdx_1 + 0x30)
        
        if (rcx_4 == 0)
            rsi = nullptr
        else
            rsi = sub_1426b21a0(rcx_4, rax_1)
    else
        rsi = *(rdx_1 + 0x38) + (zx.q(rax_1) - zx.q(rax_2)) * 0x18

if (rsi != 0)
    void* rbx_1 = *(rsi + 8)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272e650())
        int64_t r8_2
        
        if (*(rax + 0xd0) == 0 || zx.d(rax_1) s>= *(rax + 0xe0))
            r8_2 = 0
        else
            r8_2 = zx.q(*(*(rax + 0xd8) + (zx.q(rax_1) << 1))) + *(rax + 0xc8)
        
        int64_t* rax_11 = r8_2 + ((zx.q(*(*(rsi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rax_11 != 0)
            int64_t arg_18 = *rax_11
            return sub_140d3c6e0(&arg_18)

return 0
