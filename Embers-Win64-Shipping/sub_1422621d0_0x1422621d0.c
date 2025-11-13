// 函数: sub_1422621d0
// 地址: 0x1422621d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x45]

if (result != 0 && (*(result + 0x22a) & 4) == 0)
    void* rbx_1 = arg1[0x53]
    
    if (rbx_1 != 0)
        void* rax = sub_14254f450()
        arg2 = *(rbx_1 + 0x10)
        arg3 = rax + 0x30
        result = sx.q(*(rax + 0x38))
        
        if (result.d s> *(arg2 + 0x38))
            goto label_142262225
        
        if (*(*(arg2 + 0x30) + (result << 3)) == arg3)
            goto label_142262250
        
        goto label_142262225
    
label_142262225:
    rbx_1 = data_143f4c9e0
    
    if (rbx_1 == 0 || *(rbx_1 + 0x30) != arg1 || rbx_1 == 0)
    label_14226225d:
        
        if (arg1[0x82] == 0)
            result.b = 1
            return result
    else
    label_142262250:
        int64_t rcx_3 = *(sub_140d21d80((*(*arg1 + 0x150))(arg1, arg2, arg3)) + 0x18)
        
        if (*(rbx_1 + 0x15a8) == rcx_3)
            goto label_14226225d

result.b = 0
return result
