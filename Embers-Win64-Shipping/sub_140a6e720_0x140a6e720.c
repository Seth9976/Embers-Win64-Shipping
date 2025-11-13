// 函数: sub_140a6e720
// 地址: 0x140a6e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg3[1].d
int32_t rax_1

if (rdx s> 1)
    rax_1 = arg4[1].d

int64_t var_28
int64_t var_20_1
int32_t rdi_2

if (rdx s> 1 && rax_1 s> 1)
    int32_t r9 = arg2[1].d
    int32_t rcx = rax_1 - 1
    var_28 = 0
    int32_t rax_2 = rdx - 1
    var_20_1 = 0
    
    if (rax_1 == 0)
        rcx = 0
    
    if (rdx == 0)
        rax_2 = 0
    
    int32_t rcx_1 = rcx + rax_2
    int32_t rdx_2 = r9 - 1 + rcx_1
    
    if (r9 == 0)
        rdx_2 = rcx_1
    
    if (rdx_2 + 3 s> 0)
        sub_1405947f0(&var_28, rdx_2 + 3)
        r9 = arg2[1].d
    
    int32_t r8 = r9 - 1
    
    if (r9 == 0)
        r8 = 0
    
    sub_140a20ba0(&var_28, *arg2, r8)
    int32_t rdx_5 = var_20_1.d
    int32_t rdi_1 = rdx_5 - 1
    
    if (rdx_5 s<= 0)
        rdi_1 = 0
    
    int32_t rax_3
    rax_3.b = rdx_5 s<= 0
    int32_t rax_5 = rax_3 + 1 + rdx_5
    var_20_1.d = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_28)
    
    int64_t rcx_5 = sx.q(rdi_1)
    *(var_28 + (rcx_5 << 1)) = 0x2d
    *(var_28 + (rcx_5 << 1) + 2) = 0
    int32_t rax_8 = arg3[1].d
    int32_t r8_1 = rax_8 - 1
    
    if (rax_8 == 0)
        r8_1 = 0
    
    sub_140a20ba0(&var_28, *arg3, r8_1)
    int32_t rdx_7 = var_20_1.d
    rdi_2 = rdx_7 - 1
    
    if (rdx_7 s<= 0)
        rdi_2 = 0
    
    int32_t rax_9
    rax_9.b = rdx_7 s<= 0
    int32_t rax_11 = rax_9 + 1 + rdx_7
    var_20_1.d = rax_11
    
    if (rax_11 s> 0)
        sub_140594770(&var_28)
    
    goto label_140a6e848

int32_t r8_3 = arg4[1].d
int32_t rax_14
int64_t rdx_8

if (r8_3 s<= 1)
    if (rdx s> 1)
        int32_t r9_1 = arg2[1].d
        var_28 = 0
        var_20_1 = 0
        int32_t rcx_14 = r9_1 + 1
        
        if (r9_1 == 0)
            rcx_14 = 2
        
        int32_t rax_22 = rdx - 1
        
        if (rdx == 0)
            rax_22 = 0
        
        int32_t rcx_15 = rcx_14 + rax_22
        
        if (rcx_15 s> 0)
            sub_1405947f0(&var_28, rcx_15)
            r9_1 = arg2[1].d
        
        int32_t r8_5 = r9_1 - 1
        
        if (r9_1 == 0)
            r8_5 = 0
        
        sub_140a20ba0(&var_28, *arg2, r8_5)
        int32_t rdx_15 = var_20_1.d
        int32_t rdi_3 = rdx_15 - 1
        
        if (rdx_15 s<= 0)
            rdi_3 = 0
        
        int32_t rax_23
        rax_23.b = rdx_15 s<= 0
        int32_t rax_25 = rax_23 + 1 + rdx_15
        var_20_1.d = rax_25
        
        if (rax_25 s> 0)
            sub_140594770(&var_28)
        
        int64_t rcx_19 = sx.q(rdi_3)
        *(var_28 + (rcx_19 << 1)) = 0x2d
        *(var_28 + (rcx_19 << 1) + 2) = 0
        rax_14 = arg3[1].d
        rdx_8 = *arg3
        goto label_140a6e862
    
    sub_140596d10(arg1, arg2)
else
    int32_t rcx_10 = arg2[1].d
    var_28 = 0
    var_20_1 = 0
    int32_t rdx_9 = rcx_10 + 1
    
    if (rcx_10 == 0)
        rdx_9 = 2
    
    int32_t rax_18 = r8_3 - 1
    
    if (r8_3 == 0)
        rax_18 = 0
    
    int32_t rdx_10 = rdx_9 + rax_18
    
    if (rdx_10 s> 0)
        sub_1405947f0(&var_28, rdx_10)
        rcx_10 = arg2[1].d
    
    int32_t r8_4 = rcx_10 - 1
    
    if (rcx_10 == 0)
        r8_4 = 0
    
    sub_140a20ba0(&var_28, *arg2, r8_4)
    int32_t rdx_12 = var_20_1.d
    rdi_2 = rdx_12 - 1
    
    if (rdx_12 s<= 0)
        rdi_2 = 0
    
    int32_t rax_19
    rax_19.b = rdx_12 s<= 0
    int32_t rax_21 = rax_19 + 1 + rdx_12
    var_20_1.d = rax_21
    
    if (rax_21 s> 0)
        sub_140594770(&var_28)
    
label_140a6e848:
    int64_t rcx_8 = sx.q(rdi_2)
    *(var_28 + (rcx_8 << 1)) = 0x2d
    *(var_28 + (rcx_8 << 1) + 2) = 0
    rax_14 = arg4[1].d
    rdx_8 = *arg4
label_140a6e862:
    int32_t r8_2 = rax_14 - 1
    
    if (rax_14 == 0)
        r8_2 = 0
    
    sub_140a20ba0(&var_28, rdx_8, r8_2)
    *arg1 = var_28
    arg1[1].d = var_20_1.d
    *(arg1 + 0xc) = var_20_1:4.d
return arg1
