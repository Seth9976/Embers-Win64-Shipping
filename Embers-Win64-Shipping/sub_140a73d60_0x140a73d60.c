// 函数: sub_140a73d60
// 地址: 0x140a73d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1
int32_t rdx = *(arg1 + 0x18)
int32_t r8_1 = (rdx - 1) & 0x8000001f

if (r8_1 s< 0)
    r8_1 = ((r8_1 - 1) | 0xffffffe0) + 1

uint64_t rax_1 = zx.q((rdx + 0x1f) u>> 5)
uint32_t r8_4 = 0xffffffff u>> (0x1f - r8_1.b)
void* rcx_1 = *(r10 + 0x10)

if (rcx_1 != 0)
    r10 = rcx_1

while (rax_1.d != 0)
    rax_1 = zx.q(rax_1.d - 1)
    uint32_t rdx_1 = r8_4
    
    if (arg2 != 0)
        rdx_1 = 0
    
    int32_t r9_1 = *(r10 + (rax_1 << 2))
    
    if ((r9_1 & r8_4) != rdx_1)
        if (arg2 == 0)
            r9_1 = not.d(r9_1)
        
        int32_t r9_2 = r9_1 & r8_4
        uint64_t rflags
        int32_t temp0
        temp0, rflags = _bit_scan_reverse(r9_2)
        
        if (r9_2 == 0)
            return zx.q((rax_1.d << 5) - 1)
        
        return zx.q((rax_1.d << 5) - (0x1f - temp0) + 0x1f)
    
    r8_4 = -1

return 0xffffffff
