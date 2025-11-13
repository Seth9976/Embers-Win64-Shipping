// 函数: sub_1426e81c0
// 地址: 0x1426e81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int32_t rbx = 0
int32_t r8 = rbp

if (rbp s> 0)
    int32_t r9_1 = rbp
    int64_t* rdi_1 = nullptr
    
    do
        int64_t rcx = *arg1
        r8 = r9_1
        
        if (*(rdi_1 + rcx) == *arg2)
            int32_t rax_4 = r9_1 - rbx - 1
            
            if (rax_4 s>= 1)
                rax_4 = 1
            
            if (rax_4 != 0)
                memcpy(rcx + (sx.q(rbx) << 3), rcx + (sx.q(r9_1 - rax_4) << 3), rax_4 << 3)
                r9_1 = arg1[1].d
            
            arg1[1].d = r9_1 - 1
            sub_1405c53d0(arg1)
            r8 = arg1[1].d
            rbx -= 1
            rdi_1 -= 8
        
        rbx += 1
        rdi_1 = &rdi_1[1]
        r9_1 = r8
    while (rbx s< r8)

return zx.q(rbp - r8)
