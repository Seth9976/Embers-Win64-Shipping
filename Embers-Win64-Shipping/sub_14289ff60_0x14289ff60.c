// 函数: sub_14289ff60
// 地址: 0x14289ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(arg1 + 0x20)
void* r15 = *(arg1 + 8)
int32_t* rcx = *(rsi + 0x30)

if (rcx == 0)
label_1428a0041:
    char* rdx_5 = *(rsi + 0x48)
    
    if (rdx_5 == 0)
    label_1428a0098:
        char* rdx_7 = *(rsi + 0x58)
        
        if (rdx_7 == 0)
            return 1
        
        if (sub_1428e9570(r15, rdx_7, *(rsi + 0x60), 0) s> 0)
            return 1
        
        int64_t rax_10 = *(arg1 + 8)
        *(arg1 + 0xac) = 0
        
        if (rax_10 == 0)
            rax_10 = sub_142898ea0(*(arg1 + 0x98), 0)
        
        *(arg1 + 0xb8) = rax_10
        *(arg1 + 0xb0) = 0x40
        
        if ((*(arg1 + 0x38))(0, arg1) != 0)
            return 1
    else
        if (sub_1428e93d0(r15, rdx_5, *(rsi + 0x50), 0) s> 0)
            goto label_1428a0098
        
        int64_t rax_7 = *(arg1 + 8)
        *(arg1 + 0xac) = 0
        
        if (rax_7 == 0)
            rax_7 = sub_142898ea0(*(arg1 + 0x98), 0)
        
        *(arg1 + 0xb8) = rax_7
        *(arg1 + 0xb0) = 0x3f
        
        if ((*(arg1 + 0x38))(0, arg1) != 0)
            goto label_1428a0098
else
    int32_t rax_1 = sub_142898c70(rcx)
    int64_t rcx_1 = *(rsi + 0x40)
    
    if (rcx_1 != 0)
        sub_1428a6780(rcx_1)
        *(rsi + 0x40) = 0
    
    int32_t rdi_1 = 0
    bool cond:0_1 = rax_1 == 0
    
    if (rax_1 s> 0)
        do
            if (sub_1428e94a0(r15, sub_142898ea0(*(rsi + 0x30), rdi_1), 0, *(rsi + 0x38), 
                    rsi + 0x40) s> 0)
                goto label_1428a0041
            
            rdi_1 += 1
        while (rdi_1 s< rax_1)
        
        cond:0_1 = rax_1 == 0
    
    if (cond:0_1)
        goto label_1428a0041
    
    int64_t rax_4 = *(arg1 + 8)
    *(arg1 + 0xac) = 0
    
    if (rax_4 == 0)
        rax_4 = sub_142898ea0(*(arg1 + 0x98), 0)
    
    *(arg1 + 0xb8) = rax_4
    *(arg1 + 0xb0) = 0x3e
    
    if ((*(arg1 + 0x38))(0, arg1) != 0)
        goto label_1428a0041

return 0
