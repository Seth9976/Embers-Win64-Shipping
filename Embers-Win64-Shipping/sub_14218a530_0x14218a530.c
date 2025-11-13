// 函数: sub_14218a530
// 地址: 0x14218a530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x37) & 0x40) == 0)
    int32_t rax_1 = *(arg1 + 0x48)
    
    if (rax_1 != 0)
        void* rax_2
        
        if (rax_1 s> 0)
            rax_2 = **(arg1 + 0x40)
        else
            rax_2 = nullptr
        
        int64_t* rcx = *(rax_2 + 0x48)
        int64_t* result
        
        if (rcx == 0)
            void*** rax_6 = j_sub_140a82f30(0x1d0)
            
            if (rax_6 == 0)
                result = nullptr
            else
                result = sub_1421a9700(rax_6)
            
            (*(*result + 8))(result, arg1, arg2)
        else
            result = (*(*rcx + 0x358))(rcx, arg1, arg2)
        
        if (result != 0)
            result[4].d = 0
            int64_t rax_10 = *result
            result[5] = **(arg1 + 0x40)
            (*(rax_10 + 0x10))(result)
        
        return result

return 0
