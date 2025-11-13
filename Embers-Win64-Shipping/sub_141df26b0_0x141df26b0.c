// 函数: sub_141df26b0
// 地址: 0x141df26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_24 = 1
int32_t* r10 = arg2 + 0x110
int32_t var_28 = 0
int32_t rbx = r10[4]
int32_t* var_20 = r10
int32_t var_18 = 0xffffffff
int32_t r9 = 0
int64_t var_14 = 0

if (rbx != 0)
    int32_t* rax_1 = *(r10 + 8)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141df273d:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_24_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_14.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_14.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_14:4.d = r9
            var_28 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = r10[rcx_1 + 1]
            int32_t var_18_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141df273d
        
        var_14.d = rbx

*arg1 = arg2
*(arg1 + 8) = var_28.o
*(arg1 + 0x18) = 0xffffffff
return arg1
