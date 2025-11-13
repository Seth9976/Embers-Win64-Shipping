// 函数: sub_1429e54c0
// 地址: 0x1429e54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x5a] != arg2 || arg1[0x5b] != arg3)
    if ((arg2 + 7) s>> 3 s> arg1[0xd9] || (arg3 + 7) s>> 3 s> arg1[0xd7])
        int32_t rax_5
        int64_t r9_1
        rax_5, r9_1 = sub_1429e1180(arg1, arg2, arg3)
        
        if (rax_5 != 0)
            sub_1429da010(arg1, 2, "Failed to allocate context buffers", r9_1)
    else
        sub_1429e1520(arg1, arg2, arg3)
    
    sub_1429e1440(arg1)
    arg1[0x5a] = arg2
    arg1[0x5b] = arg3

void* rcx_2 = *(arg1 + 0x198)

if (*(rcx_2 + 8) != 0 && arg1[0xd7] s<= *(rcx_2 + 0x10))
    int32_t result = *(rcx_2 + 0x14)
    
    if (arg1[0xd9] s<= result)
        return result

return sub_1429e5580(arg1)
