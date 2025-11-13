// 函数: sub_141976800
// 地址: 0x141976800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(data_143f02ae0 + 4) s> 0)
    void* rcx_1 = data_143f02f38
    
    if (rcx_1 != 0)
        int64_t rax = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax = *(rcx_1 + 8)
        
        if (((rax u>> 0x1a).b & 1) == 0)
        label_14197685b:
            
            if (data_143f02f38 != 0)
                result.b = 1
                return result
        else
            int64_t* rcx_2 = data_143f02f38
            data_143f02f38 = 0
            
            if (rcx_2 != 0)
                rcx_2[9].d -= 1
                
                if (rcx_2[9].d == 1)
                    sub_140a2f6e0(rcx_2)
                
                goto label_14197685b

void* rcx_3 = data_143f02f28

if (rcx_3 != 0)
    int64_t rax_2 = 0
    
    if (0 == *(rcx_3 + 8))
        *(rcx_3 + 8) = 0
    else
        rax_2 = *(rcx_3 + 8)
    
    if (((rax_2 u>> 0x1a).b & 1) != 0)
        int64_t* rcx_4 = data_143f02f28
        data_143f02f28 = 0
        
        if (rcx_4 != 0)
            rcx_4[9].d -= 1
            
            if (rcx_4[9].d == 1)
                sub_140a2f6e0(rcx_4)
        
        int64_t* rcx_5 = data_143f02f30
        data_143f02f30 = 0
        
        if (rcx_5 != 0)
            rcx_5[9].d -= 1
            
            if (rcx_5[9].d == 1)
                sub_140a2f6e0(rcx_5)

result.b = data_143f02f28 != 0
return result
