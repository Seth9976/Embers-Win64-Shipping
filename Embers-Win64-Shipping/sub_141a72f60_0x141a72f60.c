// 函数: sub_141a72f60
// 地址: 0x141a72f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x48)
uint64_t result

if (i_2 != *(arg2 + 0x48))
labelid_2:
    result.b = 0
else
    int32_t* r8_1 = *(arg2 + 0x40)
    
    if (i_2 != 0)
        result = *(arg1 + 0x40) + 8
        int32_t i
        
        do
            if (*(result - 8) != *r8_1)
                goto label_141a73070_2
            
            if (*(result - 4) != r8_1[1])
                goto label_141a73070_2
            
            if (*result != r8_1[2])
                goto label_141a73070_2
            
            r8_1 = &r8_1[3]
            result += 0xc
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg1 + 0x58)
    
    if (i_3 != *(arg2 + 0x58))
    label_141a73070:
        result.b = 0
    else
        int32_t* rsi_1 = *(arg2 + 0x50)
        void* rbp_1 = *(arg1 + 0x50)
        
        if (i_3 != 0)
            void* rbx_1 = &rsi_1[4]
            void* rdi_1 = rbp_1 + 0x10
            int32_t i_1
            
            do
                if (sub_14077a170(rbp_1, rsi_1).b == 0)
                    goto label_141a73070_2
                
                int32_t rcx_8 = (*(rdi_1 - 8) ^ *(rbx_1 - 8)) | (*(rdi_1 - 4) ^ *(rbx_1 - 4))
                    | (*(rdi_1 + 4) ^ *(rbx_1 + 4)) | (*rbx_1 ^ *rdi_1)
                
                if (rcx_8 != 0)
                    goto label_141a73070_2
                
                if (*(rdi_1 + 8) != *(rbx_1 + 8))
                    goto label_141a73070_2
                
                rbp_1 += 0x1c
                rdi_1 += 0x1c
                rsi_1 = &rsi_1[7]
                rbx_1 += 0x1c
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (sub_141a70d40(arg1, arg2).b == 0)
        label_141a73070_1:
            result.b = 0
        else if (sub_141a70be0(&arg1[0x20], &arg2[0x20]).b == 0)
        label_141a73070_2:
            result.b = 0
        else
            result.b = 1

return result
