// 函数: sub_142afba90
// 地址: 0x142afba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
char* r8 = *(arg1 + 0x10)
int64_t r10 = *(arg1 + 0x18)
void* rax_1 = *(rax + 0x30)
int64_t r11

if ((*(rax + 0x38) & 0x10) == 0)
    r11 = *(rax_1 + 0x38)
else
    r11 = *(rax_1 + 0x40)

while (r8 u< r10)
    uint64_t rax_2 = zx.q(*r8)
    char* rdx = r8
    r8 = &r8[1]
    int32_t rcx = *(r11 + (rax_2 << 2))
    *(arg1 + 0x10) = r8
    uint8_t rax_4
    
    if (rcx s>= 0x80100000)
        rax_4 = (rcx u>> 0x14).b & 0xf
        
        if (rax_4 == 1 || rax_4 == 3)
            return zx.q((rcx & 0xfffff) + 0x10000)
    
    if (rcx s< 0x80100000 || rax_4 == 2)
        return zx.q(rcx.w)
    
    if (rax_4 == 6)
        if (*arg2 s> 0)
            break
        
        *(arg1 + 0x10) = rdx
        return 0xfffffff7
    
    if (rax_4 == 7)
        *arg2 = 0xc
        *arg2 = 8
        return 0xffff

*arg2 = 8
return 0xffff
