// 函数: sub_142860600
// 地址: 0x142860600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbp = 4
char* rdi = *(*(arg1 + 0x88) + 8)

while (true)
    void* rcx = *(arg1 + 0x98)
    int32_t var_30
    
    if (rcx u< 4)
        while (true)
            var_30 = 0
            int32_t arg_8
            int64_t arg_18
            
            if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, &arg_8, rcx + rdi, 4 - rcx, 0, &arg_18) s<= 0)
                arg1[0xa] = 3
            else
                int32_t rax_3 = arg_8
                
                if (rax_3 != 0x14)
                    if (rax_3 == 0x16)
                        rcx = *(arg1 + 0x98) + arg_18
                        *(arg1 + 0x98) = rcx
                        
                        if (rcx u>= 4)
                            break
                        
                        continue
                    
                    sub_142856580(arg1, 0xa, 0x183, 0x85, "ssl\statem\statem_lib.c", 0x4a0)
                    return 0
                
                if (*(arg1 + 0x98) != 0 || arg_18 != 1 || *rdi != 1)
                    sub_142856580(arg1, 0xa, 0x183, 0x67, "ssl\statem\statem_lib.c", 0x48a)
                    return 0
                
                if (arg1[0x17] != 0 || (**(arg1 + 0xa8) & 0x800) == 0)
                    *arg2 = 0x101
                    *(*(arg1 + 0xa8) + 0x230) = 0x101
                    int64_t rdx_1 = arg_18
                    *(arg1 + 0x98) = rdx_1 - 1
                    void* rax_9 = *(arg1 + 0xa8)
                    *(arg1 + 0x90) = *(*(arg1 + 0x88) + 8)
                    *(rax_9 + 0x228) = rdx_1
                    goto label_14286088d
            
            return 0
    
    if (arg1[0xe] != 0)
        break
    
    if (arg1[0x17] == 1)
        break
    
    if (*rdi != 0)
        break
    
    if (rdi[1] != 0)
        break
    
    if (rdi[2] != 0)
        break
    
    if (rdi[3] != 0)
        break
    
    int64_t r10_2 = *(arg1 + 0xb8)
    *(arg1 + 0x98) = 0
    
    if (r10_2 != 0)
        var_30.q = arg1
        r10_2(0, zx.q(*arg1), 0x16, rdi, 4, var_30, *(arg1 + 0xc0))

*arg2 = zx.d(*rdi)
*(*(arg1 + 0xa8) + 0x230) = zx.d(*rdi)
int64_t rcx_9

if (sub_14285b7a0(&arg1[0x200]) == 0)
    rbp = 0
    *(*(arg1 + 0xa8) + 0x228) = (zx.q(rdi[1]) << 8 | zx.q(rdi[2])) << 8 | zx.q(rdi[3])
    rcx_9 = *(*(arg1 + 0x88) + 8) + 4
else
    *(*(arg1 + 0xa8) + 0x228) = sub_14285b760(&arg1[0x200]) + 4
    rcx_9 = *(*(arg1 + 0x88) + 8)

*(arg1 + 0x90) = rcx_9
*(arg1 + 0x98) = rbp
label_14286088d:
return 1
