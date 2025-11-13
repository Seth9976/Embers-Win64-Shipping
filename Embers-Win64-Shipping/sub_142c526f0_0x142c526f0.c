// 函数: sub_142c526f0
// 地址: 0x142c526f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9
int64_t arg_20 = r9
int32_t rdi = 0

if (arg1[1] != 0)
    return 2

int32_t rcx_3

if (arg2 == 1)
    int32_t rcx_6 = arg3.d
    *arg1 |= 1 << rcx_6.b
    
    if (rcx_6 == 2)
        if (*(arg1 + 0x50) == 0)
            r9.b = 1
            int64_t* rax_16 = sub_142c586c0(nullptr, nullptr, nullptr, r9.b, arg4)
            *(arg1 + 0x50) = rax_16
            
            if (rax_16 == 0)
                rdi = 4
    else if (rcx_6 != 3)
        rcx_3 = rcx_6 - 4
        
        if (rcx_6 != 4)
        label_142c527e4:
            
            if (rcx_3 != 1)
                return 1
        else if (*(arg1 + 0x58) == 0)
            *(arg1 + 0x60) = 8
            int64_t rax_14 = data_143ccb8b8(8, 0x80)
            *(arg1 + 0x58) = rax_14
            arg1[0x1a] = 0
            
            if (rax_14 == 0)
                return 4
else
    if (arg2 != 2)
        if (arg2 == 3)
            *(arg1 + 8) = arg3
            return 0
        
        if (arg2 == 4)
            *(arg1 + 0x10) = arg3
            return 0
        
        if (arg2 != 5)
            return 1
        
        *(arg1 + 0x18) = arg3
        return 0
    
    int32_t rcx = arg3.d
    *arg1 &= not.d(1 << rcx.b)
    
    if (rcx == 2)
        int64_t* rcx_5 = *(arg1 + 0x50)
        
        if (rcx_5 != 0)
            sub_142c58370(rcx_5)
            *(arg1 + 0x50) = 0
            return 0
    else if (rcx != 3)
        rcx_3 = rcx - 4
        
        if (rcx != 4)
            goto label_142c527e4
        
        data_143ccb8a0(*(arg1 + 0x58))
        *(arg1 + 0x58) = 0
        return 0
return zx.q(rdi)
