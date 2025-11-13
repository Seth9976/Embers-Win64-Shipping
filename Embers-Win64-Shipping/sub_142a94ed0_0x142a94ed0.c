// 函数: sub_142a94ed0
// 地址: 0x142a94ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbp = arg2
char* rsi = arg1

while (true)
    int32_t rbx_1 = 0
    char* r8_1 = rsi
    uint32_t rcx
    
    while (true)
        rcx = zx.d(*r8_1)
        r8_1 = &r8_1[1]
        rbx_1 += 1
        
        if (rcx.b != 0x2d && rcx.b != 0x5f && rcx.b != 0x20)
            if (rcx.b - 9 u> 4)
                break
    
    int32_t rdi_2
    
    if (rcx.b == 0)
        rdi_2 = rbx_1 << 8
    else
        rdi_2 = zx.d(sub_142a86220(rcx)) | rbx_1 << 8
    
    int32_t rbx_3 = 0
    char* rdx = rbp
    uint32_t rcx_1
    
    while (true)
        rcx_1 = zx.d(*rdx)
        rdx = &rdx[1]
        rbx_3 += 1
        
        if (rcx_1.b != 0x2d && rcx_1.b != 0x5f && rcx_1.b != 0x20)
            if (rcx_1.b - 9 u> 4)
                break
    
    int32_t rcx_3
    
    if (rcx_1.b == 0)
        rcx_3 = rbx_3 << 8
    else
        rcx_3 = zx.d(sub_142a86220(rcx_1)) | rbx_3 << 8
    
    if ((rcx_3.b | rdi_2.b) == 0)
        break
    
    if (rdi_2 != rcx_3)
        uint32_t rax_7 = zx.d(rcx_3.b)
        uint32_t rdx_1 = zx.d(rdi_2.b)
        
        if (rdx_1 != rax_7)
            return zx.q(rdx_1 - rax_7)
    
    rsi = &rsi[sx.q(rdi_2) s>> 8]
    rbp = &rbp[sx.q(rcx_3) s>> 8]

return 0
