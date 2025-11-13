// 函数: sub_141e7c490
// 地址: 0x141e7c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

(*(*arg2 + 0x48))(arg2)
int64_t rdx = sx.q(arg1[1].d)

if (rdx.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **arg1 != arg2
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rdx)
            int64_t* rcx_1 = *arg1 + (rbx_1 << 3)
            
            do
                int32_t rax_4
                rax_4.b = *rcx_1 != arg2
                
                if (zx.d(r15.b) != rax_4)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_1 = &rcx_1[1]
            while (rbx_1 s< rdx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_2 = *arg1
                memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
            
            r12_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rdx)
    
    arg1[1].d = r12_1

int64_t var_58_1 = 0
void** const var_48_1 = &data_142da2668
int64_t* var_40_1 = arg2
int64_t var_68[0x2]
var_68[0] = sub_141e765c0
sub_141e80ba0(arg1, &var_68)
(**arg2)(arg2, 1)
