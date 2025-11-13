// 函数: sub_142bd00f0
// 地址: 0x142bd00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
int32_t rbx = 0
uint64_t r9 = arg4 * 2
int32_t r11 = 0
int32_t r10 = 1

if (rdi u>= arg2)
    return 0

uint64_t rax_1 = zx.q(arg2.d - rdi.d)

if (r9 u> rax_1)
    r9 = rax_1

if (r9 != 0)
    uint64_t rax_2 = 0
    
    do
        uint64_t rcx = zx.q(*(rax_2 + rdi))
        
        if (rcx.d u> 0x20 || not(test_bit(0x100003601, rcx)))
            if (rcx.d u>= 0x80)
                break
            
            int32_t rcx_1 = sx.d(*((zx.q(rcx.d) & 0x7f) + &data_143688590))
            
            if (rcx_1 u>= 0x10)
                break
            
            r10 = r10 << 4 | rcx_1
            
            if (test_bit(r10, 8))
                char* rax_5 = zx.q(r11)
                r11 += 1
                rax_5[arg3] = r10.b
                r10 = 1
        
        rbx += 1
        rax_2 = zx.q(rbx)
    while (rax_2 u< r9)
    
    if (r10 != 1)
        char* rcx_2 = zx.q(r11)
        r10.b <<= 4
        r11 += 1
        rcx_2[arg3] = r10.b

*arg1 = zx.q(rbx) + rdi
return zx.q(r11)
