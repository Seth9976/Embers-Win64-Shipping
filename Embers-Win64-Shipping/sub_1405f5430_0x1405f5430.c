// 函数: sub_1405f5430
// 地址: 0x1405f5430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int64_t* result

while (true)
    result = *(arg1 + 8)
    void* rbx_1 = *result
    
    if (rbx_1 == 0)
        break
    
    void* rsi_1 = *(arg1 + 8)
    *(arg1 + 8) = rbx_1
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x28)
    
    if (rbx_1 + 8 != &var_40)
        int64_t rcx = *(rbx_1 + 8)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *(rbx_1 + 8) = 0
        var_40 = 0
        *(rbx_1 + 0x10) = 0
        int64_t var_38_1 = 0
    
    int64_t var_30
    
    if (rbx_1 + 0x18 != &var_30)
        int64_t rcx_1 = *(rbx_1 + 0x18)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *(rbx_1 + 0x18) = 0
        var_30 = 0
        *(rbx_1 + 0x20) = 0
        int64_t var_28_1 = 0
    
    *(rbx_1 + 0x28) = 0
    
    if (rsi_1 != 0)
        int64_t rcx_2 = *(rsi_1 + 0x18)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rsi_1 + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(rsi_1)

return result
