// 函数: sub_1406c5720
// 地址: 0x1406c5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = data_143f40650
int32_t result

for (void* rdi_2 = &i[sx.q(data_143f40658) * 2]; i != rdi_2; i = &i[2])
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int16_t* const rcx
    
    if (i[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *i
    
    if (sub_140a54510(rcx, rdx) == 0)
        result.b = 1
        return result

result.b = 0
return result
