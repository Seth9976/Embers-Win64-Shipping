// 函数: sub_142221160
// 地址: 0x142221160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg1[1].d
int64_t* rcx = *(*arg2 + 8)
int64_t* rdx = rcx[1]
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(rcx + 0x29) & 0x20) != 0)
        sub_140b54070(rcx, rdx_1, arg4)
    else
        (*(*rcx + 0x150))(arg3, rdx_1, 4)
else
    result_1 = *r8
    int64_t* rax_4 = rcx[1]
    *rax_4 += 4

uint64_t result = zx.q(result_1)

if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
    int32_t rcx_2 = arg1[1].d
    
    if (result.d s> rcx_2)
        arg1[1].d = result.d
        
        if (result.d s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
            result = zx.q(result_1)
    else if (result.d s< rcx_2 && rcx_2 != result.d)
        arg1[1].d = result.d
        sub_1405c53d0(arg1)
        result = zx.q(result_1)

int32_t rdi = 0

if (result.d s> 0)
    int64_t r14_1 = 0
    
    do
        int32_t* rsi_2 = *arg1 + r14_1
        int64_t* r9_1 = *(*arg2 + 8)
        int64_t* rcx_6 = r9_1[1]
        int32_t* rdx_5 = *rcx_6
        
        if (&rdx_5[1] u<= rcx_6[1])
            *rsi_2 = *rdx_5
            int64_t* rax_10 = r9_1[1]
            *rax_10 += 4
        else if ((*(r9_1 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_1, rsi_2, arg4)
        else
            (*(*r9_1 + 0x150))(r9_1, rsi_2, 4)
        
        int64_t* r9_2 = *(*arg2 + 8)
        int64_t* rcx_8 = r9_2[1]
        int32_t* r8_1 = *rcx_8
        
        if (&r8_1[1] u<= rcx_8[1])
            rsi_2[1] = *r8_1
            result = r9_2[1]
            *result += 4
        else if ((*(r9_2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(r9_2, &rsi_2[1], arg4)
        else
            result = (*(*r9_2 + 0x150))(r9_2, &rsi_2[1], 4)
        
        rdi += 1
        r14_1 += 8
    while (rdi s< result_1)

return result
