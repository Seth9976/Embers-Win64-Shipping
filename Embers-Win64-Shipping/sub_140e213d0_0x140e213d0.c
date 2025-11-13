// 函数: sub_140e213d0
// 地址: 0x140e213d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if ((*arg1[0x55])(&arg1[0x55]) s> 0)
    int64_t rdi_1 = 0
    int32_t rax_5
    
    do
        if (*arg2 == *(*(arg1[0x57] + rdi_1) + 0x10))
            if (arg1[0x59].b == 0)
                int64_t r14_1 = sx.q(rbx) << 3
                int64_t* rcx_3 = *(r14_1 + arg1[0x57])
                
                if (rcx_3 != 0)
                    (**rcx_3)(rcx_3, 1)
                
                int32_t rdx_3 = arg1[0x58].d
                int32_t rax_11 = rdx_3 - rbx
                
                if (rax_11 != 1)
                    int64_t r9_1 = arg1[0x57]
                    memmove(r9_1 + r14_1, r9_1 + (sx.q(rbx + 1) << 3), (rax_11 - 1) << 3)
                    rdx_3 = arg1[0x58].d
                
                arg1[0x58].d = rdx_3 - 1
                sub_1405c53d0(&arg1[0x57])
            
            sub_140e19ef0(arg1, 1)
            return zx.q(rbx)
        
        rbx += 1
        rdi_1 += 8
        rax_5 = (*arg1[0x55])(&arg1[0x55])
    while (rbx s< rax_5)

return 0xffffffff
