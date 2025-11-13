// 函数: sub_1428821e0
// 地址: 0x1428821e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rcx = *(arg1 + 0xa8)

if (*(rcx + 0xe8) == 0)
    int64_t arg_8
    int32_t rax_1 = sub_142899cf0(*(rcx + 0xe0), 3, 0, &arg_8)
    
    if (rax_1 s<= 0)
        sub_142856580(arg1, 0x50, 0x125, 0x14c, "ssl\s3_enc.c", 0x188)
        return 0
    
    *(*(arg1 + 0xa8) + 0xe8) = sub_142891ee0()
    
    if (*(*(arg1 + 0xa8) + 0xe8) == 0)
        sub_142856580(arg1, 0x50, 0x125, 0x41, "ssl\s3_enc.c", 0x18f)
        return 0
    
    int32_t* rax_6 = sub_14285b130(arg1)
    
    if (rax_6 == 0)
    label_142882316:
        sub_142856580(arg1, 0x50, 0x125, 0x44, "ssl\s3_enc.c", 0x197)
        return 0
    
    if (sub_1428919c0(*(*(arg1 + 0xa8) + 0xe8), rax_6, nullptr) == 0)
        goto label_142882316
    
    if (sub_142891c10(*(*(arg1 + 0xa8) + 0xe8), arg_8, sx.q(rax_1)) == 0)
        goto label_142882316

if (arg2 == 0)
    sub_142899e70(*(*(arg1 + 0xa8) + 0xe0))
    *(*(arg1 + 0xa8) + 0xe0) = 0

return 1
