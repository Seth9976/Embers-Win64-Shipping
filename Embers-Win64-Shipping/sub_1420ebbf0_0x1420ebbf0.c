// 函数: sub_1420ebbf0
// 地址: 0x1420ebbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d23dc0(arg1, 0x30)
int64_t r14

if (result.b == 0)
    r14 = arg1[4]
else
    r14 = 0

int64_t var_48
int64_t var_38
int64_t arg_8

if (arg1[7] != 0)
    int32_t rcx
    rcx.b = *(arg1 + 0x54) == 0
    
    if ((rcx.b & sub_140b5b8a0(arg1[0xa].d, 0)) != 0)
        int64_t* rax_1 = sub_14242e5f0(&var_38, arg2)
        int16_t* var_58
        sub_142446be0(&var_58, sub_1420e4db0(arg1, &var_48), rax_1)
        int64_t rcx_4 = var_48
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int16_t* const rdx_3 = &data_142d40450
        int32_t var_50
        
        if (var_50 != 0)
            rdx_3 = var_58
        
        void arg_18
        arg1[0xa] = *sub_140b58260(&arg_18, rdx_3, 1)
        int16_t* rcx_8 = var_58
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    int64_t* rax_5 = sub_14242f630(&var_38, sub_1420e4db0(arg1, &var_48), arg2)
    int16_t* rdx_6
    
    if (rax_5[1].d == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *rax_5
    
    sub_140b58260(&arg_8, rdx_6, 1)
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_48
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    sub_140d18050(arg_8)
    sub_1420ee550(arg1, arg_8)
    result = sub_1420e7470(r14, arg1[0xa])

int32_t rdx_9 = arg1[0xc].d

if (rdx_9 s> 0)
    arg1[0xe].d = 0
    
    if (rdx_9 s> *(arg1 + 0x74))
        sub_140638c50(&arg1[0xd], rdx_9)
    
    int64_t* i = arg1[0xb]
    result = sx.q(arg1[0xc].d)
    
    for (void* rbp_1 = &i[result]; i != rbp_1; i = &i[1])
        int64_t rbx_3 = sx.q(arg1[0xe].d)
        int32_t rax_6 = (rbx_3 + 1).d
        arg1[0xe].d = rax_6
        
        if (rax_6 s> *(arg1 + 0x74))
            sub_1405a4d70(&arg1[0xd])
        
        *(arg1[0xd] + (rbx_3 << 3)) = *i
        int64_t rbx_4 = *i
        int64_t* rax_9 = sub_14242f630(&var_38, sub_140b63b70(i, &var_48), arg2)
        int16_t* rdx_13
        
        if (rax_9[1].d == 0)
            rdx_13 = &data_142d40450
        else
            rdx_13 = *rax_9
        
        *i = *sub_140b58260(&arg_8, rdx_13, 1)
        int64_t rcx_24 = var_38
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = var_48
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        sub_140d18050(*i)
        result = sub_1420e7470(r14, rbx_4)

return result
