// 函数: sub_140d7c790
// 地址: 0x140d7c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x28) != 0)
    int64_t* rcx = *(arg1 - 0x20)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 - 0x20)
        int32_t arg_18 = 3
        int32_t arg_1c = (*(*rcx_1 + 8))(rcx_1)
        SAFEARRAY* rax_5 = SafeArrayCreateVector(VT_I4, 0, 2)
        *arg2 = rax_5
        
        if (rax_5 != 0)
            int32_t i = 0
            int32_t rgIndices = 0
            
            do
                if (SafeArrayPutElement(*arg2, &rgIndices, &(&arg_18)[sx.q(i)]) != 0)
                    return 0x80004005
                
                i = rgIndices + 1
                rgIndices = i
            while (i s< 2)
        
        return 0

return 0x80040201
