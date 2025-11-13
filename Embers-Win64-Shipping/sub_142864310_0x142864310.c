// 函数: sub_142864310
// 地址: 0x142864310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t result = 0
int64_t i_1 = arg4
int16_t* r14 = arg3
char const (*** rsi)[0x17] = arg2

if (arg4 != 0)
    int64_t i
    
    do
        char const (** const rbx_1)[0x17] = &data_1434dc750
        int64_t rax_1 = 0
        
        while (rbx_1[1].w != *r14)
            rax_1 += 1
            rbx_1 = &rbx_1[5]
            
            if (rax_1 u>= 0x1a)
                rbx_1 = nullptr
                break
        
        if (sub_142864400(arg1, 0x5000c, rbx_1) != 0)
            int64_t rcx_2 = 0
            int16_t* rax_3 = arg5
            
            if (arg6 != 0)
                do
                    if (*r14 == *rax_3)
                        result += 1
                        
                        if (rsi != 0)
                            *rsi = rbx_1
                            rsi = &rsi[1]
                        
                        break
                    
                    rcx_2 += 1
                    rax_3 = &rax_3[1]
                while (rcx_2 u< arg6)
        
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
