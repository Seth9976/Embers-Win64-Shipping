// 函数: sub_1428f1d70
// 地址: 0x1428f1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0 && *arg1 == 1)
    int32_t* rsi_1 = *(arg1 + 8)
    int64_t rax_1 = sub_1428abf10(arg2)
    *(arg1 + 0x10) = rax_1
    
    if (rax_1 == 0)
        return 0
    
    int32_t rbx_1 = 0
    
    if (sub_142898c70(rsi_1) s> 0)
        while (true)
            int64_t rax_3 = sub_142898ea0(rsi_1, rbx_1)
            int32_t r9_1
            r9_1.b = rbx_1 == 0
            
            if (sub_1428e7040(*(arg1 + 0x10), rax_3, 0xffffffff, r9_1) == 0)
                break
            
            rbx_1 += 1
            
            if (rbx_1 s>= sub_142898c70(rsi_1))
                goto label_1428f1dfd
        
        goto label_1428f1e1f
    
label_1428f1dfd:
    
    if (sub_1428ac180(*(arg1 + 0x10), nullptr) s< 0)
    label_1428f1e1f:
        sub_1428abf30(*(arg1 + 0x10))
        *(arg1 + 0x10) = 0
        return 0

return 1
