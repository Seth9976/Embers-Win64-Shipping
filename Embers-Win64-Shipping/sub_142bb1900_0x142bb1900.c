// 函数: sub_142bb1900
// 地址: 0x142bb1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xa0)
void* rsi = *(arg1 + 0x410)
int64_t r15 = rdi[6]

if (arg2 == 0)
    *(rsi + 0x40) = 1
else
    *(rsi + 0x50) = 1

int32_t rax = (*(arg1 + 0x2a0))()
int32_t arg_10 = rax

if (rax == 0)
    int32_t rax_1 = sub_1408e52d0(rdi)
    int16_t rax_2 = sub_142b96f00(rdi, &arg_10)
    rax = arg_10
    
    if (rax == 0)
        rax = sub_142b970b0(rdi, rax + 2)
        arg_10 = rax
        
        if (rax == 0)
            if (rax_2 != 1)
                return 8
            
            int32_t rax_3 = sub_142b96d30(rdi, &arg_10)
            rax = arg_10
            
            if (rax == 0)
                int32_t rax_4 = sub_142b96d30(rdi, &arg_10)
                rax = arg_10
                
                if (rax == 0)
                    int32_t* rax_5 = sub_142b99860(r15, rax + 0x38, &arg_10)
                    
                    if (arg2 == 0)
                        *(rsi + 0x48) = rax_5
                    else
                        *(rsi + 0x58) = rax_5
                    
                    rax = arg_10
                    
                    if (rax == 0)
                        rax = sub_142bb1a90(arg1, rax_3 + rax_1, rax_5, arg3)
                        arg_10 = rax
                        
                        if (rax == 0)
                            if (rax_4 != 0)
                                rax = sub_142bb1420(arg1, rax_4 + rax_1, &rax_5[8], rax_5, arg3)
                            
                            if (rax_4 == 0 || rax == 0)
                                arg_10 = 0
                                
                                if (arg2 == 0)
                                    *(rsi + 0x41) = 1
                                    *(arg1 + 0x418) |= 2
                                else
                                    *(rsi + 0x51) = 1
                                    *(arg1 + 0x418) |= 0x10
                                
                                return arg_10

return rax
