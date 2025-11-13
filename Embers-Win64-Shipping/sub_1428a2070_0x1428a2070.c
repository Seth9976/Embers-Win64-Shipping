// 函数: sub_1428a2070
// 地址: 0x1428a2070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0x20)
void* rdi = arg2
int32_t rcx = *(rax + 0x14)
void* rbp_1

if ((rcx.b & 2) != 0)
    rbp_1 = rax + 8
label_1428a20c2:
    int32_t rax_2 = sub_14289e600(sub_14289a060(rdi), rbp_1)
    bool cond:0_1 = rax_2 != 0
    
    if (rax_2 s>= 0)
        if (arg3 s< 0)
            return 0
        
        cond:0_1 = rax_2 != 0
    
    if (not(cond:0_1))
        *(arg1 + 0xac) = arg3
        void* rax_3
        
        if (rdi == 0)
            rax_3 = sub_142898ea0(*(arg1 + 0x98), arg3)
        else
            rax_3 = rdi
        
        *(arg1 + 0xb8) = rax_3
        *(arg1 + 0xb0) = 0xd
        int32_t result = (*(arg1 + 0x38))(0, arg1)
        
        if (result == 0)
            return result
    else if (rax_2 s> 0)
        *(arg1 + 0xac) = arg3
        void* rax_4
        
        if (rdi == 0)
            rax_4 = sub_142898ea0(*(arg1 + 0x98), arg3)
        else
            rax_4 = rdi
        
        *(arg1 + 0xb8) = rax_4
        *(arg1 + 0xb0) = 9
        
        if ((*(arg1 + 0x38))(0, arg1) == 0)
            return 0
    
    int32_t rax_7 = sub_14289e600(sub_1406bc560(rdi), rbp_1)
    bool cond:1_1 = rax_7 s>= 0
    
    if (rax_7 s> 0)
    label_1428a21a1:
        
        if (not(cond:1_1))
            *(arg1 + 0xac) = arg3
            
            if (rdi == 0)
                rdi = sub_142898ea0(*(arg1 + 0x98), arg3)
            
            *(arg1 + 0xb0) = 0xa
            goto label_1428a21cc
    else
        if (arg3 s< 0)
            return 0
        
        cond:1_1 = rax_7 s>= 0
        
        if (rax_7 != 0)
            goto label_1428a21a1
        
        *(arg1 + 0xac) = arg3
        
        if (rdi == 0)
            rdi = sub_142898ea0(*(arg1 + 0x98), arg3)
        
        *(arg1 + 0xb0) = 0xe
    label_1428a21cc:
        *(arg1 + 0xb8) = rdi
        
        if ((*(arg1 + 0x38))(0, arg1) == 0)
            return 0
else if (not(test_bit(rcx, 0x15)))
    rbp_1 = nullptr
    goto label_1428a20c2
return 1
