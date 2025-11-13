// 函数: sub_14291a1a0
// 地址: 0x14291a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = arg1
int64_t* result = sub_1428a6a70(0x50)

if (result == 0)
    sub_1428a5670((&result[2]).d, 0xf5, (result + 0x41).d, "crypto\ec\ec_kmeth.c", 0x4e)
    return 0

result[7].d = 1
CRITICAL_SECTION* rax_1 = sub_1428a5be0()
result[9] = rax_1

if (rax_1 == 0)
    sub_1428a5670((&rax_1->OwningThread).d, 0xf5, (rax_1 + 0x41).d, "crypto\ec\ec_kmeth.c", 0x55)
    sub_1428a6780(result)
    return 0

*result = data_143b86190

if (rdi == 0)
    rdi = sub_142926e40()
label_14291a2b1:
    result[1] = rdi
    int64_t rax_7
    
    if (rdi != 0)
        rax_7 = sub_142896660(rdi)
        *result = rax_7
    
    if (rdi == 0 || rax_7 != 0)
        result[2].d = 1
        *(result + 0x34) = 4
        
        if (sub_1428a62f0(8, result, &result[8]) != 0)
            int64_t rdx_3 = *(*result + 0x10)
            int32_t rax_10
            
            if (rdx_3 != 0)
                rax_10 = rdx_3(result)
            
            if (rdx_3 == 0 || rax_10 != 0)
                return result
            
            sub_1428a5670(0x10, 0xf5, rax_10 + 0x46, "crypto\ec\ec_kmeth.c", 0x75)
    else
        sub_1428a5670(0x10, 0xf5, 0x26, "crypto\ec\ec_kmeth.c", 0x67)
else
    if (sub_1428af800(rdi) != 0)
        goto label_14291a2b1
    
    sub_1428a5670(0x10, 0xf5, 0x26, "crypto\ec\ec_kmeth.c", 0x5e)

sub_1428c0b90(result)
return 0
