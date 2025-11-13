// 函数: sub_1428b3df0
// 地址: 0x1428b3df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    if (arg2 != 0)
    label_1428b3e49:
        int32_t rax_3 = sub_142901a10(arg2, sub_142890ee0(arg1) << 3, rax)
        sub_1428d3b50(&rax[0x4e], rax[0x4b], (rax[0x4a]).b, rax, sub_142900fa0)
        
        if (rax_3 s< 0)
            sub_1428a5670(6, 0xaf, 0xb0, "crypto\evp\e_aria.c", 0x1f8)
            return 0
        
        *(rax + 0x170) = 0
        rax[0x46] = 1
        goto label_1428b3eb7
    
label_1428b3eb7:
    
    if (arg3 != 0)
        memcpy(sub_1406219d0(arg1), arg3, 0xf - rax[0x4a])
        rax[0x47] = 1
else if (arg2 != 0)
    goto label_1428b3e49

return 1
