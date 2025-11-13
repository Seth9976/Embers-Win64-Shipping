// 函数: sub_141e44ef0
// 地址: 0x141e44ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xc8)
int64_t rbp
rbp.b = 1
int64_t result

for (void* r14 = &i[sx.q(*(arg1 + 0xd0)) * 3]; i != r14; i = &i[3])
    int64_t* rbx_1 = *i
    
    if (*(arg1 + 0xd0) s> 1)
        if (rbx_1 != 0)
            goto label_141e44f4e
        
        result.b = 1
    else if (rbx_1 == 0)
        result.b = 0
    else
    label_141e44f4e:
        
        if ((*(*rbx_1 + 0x278))(rbx_1).b == 0 || rbx_1[0x2a].b != 1)
            result.b = 0
        else
            result.b = 1
    
    rbp.b &= result.b
    
    if (rbp.b == 0)
        goto label_141e44f7e

if (*(arg1 + 0xd0) s> 0)
    result.b = 1
else
label_141e44f7e:
    int64_t* i_1 = *(arg1 + 0xc8)
    rbp.b = 1
    
    for (void* r14_1 = &i_1[sx.q(*(arg1 + 0xd0)) * 3]; i_1 != r14_1; i_1 = &i_1[3])
        int64_t* rbx_2 = *i_1
        
        if (*(arg1 + 0xd0) s> 1)
            if (rbx_2 != 0)
                goto label_141e44fbe
            
            result.b = 1
        else if (rbx_2 == 0)
            result.b = 0
        else
        label_141e44fbe:
            
            if ((*(*rbx_2 + 0x278))(rbx_2).b == 0 || rbx_2[0x2a].b != 2)
                result.b = 0
            else
                result.b = 1
        
        rbp.b &= result.b
        
        if (rbp.b == 0)
            goto label_141e44fee
    
    if (*(arg1 + 0xd0) s> 0)
        result.b = 1
    else
    label_141e44fee:
        result.b = 0

return result
