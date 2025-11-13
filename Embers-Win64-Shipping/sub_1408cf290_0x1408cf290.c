// 函数: sub_1408cf290
// 地址: 0x1408cf290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg1[1].d)

if (r13.d == 0)
    return 0

int32_t rdi = 0
int32_t r14 = 0
int64_t r15
r15.b = **arg1 != *arg2
int64_t rbx = 0

do
    int64_t r9_1 = sx.q(rdi)
    rbx += 1
    rdi += 1
    
    if (rbx s< r13)
        int32_t* rcx_1 = *arg1 + (rbx << 2)
        
        do
            int32_t rax_3
            rax_3.b = *rcx_1 != *arg2
            
            if (zx.d(r15.b) != rax_3)
                break
            
            rdi += 1
            rbx += 1
            rcx_1 = &rcx_1[1]
        while (rbx s< r13)
    
    int32_t rsi_2 = rdi - r9_1.d
    
    if (r15.b != 0)
        if (r14 != r9_1.d)
            int64_t rcx_2 = *arg1
            memmove(rcx_2 + (sx.q(r14) << 2), rcx_2 + (r9_1 << 2), rsi_2 << 2)
        
        r14 += rsi_2
    
    r15.b ^= 1
while (rbx s< r13)

arg1[1].d = r14
return zx.q(r13.d - r14)
