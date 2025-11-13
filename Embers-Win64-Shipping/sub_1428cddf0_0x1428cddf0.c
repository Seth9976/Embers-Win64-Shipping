// 函数: sub_1428cddf0
// 地址: 0x1428cddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = nullptr
uint32_t count_2 = -1
uint32_t count = arg4

if (*arg1 != 0x10 || *(arg1 + 8) == 0)
    sub_1428a5670(0xd, 0x86, 0x6d, "crypto\asn1\evp_asn1.c", 0x6f)
else
    int32_t* rax_1 = sub_1428cd3c0(&data_14350fb20, arg1)
    rdi = rax_1
    
    if (rax_1 == 0)
        sub_1428a5670(0xd, 0x86, 0x6d, "crypto\asn1\evp_asn1.c", 0x6f)
    else
        if (arg2 != 0)
            *arg2 = *rax_1
        
        uint32_t count_1 = sub_1406938b0(*(rax_1 + 8))
        count_2 = count_1
        
        if (count s> count_1)
            count = count_1
        
        if (arg3 != 0)
            memcpy(arg3, sub_14060aa50(*(rdi + 8)), count)
        
        if (count_2 == 0xffffffff)
            sub_1428a5670(0xd, 0x86, 0x6d, "crypto\asn1\evp_asn1.c", 0x6f)

sub_1428c3d60(rdi, &data_14350fb20)
return zx.q(count_2)
