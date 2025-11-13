// 函数: sub_142a93ae0
// 地址: 0x142a93ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    *arg3 = 0

if (arg4 != 0)
    *arg4 = 0

if (sub_142a92df0() != 0)
    void* rax_1 = sub_142a86c30(data_144015c60, arg1)
    
    if (rax_1 != 0)
        if (arg3 != 0)
            *arg3 = 1
        
        void* rax_2 = sub_142a86c30(*(rax_1 + 0x10), arg2)
        
        if (rax_2 != 0)
            return *(rax_2 + 8)
        
        int32_t r9 = *(rax_1 + 0x18)
        
        if (r9 != 0)
            char rax_4
            
            if ((r9.b & 1) != 0)
                rax_4 = sub_142a93800(arg2)
            
            if ((r9.b & 1) != 0 && rax_4 != 0)
            label_142a93b97:
                
                if (arg4 != 0)
                    *arg4 = 1
                
                return arg2
            
            char rax_5
            
            if ((r9.b & 2) != 0)
                rax_5 = sub_142a93860(arg2)
            
            if ((r9.b & 2) != 0 && rax_5 != 0)
                goto label_142a93b97
            
            if ((*(rax_1 + 0x18) & 4) != 0 && sub_142a938d0(arg2) != 0)
                goto label_142a93b97

return nullptr
