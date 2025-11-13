// 函数: sub_14292d770
// 地址: 0x14292d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_14289a500(&data_14354ac40)
int32_t rax_1
int32_t r8

if (rax != 0)
    int64_t rax_4 = sub_14289b970(sub_1428a9620(sub_1428a96d0(*arg2)))
    
    if (rax_4 != 0)
        sub_142899cf0(rax, 0x6f, 0, rax_4)
        int64_t* rcx_4 = *arg1
        
        if (rcx_4 == 0)
            *arg1 = rax
            return 1
        
        if (sub_14289a6f0(rcx_4, rax) != 0)
            return 1
        
        rax_1 = 0x4a
        r8 = 0x20
    else
        rax_1 = 0x42
        r8 = 0x6d
else
    rax_1 = (rax + 0x3c).d
    r8 = 0x20

sub_1428a5670(0x21, 0x7d, r8, "crypto\pkcs7\pk7_doit.c", rax_1)
sub_142899e70(rax)
return 0
