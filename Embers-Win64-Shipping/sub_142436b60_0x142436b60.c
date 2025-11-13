// 函数: sub_142436b60
// 地址: 0x142436b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 8)
int32_t r11 = 0
uint32_t rdi = zx.d(arg2)
uint32_t rsi = arg3
int32_t i = rbx[1]

if (rdi u>= i)
    return 0

int32_t r14 = *rbx
int64_t r15 = *(rbx + 0x48)

do
    uint64_t rax_1 = zx.q(rdi.b)
    int32_t rdx_2 = r14 * rsi + *(r15 + (rax_1 << 2))
    
    if (rdx_2 u>= *(r15 + (rax_1 << 2) + 4) || rdx_2 == 0xffffffff)
        return zx.q(r11 + i - zx.d(rdi.b))
    
    if (rdx_2 u< rbx[0x18])
        int64_t rax_2 = sx.q(rbx[0x10])
        int32_t r9_1 = 0
        int64_t rcx = 0
        
        if (rax_2.d s> 0)
            int32_t* rax_4 = *(rbx + 0x38) + 4
            int32_t r8
            
            while (true)
                r8 = *rax_4
                
                if (rdx_2 u< r8)
                    break
                
                r9_1 += 1
                rcx += 1
                rax_4 = &rax_4[1]
                
                if (rcx s>= rax_2)
                    goto label_142436c2d
            
            int32_t rax_5 = r14 + rdx_2
            int64_t rcx_1
            int32_t r8_1
            
            if (rax_5 u>= r8)
                r8_1 = *((rcx << 6) + *(rbx + 0x28) + 0x20)
                rcx_1 = *(rbx + 0x58)
            else
                rcx_1 = *(rbx + 0x58)
                r8_1 = *(rcx_1 + (sx.q(rax_5) << 2))
            
            if (*(rcx_1 + (sx.q(rdx_2) << 2)) != r8_1 && r9_1 s>= 0)
                break
    
label_142436c2d:
    rdi.b += 1
    rsi u>>= 2
    r11 += 1
while (zx.d(rdi.b) u< i)

return zx.q(r11)
