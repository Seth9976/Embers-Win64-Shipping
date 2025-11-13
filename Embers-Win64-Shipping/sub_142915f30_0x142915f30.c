// 函数: sub_142915f30
// 地址: 0x142915f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t* rdx = *(arg1 + 0x28)
char* rcx = *rdx

if (rcx == 0)
    int32_t rdx_1 = (&rcx[0x6d]).d
    sub_1428a5670(rdx_1 - 0x39, rdx_1, (&rcx[0x6e]).d, "crypto\kdf\scrypt.c", 0xde)
    return 0

int64_t r8_1 = rdx[2]

if (r8_1 != 0)
    int32_t var_38
    var_38.q = rdx[4]
    return sub_14294fcb0(rcx, (rdx[1]).d, r8_1, (rdx[3]).d, var_38, rdx[5], rdx[6], rdx[7], arg2, 
        (*arg3).d)

int32_t rdx_2 = (r8_1 + 0x6d).d
sub_1428a5670(rdx_2 - 0x39, rdx_2, rdx_2 + 2, "crypto\kdf\scrypt.c", 0xe3)
return 0
