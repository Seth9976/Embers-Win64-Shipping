// 函数: sub_142916720
// 地址: 0x142916720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int64_t* r8 = *(arg1 + 0x28)
char* r10 = *r8

if (r10 == 0)
    int32_t rdx = (&r10[0x65]).d
    sub_1428a5670(rdx - 0x31, rdx, (&r10[0x69]).d, "crypto\kdf\tls1_prf.c", 0x81)
    return 0

int64_t rdx_1 = r8[1]

if (rdx_1 == 0)
    sub_1428a5670(0x34, 0x65, 0x6b, "crypto\kdf\tls1_prf.c", 0x85)
    return 0

int64_t rcx_1 = r8[0x83]

if (rcx_1 != 0)
    int32_t var_28
    var_28.q = rcx_1
    return sub_142916a60(r10, rdx_1, r8[2], &r8[3], arg4, var_28, arg2, *arg3)

int32_t rdx_2 = (rcx_1 + 0x65).d
sub_1428a5670(rdx_2 - 0x31, rdx_2, (rcx_1 + 0x6a).d, "crypto\kdf\tls1_prf.c", 0x89)
return 0
