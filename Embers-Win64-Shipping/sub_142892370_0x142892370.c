// 函数: sub_142892370
// 地址: 0x142892370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
char r8 = (*(rax + 0x10)).b
int32_t var_18_1
int32_t rdx
int32_t r8_1

if (r8 s>= 0)
    if (arg1[0xd].d == arg2)
        return 1
    
    if (arg2 s> 0 && (r8 & 8) != 0)
        arg1[0xd].d = arg2
        return 1
    
    rdx = 0x7a
    var_18_1 = 0x235
    r8_1 = 0x82
else if (rax != 0)
    int64_t r10_1 = *(rax + 0x48)
    
    if (r10_1 != 0)
        int32_t result = r10_1(arg1, 1, zx.q(arg2), 0)
        
        if (result != 0xffffffff)
            return result
        
        var_18_1 = 0x253
        rdx = result + 0x7d
        r8_1 = 0x85
    else
        var_18_1 = 0x24c
        rdx = (r10_1 + 0x7c).d
        r8_1 = 0x84
else
    var_18_1 = 0x247
    rdx = (rax + 0x7c).d
    r8_1 = 0x83

sub_1428a5670(6, rdx, r8_1, "crypto\evp\evp_enc.c", var_18_1)
return 0
