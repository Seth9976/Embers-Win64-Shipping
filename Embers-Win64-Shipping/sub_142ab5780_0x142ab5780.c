// 函数: sub_142ab5780
// 地址: 0x142ab5780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x22
*arg1 = &arg1[2]
*(arg1 + 0xc) = 0
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0xa] = arg2[0xa]
arg1[0xb].d = arg2[0xb].d
int64_t rsi = sx.q(arg1[8].d)

if (rsi.d s<= 0x22)
label_142ab5818:
    int64_t* rax_3 = *arg2
    uint64_t* rcx_4 = *arg1
    *rcx_4 = *rax_3
    rcx_4[1].d = rax_3[1].d
    memcpy(*arg1 + 0xc, *arg2 + 0xc, arg2[1].d)
else
    void* rax_2
    
    if (rsi.d s>= 0)
        rax_2 = sub_142a7dd00(rsi + 0xc)
    
    if (rsi.d s>= 0 && rax_2 != 0)
        void* rcx_1 = *arg1
        *rax_2 = *rcx_1
        *(rax_2 + 8) = *(rcx_1 + 8)
        
        if (*(arg1 + 0xc) != 0)
            sub_142a7dcd0(*arg1)
        
        *arg1 = rax_2
        arg1[1].d = rsi.d
        *(arg1 + 0xc) = 1
        goto label_142ab5818
    
    *arg3 = 7

return arg1
