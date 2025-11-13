// 函数: sub_140ce9110
// 地址: 0x140ce9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0
uint64_t rax_5
uint64_t var_48
int64_t var_38
uint64_t arg_10
uint64_t arg_20

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 6)) == 0)
    int32_t rcx_8
    rcx_8.b = *(arg2 + 0xc) == 0
    
    if ((rcx_8.b & sub_140b5b8a0(*(arg2 + 8), 0xd)) == 0)
        return 0
    
    void* rcx_9 = *rbx
    var_48 = 0
    int32_t var_40_2 = 0
    sub_140a1d9d0(*(rcx_9 + 8), &var_48, arg4)
    uint64_t rdx_5 = var_48
    int32_t rsi_4
    uint64_t r14_1
    
    if (var_40_2 == 0)
        rsi_4 = 0
        r14_1 = &data_142d40450
    else
        rsi_4 = var_40_2 - 1
        r14_1 = rdx_5
    
    int32_t rbx_2 = 0
    uint64_t rcx_11
    
    if (rsi_4 == 0)
    label_140ce9284:
        var_38 = 0
        rcx_11 = 0
        int64_t var_30_1 = 0
        rax_5 = 0
    else
        uint64_t rax_10 = r14_1
        
        while (*rax_10 != 0x3a)
            rbx_2 += 1
            rax_10 += 2
            
            if (rbx_2 u>= rsi_4)
                goto label_140ce9284
        
        sub_140b580e0(&arg_10, rbx_2, r14_1, 1)
        sub_140b580e0(&arg_20, rsi_4 - rbx_2 - 1, r14_1 + ((zx.q(rbx_2) + 1) << 1), 1)
        rax_5 = arg_10
        rcx_11 = arg_20
        rdx_5 = var_48
    
    *arg1 = rax_5
    arg1[1] = rcx_11
    
    if (rdx_5 != 0)
        sub_140a74f90(rdx_5)
else
    void* rax_1 = *rbx
    arg_10 = 0
    int64_t* rcx_1 = *(rax_1 + 8)
    (*(*rcx_1 + 0x140))(rcx_1, &arg_10, arg3)
    int64_t* rax_3 = sub_140b63b70(&arg_10, &var_38)
    int32_t rcx_3 = rax_3[1].d
    int32_t rsi_1 = rcx_3 - 1
    
    if (rcx_3 == 0)
        rsi_1 = 0
    
    int16_t* r14
    
    if (rcx_3 == 0)
        r14 = &data_142d40450
    else
        r14 = *rax_3
    
    int32_t rbx_1 = 0
    uint64_t rcx_4
    
    if (rsi_1 == 0)
    label_140ce91a4:
        var_48 = 0
        rcx_4 = 0
        int64_t var_40_1 = 0
        rax_5 = 0
    else
        int16_t* rax_4 = r14
        
        while (*rax_4 != 0x3a)
            rbx_1 += 1
            rax_4 = &rax_4[1]
            
            if (rbx_1 u>= rsi_1)
                goto label_140ce91a4
        
        sub_140b580e0(&arg_20, rbx_1, r14, 1)
        sub_140b580e0(&var_48, rsi_1 - rbx_1 - 1, &r14[zx.q(rbx_1) + 1], 1)
        rax_5 = arg_20
        rcx_4 = var_48
    
    *arg1 = rax_5
    arg1[1] = rcx_4
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        int64_t rax_6
        rax_6.b = 1
        return rax_6
rax_5.b = 1
return rax_5
