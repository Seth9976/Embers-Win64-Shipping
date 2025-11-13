// 函数: sub_141cc3230
// 地址: 0x141cc3230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2.d
int64_t result

if (arg3 == 0)
    rcx.b = sub_140b5b8a0(rcx, 0).b == 0
    result.b = arg2:4.d != 0
    rcx.b |= result.b
    
    if (rcx.b != 0)
        for (int64_t* i = *arg1; i != &i[sx.q(arg1[1].d)]; i = &i[1])
            if (*i == arg2)
                goto label_141cc32f4
        
        int64_t* rcx_2 = arg1[2]
        void* rdx_3 = &rcx_2[sx.q(arg1[3].d)]
        
        if (rcx_2 != rdx_3)
            while (*rcx_2 != arg2)
                rcx_2 = &rcx_2[1]
                
                if (rcx_2 == rdx_3)
                    result.b = 0
                    return result
            
        label_141cc32f4:
            result.b = 1
            return result
else
    result.b = arg2:4.d != 0
    
    if ((sub_140b5b8a0(rcx, 0).b == 0 | result.b) != 0)
        int64_t* rcx_1 = *arg1
        void* rdx_1 = &rcx_1[sx.q(arg1[1].d)]
        
        if (rcx_1 != rdx_1)
            while (*rcx_1 != arg2)
                rcx_1 = &rcx_1[1]
                
                if (rcx_1 == rdx_1)
                    goto label_141cc3282
            
            goto label_141cc32f4

label_141cc3282:
result.b = 0
return result
