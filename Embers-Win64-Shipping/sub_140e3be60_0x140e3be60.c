// 函数: sub_140e3be60
// 地址: 0x140e3be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x34b5)
int32_t i = 0
int32_t rcx_9

do
    char arg_8 = 0xff
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx = *arg1
        
        if ((*(*rcx + 8))(rcx, &arg_8, 1) == 0)
            result = 0
        else
            result = 1
    
    *(arg1 + 0x34b5) = result
    arg_8 = 0xdb
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx_1 = *arg1
        
        if ((*(*rcx_1 + 8))(rcx_1, &arg_8, 1) == 0)
            result = 0
        else
            result = 1
    
    *(arg1 + 0x34b5) = result
    arg_8 = 0
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx_2 = *arg1
        
        if ((*(*rcx_2 + 8))(rcx_2, &arg_8, 1) == 0)
            result = 0
        else
            result = 1
    
    *(arg1 + 0x34b5) = result
    arg_8 = 0x43
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx_3 = *arg1
        
        if ((*(*rcx_3 + 8))(rcx_3, &arg_8, 1) == 0)
            result = 0
        else
            result = 1
    
    *(arg1 + 0x34b5) = result
    arg_8 = i.b
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx_4 = *arg1
        
        if ((*(*rcx_4 + 8))(rcx_4, &arg_8, 1) == 0)
            result = 0
        else
            result = 1
    
    int64_t j_1 = 0x40
    void* rdi_2 = arg1 + 0x24c + (sx.q(i) << 8)
    *(arg1 + 0x34b5) = result
    int64_t j
    
    do
        arg_8 = *rdi_2
        
        if (result == 0)
            result = 0
        else
            int64_t* rcx_8 = *arg1
            
            if ((*(*rcx_8 + 8))(rcx_8, &arg_8, 1) == 0)
                result = 0
            else
                result = 1
        
        rdi_2 += 4
        *(arg1 + 0x34b5) = result
        j = j_1
        j_1 -= 1
    while (j != 1)
    i += 1
    rcx_9.b = *(arg1 + 0x14) == 3
while (i s< rcx_9 + 1)
return result
