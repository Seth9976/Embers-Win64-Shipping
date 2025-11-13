// 函数: sub_140cea0a0
// 地址: 0x140cea0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if ((*(*arg2 + 0x70))(arg2, arg1).b == 0)
    int64_t rcx_1 = *(arg1 + 0x40)
    result.b = not.b((rcx_1 u>> 0x18).d.b)
    
    if ((result.b & 1) == 0 || (*(arg2 + 0x2b) & 4) == 0)
        if ((0x80800c20202000 & rcx_1) == 0)
            result.b = 1
            return result
        
        if ((not(test_bit(rcx_1, 0xd)) || arg2[5].b s>= 0 || *(arg2 + 0x2c) s> 0)
                && (not(test_bit(rcx_1, 0x15)) || (arg2[6].d & 0x1000) == 0))
            if ((0x800000000000 & rcx_1) != 0)
                result = arg2[6].d
            
            if ((0x800000000000 & rcx_1) == 0 || test_bit(result, 0x16)
                    || not(test_bit(result, 0xc)))
                if (not(test_bit(rcx_1, 0x1d)) || ((arg2[6].d u>> 0x1b).b & 1) != 0)
                label_140cea167:
                    
                    if ((0x80000000000000 & rcx_1) == 0)
                    label_140cea180:
                        
                        if (((rcx_1 u>> 0x23).b & 1) == 0 || (*(arg2 + 0x2b) & 2) == 0)
                            result.b = 1
                            return result
                    else if ((arg2[5].b & 0x10) == 0 && ((arg2[6].d u>> 0x1d).b & 1) != 0)
                        goto label_140cea180
                else
                    result = zx.d(arg2[5].b)
                    
                    if ((result.b & 2) == 0 && (result.b & 0x10) == 0)
                        goto label_140cea167

result.b = 0
return result
