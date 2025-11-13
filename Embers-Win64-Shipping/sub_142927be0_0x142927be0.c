// 函数: sub_142927be0
// 地址: 0x142927be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (sub_14289a750(arg1, "    Signature Algorithm: ") s> 0 && sub_1428cdc60(arg1, *arg2) s> 0)
    int32_t rax_2 = sub_1428a96d0(*arg2)
    void var_18
    int32_t arg_20
    
    if (rax_2 != 0 && sub_1428e38e0(rax_2, &var_18, &arg_20) != 0)
        void* rax_4 = sub_1428bc150(nullptr, arg_20)
        
        if (rax_4 != 0)
            int64_t r10_1 = *(rax_4 + 0xa0)
            
            if (r10_1 != 0)
                return r10_1(arg1, arg2, arg3, 9, 0)
    
    if (arg3 != 0)
        return sub_142927ad0(arg1, arg3, 9) __tailcall
    
    if (sub_14289a750(arg1, &data_14370209c) s> 0)
        return 1

return 0
