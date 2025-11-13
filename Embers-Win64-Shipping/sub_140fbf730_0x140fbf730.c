// 函数: sub_140fbf730
// 地址: 0x140fbf730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t rbp
rbp.b = *(arg4 + 0x38) == data_143e1e008

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbp.b == 0)
    *arg2 = 0
else
    void* rcx_2 = *(arg1 + 0x3a8)
    int64_t var_18 = 0
    void* var_10_1 = rcx_2
    
    if (rcx_2 != 0)
        int32_t rax_3 = *(rcx_2 + 8)
        
        if (rax_3 == 0)
            int64_t var_10_2 = 0
        else
            *(rcx_2 + 8) = rax_3 + 1
            
            if (rcx_2 != 0)
                var_18 = *(arg1 + 0x3a0)
    
    sub_140eb9770(arg1 + 0x3b0, &var_18)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
