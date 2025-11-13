// 函数: sub_141d1ace0
// 地址: 0x141d1ace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0x10
int64_t* rcx = arg2[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *rdx
    *rcx += 4

uint32_t result
uint32_t result_1

if (arg3 != 0 || ((arg2[5].b & 2) != 0 && arg2[0xe] == 0) || (*(arg2 + 0x29) & 0x20) != 0)
    (*(*arg2 + 8))(arg2, sx.q(arg1[1].d) << 4, sx.q(*(arg1 + 0xc)) << 4)
    uint32_t result_2 = 0
    
    if ((arg2[5].b & 1) == 0)
        result_2 = arg1[1].d
    
    int64_t* rcx_13 = arg2[1]
    result_1 = result_2
    uint32_t* rdx_15 = *rcx_13
    
    if (&rdx_15[1] u> rcx_13[1])
        uint32_t* rdx_16 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_16, arg4)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_16, 4)
    else
        result = *rdx_15
        result_1 = result
        *rcx_13 += 4
    
    uint32_t result_4 = result_1
    
    if (result_4 != 0)
        result = zx.d(*(arg2 + 0x29))
        
        if ((result.b & 1) == 0 && result_4 s> 0
                && ((*(arg2 + 0x2b) & 8) == 0 || result_4 s<= 0x100000))
            arg1[1].d = result_4
            
            if ((arg2[5].b & 1) != 0)
                sub_1405a4be0(arg1, result_4, *(arg1 + 0xc))
                result_4 = arg1[1].d
            
            return (*(*arg2 + 0x150))(arg2, *arg1, sx.q(result_4) << 4)
        
        result.b |= 1
        *(arg2 + 0x29) = result.b
    else if ((arg2[5].b & 1) != 0)
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != 0)
            return sub_1405a5410(arg1, 0)
else
    (*(*arg2 + 8))(arg2, sx.q(arg1[1].d) << 4, sx.q(*(arg1 + 0xc)) << 4)
    result = zx.d(arg2[5].b)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_3 = arg2[1]
        int32_t rsi_1 = 0
        result_1 = 0
        int32_t* rdx_4 = *rcx_3
        
        if (&rdx_4[1] u> rcx_3[1])
            uint32_t* rdx_5 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_5, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_5, 4)
        else
            result_1 = *rdx_4
            *rcx_3 += 4
        
        int32_t rdx_7 = *(arg1 + 0xc)
        uint32_t result_3 = result_1
        arg1[1].d = 0
        
        if (rdx_7 != result_3)
            sub_1405a5410(arg1, result_3)
            rdx_7 = *(arg1 + 0xc)
            result_3 = result_1
            rsi_1 = arg1[1].d
        
        int32_t rax_7 = rsi_1 + result_3
        arg1[1].d = rax_7
        
        if (rax_7 s> rdx_7)
            sub_1405a4f90(arg1)
            result_3 = result_1
        
        return (*(*arg2 + 0x150))(arg2, *arg1, sx.q(result_3 * arg_10))
    
    if ((result.b & 2) != 0)
        int64_t* rcx_9 = arg2[1]
        result_1 = arg1[1].d
        int32_t* rdx_10 = *rcx_9
        
        if (&rdx_10[1] u> rcx_9[1])
            uint32_t* rdx_11 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_11, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_11, 4)
        else
            result_1 = *rdx_10
            *rcx_9 += 4
        
        int64_t r9 = *arg2
        return (*(r9 + 0x150))(arg2, *arg1, sx.q(result_1 * arg_10), r9)
return result
