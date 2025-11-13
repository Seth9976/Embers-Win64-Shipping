// 函数: sub_141a77fe0
// 地址: 0x141a77fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg1 + 0x48)
uint32_t result

if (i_3 == *(arg2 + 0x48))
    int32_t* r9_1 = *(arg2 + 0x40)
    
    if (i_3 != 0)
        void* r8_2 = *(arg1 + 0x40) + 8
        int32_t i
        
        do
            if (*(r8_2 - 8) != *r9_1)
                goto label_141a78110
            
            if (*(r8_2 - 4) != r9_1[1])
                goto label_141a78110
            
            if (*r8_2 != r9_1[2])
                goto label_141a78110
            
            r9_1 = &r9_1[3]
            r8_2 += 0xc
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg1 + 0x58)
    
    if (i_2 == *(arg2 + 0x58))
        int64_t* r8_3 = *(arg2 + 0x50)
        
        if (i_2 != 0)
            int64_t* rdx = *(arg1 + 0x50)
            int32_t i_1
            
            do
                int64_t var_28_1 = *r8_3
                int64_t zmm0 = *rdx
                
                if (zmm0.d != var_28_1.d)
                    goto label_141a78110
                
                if ((zmm0 u>> 0x20).d != (var_28_1 u>> 0x20).d)
                    goto label_141a78110
                
                if ((rdx[1].d).b != (r8_3[1].d).b)
                    goto label_141a78110
                
                r8_3 += 0xc
                rdx += 0xc
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (sub_141a34c10(arg1, arg2).b != 0 && *(arg1 + 0x10) == *(arg2 + 0x10)
                && *(arg1 + 0x14) == *(arg2 + 0x14) && *(arg1 + 0x18) == *(arg2 + 0x18)
                && *(arg1 + 0x1c) == *(arg2 + 0x1c)
                && sub_141a70be0(&arg1[0x20], &arg2[0x20]).b != 0)
            result.b = 1
            return result

label_141a78110:
result.b = 0
return result
