// 函数: sub_141d0fee0
// 地址: 0x141d0fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result_1 = 0x73832daa
int64_t* rcx = arg2[1]
int32_t* rdx = *rcx
uint32_t result

if (&rdx[1] u> rcx[1])
    uint32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_1, arg3)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result = *rdx
    result_1 = result
    *rcx += 4

if ((arg2[5].b & 1) == 0 || result_1 == 0x73832daa)
    int64_t* rcx_4 = arg2[1]
    int32_t* rdx_2 = *rcx_4
    
    if (&rdx_2[1] u<= rcx_4[1])
        *arg1 = *rdx_2
        int64_t* rax_5 = arg2[1]
        *rax_5 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1, 4)
    
    (*(*arg2 + 8))(arg2, sx.q(arg1[4]), sx.q(arg1[5]))
    uint32_t result_3 = 0
    
    if ((arg2[5].b & 1) == 0)
        result_3 = arg1[4]
    
    int64_t* rcx_7 = arg2[1]
    uint32_t result_2 = result_3
    int32_t* rdx_5 = *rcx_7
    
    if (&rdx_5[1] u> rcx_7[1])
        uint32_t* rdx_6 = &result_2
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_6, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdx_6, 4)
    else
        result_2 = *rdx_5
        *rcx_7 += 4
    
    uint32_t result_5 = result_2
    
    if (result_5 != 0)
        char rax_11 = *(arg2 + 0x29)
        
        if ((rax_11 & 1) != 0 || result_5 s<= 0
                || ((*(arg2 + 0x2b) & 8) != 0 && result_5 s> 0x1000000))
            *(arg2 + 0x29) = rax_11 | 1
        else
            arg1[4] = result_5
            
            if ((arg2[5].b & 1) != 0)
                sub_1405da9e0(&arg1[2], result_5, arg1[5])
                result_5 = arg1[4]
            
            (*(*arg2 + 0x150))(arg2, *(arg1 + 8), sx.q(result_5))
    else if ((arg2[5].b & 1) != 0)
        arg1[4] = 0
        
        if (arg1[5] != 0)
            sub_1405c5510(&arg1[2], 0)
    
    (*(*arg2 + 8))(arg2, sx.q(arg1[0xe]) << 2, sx.q(arg1[0xf]) << 2)
    uint32_t result_4 = 0
    
    if ((arg2[5].b & 1) == 0)
        result_4 = arg1[0xe]
    
    int64_t* rcx_13 = arg2[1]
    result_2 = result_4
    uint32_t* rdx_11 = *rcx_13
    
    if (&rdx_11[1] u> rcx_13[1])
        uint32_t* rdx_12 = &result_2
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_12, arg3)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_12, 4)
    else
        result = *rdx_11
        result_2 = result
        *rcx_13 += 4
    
    uint32_t result_6 = result_2
    
    if (result_6 != 0)
        result = zx.d(*(arg2 + 0x29))
        
        if ((result.b & 1) == 0 && result_6 s> 0
                && ((*(arg2 + 0x2b) & 8) == 0 || result_6 s<= 0x400000))
            arg1[0xe] = result_6
            
            if ((arg2[5].b & 1) != 0)
                sub_1405c4a90(&arg1[0xc], result_6, arg1[0xf])
                result_6 = arg1[0xe]
            
            return (*(*arg2 + 0x150))(arg2, *(arg1 + 0x30), sx.q(result_6) << 2)
        
        result.b |= 1
        *(arg2 + 0x29) = result.b
    else if ((arg2[5].b & 1) != 0)
        arg1[0xe] = 0
        
        if (arg1[0xf] != 0)
            return sub_1405dadb0(&arg1[0xc], 0)
else
    *arg1 = 0
    arg1[4] = 0
    
    if (arg1[5] != 0)
        result = sub_1405c5510(&arg1[2], 0)
    
    arg1[0xe] = 0
    
    if (arg1[0xf] != 0)
        return sub_1405dadb0(&arg1[0xc], 0)

return result
