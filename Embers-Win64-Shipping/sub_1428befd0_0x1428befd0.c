// 函数: sub_1428befd0
// 地址: 0x1428befd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x10, 0x6c, 0x6c, "crypto\ec\ec_lib.c", 0x19)
    return 0

if (*(arg1 + 8) == 0)
    sub_1428a5670(0x10, 0x6c, 0x42, "crypto\ec\ec_lib.c", 0x1d)
    return 0

char** result = sub_1428a6a70(0xa8)

if (result == 0)
    sub_1428a5670((&result[2]).d, (result + 0x6c).d, (result + 0x41).d, "crypto\ec\ec_lib.c", 0x23)
    return 0

*result = arg1

if ((*arg1 & 2) != 0)
label_1428bf0b3:
    *(result + 0x24) = 1
    result[5].d = 4
    
    if ((*(arg1 + 8))(result) != 0)
        return result
else
    void* rax_3 = sub_142890500()
    result[2] = rax_3
    
    if (rax_3 != 0)
        void* rax_4 = sub_142890500()
        result[3] = rax_4
        
        if (rax_4 != 0)
            goto label_1428bf0b3

sub_1428901a0(result[2])
sub_1428901a0(result[3])
sub_1428a6780(result)
return 0
