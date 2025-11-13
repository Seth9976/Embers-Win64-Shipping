// 函数: sub_142b6af30
// 地址: 0x142b6af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2

if (*arg4 s<= 0)
    int32_t* var_10_1 = arg4
    rax = sub_142a7f8c0(rax, "nrm", arg3, sub_142b6aef0, arg1)
    *(arg1 + 0x50) = rax
    
    if (*arg4 s<= 0)
        int32_t* rax_1 = sub_142a95f50(rax)
        int64_t rax_2 = sx.q(*rax_1)
        
        if (rax_2.d s< 0x4c)
            *arg4 = 3
            return rax_2
        
        int64_t rbp_1 = sx.q(rax_1[1])
        rax = sub_142b6a8f0(0, 0, rax_1 + rax_2, rbp_1.d - rax_2.d, nullptr, arg4)
        *(arg1 + 0x58) = rax
        
        if (*arg4 s<= 0)
            return sub_142b1e930(arg1, rax_1, rax, rax_1 + rbp_1, sx.q(rax_1[2]) + rax_1)

return rax
