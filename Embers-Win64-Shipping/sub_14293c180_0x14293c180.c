// 函数: sub_14293c180
// 地址: 0x14293c180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = *arg1
void* rax_2

if (rax == 0)
    rax_2 = *(*(arg1 + 8) + 0x28)
label_14293c1c4:
    void* rcx_1 = *(rax_2 + 0x10)
    
    if (rcx_1 == 0)
        return 1
    
    int64_t r10_1 = *(rcx_1 + 0xb0)
    
    if (r10_1 == 0)
        return 1
    
    int32_t rax_4 = r10_1(rax_2, 7, zx.q(arg2), arg1)
    
    if (rax_4 != 0xfffffffe)
        if (rax_4 s> 0)
            return 1
        
        sub_1428a5670(0x2e, 0xab, 0x6f, "crypto\cms\cms_env.c", 0x4b)
        return 0
    
    sub_1428a5670(rax_4 + 0x30, 0xab, rax_4 + 0x7f, "crypto\cms\cms_env.c", 0x47)
else if (rax == 1)
    void* rcx = *(*(arg1 + 8) + 0x28)
    
    if (rcx != 0)
        rax_2 = sub_14060aa60(rcx)
        
        if (rax_2 != 0)
            goto label_14293c1c4
return 0
