// 函数: sub_140d07a90
// 地址: 0x140d07a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* i_2 = arg2

if (arg2 == 0)
    return arg2

if ((*(*arg1 + 0x138))() == 0)
    int16_t* i_5 = i_2
    
    while (true)
        int16_t rax_18 = *i_5
        
        if (rax_18 u> 0x39)
            break
        
        if (not(test_bit(0x3ff680000000000, zx.q(rax_18))))
            break
        
        i_5 = &i_5[1]
        i_2 = i_5
    
    if ((0xffdf & (*i_5 - 0x46)) == 0)
        i_2 = &i_5[1]
else
    if (iswalpha(*i_2) != 0)
        int64_t rax_5 = sub_140be3450(&i_2)
        
        if (rax_5 == -1)
            return 0
        
        int64_t r9 = *arg1
        (*(r9 + 0x148))(arg1, arg3, rax_5, r9)
        return i_2
    
    int32_t rax_7 = sub_140a546e0(arg2, &data_142e70dac, 2)
    int16_t* i = i_2
    
    if (rax_7 == 0)
        int16_t* i_4 = i
        i = &i[2]
        i_2 = i
        
        if (i_4 != -4)
            int16_t* i_3 = i
            
            do
                int16_t rdx_1 = *i
                int32_t rax_10
                
                if (rdx_1 - 0x30 u> 9)
                    if (rdx_1 - 0x61 u<= 5)
                        rax_10 = zx.d(rdx_1) - 0x57
                        goto label_140d07b84
                    
                    if (rdx_1 - 0x41 u<= 5)
                        rax_10 = zx.d(rdx_1) - 0x37
                        goto label_140d07b84
                    
                label_140d07b88:
                    
                    if (rdx_1 != 0x30)
                        break
                else
                    rax_10 = zx.d(rdx_1) - 0x30
                label_140d07b84:
                    
                    if (rax_10 == 0)
                        goto label_140d07b88
                i = &i_3[1]
                i_2 = i
                i_3 = i
            while (i != 0)
    else if (i != 0)
        int16_t* i_1
        
        do
            if ((0xfffd & (*i - 0x2b)) != 0)
                int16_t* j
                
                do
                    int32_t rax_16 = iswdigit(*i)
                    i = i_2
                    
                    if (rax_16 == 0)
                        break
                    
                    j = i
                    i = &i[1]
                    i_2 = i
                while (j != -2)
                break
            
            i_1 = i
            i = &i[1]
            i_2 = i
        while (i_1 != -2)
    
    if (arg2 == i)
        return 0

(*(*arg1 + 0x160))(arg1, arg3, arg2)
return i_2
