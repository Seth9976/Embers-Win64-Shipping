// 函数: sub_142357420
// 地址: 0x142357420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rsi_1 = arg2
int64_t rax_2 = (*(*arg1 + 0x18))(arg1, *(arg2 + 0x10))

if (rax_2 != 0)
    int64_t rax_3 = sx.q(arg1[0x1a].d)
    
    if (rax_3.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t r15
        r15.b = *arg1[0x19] != rax_2
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rax_3)
                int64_t* rcx_1 = arg1[0x19] + (rbx_1 << 3)
                
                do
                    int32_t rax_5
                    rax_5.b = *rcx_1 != rax_2
                    
                    if (zx.d(r15.b) != rax_5)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_1 = &rcx_1[1]
                while (rbx_1 s< rax_3)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r15.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_2 = arg1[0x19]
                    memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
                
                r12_1 += rbp_2
            
            r15.b ^= 1
        while (rbx_1 s< rax_3)
        
        rsi_1 = arg2
        arg1[0x1a].d = r12_1

int64_t rdi_2 = sx.q(arg1[0x1a].d)
int32_t rax_7 = (rdi_2 + 1).d
arg1[0x1a].d = rax_7

if (rax_7 s> *(arg1 + 0xd4))
    sub_1405a4d70(&arg1[0x19])

*(arg1[0x19] + (rdi_2 << 3)) = rsi_1
