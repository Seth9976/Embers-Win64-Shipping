// 函数: sub_1428a0c40
// 地址: 0x1428a0c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
void* r13 = *(arg1 + 0xe8)
int32_t rax = sub_142898c70(*(arg1 + 0x98))

if (r13 != 0 && (*(r13 + 0x28) & 5) != 0 && arg2 s> 0 && arg2 s< rax)
    int32_t result = sub_14289fed0(arg1, arg2)
    
    if (result - 1 u<= 1)
        return result

int32_t rbx_1 = arg2
int64_t* rbp_1

if (arg2 s< rax)
    while (true)
        int64_t* rax_1 = sub_142898ea0(*(arg1 + 0x98), rbx_1)
        rbp_1 = rax_1
        int32_t rax_2 = sub_1428e78c0(rax_1, zx.q(*(*(arg1 + 0x20) + 0x1c)), 0)
        
        if (rax_2 == 1)
            break
        
        if (rax_2 == 2)
            goto label_1428a0dfa
        
        rbx_1 += 1
        
        if (rbx_1 s>= rax)
            if ((*(*(arg1 + 0x20) + 0x14) & 0x80000) != 0)
                break
            
            return 3
    
    goto label_1428a0e60

if (arg2 == rax && (*(*(arg1 + 0x20) + 0x14) & 0x80000) != 0)
    rbx_1 = 0
    int64_t* rax_5 = sub_142898ea0(*(arg1 + 0x98), 0)
    rbp_1 = rax_5
    int64_t* r14_1 = nullptr
    int32_t* rax_7 = (*(arg1 + 0x78))(arg1, sub_1428a3930(rax_5))
    
    if (rax_7 != 0)
        int32_t rsi_1 = 0
        
        if (sub_142898c70(rax_7) s> 0)
            int32_t rax_11
            
            do
                int64_t* rax_9 = sub_142898ea0(rax_7, rsi_1)
                r14_1 = rax_9
                
                if (sub_1428a3740(rax_9, rbp_1) == 0)
                    break
                
                rsi_1 += 1
                rax_11 = sub_142898c70(rax_7)
            while (rsi_1 s< rax_11)
        
        if (rsi_1 s>= sub_142898c70(rax_7))
            r14_1 = nullptr
        else
            sub_1428a3ba0(r14_1)
        
        sub_142898cb0(rax_7, sub_1428a2c50)
        
        if (r14_1 != 0)
            if (sub_1428e78c0(r14_1, zx.q(*(*(arg1 + 0x20) + 0x1c)), 0) != 2)
                sub_142898dc0(*(arg1 + 0x98), 0, r14_1)
                sub_1428a2c50(rbp_1)
                *(arg1 + 0x94) = 0
            label_1428a0e60:
                
                if (r13 == 0)
                    return 1
                
                if (sub_142898c70(*(r13 + 8)) s<= 0)
                    return 1
                
                if (*(r13 + 0x30) s< 0)
                    *(r13 + 0x30) = arg2
                
                if (*(r13 + 0x2c) s>= 0)
                    return 1
            else
                sub_1428a2c50(r14_1)
            label_1428a0dfa:
                *(arg1 + 0xac) = rbx_1
                
                if (rbp_1 == 0)
                    rbp_1 = sub_142898ea0(*(arg1 + 0x98), rbx_1)
                
                *(arg1 + 0xb8) = rbp_1
                *(arg1 + 0xb0) = 0x1c
                
                if ((*(arg1 + 0x38))(0, arg1) == 0)
                    return 2

return 3
