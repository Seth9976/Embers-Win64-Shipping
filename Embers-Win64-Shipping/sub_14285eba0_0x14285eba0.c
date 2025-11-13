// 函数: sub_14285eba0
// 地址: 0x14285eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg1 == ***(arg1 + 0x598))
    return 1

void* const rbx_1

if (***(arg1 + 0x598) == 0x10000)
    rbx_1 = &data_1434dbff0
label_14285ec0c:
    
    while (*rbx_1 != 0)
        int64_t rax_3 = *(rbx_1 + 0x10)
        
        if (rax_3 != 0 && sub_14285f490(arg1, rax_3()) == 0)
            int64_t result
            result.b = *arg1 == *rbx_1
            return result
        
        rbx_1 += 0x18
else if (***(arg1 + 0x598) == 0x1ffff)
    rbx_1 = &data_1434dc080
    goto label_14285ec0c
return 0
