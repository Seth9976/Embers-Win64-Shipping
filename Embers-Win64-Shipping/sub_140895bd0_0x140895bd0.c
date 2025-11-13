// 函数: sub_140895bd0
// 地址: 0x140895bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2[1]
*result = 0
int64_t* i_1 = *arg2

if (i_1 != 0)
    int64_t* i
    
    do
        void* rcx_1 = i_1[3]
        i = *i_1
        
        if (rcx_1 != 0)
            if (i_1[5] - rcx_1 u>= 0x1000)
                void* r8_1 = *(rcx_1 - 8)
                
                if (rcx_1 - r8_1 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_1 = r8_1
            
            j_sub_140a74f90(rcx_1)
            __builtin_memset(&i_1[3], 0, 0x18)
        
        result = j_sub_140a74f90(i_1)
        i_1 = i
    while (i != 0)

return result
