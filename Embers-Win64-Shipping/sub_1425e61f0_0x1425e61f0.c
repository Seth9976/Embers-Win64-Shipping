// 函数: sub_1425e61f0
// 地址: 0x1425e61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = sub_140b73b20(0)
int16_t* const rcx

if (arg2[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg2

int32_t result

if (sub_140a54510(rcx, rax) == 0)
label_1425e6291:
    result.b = 1
    return result

int64_t* i = *(arg1 + 0xf0)

for (void* rsi_3 = &i[sx.q(*(arg1 + 0xf8)) * 2]; i != rsi_3; i = &i[2])
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    int16_t* const rcx_1
    
    if (i[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *i
    
    if (sub_140a54510(rcx_1, rdx_1) == 0)
        goto label_1425e6291

result.b = 0
return result
