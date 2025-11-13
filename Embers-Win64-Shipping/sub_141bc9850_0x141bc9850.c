// 函数: sub_141bc9850
// 地址: 0x141bc9850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
uint64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x18d)
    result = arg1[0x55]
    
    if (result != 0)
        void* rcx_1 = *(result + 0x28)
        int64_t rbx_1 = data_143e24420
        
        if (rcx_1 != 0)
            result = (*(*(rcx_1 + 0x28) + 0x10))(rcx_1 + 0x28)
            uint64_t result_1 = result
            
            if (result != 0)
                int64_t r8_1 = *result
                void arg_10
                result = (*(r8_1 + 0x10))(result, &arg_10, r8_1)
                
                if (*result == rbx_1)
                    result = sub_141b85f50(&arg1[0x21], result_1)
        
        arg1[0x55] = 0
    
    void* rdx_3 = arg1[0x56]
    
    if (rdx_3 != 0)
        result = sub_140693270(&arg1[0x22], rdx_3 + 0x28)
        arg1[0x56] = 0
    
    void* rdx_5 = arg1[0x57]
    
    if (rdx_5 != 0)
        result = sub_140693270(&arg1[0x33], rdx_5 + 0x28)
        arg1[0x57] = 0
    
    void* rdx_7 = arg1[0x58]
    
    if (rdx_7 != 0)
        result = sub_140693270(&arg1[0x44], rdx_7 + 0x28)
        arg1[0x58] = 0

return result
