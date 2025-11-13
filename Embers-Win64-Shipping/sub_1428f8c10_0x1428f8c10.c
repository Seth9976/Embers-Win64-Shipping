// 函数: sub_1428f8c10
// 地址: 0x1428f8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void** rdi = arg3
int32_t* result

if (arg3 != 0)
    result = *arg3

if (arg3 == 0 || result == 0)
    int32_t* result_1 = sub_1428f2cf0()
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((result_1 + 0xd).d, 0xc6, (result_1 + 0x41).d, "crypto\asn1\asn_pack.c", 0x16)
        return nullptr

sub_1428a6780(*(result + 8))
*(result + 8) = 0
int32_t rax_2 = sub_1428c65a0(arg1, &result[2], arg2)
*result = rax_2
int32_t rax_3
int32_t r8_3

if (rax_2 != 0)
    if (*(result + 8) != 0)
        if (rdi != 0 && *rdi == 0)
            *rdi = result
        
        return result
    
    rax_3 = 0x25
    r8_3 = 0x41
else
    rax_3 = 0x21
    r8_3 = 0x70

sub_1428a5670(0xd, 0xc6, r8_3, "crypto\asn1\asn_pack.c", rax_3)

if (rdi == 0 || *rdi == 0)
    sub_1428f2c80(result)

return nullptr
