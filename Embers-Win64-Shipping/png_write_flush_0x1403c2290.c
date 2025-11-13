// 函数: png_write_flush
// 地址: 0x1403c2290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *(arg1 + 0x1f4) u>= *(arg1 + 0x1e0))
    return 

int32_t rax_4
uint64_t r8_1

while (true)
    if (sub_14036f750(arg1 + 0x160, 2) != 0)
        char const* const rdx_3 = *(arg1 + 0x180)
        
        if (rdx_3 == 0)
            rdx_3 = "zlib error"
        
        png_error(arg1, rdx_3)
        noreturn
    
    rax_4 = *(arg1 + 0x178)
    r8_1 = zx.q(*(arg1 + 0x1c0))
    
    if (rax_4 != 0)
        break
    
    sub_1403cfc20(arg1, *(arg1 + 0x1b8), r8_1)
    *(arg1 + 0x170) = *(arg1 + 0x1b8)
    *(arg1 + 0x178) = *(arg1 + 0x1c0)

if (r8_1.d != rax_4)
    sub_1403cfc20(arg1, *(arg1 + 0x1b8), zx.q(r8_1.d - rax_4))
    *(arg1 + 0x170) = *(arg1 + 0x1b8)
    *(arg1 + 0x178) = *(arg1 + 0x1c0)

*(arg1 + 0x294) = 0
int64_t rax_7 = *(arg1 + 0x288)

if (rax_7 == 0)
    return 

jump(rax_7)
