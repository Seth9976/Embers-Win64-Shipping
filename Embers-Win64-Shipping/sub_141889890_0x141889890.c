// 函数: sub_141889890
// 地址: 0x141889890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r10 = sx.q(arg2)
void* const var_38
int32_t* var_28
int64_t* var_20
int64_t arg_8

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_141889904:
    var_38 = nullptr
    var_28 = &arg_10
    int32_t i_5 = 0
    var_20 = &var_38
    sub_14185a180(arg1 + 8, &arg_8, &var_28, nullptr)
    int32_t i_3 = i_5
    
    if (i_3 != 0)
        int64_t* rbx_2 = var_38 + 0x20
        int32_t i
        
        do
            sub_1418221b0(rbx_2)
            rbx_2 = &rbx_2[6]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* const rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    r10 = zx.q(arg_10)
else
    void* r8_1 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x40
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x50)) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_141889904
    
    int64_t rdx_3 = *(arg1 + 8)
    
    while (true)
        int64_t rcx_1 = sx.q(rax_1) << 5
        
        if (*(rcx_1 + rdx_3) == r10.d)
            break
        
        rax_1 = *(rcx_1 + rdx_3 + 0x18)
        
        if (rax_1 == 0xffffffff)
            goto label_141889904
    
    if (rax_1 == 0xffffffff)
        goto label_141889904

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_1418899c1:
    var_38 = nullptr
    var_28 = &arg_10
    int32_t i_6 = 0
    var_20 = &var_38
    sub_14185a180(arg1 + 0x58, &arg_8, &var_28, nullptr)
    int32_t i_4 = i_6
    
    if (i_4 != 0)
        void* rbx_4 = var_38 + 0x20
        int32_t i_1
        
        do
            sub_1418221b0(rbx_4)
            rbx_4 += 0x30
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    void* const rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    r10 = zx.q(arg_10)
else
    void* r8_3 = arg1 + 0x90
    void* rcx_5 = *(r8_3 + 8)
    
    if (rcx_5 != 0)
        r8_3 = rcx_5
    
    int32_t rax_4 = *(r8_3 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(r10.d)) << 2))
    
    if (rax_4 == 0xffffffff)
        goto label_1418899c1
    
    int64_t rdx_8 = *(arg1 + 0x58)
    
    while (true)
        int64_t rcx_7 = sx.q(rax_4) << 5
        
        if (*(rcx_7 + rdx_8) == r10.d)
            break
        
        rax_4 = *(rcx_7 + rdx_8 + 0x18)
        
        if (rax_4 == 0xffffffff)
            goto label_1418899c1
    
    if (rax_4 == 0xffffffff)
        goto label_1418899c1

if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
label_141889a83:
    sub_14090a150(arg1 + 0xa8, &var_28)
    *var_20 = arg_10
    int32_t rax_9 = var_28.d
    *(var_20 + 4) = -1
    sub_140908a30(arg1 + 0xa8, &arg_8, *var_20, var_20, rax_9, nullptr)
    r10 = zx.q(arg_10)
else
    void* rcx_11 = *(arg1 + 0xe8)
    void* r8_5 = arg1 + 0xe0
    
    if (rcx_11 != 0)
        r8_5 = rcx_11
    
    int32_t rax_7 = *(r8_5 + (((sx.q(*(arg1 + 0xf0)) - 1) & sx.q(r10.d)) << 2))
    
    if (rax_7 == 0xffffffff)
        goto label_141889a83
    
    int64_t rdx_13 = *(arg1 + 0xa8)
    
    while (true)
        int64_t rcx_13 = sx.q(rax_7) * 2
        
        if (*(rdx_13 + (rcx_13 << 3)) == r10.d)
            break
        
        rax_7 = *(rdx_13 + (rcx_13 << 3) + 8)
        
        if (rax_7 == 0xffffffff)
            goto label_141889a83
    
    if (rax_7 == 0xffffffff)
        goto label_141889a83

if (*(arg1 + 0x100) == *(arg1 + 0x12c))
label_141889b22:
    arg_8 = 0
    sub_140bd26e0(arg1 + 0xf8, &arg_10, &arg_8)
    r10 = zx.q(arg_10)
else
    void* rcx_16 = *(arg1 + 0x138)
    void* r8_7 = arg1 + 0x130
    
    if (rcx_16 != 0)
        r8_7 = rcx_16
    
    int32_t rax_12 = *(r8_7 + (((sx.q(*(arg1 + 0x140)) - 1) & sx.q(r10.d)) << 2))
    
    if (rax_12 == 0xffffffff)
        goto label_141889b22
    
    int64_t r8_8 = *(arg1 + 0xf8)
    
    while (true)
        int64_t rdx_20 = sx.q(rax_12) * 3
        
        if (*(r8_8 + (rdx_20 << 3)) == r10.d)
            break
        
        rax_12 = *(r8_8 + (rdx_20 << 3) + 0x10)
        
        if (rax_12 == 0xffffffff)
            goto label_141889b22
    
    if (rax_12 == 0xffffffff)
        goto label_141889b22

if (*(arg1 + 0x150) != *(arg1 + 0x17c))
    void* rcx_19 = *(arg1 + 0x188)
    void* r8_10 = arg1 + 0x180
    
    if (rcx_19 != 0)
        r8_10 = rcx_19
    
    int32_t i_2 = *(r8_10 + (((sx.q(*(arg1 + 0x190)) - 1) & sx.q(r10.d)) << 2))
    
    if (i_2 != 0xffffffff)
        int64_t r8_11 = *(arg1 + 0x148)
        
        do
            int64_t rdx_25 = sx.q(i_2) * 3
            
            if (*(r8_11 + (rdx_25 << 3)) == r10.d)
                if (i_2 != 0xffffffff)
                    return i_2
                
                break
            
            i_2 = *(r8_11 + (rdx_25 << 3) + 0x10)
        while (i_2 != 0xffffffff)

arg_8 = 0
return sub_140bd26e0(arg1 + 0x148, &arg_10, &arg_8)
