// 函数: sub_14076e4c0
// 地址: 0x14076e4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x90))()

if (result.d == 0)
    result = sx.q(data_143cdfd98)
    int64_t* i = data_143cdfd90
    
    for (void* r15_1 = &i[result]; i != r15_1; i = &i[1])
        void* rbp_1 = *i
        EnterCriticalSection(&data_143cdfd68)
        int32_t j_1 = *(rbp_1 + 0x38)
        int64_t* rbx_1 = *(rbp_1 + 0x30)
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        *(rbp_1 + 0x38) = 0
        
        if (*(rbp_1 + 0x3c) != 0)
            sub_14061cd70(rbp_1 + 0x30, 0)
        
        int64_t var_28 = 0
        int64_t var_20_1 = 0
        sub_140a53700(rbp_1 + 0x10, &var_28)
        int64_t rcx_3 = var_28
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        result = LeaveCriticalSection(&data_143cdfd68)

return result
