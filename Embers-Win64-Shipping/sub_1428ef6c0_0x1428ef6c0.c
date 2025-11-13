// 函数: sub_1428ef6c0
// 地址: 0x1428ef6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0 || *arg2 == 0)
    sub_1428a5670(0x10, 0x90, 0x43, "crypto\ec\ec_asn1.c", 0x421)
    return 0

int64_t* result

if (arg1 != 0)
    result = *arg1

if (arg1 == 0 || result == 0)
    int64_t* result_1 = sub_1428c0d20()
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((&result_1[2]).d, 0x90, (result_1 + 0x41).d, "crypto\ec\ec_asn1.c", 0x427)
        return 0

int64_t arg_10 = *arg2
int32_t* rax_3 = sub_1428c41c0(nullptr, &arg_10, arg3, &data_143515720)
int32_t rax_4
int32_t r8_2

if (rax_3 != 0)
    char* rax_5 = sub_1428ef5a0(rax_3)
    
    if (rax_5 != 0)
        if (result != -0x18)
            sub_1428be5f0(result[3])
            result[3] = rax_5
        
        sub_1428c3d60(rax_3, &data_143515720)
        *arg2 = arg_10
        
        if (arg1 != 0)
            *arg1 = result
        
        return result
    
    rax_4 = 0x35a
    r8_2 = (&rax_5[0x7f]).d
else
    rax_4 = 0x354
    r8_2 = (rax_3 + 0x75).d

sub_1428a5670(0x10, 0x91, r8_2, "crypto\ec\ec_asn1.c", rax_4)
sub_1428c3d60(rax_3, &data_143515720)
sub_1428a5670(0x10, 0x90, 0x10, "crypto\ec\ec_asn1.c", 0x42e)

if (arg1 == 0 || *arg1 != result)
    sub_1428c0b90(result)

return nullptr
