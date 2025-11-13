// 函数: sub_142bf8b10
// 地址: 0x142bf8b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *arg2 = 0

int128_t* result = sub_142bf8c10(arg1, 3, 0xa)

if (result == 0)
    result = sub_142bf8c10(arg1, 0, (result + 6).w)
    
    if (result == 0)
        result = sub_142bf8c10(arg1, 0, (result + 4).w)
        
        if (result == 0)
            result = sub_142bf8c10(arg1, (result + 3).w, (result + 1).w)
            
            if (result == 0)
                result = sub_142bf8c10(arg1, 0, (result + 3).w)
                
                if (result == 0)
                    result = sub_142bf8c10(arg1, 0, (result + 2).w)
                    
                    if (result == 0)
                        result = sub_142bf8c10(arg1, 0, (result + 1).w)
                        
                        if (result == 0)
                            result = sub_142bf8c10(arg1, 0, 0)
                            
                            if (result == 0)
                                result = sub_142bf8c10(arg1, (result + 3).w, 0)
                                
                                if (result == 0)
                                    return &data_14369a5d0
                                
                                if (arg2 != 0)
                                    *arg2 = 1

return result
