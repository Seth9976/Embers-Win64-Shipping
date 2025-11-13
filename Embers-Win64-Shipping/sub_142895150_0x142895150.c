// 函数: sub_142895150
// 地址: 0x142895150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    if (arg2 != 0)
    label_1428951a5:
        sub_1428cf200(arg2, sub_142890ee0(arg1) << 3, rax)
        sub_1428d3b50(&rax[0x46], rax[0x43], (rax[0x42]).b, rax, sub_1428ce970)
        *(rax + 0x150) = 0
        rax[0x3e] = 1
    
    if (arg3 != 0)
        memcpy(sub_1406219d0(arg1), arg3, 0xf - rax[0x42])
        rax[0x3f] = 1
else if (arg2 != 0)
    goto label_1428951a5

return 1
