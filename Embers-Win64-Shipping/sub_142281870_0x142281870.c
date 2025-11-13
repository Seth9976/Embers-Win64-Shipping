// 函数: sub_142281870
// 地址: 0x142281870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x2c)
uint64_t rsi = 0

if (rax != 0 && arg3 != 0)
    void* r11_1 = *(arg1 + 0x10)
    uint64_t rbx
    rbx.b = 0
    uint32_t r8 = zx.d(*(arg1 + 0x2d))
    int32_t r14_1 = 0
    int32_t* r8_1
    int32_t* r9_1
    
    if (r11_1 == 0)
        int32_t* var_68
        r9_1 = var_68
        int32_t* var_70
        r8_1 = var_70
        void* var_78
        r11_1 = var_78
    else
        char rdi_1 = *(r11_1 + 0x2b)
        r8_1 = *(arg1 + 0x18)
        rbx.b = rdi_1 & 1
        r9_1 = *(arg1 + 0x20) + (zx.q(rax) << 2)
        
        if (rdi_1 s>= 0)
            r14_1 = 0x10
            
            if ((rdi_1 & 2) != 0)
                r14_1 = 0x40
        else
            r14_1 = 0x20
    
    int64_t rax_2 = *(arg1 + 0x20)
    int32_t r15_1 = 0
    uint32_t r12_1 = zx.d(*(arg1 + 0x30))
    int64_t rbp
    rbp.b = 0
    uint32_t rdi_2 = zx.d(rbx.b)
    int32_t i = 0
    uint32_t rax_5 = r8
    
    if (rax_5 != 0)
        do
            if (r15_1 != 0)
                uint32_t rax_6 = zx.d(*(r11_1 + 0x29))
                
                if (i u< rax_6)
                    r8_1 += zx.q((rax_6 - i) * r14_1)
                
                rax_5 = r8
                r11_1 += 0x30
            
            r15_1 += 1
            i = 0
            
            if (*(r11_1 + 0x29) u> 0)
                do
                    if (rbp.b != 0)
                        r8_1 += zx.q(r14_1)
                        r9_1 = &r9_1[1]
                    
                    int64_t rcx_2 = rsi * 0x30
                    i += 1
                    rbp.b = 1
                    *(rcx_2 + arg2) = *r8_1
                    *(rcx_2 + arg2 + 4) = r8_1[1]
                    *(rcx_2 + arg2 + 8) = r8_1[2]
                    *(rcx_2 + arg2 + 0xc) = r8_1[3]
                    *(rcx_2 + arg2 + 0x10) = *(r11_1 + 0x10)
                    *(rcx_2 + arg2 + 0x14) = *(r11_1 + 0x14)
                    *(rcx_2 + arg2 + 0x18) = *(r11_1 + 0x18)
                    int32_t rax_17
                    
                    if ((r12_1 & 0x20) != 0)
                        int32_t rax_18
                        
                        if (rdi_2 == 0)
                            rax_18 = -1
                        else
                            rax_18 = *r9_1
                        
                        *(rcx_2 + arg2 + 0x1c) = rax_18
                        rax_17 = -1
                    else
                        *(rcx_2 + arg2 + 0x1c) = 0xffffffff
                        
                        if (rdi_2 == 0)
                            rax_17 = -1
                        else
                            rax_17 = *r9_1
                    
                    *(rcx_2 + arg2 + 0x2c) = rax_17
                    float zmm0
                    float zmm1
                    float zmm2
                    
                    if ((r12_1 & 0x10) == 0)
                        zmm1 = (zx.o(0)).d
                        zmm2 = (zx.o(0)).d
                        zmm0 = (zx.o(0)).d
                    else
                        zmm0 = *(rax_2 + (rsi << 2))
                        zmm1 = zmm0 f* *(rcx_2 + arg2 + 0x18)
                        zmm2 = zmm0 f* *(rcx_2 + arg2 + 0x14)
                        zmm0 = zmm0 f* *(rcx_2 + arg2 + 0x10)
                    
                    rsi = zx.q(rsi.d + 1)
                    float* rax_21 = arg2 + 0x20 + rcx_2
                    *rax_21 = zmm0
                    rax_21[1] = zmm2
                    rax_21[2] = zmm1
                    
                    if (rsi.d == arg3)
                        return zx.q(rsi.d)
                while (i u< zx.d(*(r11_1 + 0x29)))
                
                rax_5 = r8
        while (r15_1 u< rax_5)

return zx.q(rsi.d)
