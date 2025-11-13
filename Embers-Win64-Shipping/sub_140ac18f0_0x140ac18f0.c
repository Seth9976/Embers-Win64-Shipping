// 函数: sub_140ac18f0
// 地址: 0x140ac18f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t rax_1 = __security_cookie ^ &var_f8
uint64_t var_18 = rax_1
int16_t* rbx = arg2
int32_t var_c8

if ((arg1[5].b & 0x40) != 0)
label_140ac1a5f:
    int16_t* rsi_2 = rbx
    
    if (rbx == 0)
        rsi_2 = nullptr
    
    uint64_t rax_9
    
    if (rbx == 0)
        rax_9 = zx.q(sbb.d(rax_1.d, rax_1.d, rbx != 0))
    else
        if (rbx == 0)
            rbx = nullptr
        
        rax_9 = -1
        
        do
            rax_9 += 1
        while (rbx[rax_9] != 0)
    
    int64_t* rcx_7 = arg1[1]
    int32_t rbx_2 = (rax_9 + 1).d
    var_c8 = neg.d(rbx_2)
    int32_t* rdx_6 = *rcx_7
    
    if (&rdx_6[1] u> rcx_7[1])
        int32_t* rdx_7 = &var_c8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_7, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_7, 4)
    else
        var_c8 = *rdx_6
        *rcx_7 += 4
    
    if (rbx_2 != 0)
        (*(*arg1 + 0x150))(arg1, rsi_2, sx.q(rbx_2) * 2)
else
    rax_1 = zx.q(*arg2)
    int16_t* rcx = arg2
    
    while (rax_1.w != 0)
        if (rax_1.w u> 0x7f)
            goto label_140ac1a5f
        
        rax_1 = zx.q(rcx[1])
        rcx = &rcx[1]
    
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (arg2[rax_2] != 0)
    
    int64_t* rcx_1 = arg1[1]
    var_c8 = rax_2.d + 1
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &var_c8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        var_c8 = *rdx
        *rcx_1 += 4
    
    int32_t rcx_3 = var_c8
    
    if (rcx_3 != 0)
        void* rdx_2 = nullptr
        void* var_38_1 = nullptr
        int32_t r8_1 = 0
        
        if (rcx_3 s> 0 && rbx[sx.q(rcx_3 - 1)] == 0)
            r8_1 = 1
            rcx_3 -= 1
        
        int32_t rsi_1 = r8_1 + rcx_3
        int32_t var_28_1 = rcx_3
        
        if (rsi_1 u> 0x80 && rsi_1 != 0)
            void* rax_7 = sub_140a84c80(0, sx.q(rsi_1), 0)
            rdx_2 = rax_7
            var_38_1 = rax_7
        
        void var_b8
        void* rcx_4 = &var_b8
        
        if (rdx_2 != 0)
            rcx_4 = rdx_2
        
        sub_14060abb0(rcx_4, rsi_1, rbx, rsi_1, 0x3f)
        (*(*arg1 + 0x150))(arg1, rcx_4, sx.q(var_c8))
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
int32_t result
result.b = 1
__security_check_cookie(var_18 ^ &var_f8)
return result
