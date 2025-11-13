// 函数: sub_1428f3cc0
// 地址: 0x1428f3cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143feced0 == 0)
    data_143feced0 = &data_143b86500

int64_t* result = sub_1428a6a70(0x48)

if (result == 0)
    sub_1428a5670((result + 0x25).d, (result + 0x71).d, (result + 0x41).d, "crypto\dso\dso_lib.c", 
        0x1d)
    return 0

void* rax_1 = sub_142898ba0()
result[1] = rax_1

if (rax_1 != 0)
    *result = data_143feced0
    result[2].d = 1
    CRITICAL_SECTION* rax_4 = sub_1428a5be0()
    result[8] = rax_4
    
    if (rax_4 != 0)
        int64_t rdx_5 = *(*result + 0x38)
        
        if (rdx_5 != 0 && rdx_5(result) == 0)
            sub_1428f39b0(result)
            return nullptr
        
        return result
    
    sub_1428a5670((&rax_4->SpinCount + 5).d, (rax_4 + 0x71).d, (rax_4 + 0x41).d, 
        "crypto\dso\dso_lib.c", 0x2b)
    sub_142898a10(result[1])
else
    sub_1428a5670((rax_1 + 0x25).d, (rax_1 + 0x71).d, (rax_1 + 0x41).d, "crypto\dso\dso_lib.c", 
        0x23)

sub_1428a6780(result)
return 0
