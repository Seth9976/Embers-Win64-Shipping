// 函数: sub_141a730a0
// 地址: 0x141a730a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg1 + 0x48)
uint32_t result

if (i_3 == *(arg2 + 0x48))
    uint32_t* r9_1 = *(arg2 + 0x40)
    
    if (i_3 != 0)
        void* r8_2 = *(arg1 + 0x40) + 8
        int32_t i
        
        do
            if (*(r8_2 - 8) != *r9_1)
                goto label_141a73154
            
            if (*(r8_2 - 4) != r9_1[1])
                goto label_141a73154
            
            if (*r8_2 != r9_1[2])
                goto label_141a73154
            
            r9_1 = &r9_1[3]
            r8_2 += 0xc
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg1 + 0x58)
    
    if (i_2 == *(arg2 + 0x58))
        uint32_t* rcx = *(arg2 + 0x50)
        
        if (i_2 != 0)
            int32_t* r8_4 = *(arg1 + 0x50) - rcx
            int32_t i_1
            
            do
                if (*(r8_4 + rcx) != *rcx)
                    goto label_141a73154
                
                rcx = &rcx[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (sub_141a70d40(arg1, arg2).b != 0 && sub_141a70be0(&arg1[0x20], &arg2[0x20]).b != 0)
            result.b = 1
            return result

label_141a73154:
result.b = 0
return result
