// 函数: sub_140b24d50
// 地址: 0x140b24d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* i_3

if (arg4 == 0)
    i_3 = arg1[2]
else
    i_3 = *(arg4 + 8)

int64_t rcx = *arg1

if (i_3 u< rcx)
labelid_7:
    *(arg2 + 0x18) = 0
else
    int64_t rdx = arg1[1]
    
    if (i_3 u> rdx - 2)
    label_140b24e34:
        *(arg2 + 0x18) = 0
    else
        int16_t* i = i_3
        int16_t* i_1 = i
        int32_t var_24_1 = ((i_3 - rcx) s>> 1).d
        
        if (i_3 == rdx)
        label_140b24e34_1:
            *(arg2 + 0x18) = 0
        else
            do
                int64_t rcx_1 = *(arg3 + 8)
                int16_t arg_8 = *i
                int32_t rax_6 = (*arg3)(rcx_1, &arg_8)
                
                if (rax_6 == 3)
                    goto label_140b24e34_2
                
                if (rax_6 u<= 1)
                    i = &i[1]
                    int16_t* i_2 = i
                    
                    if (rax_6 == 1)
                        break
                
                if (rax_6 == 2)
                    break
            while (i != arg1[1])
            
            if (i == i_3)
            label_140b24e34_2:
                *(arg2 + 0x18) = 0
            else
                if (arg4 != 0 && i u> *(arg4 + 8))
                    *(arg4 + 8) = i
                
                *arg2 = i_3.o
                arg2[1].q = 0.q
                *(arg2 + 0x18) = 1

return arg2
