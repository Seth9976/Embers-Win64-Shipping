// 函数: sub_142be84a0
// 地址: 0x142be84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg1[6]
int32_t i = 0
*(arg2 + 0xd8) = 0
*(arg2 + 0xe0) = 0
int64_t* rbx = arg1
int32_t rsi = sub_1408e52d0(arg1)
int32_t arg_8
int32_t rax_1 = sub_142b96d30(rbx, &arg_8)
int32_t rcx_1 = arg_8

if (rcx_1 == 0)
    while (true)
        int32_t rax_2
        
        if (rax_1 != 0x774f4646)
            if (rax_1 != 0x10000 && rax_1 != 0x74746366 && rax_1 != 0x4f54544f
                    && rax_1 != 0x74727565 && rax_1 != 0x74797031 && rax_1 != 0xa56b6264
                    && rax_1 != 0xa56c7374 && rax_1 != 0x20000)
                return 2
            
            __builtin_strncpy(arg2 + 0xd8, "fctt", 4)
            
            if (rax_1 != 0x74746366)
                *(arg2 + 0xdc) = 0x10000
                *(arg2 + 0xe0) = 1
                int32_t* rax_8 = sub_142b99860(r15, 4, &arg_8)
                *(arg2 + 0xe8) = rax_8
                rax_2 = arg_8
                
                if (rax_2 == 0)
                    *rax_8 = rsi
                    return arg_8
            else
                rax_2 = sub_142b96aa0(rbx, &data_1436988e8, arg2 + 0xd8)
                arg_8 = rax_2
                
                if (rax_2 == 0)
                    int32_t r9_1 = *(arg2 + 0xe0)
                    
                    if (r9_1 == 0)
                        return r9_1 + 8
                    
                    if (r9_1 u> rbx[1].d u>> 5)
                        return 0xa
                    
                    *(arg2 + 0xe8) = sub_142b99a90(r15, 4, 0, r9_1, 0, &arg_8)
                    rax_2 = arg_8
                    
                    if (rax_2 == 0)
                        rax_2 = sub_142b96500(rbx, *(arg2 + 0xe0) << 2)
                        arg_8 = rax_2
                        
                        if (rax_2 == 0)
                            if (*(arg2 + 0xe0) s> 0)
                                int64_t rsi_1 = 0
                                
                                do
                                    rsi_1 += 4
                                    i += 1
                                    *(rsi_1 + *(arg2 + 0xe8) - 4) = sub_142b96720(rbx)
                                while (i s< *(arg2 + 0xe0))
                            
                            sub_142b96620(rbx)
                            return arg_8
        else
            rax_2 = sub_142b97060(rbx, rsi, arg3)
            arg_8 = rax_2
            
            if (rax_2 == 0)
                rax_2, arg3 = sub_142beb2d0(rbx, arg2, arg3)
                arg_8 = rax_2
                
                if (rax_2 == 0)
                    rbx = *(arg2 + 0xa0)
                    rsi = sub_1408e52d0(rbx)
                    rax_1 = sub_142b96d30(rbx, &arg_8)
                    rcx_1 = arg_8
                    
                    if (rcx_1 != 0)
                        break
                    
                    continue
        
        return rax_2

return rcx_1
