// 函数: sub_142912300
// 地址: 0x142912300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rsi = *(arg1 + 0x28)
int32_t* rbx

if (*(arg1 + 0x38) == 0)
    rbx = nullptr
label_142912353:
    void* rax_2 = sub_1428d5910()
    
    if (rax_2 != 0)
        int32_t rax_3 = sub_14294b080(rax_2, sx.q(*rsi), sx.q(rsi[1]), *(rsi + 8), 0, 0, 0, 
            nullptr, nullptr, rbx)
        sub_14288f9a0(rbx)
        
        if (rax_3 == 0)
            sub_1428d5800(rax_2)
        else
            sub_142896310(arg2, 0x74, rax_2)
        
        return zx.q(rax_3)
    
    sub_14288f9a0(rbx)
else
    int32_t* rax_1 = sub_14288f9d0()
    rbx = rax_1
    
    if (rax_1 != 0)
        sub_1428c2dc0(rax_1, arg1)
        goto label_142912353
return 0
