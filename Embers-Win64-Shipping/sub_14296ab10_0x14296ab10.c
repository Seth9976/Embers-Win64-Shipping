// 函数: sub_14296ab10
// 地址: 0x14296ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0

if (arg2 == 0)
    return 0

int32_t rax_1 = *arg2

if (rax_1 != 0)
    int32_t rbx_1 = 0
    
    if (rax_1 s> 0)
        int64_t rsi_1 = 0
        
        while (true)
            if (rbx_1 != 0 && rbx_1 == rbx_1 s/ 0x23 * 0x23)
                int32_t rax_6 = sub_14289aa40(arg1, &data_143545da0, 2)
                
                if (rax_6 != 2)
                    return 0xffffffff
                
                rdi += rax_6
            
            void* rdx_4 = *(arg2 + 8)
            char const (* rcx_2)[0x11] = data_143b86880
            char arg_10 = (*rcx_2)[zx.q(*(rdx_4 + rsi_1)) u>> 4]
            char arg_11 = *((zx.q(*(rdx_4 + rsi_1)) & 0xf) + rcx_2)
            int32_t rax_13 = sub_14289aa40(arg1, &arg_10, 2)
            
            if (rax_13 != 2)
                return 0xffffffff
            
            rdi += rax_13
            rbx_1 += 1
            rsi_1 += 1
            
            if (rbx_1 s>= *arg2)
                return zx.q(rdi)
else
    int32_t rax_2 = sub_14289aa40(arg1, &(*U""\tv 0")[4], rax_1 + 1)
    
    if (rax_2 != 1)
        return 0xffffffff
    
    rdi = rax_2

return zx.q(rdi)
