// 函数: sub_141e3c170
// 地址: 0x141e3c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xc8)
int64_t rbp
rbp.b = 1
int64_t result

for (void* r15 = &i[sx.q(*(arg1 + 0xd0)) * 3]; i != r15; i = &i[3])
    int64_t* rbx_1 = *i
    
    if (*(arg1 + 0xd0) s> 1)
        if (rbx_1 != 0)
            goto label_141e3c1c9
        
        result.b = 1
    else if (rbx_1 == 0)
        result.b = 0
    else
    label_141e3c1c9:
        
        if (arg2 != 0)
            if ((*(*rbx_1 + 0x278))(rbx_1).b == 0 || zx.d(rbx_1[0x2a].b) != arg2)
                result.b = 0
            else
                result.b = 1
        else if (zx.d(rbx_1[0x2a].b) != arg2)
            result.b = 0
        else
            result.b = 1
    
    rbp.b &= result.b
    
    if (rbp.b == 0)
        goto label_141e3c20a

if (*(arg1 + 0xd0) s<= 0)
label_141e3c20a:
    result.b = 0
else
    result.b = 1

return result
