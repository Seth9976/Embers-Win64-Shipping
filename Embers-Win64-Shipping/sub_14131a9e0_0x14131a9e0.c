// 函数: sub_14131a9e0
// 地址: 0x14131a9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
int64_t result

if (sub_1405fba70(rdi.d, 3).b == 0)
    result.b = 0
else
    int64_t rbx_1 = data_143f025b0
    
    if (rdi.d u> 0x1f)
        if (*(&data_143f025f0 + rdi * 0x14) != rbx_1)
            goto label_14131aa77
        
        goto label_14131aa39
    
    if (test_bit(0xc8451800, rdi.d) || *(&data_143f025f0 + rdi * 0x14) == rbx_1)
    label_14131aa39:
        
        if (sub_1405fba70(rdi.d, 3).b == 0 || ((rdi.d u> 0x1f || not(test_bit(0xc8451800, rdi.d)))
                && *(&data_143f025f0 + rdi * 0x14) != rbx_1))
            result.b = 0
        else if (rdi.d u> 0x1b)
            if (((*(rdi * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
                goto label_14131aa77
            
            result.b = 0
        else
            if (test_bit(0x857c041, rdi.d) || ((*(rdi * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
                goto label_14131aa77
            
            result.b = 0
    else
    label_14131aa77:
        
        if (rdi.d u> 0x18)
            if (*(&data_143f025f0 + rdi * 0x14) != data_143f025b8)
                goto label_14131aa99
            
            result.b = 0
        else if (test_bit(0x100a040, rdi.d) || *(&data_143f025f0 + rdi * 0x14) == data_143f025b8)
            result.b = 0
        else
        label_14131aa99:
            
            if (sub_14122e130(rdi.d).b != 0)
                result.b = 1
            else if (sub_14131f330(rdi.d).b == 0)
                result.b = 0
            else
                result.b = 1

return result
