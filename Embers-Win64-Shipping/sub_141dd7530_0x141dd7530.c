// 函数: sub_141dd7530
// 地址: 0x141dd7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg2

if (arg2 == 0)
    rsi = nullptr
else
    void* rax_1 = sub_1425492f0()
    
    if (rax_1 == 0)
        rsi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi = nullptr

sub_140d3a3a0(&arg1[5], rsi)
int64_t* rax_4 = sub_140d3c6e0(&arg1[3])
int64_t* rax_5
int64_t* rcx_4
rax_5, rcx_4 = sub_140d3c6e0(&arg1[5])
int32_t rax_11

if (rax_4 == 0)
label_141dd75d2:
    
    if (rax_5 == 0)
        rax_11 = 0
    else
        rcx_4 = rax_5[0x23]
        
        if (rcx_4 != 0)
        label_141dd75fe:
            char rax_10
            rax_10, rcx_4 = (*(*rcx_4 + 0x268))(rcx_4)
            
            rax_11 = rax_10 == 0 ? 0 : 1
        else
            (*(*rax_5 + 0x390))(rax_5)
            rcx_4 = rax_5[0x23]
            
            if (rcx_4 != 0)
                goto label_141dd75fe
            
            rax_11 = 0
else
    rcx_4 = rax_4[0x23]
    
    if (rcx_4 == 0)
        int64_t rdx_2 = *rax_4
        (*(rdx_2 + 0x390))(rax_4, rdx_2)
        rcx_4 = rax_4[0x23]
        
        if (rcx_4 == 0)
            goto label_141dd75d2
        
        goto label_141dd75c8
    
label_141dd75c8:
    char rax_7
    rax_7, rcx_4 = (*(*rcx_4 + 0x268))(rcx_4)
    
    if (rax_7 == 0)
        goto label_141dd75d2
    
    rax_11 = 1

*arg1 &= 0xfffffffe
*arg1 |= rax_11
char rax_14

if (rax_5 != 0)
    int64_t* rcx_7 = rax_5[0x23]
    
    if (rcx_7 == 0)
        (*(*rax_5 + 0x390))(rax_5)
        rcx_7 = rax_5[0x23]
    
    rax_14, rcx_4 = (*(*rcx_7 + 0x260))(rcx_7)

if (rax_5 == 0 || rax_14 == 0)
    rcx_4.b = 0
else
    rcx_4.b = 2

char result = (*(arg1 + 0x4a) & 0xfd) | rcx_4.b
*(arg1 + 0x4a) = result

if ((result & 2) == 0)
    *(arg1 + 0x49) = rax_5 != 0
else
    *(arg1 + 0x49) = 3

return result
