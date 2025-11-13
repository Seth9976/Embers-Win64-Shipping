// 函数: sub_14294a0c0
// 地址: 0x14294a0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0
int32_t rdi = 0

if (arg2 == 0)
    return 0

int32_t rax_2

if ((arg2[1] & 0x100) != 0)
    rdi = 1
    rax_2 = sub_14289aa40(arg1, &data_142d8bc68, 1)

if ((arg2[1] & 0x100) == 0 || rax_2 == 1)
    int32_t rax_3 = *arg2
    
    if (rax_3 != 0)
        if (rax_3 s> 0)
            int64_t rsi_1 = 0
            
            while (true)
                if (rbx != 0 && rbx == rbx s/ 0x23 * 0x23)
                    int32_t rax_8 = sub_14289aa40(arg1, &data_143545da0, 2)
                    
                    if (rax_8 != 2)
                        return 0xffffffff
                    
                    rdi += rax_8
                
                void* rdx_4 = *(arg2 + 8)
                char const (* rcx_3)[0x11] = data_143b86870
                char arg_10 = (*rcx_3)[zx.q(*(rdx_4 + rsi_1)) u>> 4]
                char arg_11 = *((zx.q(*(rdx_4 + rsi_1)) & 0xf) + rcx_3)
                int32_t rax_15 = sub_14289aa40(arg1, &arg_10, 2)
                
                if (rax_15 != 2)
                    return 0xffffffff
                
                rdi += rax_15
                rbx += 1
                rsi_1 += 1
                
                if (rbx s>= *arg2)
                    return zx.q(rdi)
        
        return zx.q(rdi)
    
    int32_t rax_4 = sub_14289aa40(arg1, &data_143508778, rax_3 + 2)
    
    if (rax_4 == 2)
        return zx.q(rdi + rax_4)

return 0xffffffff
