// 函数: sub_1420db580
// 地址: 0x1420db580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t result_1
int64_t result
int32_t rdi_1

if (arg2 == 0)
    rdi_1 = 0x7fffffff
else
    int64_t* rdi = *arg1
    sub_140865c40(rdi, &result_1, arg2)
    result = sx.q(result_1)
    int64_t rcx_1
    
    if (result.d != 0xffffffff)
        rcx_1 = *rdi + result * 0x18
    
    if (result.d == 0xffffffff || rcx_1 == 0)
        rdi_1 = 0
    else
        rdi_1 = *(rcx_1 + 8)

if (arg3 == 0)
    rbx = 0x7fffffff
else
    int64_t* rsi_1 = *arg1
    sub_140865c40(rsi_1, &result_1, arg3)
    result = sx.q(result_1)
    
    if (result.d != 0xffffffff)
        int64_t rcx_3 = *rsi_1 + result * 0x18
        
        if (rcx_3 != 0)
            rbx = *(rcx_3 + 8)

result.b = rdi_1 s< rbx
return result
