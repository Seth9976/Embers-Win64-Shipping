// 函数: sub_14201e780
// 地址: 0x14201e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141dcdc50(arg1)

if (rax == 0)
    return rax

int64_t* rsi = *((*(*arg1 + 0x150))(arg1) + 0x128)
int32_t* rax_4

if (arg2 == 0)
    int32_t rbx_1 = *data_143f40608
    
    if (rbx_1 s> 0)
    label_14201e820:
        
        if ((*(*rsi + 0x6a0))(rsi).d s>= rbx_1)
            rax_4.b = 1
            return rax_4
    else
        rbx_1 = *(arg1 + 0x224)
        
        if (rbx_1 s> 0)
            goto label_14201e820
else if ((*(*rsi + 0x6a8))(rsi).d s>= arg1[0x44].d)
    if (sub_141dcdc50(arg1).d != 2)
        rax_4.b = 1
        return rax_4
    
    if ((*(*rsi + 0x6a0))(rsi).d s> 0)
        rax_4.b = 1
        return rax_4

rax_4.b = 0
return rax_4
