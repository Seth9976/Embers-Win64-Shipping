// 函数: sub_142aec2f0
// 地址: 0x142aec2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_142aa0130(arg2)
int32_t rax_1 = sub_142aa06c0(arg2)

if (rax_1 == 0)
    int32_t* r8_5 = *(arg1 + 8)
    int64_t rbp_1 = 0x1000000
    int32_t rax_9 = *r8_5
    
    if (rax_9 s> 0)
        rbp_1 = 0
    
    if (rax_9 s<= 0)
        void* rsi_3 = *(*(arg1 + 0x10) + 0x20)
        int32_t rdx_7 = *(rsi_3 + 8)
        char rax_11
        
        if (rdx_7 + 1 s< 0 || *(rsi_3 + 0xc) s< rdx_7 + 1)
            rax_11 = sub_142aeb240(rsi_3, rdx_7 + 1, r8_5)
        
        if ((rdx_7 + 1 s>= 0 && *(rsi_3 + 0xc) s>= rdx_7 + 1) || rax_11 != 0)
            *(*(rsi_3 + 0x18) + (sx.q(*(rsi_3 + 8)) << 3)) = rbp_1
            *(rsi_3 + 8) += 1
        
        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
            sub_142af0120(arg1, 0x10314)
    
    sub_142a9dbc0(arg2)
    sub_142a47920(arg2)
else
    if (rax_1 == 1)
        sub_142a48580(arg1 + 0x130, sub_142a9ed50(arg2, 0))
        sub_142a9dbc0(arg2)
        return sub_142a47920(arg2) __tailcall
    
    void* rcx_2 = *(*(arg1 + 0x10) + 0x68)
    int32_t rsi_1 = *(rcx_2 + 8)
    sub_142ae7110(rcx_2, arg2, *(arg1 + 8))
    int32_t* r8_2 = *(arg1 + 8)
    uint64_t rax = zx.q(*r8_2)
    int32_t rsi_2
    
    if (rax.d s<= 0)
        if (rsi_1 s> 0xffffff)
            abort()
            noreturn
        
        if (rsi_1 s< 0)
            abort()
            noreturn
        
        rsi_2 = rsi_1 | 0xb000000
    else
        rsi_2 = 0
    
    if (rax.d s<= 0)
        void* rdi_2 = *(*(arg1 + 0x10) + 0x20)
        int32_t rdx_1 = *(rdi_2 + 8)
        char rax_4
        
        if (rdx_1 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_1 + 1)
            rax_4 = sub_142aeb240(rdi_2, rdx_1 + 1, r8_2)
        
        if ((rdx_1 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_1 + 1) || rax_4 != 0)
            *(*(rdi_2 + 0x18) + (sx.q(*(rdi_2 + 8)) << 3)) = sx.q(rsi_2)
            *(rdi_2 + 8) += 1
        
        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
            return sub_142af0120(arg1, 0x10314) __tailcall
