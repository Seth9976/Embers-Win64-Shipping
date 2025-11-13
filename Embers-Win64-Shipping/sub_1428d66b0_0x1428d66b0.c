// 函数: sub_1428d66b0
// 地址: 0x1428d66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
bool cond:0 = *arg3 == 0
int64_t* rcx

if (not(cond:0))
    rcx = arg3[1]

if (cond:0 || rcx == 0)
    sub_1428a5670(3, 0x64, 0x6b, "crypto\bn\bn_blind.c", 0x8d)
else
    int32_t rax_1 = *(arg3 + 0x24)
    int32_t var_18
    
    if (rax_1 != 0xffffffff)
        int32_t r14_1 = 0
        *(arg3 + 0x24) = rax_1 + 1
        bool cond:2_1
        
        if (rax_1 == 0x1f && arg3[2] != 0 && (arg3[5].b & 2) == 0)
            var_18.q = 0
            cond:2_1 = sub_1428d6850(arg3, nullptr, nullptr, arg4, 0, 0) == 0
        label_1428d67ad:
            
            if (not(cond:2_1))
                r14_1 = 1
        else if ((arg3[5].b & 1) != 0)
            r14_1 = 1
        else
            void* r9 = arg3[6]
            var_18.q = arg4
            
            if (r9 == 0)
                if (sub_1429082e0(rcx, rcx, rcx, arg3[3], var_18) != 0)
                    int64_t* rcx_3 = *arg3
                    var_18.q = arg4
                    cond:2_1 = sub_1429082e0(rcx_3, rcx_3, rcx_3, arg3[3], var_18) == 0
                    goto label_1428d67ad
            else if (sub_1428cd090(rcx, rcx, rcx, r9, var_18) != 0)
                int64_t* rcx_2 = *arg3
                var_18.q = arg4
                
                if (sub_1428cd090(rcx_2, rcx_2, rcx_2, arg3[6], var_18) != 0)
                    r14_1 = 1
        
        if (*(arg3 + 0x24) == 0x20)
            *(arg3 + 0x24) = 0
        
        if (r14_1 != 0)
            goto label_1428d67cf
    else
        *(arg3 + 0x24) = 0
    label_1428d67cf:
        int64_t* rax_8
        
        if (arg2 != 0)
            rax_8 = sub_142890040(arg2, arg3[1])
        
        if (arg2 == 0 || rax_8 != 0)
            void* r9_4 = arg3[6]
            int64_t* r8_4 = *arg3
            var_18.q = arg4
            
            if (r9_4 == 0)
                return sub_1429082e0(arg1, arg1, r8_4, arg3[3], var_18)
            
            return sub_1428ccb60(arg1, arg1, r8_4, r9_4, var_18)

return 0
