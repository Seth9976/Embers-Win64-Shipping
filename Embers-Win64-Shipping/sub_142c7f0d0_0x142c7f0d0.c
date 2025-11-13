// 函数: sub_142c7f0d0
// 地址: 0x142c7f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x72a) == 0)
    arg1[0xe9].d = 0
    int32_t rcx
    rcx.b = *(*arg1 + 0x5c4) == 2
    *(arg1 + 0x74c) = rcx
    
    if (*(*arg1 + 0x5c0) != 2 || *(arg1 + 0x72c) != 0)
        int64_t r8_1
        
        if (*(arg1 + 0x3f2) != 0)
            r8_1 = arg1[0xe1]
        
        if (*(arg1 + 0x3f2) != 0 && r8_1 != 0)
            *(arg1 + 0x72c) = 0
        label_142c7f160:
            int512_t entry_zmm2
            int32_t result = gzprintf(&arg1[0xd3], "CWD %s", r8_1, entry_zmm2)
            
            if (result != 0)
                return result
            
            arg1[0xea].d = 0x10
            return result
        
        if (arg1[0xe3].d != 0)
            int64_t* r8_2 = arg1[0xe2]
            *(arg1 + 0x72c) = 1
            r8_1 = *r8_2
            goto label_142c7f160

return sub_142c7f570(arg1) __tailcall
