// 函数: sub_142770dc0
// 地址: 0x142770dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int128_t* rbx = arg1
int16_t* var_a8 = arg4
int32_t var_88 = 0
char r13 = 0

if (rbx != 0)
    int32_t rsi_1 = 0
    int32_t rax_2 = 0
    int64_t r12_1 = 0
    int64_t var_98 = 0
    int64_t rdi_1 = -1
    int64_t var_90_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_98, rbx_1.d + 1)
            rax_2 = var_90_1:4.d
            rsi_1 = var_90_1.d
            r12_1 = var_98
        
        rsi_1 += rbx_1.d + 1
        var_90_1.d = rsi_1
        
        if (rsi_1 s> rax_2)
            sub_140594770(&var_98)
            rsi_1 = var_90_1.d
            r12_1 = var_98
        
        UnDecorator::getReferenceType(r12_1, arg2, (rbx_1.d + 1) * 2)
        rbx = arg1
    
    int64_t var_78 = 0
    int32_t var_6c_1 = 0
    int32_t var_70_1 = rsi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_78, rsi_1, 0)
        memcpy(var_78, r12_1, rsi_1 * 2)
    
    int16_t* r12_2 = var_a8
    int128_t zmm0 = *rbx
    sub_142770c30(&r12_2[0x28], &var_a8)
    int64_t* var_a0
    sub_140596d10(var_a0, &var_98)
    sub_140596d10(&var_a0[2], &var_78)
    int16_t* const rbx_3 = &data_142d40450
    *(var_a0 + 0x20) = zmm0
    var_a0[6].d = 0xffffffff
    int32_t rax_3 = var_a0[1].d
    int16_t* rdx_8
    
    if (rax_3 == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = *var_a0
    
    int32_t rcx_8 = rax_3 - 1
    
    if (rax_3 == 0)
        rcx_8 = 0
    
    sub_142771c40(&r12_2[0x28], &var_88, sub_1405969c0(rcx_8, rdx_8), var_a0, var_a8.d, nullptr)
    int16_t* rsi_3
    
    if (*(r12_2 + 0x28) s<= 1)
        rsi_3 = var_a8
        rbx_3.b = 0
    else
        int32_t rax_5 = 0
        var_a8 = nullptr
        rsi_3 = nullptr
        int64_t var_a0_1 = 0
        int32_t r14_1 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            do
                rdi_1 += 1
            while (arg3[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_a8, rdi_1.d + 1)
                rax_5 = var_a0_1:4.d
                r14_1 = var_a0_1.d
                rsi_3 = var_a8
            
            r14_1 += rdi_1.d + 1
            var_a0_1.d = r14_1
            
            if (r14_1 s> rax_5)
                sub_140594770(&var_a8)
                r14_1 = var_a0_1.d
                rsi_3 = var_a8
            
            UnDecorator::getReferenceType(rsi_3, arg3, (rdi_1.d + 1) * 2)
        
        int16_t* const rdx_13 = &data_142d40450
        r13 = 1
        
        if (r14_1 != 0)
            rdx_13 = rsi_3
        
        if (*(r12_2 + 0x28) != 0)
            rbx_3 = *(r12_2 + 0x20)
        
        void* rdx_14 = rdx_13 - rbx_3
        uint32_t i
        uint32_t rcx_14
        
        do
            rcx_14 = zx.d(*rbx_3)
            i = zx.d(*(rbx_3 + rdx_14))
            
            if (rcx_14 != i)
                break
            
            rbx_3 = &rbx_3[1]
        while (i != 0)
        
        if (rcx_14 - i != 0)
            rbx_3.b = 0
        else
            rbx_3 = 1
    
    if ((r13 & 1) != 0 && rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    if (rbx_3.b != 0)
        sub_140597df0(&r12_2[0x18], &var_78)
        var_a8 = nullptr
        *(r12_2 + 0x40) = zmm0
        int32_t var_a0_2 = 0
        sub_1405947f0(&var_a8, 0xf)
        int32_t rax_6 = var_a0_2 + 0xf
        var_a0_2 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"Default Device", 0x1e)
        sub_142770780(&r12_2[0x28], &var_a8, &r12_2[0x18])
        int16_t* rcx_22 = var_a8
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_78
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_98
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)

__security_check_cookie(rax_1 ^ &var_d8)
return 1
