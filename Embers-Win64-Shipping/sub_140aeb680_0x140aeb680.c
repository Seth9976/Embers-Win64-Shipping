// 函数: sub_140aeb680
// 地址: 0x140aeb680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = arg2[1].d
uint64_t rdi = 0
int64_t r14 = *arg2
uint64_t var_68 = 0
uint64_t rax

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    rdi = var_68
    memcpy(rdi, r14, rbx * 2)
    rax = rdi
else
    rax = 0

int16_t* const r14_1 = &data_142d40450
uint64_t var_58 = 0
int32_t var_50 = 0
int16_t* const rcx_2 = &data_142d40450

if (rbx != 0)
    rcx_2 = rax

if (sub_140af8930(rcx_2, &var_58) == 0)
    rbx.b = 0
else
    int16_t* var_78 = nullptr
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 3)
    int32_t rax_2 = var_70_1 + 3
    var_70_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_78)
    
    sub_1405a7220(var_78, 3, "#!", 3, 0x3f)
    int32_t r15_1 = 1
    char rax_3 = sub_140a32a50(&var_58, &var_78, 1)
    int16_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rax_3 != 0)
        var_78 = nullptr
        
        if (var_50 != 0)
            r14_1 = var_58
        
        int32_t var_70_2 = 0
        int32_t arg_10 = 0
        void* arg_18 = &r14_1[2]
        sub_140b1e510(&arg_18, &var_78, &arg_10, 0)
        int64_t* rax_5 = sub_140a35c50(&var_78, &var_68)
        
        if (&var_78 != rax_5)
            int16_t* rcx_10 = var_78
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            var_78 = *rax_5
            *rax_5 = 0
            var_70_2 = rax_5[1].d
            var_70_2 = *(rax_5 + 0xc)
            rax_5[1] = 0
        
        uint64_t rcx_12 = var_68
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t var_48
        int64_t* rax_8 = sub_140b1a780(&var_48, arg2)
        
        if (var_70_2 == 0)
            rbx = 0
        else
            rbx = var_70_2 - 1
        
        if (rax_8[1].d == 0 && rbx != 0xffffffff)
            r15_1 = 2
        
        var_68 = *rax_8
        *rax_8 = 0
        int32_t rax_11 = rax_8[1].d
        int32_t rax_12 = *(rax_8 + 0xc)
        rax_8[1] = 0
        int32_t rdx_9 = rax_11 + rbx + r15_1
        
        if (rdx_9 s> rax_12)
            sub_1405947f0(&var_68, rdx_9)
        
        sub_140a2cf70(&var_68, var_78, rbx)
        sub_140aeb680(arg1, &var_68)
        uint64_t rcx_18 = var_68
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t rcx_19 = var_48
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int16_t* rcx_20 = var_78
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
    
    sub_140aebba0(arg1, &var_58)
    rbx.b = 1

uint64_t rcx_22 = var_58

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
