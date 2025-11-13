// 函数: sub_142915850
// 地址: 0x142915850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    int32_t rax_1 = sub_1406938b0(arg1)
    
    if (arg2 == 3)
        sub_1428a5670(arg2 + 1, 0x8c, 0x8d, "crypto\rsa\rsa_pmeth.c", 0x167)
        return 0
    
    if (arg2 != 5)
        uint64_t rax_5 = zx.q(rax_1 - 0x40)
        
        if ((rax_5.d u> 0x35 || not(test_bit(0x24000080000001, rax_5))) && rax_1 - 3 u> 1
                && rax_1 != 0x101 && rax_1 - 0x2a0 u> 3 && rax_1 - 0x448 u> 3)
            sub_1428a5670(4, 0x8c, 0x9d, "crypto\rsa\rsa_pmeth.c", 0x185)
            return 0
    else if (sub_142924880(rax_1) == 0xffffffff)
        sub_1428a5670(arg2 - 1, 0x8c, 0x8e, "crypto\rsa\rsa_pmeth.c", 0x16d)
        return 0

return 1
