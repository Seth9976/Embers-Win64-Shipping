// 函数: sub_141d26600
// 地址: 0x141d26600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9528)
int64_t* rdx = arg2[1]
int32_t arg_18 = 1
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_18 = *r8
    *rdx += 4

int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_140b4e7c0(arg2, &data_1439a9528)

if (rax_4 s>= 8)
    return sub_1419ec1a0(arg1 + 8, arg2, 0, zmm1)

int64_t* rcx_3 = arg2[1]
int32_t result_1 = *(arg1 + 0x10)
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    result_1 = *rdx_2
    *rcx_3 += 4

uint64_t result = zx.q(result_1)

if (result.d s> *(arg1 + 0x14))
    sub_1405c5510(arg1 + 8, result.d)
    result = zx.q(result_1)

int64_t rdi = sx.q(*(arg1 + 0x10))

if (result.d s> rdi.d)
    *(arg1 + 0x10) = result.d
    
    if (result.d s> *(arg1 + 0x14))
        sub_1405daba0(arg1 + 8)
    
    memset(rdi + *(arg1 + 8), 0, sx.q(result.d - rdi.d))
    result = zx.q(result_1)
else if (result.d s< rdi.d)
    int32_t rcx_9 = rdi.d
    
    if (rcx_9 != result.d)
        *(arg1 + 0x10) = rdi.d - (rcx_9 - result.d)
        sub_1405dac10(arg1 + 8)
        result = zx.q(result_1)

int32_t rdi_2 = 0

if (result.d s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t* rcx_12 = arg2[1]
        char* rdx_7 = *(arg1 + 8) + rsi_3
        char* r8_2 = *rcx_12
        
        if (&r8_2[1] u> rcx_12[1])
            result = (*(*arg2 + 0x150))(arg2, rdx_7, 1)
        else
            *rdx_7 = *r8_2
            result = arg2[1]
            *result += 1
        
        rdi_2 += 1
        rsi_3 += 1
    while (rdi_2 s< result_1)

return result
