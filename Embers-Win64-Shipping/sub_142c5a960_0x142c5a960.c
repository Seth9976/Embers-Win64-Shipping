// 函数: sub_142c5a960
// 地址: 0x142c5a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 9) = *(arg1 + 9)
uint32_t rdi = 0
arg2[2].b = arg1[2].b
*arg2 = *arg1
arg2[1] = arg1[1]
int64_t rcx = *(arg1 + 0x18)
uint64_t result

if (rcx == 0)
    *(arg2 + 0x18) = 0
else
    result = data_143ccb8b0(rcx)
    *(arg2 + 0x18) = result
    
    if (result == 0)
        return result

int64_t rcx_1 = *(arg1 + 0x10)

if (rcx_1 == 0)
    *(arg2 + 0x10) = 0
else
    result = data_143ccb8b0(rcx_1)
    *(arg2 + 0x10) = result
    
    if (result == 0)
        return result

int64_t rcx_2 = *(arg1 + 0x38)

if (rcx_2 == 0)
    *(arg2 + 0x38) = 0
else
    result = data_143ccb8b0(rcx_2)
    *(arg2 + 0x38) = result
    
    if (result == 0)
        return result

int64_t rcx_3 = *(arg1 + 0x30)

if (rcx_3 == 0)
    *(arg2 + 0x30) = 0
else
    result = data_143ccb8b0(rcx_3)
    *(arg2 + 0x30) = result
    
    if (result == 0)
        return result

int64_t rcx_4 = *(arg1 + 0x28)

if (rcx_4 == 0)
    *(arg2 + 0x28) = 0
else
    result = data_143ccb8b0(rcx_4)
    *(arg2 + 0x28) = result
    
    if (result == 0)
        return result

int64_t rcx_5 = *(arg1 + 0x20)

if (rcx_5 == 0)
    *(arg2 + 0x20) = 0
else
    result = data_143ccb8b0(rcx_5)
    *(arg2 + 0x20) = result
    
    if (result == 0)
        return result

if (*(arg2 + 0x20) == 0)
    rdi = zx.d(arg1[0x10].b)

result.b = rdi != 0
arg2[0x10].b = result.b
result.b = 1
return result
