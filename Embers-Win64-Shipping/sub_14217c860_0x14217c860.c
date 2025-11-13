// 函数: sub_14217c860
// 地址: 0x14217c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != 0)
    int64_t arg_10
    int64_t r8
    
    if (arg3 == 0)
        sub_140d3a3a0(&arg_10, arg2)
        r8 = arg_10
    else
        r8 = *arg3
    
    sub_141f87aa0(arg1 + 0x50, &arg_10, r8)
    int64_t rax = sx.q(arg_10.d)
    void* rcx_2
    
    if (rax.d != 0xffffffff)
        rcx_2 = *(arg1 + 0x50) + rax * 0x14
    
    if ((rax.d == 0xffffffff || rcx_2 == 0 || *(rcx_2 + 8) u<= 0)
            && (*(*arg2 + 0x1c0))(arg2).b == 0)
        result = (*(*arg2 + 0x1c8))(arg2)
        
        if (result.b == 0)
            return result

result.b = 1
return result
