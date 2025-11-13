// 函数: sub_140a5f6f0
// 地址: 0x140a5f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)

if (r8.d == 0)
    return 0

uint32_t rcx = zx.d(**arg1)
int32_t rdi = 0
int32_t r13 = 0
int64_t rbp

if (rcx.w == 0)
    rbp.b = 1
else if (rcx.w != 0x2f)
    uint64_t rax_9 = zx.q(rcx - 0x2b)
    
    if (rax_9.w u> 0x34 || not(test_bit(0x10ffffffc0ffe5, rax_9)))
        rcx.w -= 0x61
    
    int32_t rdx_1
    
    if ((rax_9.w u<= 0x34 && test_bit(0x10ffffffc0ffe5, rax_9)) || rcx.w u<= 0x19)
        int32_t* rcx_3 = *arg2
        rdx_1 = *rcx_3
        *rcx_3 = rdx_1 + 1
    
    if (((rax_9.w u<= 0x34 && test_bit(0x10ffffffc0ffe5, rax_9)) || rcx.w u<= 0x19) && rdx_1 s< 0xe)
        rbp.b = 1
    else
        rbp.b = 0
else
    **arg2 = 0
    rbp.b = 1

int64_t rbx = 0

do
    int32_t r9_1 = rdi
    int32_t arg_8 = rdi
    rdi += 1
    rbx += 1
    
    if (rbx s< r8)
        do
            uint64_t rax_4 = zx.q(*(*arg1 + (rbx << 1)))
            
            if (rax_4.w == 0)
                rax_4.b = 1
            else if (rax_4.w != 0x2f)
                int16_t rcx_4 = (rax_4 - 0x2b).w
                
                if (rcx_4 u> 0x34 || not(test_bit(0x10ffffffc0ffe5, zx.q(rcx_4))))
                    rax_4.w -= 0x61
                
                int32_t rdx_2
                
                if ((rcx_4 u<= 0x34 && test_bit(0x10ffffffc0ffe5, zx.q(rcx_4))) || rax_4.w u<= 0x19)
                    int32_t* rcx_6 = *arg2
                    rdx_2 = *rcx_6
                    *rcx_6 = rdx_2 + 1
                
                if (((rcx_4 u<= 0x34 && test_bit(0x10ffffffc0ffe5, zx.q(rcx_4)))
                        || rax_4.w u<= 0x19) && rdx_2 s< 0xe)
                    rax_4.b = 1
                else
                    rax_4.b = 0
            else
                **arg2 = 0
                rax_4.b = 1
            
            if (rbp.b != rax_4.b)
                break
            
            rdi += 1
            rbx += 1
        while (rbx s< r8)
        
        r9_1 = arg_8
    
    int32_t rsi_2 = rdi - r9_1
    
    if (rbp.b != 0)
        if (r13 != r9_1)
            int64_t rcx_1 = *arg1
            memmove(rcx_1 + (sx.q(r13) << 1), rcx_1 + (sx.q(r9_1) << 1), rsi_2 * 2)
        
        r13 += rsi_2
    
    rbp.b ^= 1
while (rbx s< r8)

arg1[1].d = r13
return zx.q(r8.d - r13)
