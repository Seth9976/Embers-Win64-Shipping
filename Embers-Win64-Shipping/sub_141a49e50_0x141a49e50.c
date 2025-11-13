// 函数: sub_141a49e50
// 地址: 0x141a49e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg3 & 0x10000000) != 0)
    int64_t rax
    rax.b = 0
    return rax

char rax_1 = *arg1
int32_t rbx = 0
int32_t rdx = 0
int64_t var_38 = 0
int64_t var_30 = 0
int64_t var_28
int32_t rdi_4

if (rax_1 != 2)
    char const* const rdx_3
    
    if (rax_1 == 1)
        rdx_3 = "Inclusive"
    label_141a49f62:
        sub_140a20b00(&var_38, rdx_3, 9)
        int32_t rdx_4 = var_30.d
        int32_t rdi_3 = rdx_4 - 1
        
        if (rdx_4 s<= 0)
            rdi_3 = 0
        
        int32_t rax_12
        rax_12.b = rdx_4 s<= 0
        int32_t rax_14 = rax_12 + 1 + rdx_4
        var_30.d = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_38)
        
        int64_t rax_15 = var_38
        int64_t rcx_7 = sx.q(rdi_3)
        var_28 = 0
        int32_t var_20_1 = 0
        *(rax_15 + (rcx_7 << 1)) = 0x3a
        *(var_38 + (rcx_7 << 1) + 2) = 0
        sub_140a20c40(&var_28, *(arg1 + 4))
        int32_t r8_2
        
        if (var_20_1 == 0)
            r8_2 = 0
        else
            r8_2 = var_20_1 - 1
        
        sub_140a20ba0(&var_38, var_28, r8_2)
        int64_t rcx_10 = var_28
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        goto label_141a49fe4
    
    if (rax_1 == 0)
        rdx_3 = "Exclusive"
        goto label_141a49f62
    
    rdi_4 = 0
else
    sub_140a20b00(&var_38, "Open", 4)
    int32_t rdx_1 = var_30.d
    int32_t rdi_1 = rdx_1 - 1
    
    if (rdx_1 s<= 0)
        rdi_1 = 0
    
    int32_t rax_2
    rax_2.b = rdx_1 s<= 0
    int32_t rax_4 = rax_2 + 1 + rdx_1
    var_30.d = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_38)
    
    int64_t rcx_2 = sx.q(rdi_1)
    *(var_38 + (rcx_2 << 1)) = 0x3a
    *(var_38 + (rcx_2 << 1) + 2) = 0
    int32_t rdx_2 = var_30.d
    int32_t rdi_2 = rdx_2 - 1
    
    if (rdx_2 s<= 0)
        rdi_2 = 0
    
    int32_t rax_7
    rax_7.b = rdx_2 s<= 0
    int32_t rax_9 = rax_7 + 1 + rdx_2
    var_30.d = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_38)
    
    int64_t rcx_4 = sx.q(rdi_2)
    *(var_38 + (rcx_4 << 1)) = 0x30
    *(var_38 + (rcx_4 << 1) + 2) = 0
label_141a49fe4:
    rdx = var_30.d
    rdi_4 = rdx - 1
    
    if (rdx s<= 0)
        rdi_4 = 0

int32_t rax_17
rax_17.b = rdx s<= 0
int32_t rax_19 = rax_17 + 1 + rdx
var_30.d = rax_19

if (rax_19 s> var_30:4.d)
    sub_140594770(&var_38)

int64_t rcx_12 = sx.q(rdi_4)
*(var_38 + (rcx_12 << 1)) = 0x3a
*(var_38 + (rcx_12 << 1) + 2) = 0
char rax_22 = arg1[8]

if (rax_22 == 2)
    sub_140a20b00(&var_38, "Open", 4)
    int32_t rdx_7 = var_30.d
    int32_t rdi_5 = rdx_7 - 1
    
    if (rdx_7 s<= 0)
        rdi_5 = 0
    
    int32_t rax_23
    rax_23.b = rdx_7 s<= 0
    int32_t rax_25 = rax_23 + 1 + rdx_7
    var_30.d = rax_25
    
    if (rax_25 s> var_30:4.d)
        sub_140594770(&var_38)
    
    int64_t rcx_15 = sx.q(rdi_5)
    *(var_38 + (rcx_15 << 1)) = 0x3a
    *(var_38 + (rcx_15 << 1) + 2) = 0
    int32_t rdx_8 = var_30.d
    int32_t rdi_6 = rdx_8 - 1
    
    if (rdx_8 s<= 0)
        rdi_6 = 0
    
    int32_t rax_28
    rax_28.b = rdx_8 s<= 0
    int32_t rax_30 = rax_28 + 1 + rdx_8
    var_30.d = rax_30
    
    if (rax_30 s> var_30:4.d)
        sub_140594770(&var_38)
    
    int64_t rcx_17 = sx.q(rdi_6)
    *(var_38 + (rcx_17 << 1)) = 0x30
    *(var_38 + (rcx_17 << 1) + 2) = 0
else
    char const* const rdx_9
    
    if (rax_22 == 1)
        rdx_9 = "Inclusive"
    label_141a4a0e8:
        sub_140a20b00(&var_38, rdx_9, 9)
        int32_t rdx_10 = var_30.d
        int32_t rdi_7 = rdx_10 - 1
        
        if (rdx_10 s<= 0)
            rdi_7 = 0
        
        int32_t rax_33
        rax_33.b = rdx_10 s<= 0
        int32_t rax_35 = rax_33 + 1 + rdx_10
        var_30.d = rax_35
        
        if (rax_35 s> var_30:4.d)
            sub_140594770(&var_38)
        
        int64_t rax_36 = var_38
        int64_t rcx_20 = sx.q(rdi_7)
        var_28 = 0
        int32_t var_20_2 = 0
        *(rax_36 + (rcx_20 << 1)) = 0x3a
        *(var_38 + (rcx_20 << 1) + 2) = 0
        sub_140a20c40(&var_28, *(arg1 + 0xc))
        int32_t r8_4
        
        if (var_20_2 == 0)
            r8_4 = 0
        else
            r8_4 = var_20_2 - 1
        
        sub_140a20ba0(&var_38, var_28, r8_4)
        int64_t rcx_23 = var_28
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
    else if (rax_22 == 0)
        rdx_9 = "Exclusive"
        goto label_141a4a0e8

int32_t rax_38 = var_30.d

if (rax_38 != 0)
    rbx = rax_38 - 1

sub_140a20ba0(arg2, var_38, rbx)
int64_t rcx_25 = var_38

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rax_39
rax_39.b = 1
return rax_39
