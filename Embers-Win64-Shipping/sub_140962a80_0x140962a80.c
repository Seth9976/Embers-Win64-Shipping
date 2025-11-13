// 函数: sub_140962a80
// 地址: 0x140962a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rax = arg1
int64_t r15
r15.b = 0
void var_48

if (arg3 != &var_48)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
        rax = arg1
    
    *arg3 = 0
    arg3[1] = 0

int32_t r12 = 0

if (*(rax + 0x60) s<= 0)
    return 0

int64_t r13 = 0

while (r15.b == 0)
    int32_t i = 0
    void* rbp_2 = *(rax + 0x58) + r13
    int64_t rsi_1 = 0
    
    if (*(rbp_2 + 0x38) s> 0)
        int64_t rdi_1 = 0
        
        do
            int64_t* rcx_1 = *(rdi_1 + *(rbp_2 + 0x30) + 8)
            
            if ((**rcx_1)(rcx_1) != 0)
                int64_t* rdx_2 = *(rbp_2 + 0x30) + 0x28 + rsi_1 * 0x50
                
                if (arg3 != rdx_2)
                    int32_t rbx_1 = rdx_2[1].d
                    int64_t rdi_2 = *rdx_2
                    int32_t r8 = *(arg3 + 0xc)
                    arg3[1].d = rbx_1
                    
                    if (rbx_1 != 0 || r8 != 0)
                        sub_1405a4c70(arg3, rbx_1, r8)
                        memcpy(*arg3, rdi_2, rbx_1 * 2)
                    else
                        *(arg3 + 0xc) = rbx_1
                
                r15.b = 1
                break
            
            i += 1
            rsi_1 += 1
            rdi_1 += 0x50
        while (i s< *(rbp_2 + 0x38))
    
    rax = arg1
    r12 += 1
    r13 += 0x50
    
    if (r12 s>= *(rax + 0x60))
        break

return zx.q(r15.b)
