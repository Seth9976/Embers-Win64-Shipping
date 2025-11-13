// 函数: sub_140a42510
// 地址: 0x140a42510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t rax_4

if (r11_1 u< 4)
    rax_4 = 1
else
    uint32_t rax_1 = r11_1 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_1 + 8)
    int32_t rcx
    
    if (rax_1 == 0xfffffff8)
        rcx = 0x20
    else
        rcx = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_1 + 7)
    
    if (rax_1 == 0xfffffff9)
        rax_4 = 1
    else
        rax_4 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

int32_t rcx_5

if (r11_1 s> 0)
    rcx_5 = *(arg1 + 0x48)

if (r11_1 s> 0 && (rcx_5 == 0 || rcx_5 s< rax_4))
    *(arg1 + 0x48) = rax_4
    sub_140942f40(arg1)
else
    void* r9_2 = arg1 + 0x38
    int32_t rax_7 = (*(arg1 + 0x48) - 1) & arg3
    *(arg4 + 0x2c) = rax_7
    void* rdx_1 = *(r9_2 + 8)
    int64_t r8_2 = sx.q(rax_7)
    void* rax_8 = r9_2
    
    if (rdx_1 != 0)
        rax_8 = rdx_1
    
    *(arg4 + 0x28) = *(rax_8 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_2) << 2))
    void* rax_10 = *(r9_2 + 8)
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    *(r9_2 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_2) << 2)) = arg5

*arg2 = arg5

if (arg6 != 0)
    *arg6 = 0

return arg2
