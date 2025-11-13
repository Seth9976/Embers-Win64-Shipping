// 函数: sub_141037220
// 地址: 0x141037220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
sub_14105c1a0(arg2, arg1)
void* rax = sub_141023fa0(arg1, arg2)

if (arg4 == 0xffffffff && sub_14105e7c0(rax) == 0)
    int32_t rbx_1 = 0
    uint32_t r12 = zx.d(*(arg2 + 0xc2))
    
    if (r12 != 0)
        do
            int32_t rax_2 = sub_1410626f0(rax, rbx_1)
            
            if (rax_2 == 0xffffffff)
                void* rsi_1 = *(arg1 + 8)
                int32_t var_30_1 = rdi
                int32_t var_2c_1 = rbx_1
                int64_t rbp_1 = sx.q(*(rsi_1 + 0xc0))
                int32_t rax_3 = (rbp_1 + 1).d
                *(rsi_1 + 0xc0) = rax_3
                
                if (rax_3 s> *(rsi_1 + 0xc4))
                    sub_1405a4f90(rsi_1 + 0xb8)
                
                *(*(rsi_1 + 0xb8) + rbp_1 * 0x10) = arg2.o
                sub_141069360(rax, rbx_1, rdi)
            else if (rax_2 != rdi)
                sub_1410129f0(arg1, arg2, rax_2, rdi, rbx_1)
                sub_141069360(rax, rbx_1, rdi)
            
            rbx_1 += 1
        while (rbx_1 u< r12)
    
    return sub_141069350(rax, rdi) __tailcall

int32_t result = sub_1410626f0(rax, arg4)
int32_t result_1 = result

if (result != 0xffffffff)
    if (result_1 == 0x10 && rdi == 0x20)
        return result
    
    bool cond:0_1
    
    if (rdi != 0)
        int32_t rcx_13 = result_1 | rdi
        
        if ((rcx_13 & 0xac3) == rcx_13)
            rdi = rcx_13
        
        cond:0_1 = result_1 != rdi
    else
        cond:0_1 = result_1 != 0
    
    result.b = cond:0_1
    
    if (result.b == 0)
        return result
    
    sub_1410129f0(arg1, arg2, result_1, rdi, arg4)
else
    sub_1410124f0(arg1, arg2)

return sub_141069360(rax, arg4, rdi)
