// 函数: sub_1428e5a90
// 地址: 0x1428e5a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* result = nullptr
int32_t rdi = arg3

if (arg3 != 0xffffffff)
    if (arg3 == 0x17)
        if (arg2[5] - 0x32 u<= 0x63)
            goto label_1428e5b10
        
        goto label_1428e5ae3
    
    if (arg3 == 0x18)
        goto label_1428e5b10
    
label_1428e5ae3:
    
    if (result != arg1)
        sub_1428f2c80(result)
else
    int32_t rdi_1
    rdi_1.b = arg2[5] - 0x32 u> 0x63
    rdi = rdi_1 + 0x17
label_1428e5b10:
    
    if (arg1 != 0)
        result = arg1
    else
        result = sub_1428f2cf0()
    
    if (result != 0)
        if (sub_1428f2d50(result, 0, 0x14) == 0)
            goto label_1428e5ae3
        
        result[1] = rdi
        int32_t r9_1 = arg2[5]
        uint64_t r9_2
        
        if (rdi != 0x18)
            r9_2 = zx.q(r9_1 s% 0x64)
        else
            r9_2 = zx.q(r9_1 + 0x76c)
        
        int32_t var_18_1 = *arg2
        char* r8_1 = "%04d%02d%02d%02d%02d%02dZ"
        int32_t var_20_1 = arg2[1]
        int32_t var_28_1 = arg2[2]
        int32_t var_30_1 = arg2[3]
        
        if (rdi != 0x18)
            r8_1 = "%02d%02d%02d%02d%02d%02dZ"
        
        int32_t var_38_1 = arg2[4] + 1
        *result = sub_1428b7080(*(result + 8), 0x14, r8_1, r9_2)
        return result

return nullptr
