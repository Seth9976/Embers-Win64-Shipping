// 函数: sub_142892230
// 地址: 0x142892230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int32_t rcx

if ((*(rax + 0x10) & 0x200) == 0)
    rcx.b = sub_142897c20(arg2, zx.q(arg1[0xd].d), arg2) s> 0
else
    if (rax == 0)
        sub_1428a5670(6, 0x7c, 0x83, "crypto\evp\evp_enc.c", 0x247)
        return 0
    
    int64_t r10_1 = *(rax + 0x48)
    
    if (r10_1 == 0)
        sub_1428a5670(6, 0x7c, 0x84, "crypto\evp\evp_enc.c", 0x24c)
        return 0
    
    int32_t rax_1 = r10_1(arg1, 6, 0, arg2)
    rcx = rax_1
    
    if (rax_1 == 0xffffffff)
        sub_1428a5670(6, 0x7c, 0x85, "crypto\evp\evp_enc.c", 0x253)
        return 0

return zx.q(rcx)
