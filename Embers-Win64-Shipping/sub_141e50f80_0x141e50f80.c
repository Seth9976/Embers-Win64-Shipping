// 函数: sub_141e50f80
// 地址: 0x141e50f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[1].d == 0
void** const result = &data_143209440
*arg1 = &data_143209440

if (not(cond:0))
    void* rcx = data_143f5b298
    
    if (rcx != 0)
        result = sub_1423dcff0(rcx)
        
        if (result != 0)
            result = sub_141e84c10(sub_1423dcff0(data_143f5b298), arg1[1].d)

int64_t rcx_3 = arg1[2]

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
