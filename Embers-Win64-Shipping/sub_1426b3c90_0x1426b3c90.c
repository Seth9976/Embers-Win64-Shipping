// 函数: sub_1426b3c90
// 地址: 0x1426b3c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1426b21d0(arg1, arg2)
void* rdx = *(arg1 + 0xc0)
int64_t rsi = 0
char rbp = result.b
int64_t rdi

if (rdx == 0 || result.b == 0xff)
    rdi = 0
else
    result = zx.q(*(rdx + 0x4c))
    
    if (rbp u< result.b)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rdi = 0
        else
            rdi = sub_1426b21a0(rcx_3, rbp)
    else
        rdi = *(rdx + 0x38) + (zx.q(rbp) - zx.q(result.b)) * 0x18

if (rdi == 0)
    result.b = 0
else
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 == 0)
        result.b = 0
    else if (*(rbx_1 + 0x10) != sub_14272de20())
        result.b = 0
    else
        if (*(arg1 + 0xd0) != 0 && zx.d(rbp) s< *(arg1 + 0xe0))
            rsi = zx.q(*(*(arg1 + 0xd8) + (zx.q(rbp) << 1))) + *(arg1 + 0xc8)
        
        char* rcx_5 = rsi + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rcx_5 == 0)
            result.b = 0
        else
            result.b = *rcx_5 != 0

return result
