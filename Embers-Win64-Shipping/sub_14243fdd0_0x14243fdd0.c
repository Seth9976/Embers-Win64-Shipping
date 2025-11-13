// 函数: sub_14243fdd0
// 地址: 0x14243fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1
sub_140d3a3a0(&result_1, arg2)
int32_t* r14 = *(arg1 + 0x1d8)
int32_t* rbx = r14
void* rsi = &r14[sx.q(*(arg1 + 0x1e0)) * 2]
int64_t result

if (r14 != rsi)
    while (true)
        result = sub_14077a170(rbx, &result_1)
        
        if (result.b != 0)
            break
        
        rbx = &rbx[2]
        
        if (rbx == rsi)
            goto label_14243fe38

if (r14 == rsi || ((rbx - r14) s>> 3).d == 0xffffffff)
label_14243fe38:
    int64_t rbx_3 = sx.q(*(arg1 + 0x1e0))
    int32_t rax_1 = (rbx_3 + 1).d
    *(arg1 + 0x1e0) = rax_1
    
    if (rax_1 s> *(arg1 + 0x1e4))
        sub_1405a4d70(arg1 + 0x1d8)
    
    result = result_1
    *(*(arg1 + 0x1d8) + (rbx_3 << 3)) = result

return result
