// 函数: sub_142882640
// 地址: 0x142882640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0xa8)
int64_t rcx = *(rax + 0xe8)
int32_t var_10
int32_t r9

if (rcx != 0)
    int32_t rax_3 = sub_142891c10(rcx)
    
    if (rax_3 != 0)
        return 1
    
    var_10 = 0x177
    r9 = rax_3 + 0x44
else if (arg3 u<= 0x7fffffff)
    int32_t rax_2 = sub_14289aa40(*(rax + 0xe0), arg2, arg3.d)
    
    if (rax_2 s> 0 && rax_2 == arg3.d)
        return 1
    
    var_10 = 0x170
    r9 = 0x44
else
    var_10 = 0x16a
    r9 = 0xed

sub_142856580(arg1, 0x50, 0x24b, r9, "ssl\s3_enc.c", var_10)
return 0
