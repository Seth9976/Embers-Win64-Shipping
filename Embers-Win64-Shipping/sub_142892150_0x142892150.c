// 函数: sub_142892150
// 地址: 0x142892150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int32_t var_18_1
int32_t r8_1

if (rax != 0)
    int64_t rax_1 = *(rax + 0x48)
    
    if (rax_1 != 0)
        int32_t result = rax_1()
        
        if (result != 0xffffffff)
            return result
        
        var_18_1 = 0x253
        r8_1 = 0x85
    else
        var_18_1 = 0x24c
        r8_1 = 0x84
else
    var_18_1 = 0x247
    r8_1 = 0x83

sub_1428a5670(6, 0x7c, r8_1, "crypto\evp\evp_enc.c", var_18_1)
return 0
