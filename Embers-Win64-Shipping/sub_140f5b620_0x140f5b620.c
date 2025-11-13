// 函数: sub_140f5b620
// 地址: 0x140f5b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
arg2.b = 1
sub_140e19ef0(arg1, arg2.b)
int32_t rbx = 0

if ((*arg1[0x55])(&arg1[0x55]) s> 0)
    int64_t rdi_1 = 0
    int32_t rax_5
    
    do
        if (*r14 == *(*(arg1[0x57] + rdi_1) + 0x10))
            if (arg1[0x59].b == 0)
                int64_t rdi_2 = sx.q(rbx) << 3
                int64_t* rcx_3 = *(rdi_2 + arg1[0x57])
                
                if (rcx_3 != 0)
                    (**rcx_3)(rcx_3, 1)
                
                int32_t rdx_2 = arg1[0x58].d
                int32_t rax_11 = rdx_2 - rbx
                
                if (rax_11 != 1)
                    int64_t r10_1 = arg1[0x57]
                    memmove(r10_1 + rdi_2, r10_1 + (sx.q(rbx + 1) << 3), (rax_11 - 1) << 3)
                    rdx_2 = arg1[0x58].d
                
                arg1[0x58].d = rdx_2 - 1
                sub_1405c53d0(&arg1[0x57])
            
            return zx.q(rbx)
        
        rbx += 1
        rdi_1 += 8
        rax_5 = (*arg1[0x55])(&arg1[0x55])
    while (rbx s< rax_5)

return 0xffffffff
