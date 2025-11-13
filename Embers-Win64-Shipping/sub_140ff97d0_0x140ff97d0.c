// 函数: sub_140ff97d0
// 地址: 0x140ff97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx
int64_t* r8

if (arg4 != 0)
    void* rax = (*(*arg4 + 0x48))(arg4)
    rdx = rax
    
    if (rax == 0)
        r8 = nullptr
    else
        r8 = *(rax + 0x40)
else
    rdx = nullptr
    r8 = nullptr

uint32_t rcx = zx.d(*(arg2 + 0x2c))
int64_t arg_10

if (rcx == 0)
    int64_t rax_15
    
    if (rdx == 0)
    label_140ff9a29:
        
        if (arg4 == 0)
            arg_10 = 0
            rax_15 = 0
        else
            rax_15 = arg4[0xb]
        
        int32_t var_20_10 = 1
    else
        int32_t var_20_9
        
        if (*(rdx + 0x50) u<= 0)
            if (*(rdx + 0x80) u> 0)
                goto label_140ff9a29
            
            rax_15 = arg4[0xb]
            var_20_9 = 2
        else
            if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
                goto label_140ff9a29
            
            rax_15 = arg4[0xb]
            var_20_9 = 2
    
    int64_t var_28_9 = rax_15
    sub_140fd5340(arg1 - 0x18, rdx, r8, arg3)
else if (rcx == 1)
    if (rdx == 0)
    label_140ff99d0:
        int64_t rax_13
        
        if (arg4 == 0)
            arg_10 = 0
            rax_13 = 0
        else
            rax_13 = arg4[0xb]
        
        int32_t var_20_8 = 1
        int64_t var_28_8 = rax_13
        sub_140fd4df0(arg1 - 0x18, rdx, r8, arg3)
    else
        if (*(rdx + 0x50) u<= 0)
            if (*(rdx + 0x80) u> 0)
                goto label_140ff99d0
        else if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
            goto label_140ff99d0
        
        int32_t var_20_7 = 2
        int64_t var_28_7 = arg4[0xb]
        sub_140fd4df0(arg1 - 0x18, rdx, r8, arg3)
else if (rcx == 2)
    if (rdx == 0)
    label_140ff9964:
        int64_t rax_10
        
        if (arg4 == 0)
            arg_10 = 0
            rax_10 = 0
        else
            rax_10 = arg4[0xb]
        
        int32_t var_20_6 = 1
        int64_t var_28_6 = rax_10
        sub_140fd4f00(arg1 - 0x18, rdx, r8, arg3)
    else
        if (*(rdx + 0x50) u<= 0)
            if (*(rdx + 0x80) u> 0)
                goto label_140ff9964
        else if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
            goto label_140ff9964
        
        int32_t var_20_5 = 2
        int64_t var_28_5 = arg4[0xb]
        sub_140fd4f00(arg1 - 0x18, rdx, r8, arg3)
else if (rcx == 3)
    if (rdx == 0)
    label_140ff98f8:
        int64_t rax_7
        
        if (arg4 == 0)
            arg_10 = 0
            rax_7 = 0
        else
            rax_7 = arg4[0xb]
        
        int32_t var_20_4 = 1
        int64_t var_28_4 = rax_7
        sub_140fd5010(arg1 - 0x18, rdx, r8, arg3)
    else
        if (*(rdx + 0x50) u<= 0)
            if (*(rdx + 0x80) u> 0)
                goto label_140ff98f8
        else if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
            goto label_140ff98f8
        
        int32_t var_20_3 = 2
        int64_t var_28_3 = arg4[0xb]
        sub_140fd5010(arg1 - 0x18, rdx, r8, arg3)
else if (rcx == 4)
    if (rdx == 0)
    label_140ff988c:
        int64_t rax_4
        
        if (arg4 == 0)
            arg_10 = 0
            rax_4 = 0
        else
            rax_4 = arg4[0xb]
        
        int32_t var_20_2 = 1
        int64_t var_28_2 = rax_4
        sub_140fd5120(arg1 - 0x18, rdx, r8, arg3)
    else
        if (*(rdx + 0x50) u<= 0)
            if (*(rdx + 0x80) u> 0)
                goto label_140ff988c
        else if (**(rdx + 0x48) != 0 || *(rdx + 0x80) u> 0)
            goto label_140ff988c
        
        int32_t var_20_1 = 2
        int64_t var_28_1 = arg4[0xb]
        sub_140fd5120(arg1 - 0x18, rdx, r8, arg3)
