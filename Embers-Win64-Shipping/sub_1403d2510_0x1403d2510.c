// 函数: sub_1403d2510
// 地址: 0x1403d2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x160) = arg2
*(arg1 + 0x168) = 0
int64_t rbx_1 = *(arg1 + 0x230) + 1
int32_t rax = 0

while (true)
    if (rax == 0)
        if (rbx_1 u>> 0x20 == 0)
            *(arg1 + 0x168) = rbx_1.d
            rbx_1 = 0
        else
            *(arg1 + 0x168) = 0xffffffff
            rbx_1 += -0xffffffff
    
    if (sub_14036f750(arg1 + 0x160, 0) != 0)
        char const* const rdx_2 = *(arg1 + 0x180)
        
        if (rdx_2 == 0)
            rdx_2 = "zlib error"
        
        png_error(arg1, rdx_2)
        noreturn
    
    if (*(arg1 + 0x178) == 0)
        sub_1403cfc20(arg1, *(arg1 + 0x1b8), zx.q(*(arg1 + 0x1c0)))
        *(arg1 + 0x170) = *(arg1 + 0x1b8)
        *(arg1 + 0x178) = *(arg1 + 0x1c0)
    
    rax = *(arg1 + 0x168)
    
    if (rbx_1 == 0)
        if (rax == 0)
            break

int64_t rax_6 = *(arg1 + 0x1f8)

if (rax_6 != 0)
    *(arg1 + 0x1f8) = *(arg1 + 0x200)
    *(arg1 + 0x200) = rax_6

sub_1403d2020(arg1)
int32_t rax_7 = *(arg1 + 0x290)
int32_t rcx_5 = *(arg1 + 0x294) + 1
*(arg1 + 0x294) = rcx_5

if (rax_7 - 1 u>= rcx_5)
    return rax_7 - 1

return png_write_flush(arg1) __tailcall
