// 函数: sub_142c423b0
// 地址: 0x142c423b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = arg4
int32_t r10 = *(arg2 + 0x10)
int32_t r9 = 0
int32_t r10_1 = r10 - 1
int64_t r11 = *(arg2 + 0x18)
void* rax_7

if (r10 - 1 s>= 0)
    uint64_t rcx
    
    while (true)
        uint64_t rax_2 = zx.q((r10_1 + r9) u>> 1)
        rcx = zx.q(rax_2.d)
        int32_t rdx = *(r11 + rax_2 * 0x24)
        int32_t rax_4
        
        if (arg3 u>= rdx)
            rax_4.b = arg3 u> rdx
        
        if (arg3 u< rdx || rax_4 s< 0)
            r10_1 = (rcx - 1).d
        else
            if (rax_4 s<= 0)
                break
            
            r9 = (rcx + 1).d
        
        if (r9 s> r10_1)
            goto label_142c42412
    
    rax_7 = r11 + rcx * 0x24

int32_t r8

if (r10 - 1 s< 0 || rax_7 == 0)
label_142c42412:
    r8 = -1
else
    r8 = *(rax_7 + 0xc)

return sub_142c40370(arg2, 0, r8, arg1, &arg1[1])
