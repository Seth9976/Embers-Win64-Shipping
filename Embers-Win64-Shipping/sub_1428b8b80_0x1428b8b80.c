// 函数: sub_1428b8b80
// 地址: 0x1428b8b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rsi = nullptr
int64_t* r15 = nullptr
int64_t* result = nullptr
int64_t* var_38 = nullptr

if (arg6 != 0 && arg2 != 0 && arg1 != 0 && arg3 != 0 && arg4 != 0 && arg5 != 0)
    int64_t* rax_1 = sub_1428d8d60()
    
    if (rax_1 != 0)
        int64_t* rax_2 = sub_142890500()
        
        if (rax_2 != 0)
            int64_t* rax_3 = sub_142890500()
            rsi = rax_3
            
            if (rax_3 != 0)
                int64_t* rax_4 = sub_142890500()
                r15 = rax_4
                
                if (rax_4 != 0 && sub_142905ff0(rax_2, arg3, arg4, arg1, rax_1) != 0)
                    int64_t* rax_6 = sub_1428b92b0(arg1, arg3, arg1)
                    var_38 = rax_6
                    
                    if (rax_6 != 0 && sub_1429082e0(rsi, rax_2, rax_6, arg1, rax_1) != 0
                            && sub_142908410(rax_2, arg2, rsi, arg1, rax_1) != 0
                            && sub_1428d9290(r15, arg6, arg4, rax_1) != 0
                            && sub_1428d8f70(rsi, arg5, r15) != 0)
                        int64_t* result_1 = sub_142890500()
                        result = result_1
                        
                        if (result_1 != 0 && sub_142905ff0(result_1, rax_2, rsi, arg1, rax_1) == 0)
                            sub_1428901a0(result)
                            result = nullptr
        
        sub_1428d8ae0(rax_1)
        sub_14288fbf0(rax_2)
        sub_14288fbf0(rsi)
        sub_14288fbf0(r15)
        sub_1428901a0(var_38)
        return result

return nullptr
