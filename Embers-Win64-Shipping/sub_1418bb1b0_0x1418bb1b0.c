// 函数: sub_1418bb1b0
// 地址: 0x1418bb1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
int32_t r10 = 0
int32_t rbp = -1

if (rdi == 0)
label_1418bb230:
    sub_141903f80(0xfffffff8, 
        "this->GetMemoryTypeFromProperties(MemoryTypeBits, MemoryPropertyFlags, &MemoryTypeIndex)", 
        "Runtime\VulkanRHI\Public\VulkanMemory.h")
else
    void* r11_1 = &arg1[1]
    
    while (true)
        if (arg4 == 0)
            goto label_1418bb230
        
        if ((arg4.b & 1) != 0 && (*r11_1 & arg5) == arg5)
            rbp = r10
            break
        
        arg4 u>>= 1
        r10 += 1
        r11_1 += 8
        
        if (r10 u>= rdi)
            goto label_1418bb230

int32_t var_20 = arg9
int64_t var_28 = arg8
int32_t var_30 = arg7
return sub_1418bb2a0(arg1, arg2, arg3, rbp, arg6)
