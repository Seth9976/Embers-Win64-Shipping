// 函数: sub_140a0ff00
// 地址: 0x140a0ff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void arg_8
int64_t* result = (*(*rcx + 0x30))(rcx, &arg_8)
int64_t* rdi

if (*result s>= *(arg1 + 0xc0))
    int64_t var_18 = *arg2
    int64_t* rax_2 = arg2[1]
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    int64_t* rcx_2 = *(arg1 + 0x40) + 0x10
    result = (**rcx_2)(rcx_2, &var_18)
    
    if (rax_2 != 0)
        result = zx.q(rax_2[1].d)
        rax_2[1].d -= 1
        
        if (result.d == 1)
            (**rax_2)(rax_2)
            result = zx.q(*(rax_2 + 0xc))
            *(rax_2 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rax_2 + 8))(rax_2, 1)
    
    rdi = arg2[1]
    
    if (rdi != 0)
        goto label_140a0ffb5
else
    rdi = arg2[1]
    
    if (rdi != 0)
    label_140a0ffb5:
        result = zx.q(rdi[1].d)
        rdi[1].d -= 1
        
        if (result.d == 1)
            result = (**rdi)(rdi)
            int32_t rbx_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rbx_1 == 1)
                return (*(*rdi + 8))(rdi, zx.q(rbx_1))
return result
