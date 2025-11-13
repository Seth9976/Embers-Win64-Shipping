// 函数: sub_142917c10
// 地址: 0x142917c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_1428a6a70(0x58)

if (rax == 0)
    sub_1428a5670((rax + 0xf).d, (rax + 0x7d).d, (rax + 0x41).d, "crypto\siphash\siphash_pmeth.c", 
        0x20)
    return 0

*(rax + 4) = 4
sub_1428915b0(arg1, rax)
sub_1428bcf70(arg1, 0, 0)
int32_t* rax_2 = sub_142896660(arg2)
int32_t* rax_3 = sub_142896660(arg1)

if (sub_14060aa50(rax_2) != 0 && sub_1428f2a00(rax_3, rax_2) == 0)
    int32_t* rax_6 = sub_142896660(arg1)
    
    if (rax_6 != 0)
        sub_1428a6890(*(rax_6 + 8), sx.q(*rax_6), "crypto\siphash\siphash_pmeth.c", 0x2f)
        sub_1428a6890(rax_6, 0x58, "crypto\siphash\siphash_pmeth.c", 0x30)
        sub_1428915b0(arg1, 0)
    
    return 0

*(rax_3 + 0x18) = *(rax_2 + 0x18)
*(rax_3 + 0x28) = *(rax_2 + 0x28)
*(rax_3 + 0x38) = *(rax_2 + 0x38)
*(rax_3 + 0x48) = *(rax_2 + 0x48)
return 1
