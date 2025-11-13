// 函数: sub_142263490
// 地址: 0x142263490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141dc8400(arg1)

if (result != 0)
    result = sub_142029890(sub_141dc8400(arg1), 0)
    
    if (result == arg1)
        if (arg3 != 0)
            arg1[0x79].d = 0
            
            if (*(arg1 + 0x3cc) != 0)
                sub_140638c50(&arg1[0x78], 0)
            
            void* rax_1 = sub_141dcc7f0(arg1)
            
            if (sub_1423dce10(rax_1, &arg1[0xa0]) != 0)
                sub_1423e60e0(rax_1, arg1[0xa0])
            
            arg1[0xa0] = 0
        
        int64_t rbp_2 = sx.q(arg1[0x79].d)
        int32_t rax_3 = (rbp_2 + 1).d
        arg1[0x79].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x3cc))
            sub_1405a4d70(&arg1[0x78])
        
        result = arg1[0x78]
        result[rbp_2] = arg2
        
        if (arg4 != 0)
            return (*(*arg1 + 0xae0))(arg1)

return result
