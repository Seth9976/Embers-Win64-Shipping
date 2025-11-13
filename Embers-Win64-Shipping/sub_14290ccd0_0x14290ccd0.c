// 函数: sub_14290ccd0
// 地址: 0x14290ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = nullptr
int64_t* rdi = nullptr

if (arg1 == 0x10)
    int32_t r8_1 = *arg2
    int64_t arg_18 = *(arg2 + 8)
    int64_t* result_1 = sub_1428ef6c0(nullptr, &arg_18, r8_1)
    result = result_1
    
    if (result_1 != 0)
        return result
    
    sub_1428a5670(0x10, 0xdc, 0x8e, "crypto\ec\ec_ameth.c", 0x67)
else if (arg1 != 6)
    sub_1428a5670(0x10, 0xdc, 0x8e, "crypto\ec\ec_ameth.c", 0x7c)
else
    int64_t* result_2 = sub_1428c0d20()
    result = result_2
    
    if (result_2 != 0)
        int64_t* rax_3 = sub_1428c0250(sub_1428a96d0(arg2))
        rdi = rax_3
        
        if (rax_3 != 0)
            sub_14289a9e0(rax_3, 1)
            
            if (sub_1428c1040(result, rdi) != 0)
                sub_1428bee10(rdi)
                return result
    else
        sub_1428a5670(0x10, 0xdc, (result_2 + 0x41).d, "crypto\ec\ec_ameth.c", 0x71)

sub_1428c0b90(result)
sub_1428bee10(rdi)
return 0
