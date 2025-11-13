// 函数: sub_1428a1d30
// 地址: 0x1428a1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = sub_142898c70(*(arg1 + 0x98)) - 1
void* rax_1 = sub_142898ea0(*(arg1 + 0x98), rdi)
void* rbp = rax_1
void* rsi_1

if (*(arg1 + 0xf0) == 0)
    if ((*(arg1 + 0x48))(arg1, rbp, rbp) != 0)
        rsi_1 = rbp
        goto label_1428a1e08
    
    if ((*(*(arg1 + 0x20) + 0x14) & 0x80000) == 0)
        if (rdi s> 0)
            rdi -= 1
            *(arg1 + 0xac) = rdi
            goto label_1428a1e05
        
        *(arg1 + 0xac) = 0
        
        if (rbp == 0)
            rbp = sub_142898ea0(*(arg1 + 0x98), 0)
        
        *(arg1 + 0xb8) = rbp
        *(arg1 + 0xb0) = 0x15
        return (*(arg1 + 0x38))(0, arg1)
    
    rsi_1 = rbp
else
    rsi_1 = rax_1
    rbp = nullptr

while (true)
    if (sub_1428a2070(arg1, rsi_1, rdi) == 0)
        return 0
    
    *(arg1 + 0xc0) = rbp
    *(arg1 + 0xb8) = rsi_1
    *(arg1 + 0xac) = rdi
    
    if ((*(arg1 + 0x38))(1, arg1) == 0)
        return 0
    
    int32_t temp0_1 = rdi
    rdi -= 1
    
    if (temp0_1 - 1 s>= 0)
        rbp = rsi_1
    label_1428a1e05:
        rsi_1 = sub_142898ea0(*(arg1 + 0x98), rdi)
    
label_1428a1e08:
    
    if (rdi s< 0)
        return 1
    
    if (rsi_1 == rbp && (*(*(arg1 + 0x20) + 0x14) & 0x4000) == 0)
        continue
    
    void* rax_8
    
    if (sub_1428a38c0(rbp) != 0)
        if (sub_1428a2410(rsi_1) s> 0)
            continue
        else
            *(arg1 + 0xac) = rdi
            
            if (rsi_1 == 0)
                rax_8 = sub_142898ea0(*(arg1 + 0x98), rdi)
            else
                rax_8 = rsi_1
            
            *(arg1 + 0xb0) = 7
    else
        int32_t rdx_4 = rdi + 1
        
        if (rbp == rsi_1)
            rdx_4 = rdi
        
        *(arg1 + 0xac) = rdx_4
        
        if (rbp == 0)
            rax_8 = sub_142898ea0(*(arg1 + 0x98), rdx_4)
            *(arg1 + 0xb0) = 6
        else
            rax_8 = rbp
            *(arg1 + 0xb0) = 6
    
    *(arg1 + 0xb8) = rax_8
    
    if ((*(arg1 + 0x38))(0, arg1) == 0)
        return 0
