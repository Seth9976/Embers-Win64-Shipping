// 函数: sub_1419d7320
// 地址: 0x1419d7320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg2[1]
int32_t arg_8 = *(arg1 + 0x30)
int32_t arg_10 = *(arg1 + 0x60)
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_8 = *r8
    *rdx += 4

int64_t* rcx_1 = arg2[1]
int32_t* rdx_2 = *rcx_1
int64_t* result

if (&rdx_2[1] u> rcx_1[1])
    int32_t* rdx_3 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_3, arg3)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    result = zx.q(*rdx_2)
    arg_10 = result.d
    *rcx_1 += 4

int32_t rdi = 0
int32_t rsi = 0
int64_t* result_1

if (arg_8 s> 0)
    void** r14_1 = nullptr
    
    do
        int64_t* rcx_4 = arg2[1]
        result_1 = *(*(r14_1 + *(arg1 + 0x28)) + 0x28)
        int64_t** rdx_4 = *rcx_4
        
        if (&rdx_4[1] u> rcx_4[1])
            int64_t** rdx_5 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b540d0(arg2, rdx_5, arg3)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_5, 8)
        else
            result = *rdx_4
            result_1 = result
            *rcx_4 += 8
        
        rsi += 1
        r14_1 = &r14_1[1]
    while (rsi s< arg_8)

if (arg_10 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rcx_7 = arg2[1]
        result_1 = *(*(*(arg1 + 0x58) + rsi_1) + 0x20)
        int64_t** rdx_6 = *rcx_7
        
        if (&rdx_6[1] u> rcx_7[1])
            int64_t* rdx_7 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b540d0(arg2, rdx_7, arg3)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_7, 8)
        else
            result = *rdx_6
            result_1 = result
            *rcx_7 += 8
        
        rdi += 1
        rsi_1 += 8
    while (rdi s< arg_10)

return result
