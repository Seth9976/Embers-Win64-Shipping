// 函数: sub_142be7c80
// 地址: 0x142be7c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 8)
int32_t rdx = 0

if (rbx == 0)
    return 

do
    uint32_t* rax = zx.q(rdx) + arg3
    uint32_t r8 = zx.d(*(rax + 3))
    
    if (r8 != 0)
        uint32_t r9_1 = zx.d(*rax)
        uint32_t r10_1 = zx.d(*(rax + 1))
        uint32_t r11_1 = zx.d(*(rax + 2))
        
        if (r8 != 0xff)
            r9_1 = (((r9_1 * r8 + 0x80) u>> 8) + r9_1 * r8 + 0x80) u>> 8
            r10_1 = (((r10_1 * r8 + 0x80) u>> 8) + r10_1 * r8 + 0x80) u>> 8
            r11_1 = (((r11_1 * r8 + 0x80) u>> 8) + r11_1 * r8 + 0x80) u>> 8
        
        *rax = r11_1.b
        *(rax + 1) = r10_1.b
        *(rax + 2) = r9_1.b
        *(rax + 3) = r8.b
    else
        *rax = r8
    
    rdx += 4
while (rdx u< rbx)
