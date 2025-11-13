// 函数: sub_142a42880
// 地址: 0x142a42880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = arg3
arg3 &= arg4
int64_t r9 = data_143cc8280

if (arg2 u>= r9 && (arg2 & (arg2 - 1)) == 0)
    int64_t rax_1 = r9 - 1 + arg1
    uint64_t r14_3
    
    if (((r9 - 1) & r9) != 0)
        r14_3 = divu.dp.q(0:rax_1, r9) * r9
    else
        r14_3 = not.q(r9 - 1) & rax_1
    
    uint8_t* rdi_1 = arg5
    int64_t rax_3 = sub_142a42730(r14_3, arg2, r15, arg3, rdi_1, arg6)
    
    if (rax_3 != 0)
        if (modu.dp.q(0:rax_3, arg2) == 0)
            return rax_3
        
        sub_142a42a70(rax_3, r14_3, r15, arg6)
        
        if (r14_3 u< not.q(arg2))
            uint64_t rcx_2 = r14_3 + arg2
            int32_t rbp_1 = 0
            
            while (true)
                int64_t rax_10 = sub_142a42730(rcx_2, arg2, r15, 0, rdi_1, arg6)
                
                if (rax_10 == 0)
                    return 0
                
                if (modu.dp.q(0:rax_10, arg2) == 0)
                    sub_142a42020(rax_10 + r14_3, arg2, arg6)
                    return rax_10
                
                sub_142a42a70(rax_10, r14_3 + arg2, r15, arg6)
                int64_t rcx_4 = rax_10 + arg2 - 1
                int64_t rdi_4
                
                if ((arg2 & (arg2 - 1)) != 0)
                    rdi_4 = rcx_4 - modu.dp.q(0:rcx_4, arg2)
                else
                    rdi_4 = not.q(arg2 - 1) & rcx_4
                
                void* var_50_2
                var_50_2.b = arg3
                int64_t rax_16 =
                    sub_142a42d60(rdi_4, r14_3, arg2, (zx.d(r15) + 2) << 0xc, 0, var_50_2.b, arg5)
                int64_t rbx_1 = rax_16
                
                if (rax_16 == rdi_4)
                    return rbx_1
                
                if (rax_16 != 0)
                    sub_142a42a70(rax_16, r14_3, r15, arg6)
                    rbx_1 = 0
                
                rdi_1 = arg5
                rcx_2 = r14_3 + arg2
                rbp_1 += 1
                
                if (rbp_1 s>= 3)
                    return rbx_1

return 0
