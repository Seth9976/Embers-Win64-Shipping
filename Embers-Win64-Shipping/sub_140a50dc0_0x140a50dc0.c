// 函数: sub_140a50dc0
// 地址: 0x140a50dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg3
int64_t rbp = arg2
int64_t r8 = arg1[0x15]
uint64_t result = r8 + i

if (result s> arg1[0x14])
    *(arg1 + 0x29) |= 1
    return result

while (i s> 0)
    int64_t rcx_2 = arg1[0x16]
    int64_t rax = arg1[0x19]
    int64_t i_1 = rcx_2 - r8 + rax
    
    if (i s<= i_1)
        i_1 = i
    
    if (i_1 s<= 0)
        int64_t rdx = arg1[0x1b]
        int64_t var_48
        
        if (i s>= rdx)
            int64_t rax_6 = *arg1
            var_48 = 0
            result = (*(rax_6 + 0x218))(arg1, rbp, i, &var_48, var_48)
            
            if (var_48 != i)
                *(arg1 + 0x29) |= 1
            
            arg1[0x15] += i
            break
        
        if (rcx_2 == 0 || rax == 0 || rcx_2 != r8)
            arg1[0x16] = r8
            int64_t rdx_1 = rdx - ((rdx - 1) & r8)
            int64_t rdi_3 = 0
            int64_t rax_4 = arg1[0x14] - r8
            
            if (rdx_1 s>= 0x7fffffff)
                rdx_1 = 0x7fffffff
            
            if (rdx_1 s<= rax_4)
                rax_4 = rdx_1
            
            if (rax_4 s>= 0)
                rdi_3 = rax_4
            
            result = arg1[0x19]
            
            if (rdi_3 s> result)
                arg1[0x19] = rdi_3
                
                if (rdi_3 s> arg1[0x1a])
                    result = sub_140a4f990(&arg1[0x18])
            else if (rdi_3 s< result && rdi_3 != result)
                arg1[0x19] = rdi_3
            
            var_48 = 0
            
            if (rdi_3 s> arg1[0x1b] || rdi_3 s<= 0)
                *(arg1 + 0x29) |= 1
                break
            
            (*(*arg1 + 0x218))(arg1, arg1[0x18], arg1[0x19], &var_48)
            
            if (var_48 != rdi_3)
                *(arg1 + 0x29) |= 1
        
        rcx_2 = arg1[0x16]
        r8 = arg1[0x15]
        result = zx.q(*(arg1 + 0x29))
        i_1 = rcx_2 - r8 + arg1[0x19]
        
        if (i s<= i_1)
            i_1 = i
        
        if (i_1 s<= 0)
            result.b |= 1
            *(arg1 + 0x29) = result.b
        
        if ((result.b & 1) != 0)
            break
    
    result = memcpy(rbp, arg1[0x18] - rcx_2 + r8, i_1.d)
    arg1[0x15] += i_1
    i -= i_1
    r8 = arg1[0x15]
    rbp += i_1

return result
