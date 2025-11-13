// 函数: sub_142ba0d00
// 地址: 0x142ba0d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = arg1[sx.q(arg2) * 0x113 + 8]
void* rdi = &i[sx.q(arg1[sx.q(arg2) * 0x113 + 7].d) * 0x48]
int32_t result = sub_142ba43f0(arg1, arg2)

if (result != 0)
    return result

for (; i u< rdi; i = &i[0x48])
    int16_t* rax_2 = *(i + 0x38)
    int64_t r8_2 = *(i + 0x40)
    uint32_t rdx = zx.d(*rax_2)
    *i &= 0xfe
    int32_t rdx_1 = rdx & 3
    
    while (rax_2 != r8_2)
        rax_2 = *(rax_2 + 0x20)
        int32_t rcx_1 = zx.d(*rax_2) & 3
        
        if (rdx_1 == 0 && rcx_1 == 0)
            break
        
        if (rax_2 == r8_2)
            *i |= 1
        
        rdx_1 = rcx_1

return 0
