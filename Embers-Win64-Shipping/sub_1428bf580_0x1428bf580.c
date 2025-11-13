// 函数: sub_1428bf580
// 地址: 0x1428bf580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int64_t r9 = *(rax + 0x68)
int32_t var_18
int32_t r8_1

if (r9 != 0)
    if (rax == *arg2)
        int32_t r8_2 = arg1[1].d
        int32_t rax_1 = arg2[1].d
        
        if (r8_2 == rax_1 || r8_2 == 0 || rax_1 == 0)
            if (arg1 != arg2)
                jump(r9)
            
            return 1
    
    var_18 = 0x26e
    r8_1 = 0x65
else
    var_18 = 0x267
    r8_1 = (r9 + 0x42).d

sub_1428a5670(0x10, 0x72, r8_1, "crypto\ec\ec_lib.c", var_18)
return 0
