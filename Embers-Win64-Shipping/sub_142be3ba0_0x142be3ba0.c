// 函数: sub_142be3ba0
// 地址: 0x142be3ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int64_t rax

if (arg3 == 0)
    result = (*(arg1 + 0x2a0))(arg1, 0x68686561, arg2, 0)
    
    if (result == 0)
        rax = 0x138
    label_142be3be5:
        void* rbx_1 = arg1 + rax
        result = sub_142b96aa0(arg2, &data_143698740, rbx_1)
        
        if (result == 0)
            *(rbx_1 + 0x28) = 0
            *(rbx_1 + 0x30) = 0
else
    result = (*(arg1 + 0x2a0))(arg1, 0x76686561, arg2, 0)
    
    if (result == 0)
        rax = 0x198
        goto label_142be3be5
return result
