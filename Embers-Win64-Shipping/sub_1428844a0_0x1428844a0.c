// 函数: sub_1428844a0
// 地址: 0x1428844a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 1

if ((*arg1 & 2) != 0)
    int32_t rax_1 = _stricmp(arg2, "+automatic")
    int32_t rax_2
    
    if (rax_1 != 0)
        rax_2 = _stricmp(arg2, "automatic")
    
    if (rax_1 == 0 || rax_2 == 0)
        return 1

if ((*arg1 & 1) != 0)
    int64_t rcx_2 = 0
    
    while (true)
        char rax_3 = arg2[rcx_2]
        rcx_2 += 1
        
        if (rax_3 != *(rcx_2 + 0x1434e8d73))
            break
        
        if (rcx_2 == 5)
            return 1

int32_t rax_4 = sub_1428c0320(arg2)

if (rax_4 != 0)
label_142884534:
    int64_t* rax_5 = sub_1428c0d40(rax_4)
    
    if (rax_5 != 0)
        int64_t* rcx_6 = *(arg1 + 0x18)
        
        if (rcx_6 == 0)
            void* rcx_7 = *(arg1 + 0x20)
            
            if (rcx_7 != 0)
                rsi = sub_14284eae0(rcx_7, 4, 0, rax_5)
        else
            rsi = sub_14284dc40(rcx_6, 4, 0, rax_5)
        
        sub_1428c0b90(rax_5)
        int32_t rbp_1
        rbp_1.b = rsi s> 0
        return zx.q(rbp_1)
else
    rax_4 = sub_1428a9c80(arg2)
    
    if (rax_4 != 0)
        goto label_142884534

return 0
