// 函数: sub_14268fb30
// 地址: 0x14268fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, arg4[1].d)
uint32_t rcx = zx.d(*(arg1 + 0x18))
int32_t rbp_2 = (temp0 u>> 0x1f) + temp0
int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x55555556, arg3[1].d)
int32_t r14 = (temp2 u>> 0x1f) + temp2
uint32_t result
int64_t performanceCount

if (rcx == 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x38))
    int32_t rax_1 = rsi_1.d + rbp_2
    *(arg1 + 0x38) = rax_1
    
    if (rax_1 s> *(arg1 + 0x3c))
        sub_1405daba0(arg1 + 0x30)
    
    memset(rsi_1 + *(arg1 + 0x30), 0, sx.q(rbp_2))
    int64_t var_58_1 = *(arg1 + 0x30)
    double zmm6_1 = sub_142632830(arg2, *(arg1 + 0xf8), *arg3, zx.q(r14), (*arg4).d, rbp_2)
    int64_t* rbx_1 = *(arg1 + 0x40)
    *(arg1 + 0x18) = 1
    QueryPerformanceCounter(&performanceCount)
    arg5 = float.d(performanceCount) f* data_143d796f8 + zmm6_1 f- rbx_1[1]
    result.b = arg5 f>= *rbx_1
    rbx_1[2].b = result.b
    
    if (result.b == 0)
        goto label_14268fc89
    
    result.b = 2
else if (rcx == 1)
label_14268fc89:
    double zmm6_2 = sub_142639080(arg2, *arg3, zx.q(r14), *arg4, arg5.d, *(arg1 + 0x30), rbp_2, 
        *arg7, *(arg1 + 0x100), arg6)
    int32_t rax_8 = *(arg1 + 0x3c)
    *(arg1 + 0x38) = 0
    
    if (rax_8 s<= 0xffffffff)
        sub_1405c5510(arg1 + 0x30, 0)
    
    int64_t* rbx_2 = *(arg1 + 0x40)
    *(arg1 + 0x18) = 0
    QueryPerformanceCounter(&performanceCount)
    result.b = float.d(performanceCount) f* data_143d796f8 + zmm6_2 f- rbx_2[1] f>= *rbx_2
    rbx_2[2].b = result.b
    result.b = 1
else
    result.b = 0
return result
