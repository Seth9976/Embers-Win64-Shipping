// 函数: sub_141e1e0f0
// 地址: 0x141e1e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 0xb0)
void* rbx
void* rcx

if (rax == 0xffff || *(arg1 + 0xa8) == -1)
    rcx = *arg2
label_141e1e148:
    *(arg1 + 0xb0) = *(rcx + 0x430)
    *(arg1 + 0xa8) = *(rcx + 0x428)
    int32_t rcx_1 = 0
    *(arg1 + 0xb2) = *(rcx + 0x432)
    void* rax_4 = *arg2
    bool cond:0_1 = arg2[8].b != 0
    int32_t rdx = 0
    void* var_58 = rax_4
    int64_t var_50 = 0
    int32_t var_44_1 = 0
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x1b)
    int32_t rbx_1 = *(rax_4 + 0x4a8)
    
    if (rbx_1 s> 0)
        int32_t var_48_1 = 0
        sub_141acba60(&var_50, rbx_1)
        rcx_1 = var_44_1
        rdx = var_48_1
    
    int32_t rax_5 = rdx + rbx_1
    
    if (rax_5 s> rcx_1)
        sub_141acb8e0(&var_50, rdx)
    
    int256_t zmm1_1 = sub_141abd4c0(&var_38, rax_4 + 0x4a0)
    int64_t* rcx_5 = *(arg1 + 0x18)
    
    if (rcx_5 == 0)
        int64_t* rcx_6 = &var_50
        
        if (cond:0_1 == 0)
            sub_141e0ba30(rcx_6)
        else
            sub_141e47c50(rcx_6, zmm1_1)
    else
        (*(*rcx_5 + 0x18))(rcx_5, &var_58)
    
    if (arg1 + 0x30 != &var_50)
        *(arg1 + 0x30) = var_50
        *(arg1 + 0x38) = rax_5
        *(arg1 + 0x3c) = var_44_1
        *(arg1 + 0x40) = rax_4 + 0x4a0
    
    rbx = arg1 + 0x48
    int64_t var_28
    *(rbx + 0x10) = var_28
    int16_t var_20
    *(rbx + 0x18) = var_20
    
    if (rbx != &var_38)
        *rbx = var_38
        int64_t var_30
        *(rbx + 8) = var_30.d
        *(rbx + 0xc) = var_30:4.d
    
    *(arg1 + 0x62) = 1
else
    rcx = *arg2
    
    if (rax != *(rcx + 0x430))
        goto label_141e1e148
    
    rbx = arg1 + 0x48

if (&arg2[1] != arg1 + 0x30)
    sub_141a911c0(&arg2[1], arg1 + 0x30)
    arg2[3] = *(arg1 + 0x40)

return sub_141de7110(&arg2[4], rbx) __tailcall
