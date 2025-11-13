// 函数: sub_1428b8a30
// 地址: 0x1428b8a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbp = nullptr
int64_t* result = nullptr
int64_t* r15 = nullptr

if (arg1 != 0 && arg2 != 0 && arg3 != 0 && arg4 != 0)
    int64_t* rax_1 = sub_1428d8d60()
    
    if (rax_1 != 0)
        int64_t* rax_2 = sub_142890500()
        
        if (rax_2 != 0)
            int64_t* rax_3 = sub_142890500()
            rbp = rax_3
            
            if (rax_3 != 0)
                int64_t* result_1 = sub_142890500()
                result = result_1
                
                if (result_1 != 0)
                    if (sub_142905ff0(rbp, arg3, arg1, arg2, rax_1) == 0)
                        sub_1428901a0(result)
                        result = nullptr
                    else
                        int64_t* rax_5 = sub_1428b92b0(arg2, arg3, arg2)
                        r15 = rax_5
                        
                        if (rax_5 == 0)
                            sub_1428901a0(result)
                            result = nullptr
                        else if (sub_1429082e0(rax_2, arg4, rax_5, arg2, rax_1) == 0)
                            sub_1428901a0(result)
                            result = nullptr
                        else if (sub_1429080f0(result, rbp, rax_2, arg2, rax_1) == 0)
                            sub_1428901a0(result)
                            result = nullptr
        
        sub_1428d8ae0(rax_1)
        sub_14288fbf0(rax_2)
        sub_14288fbf0(rbp)
        sub_1428901a0(r15)
        return result

return nullptr
