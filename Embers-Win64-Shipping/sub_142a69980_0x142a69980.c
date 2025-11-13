// 函数: sub_142a69980
// 地址: 0x142a69980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t rax_1 = (*(*arg1 + 0x80))(arg1, zx.q(rbp.d))
int64_t r9 = *arg1
int32_t rdi = rax_1
int32_t rax_2 = (*(r9 + 0x60))(arg1, zx.q(rbp.d), arg4, r9)

if (rdi == rax_2)
    return zx.q(rdi)

int64_t* result = (*(*arg1 + 0x10))(arg1)

if (result == 0)
    *arg3 = 7
    return result

int32_t r14 = rdi
result[0x1d].b = 1
void* r15 = result + (rbp << 2)

do
    if (*(result + 0xb) != 0)
        int32_t arg_8 = 0
        (*(*result + 0xe0))(result, &arg_8)
    
    *(r15 + 0xc) = rdi
    
    if (*(result + 0xdc) == 0x2710)
        sub_142a6b700(result)
    
    *(result + (rbp << 2) + 0x80) = *(result + 0xdc)
    *(result + 0xdc) += 1
    *(rbp + result + 0x68) = 1
    *(result + 0xb) = 0
    result[1].w = 0
    int32_t rax_10
    
    if (*arg3 s> 0)
        rax_10 = 0
    else
        (*(*result + 0xd8))(result, arg3)
        
        if (*arg3 s> 0)
            rax_10 = 0
        else
            if (result[0x1d].b != 0 || *(result + 0xa) == 0)
                *(result + 9) = 0
            
            result[1].b = 1
            *(result + 0xb) = 0
            
            if (*arg3 s> 0)
                rax_10 = 0
            else
                if (*(result + 9) != 0)
                    goto label_142a69abe
                
                (*(*result + 0xe0))(result, arg3)
                
                if (*arg3 s> 0)
                    rax_10 = 0
                else
                    *(result + 9) = 0x101
                label_142a69abe:
                    
                    if (*arg3 s> 0)
                        rax_10 = 0
                    else
                        rax_10 = *(r15 + 0xc)
    
    if (rax_10 != rdi)
        break
    
    r14 = rdi
    rdi -= 1
while (rdi s>= rax_2)

int64_t r8 = *result
(*r8)(result, 1, r8)

if (*arg3 s> 0)
    r14 = 0

return zx.q(r14)
