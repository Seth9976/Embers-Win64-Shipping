// 函数: sub_1426a2500
// 地址: 0x1426a2500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
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

int512_t result

if (rdi == 0)
    result.o = zx.o(0)
else
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 == 0)
        result.o = zx.o(0)
    else
        int64_t rbx_2 = *(rbx_1 + 0x10)
        int64_t rax_5
        rax_5, result = sub_14272e150()
        
        if (rbx_2 != rax_5)
            result.o = zx.o(0)
        else
            if (*(arg1 + 0xd0) != 0 && zx.d(arg2) s< *(arg1 + 0xe0))
                rsi = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg2) << 1))) + *(arg1 + 0xc8)
            
            int32_t* rcx_5 = rsi + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
            
            if (rcx_5 == 0)
                result.o = zx.o(0)
            else
                result.o = *rcx_5

return result
