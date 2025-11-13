// 函数: sub_140b726f0
// 地址: 0x140b726f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1 = arg2 - *(arg1 + 0x18)

if (arg2 != *(arg1 + 0x18))
    int64_t rax_1 = sub_140b74270(arg1)
    
    if (rax_1.b == 0)
        return rax_1
    
    *(arg1 + 0x18) = arg2
    bool cond:0_1 = rdi_1 s<= 0
    
    if (rdi_1 s>= 0)
        goto label_140b7274b
    
    int64_t rax_3
    int64_t rdx
    rdx:rax_3 = sx.o(rdi_1)
    
    if (sx.q(*(arg1 + 0x44)) - ((rax_3 ^ rdx) - rdx) s>= 0)
        rax_1.b = 1
    else
        cond:0_1 = rdi_1 s<= 0
    label_140b7274b:
        
        if (cond:0_1 || sx.q(*(arg1 + 0x44)) + rdi_1 s>= sx.q(*(arg1 + 0x38)))
            rax_1.b = 0
        else
            rax_1.b = 1
    
    if (rax_1.b != 0)
        *(arg1 + 0x44) += rdi_1.d
        rax_1.b = 1
        return rax_1
    
    int32_t rdx_1 = *(arg1 + 0x3c)
    *(arg1 + 0x20) = arg2
    *(arg1 + 0x60) = arg2.d
    *(arg1 + 0x64) = (arg2 u>> 0x20).d
    *(arg1 + 0x70) = 0
    *(arg1 + 0x48) = rdx_1
    *(arg1 + 0x44) = 0
    sub_140b73350(arg1, rdx_1)

int64_t rax
rax.b = 1
return rax
