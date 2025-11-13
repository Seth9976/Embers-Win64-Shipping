// 函数: sub_14202fb80
// 地址: 0x14202fb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x1c)
uint64_t var_18 = 0
int64_t var_10 = 0

if (sub_14202c090(arg1, &var_38) != 0)
    uint64_t rbx_1
    char i
    
    do
        uint64_t var_28
        sub_142029c40(&var_38, &var_28, &var_18)
        int16_t* const rdx_2 = &data_142d40450
        rbx_1 = var_28
        int32_t var_20
        
        if (var_20 != 0)
            rdx_2 = rbx_1
        
        int16_t* const rcx_1
        
        if (arg2[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *arg2
        
        if (sub_140a54510(rcx_1, rdx_2) == 0)
            uint64_t rcx_7 = var_18
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int64_t rcx_9 = var_38
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int64_t rcx_10 = *arg1
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int32_t result
            result.b = 1
            return result
        
        i = sub_14202c090(arg1, &var_38)
    while (i != 0)
    uint64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg1

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return 0
