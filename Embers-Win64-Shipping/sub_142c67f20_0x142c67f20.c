// 函数: sub_142c67f20
// 地址: 0x142c67f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int32_t result

if (*(arg1 + 0x164) != 2)
label_142c67f7a:
    
    if (*(arg1 + 0x401) != 0 && *(arg1 + 0x3f6) != 0)
        void* rbx_1 = *arg1
        int64_t rbp_1 = *(rbx_1 + 0x250)
        void var_98
        memset(&var_98, 0, 0x88)
        *(rbx_1 + 0x250) = &var_98
        sub_142c65340(arg1, 0)
        char* r8_3
        uint32_t r9_1
        
        if (*(arg1 + 0x3f3) == 0)
            if (rsi.d != 1)
                r8_3 = arg1[0x1a]
                goto label_142c67ffd
            
            r8_3 = arg1[0x1c]
            r9_1 = zx.d(*(arg1 + 0x184))
        else
            r8_3 = arg1[0x1f]
        label_142c67ffd:
            
            if (rsi.d == 1)
                r9_1 = zx.d(*(arg1 + 0x184))
            else if (*(arg1 + 0x3f4) == 0)
                r9_1 = *(arg1 + 0x17c)
            else
                r9_1 = arg1[0x30].d
        
        result = sub_142c67e20(arg1, rsi.d, r8_3, r9_1, arg4, arg3)
        *(*arg1 + 0x250) = rbp_1
        
        if (result != 0)
            return result
        
        data_143ccb8a0(arg1[0x8c])
        arg1[0x8c] = 0
else
    if (*(rsi + arg1 + 0x411) == 0)
        result, arg4, arg3 = sub_142c5b310(arg1, rsi.d, arg1 + 0x411 + rsi, arg3)
    
    if (*(rsi + arg1 + 0x411) == 0 && result != 0)
        *(arg1 + 0x3f1) = 1
        return result
    
    if (*(rsi + arg1 + 0x411) != 0)
        goto label_142c67f7a
return 0
