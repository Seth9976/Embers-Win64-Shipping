// 函数: sub_140abc1e0
// 地址: 0x140abc1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r15 = arg2
int16_t* r14 = arg1

if (*arg1 == 0)
    if (arg5 == 0)
        sub_1405d9400()
        sub_14065da90(r15, &data_143cd6fd8)
        return r14
    
    return 0

wchar16* rax_2 = sub_140abc420(arg1, arg2, arg3, arg4)

if (rax_2 != 0)
    return rax_2

wchar16* rsi_1 = nullptr
int64_t rcx_15

if (arg5 == 0)
    int32_t rdx_5 = 0
    int32_t rax_10 = 0
    int32_t var_70_1 = 0
    int32_t var_6c_1 = 0
    int64_t var_78 = 0
    
    if (*r14 != 0)
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (r14[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_78, rbx_2.d + 1)
            rax_10 = var_6c_1
            rdx_5 = var_70_1
        
        int32_t r13_1 = rdx_5 + rbx_2.d + 1
        
        if (r13_1 s> rax_10)
            sub_140594770(&var_78)
        
        UnDecorator::getReferenceType(var_78, r14, (rbx_2.d + 1) * 2)
        
        if (r13_1 != 0)
            rsi_1 = zx.q(r13_1 - 1)
    
    rsi_1 = &r14[sx.q(rsi_1.d)]
    void var_40
    int64_t* rax_12 = sub_140aae2f0(&var_40, &var_78)
    int64_t rdx_9 = *r15
    *r15 = *rax_12
    *rax_12 = rdx_9
    int64_t rdx_10 = *(r15 + 8)
    *(r15 + 8) = rax_12[1]
    rax_12[1] = rdx_10
    r15[1].d = rax_12[2].d
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rdi_2 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rdi_2 == 1)
                int64_t r8_3 = *var_38
                (*(r8_3 + 8))(var_38, zx.q(rdi_2), r8_3)
    
    rcx_15 = var_78
else
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    int32_t arg_8 = 0
    
    if (j_sub_140b08930(r14, &var_68, &arg_8) != 0)
        void var_58
        int64_t* rax_4 = sub_140aae2f0(&var_58, &var_68)
        int64_t rdx_2 = *r15
        *r15 = *rax_4
        *rax_4 = rdx_2
        int64_t rdx_3 = *(r15 + 8)
        *(r15 + 8) = rax_4[1]
        rax_4[1] = rdx_3
        r15[1].d = rax_4[2].d
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rdi_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_50 + 8))(var_50, zx.q(rdi_1))
        
        rsi_1 = &r14[sx.q(arg_8)]
    
    rcx_15 = var_68

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return rsi_1
