// 函数: sub_141d025b0
// 地址: 0x141d025b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t i_6 = 0
int64_t* var_e0 = arg1
uint64_t result_1 = 0
int32_t i_4 = 0
int32_t i_3 = 0
EnterCriticalSection(&arg1[7])
int64_t r15_1 = sx.q(arg1[3].d)
int32_t i_5 = 0
int32_t temp0 = r15_1.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&result_1, r15_1.d)
        i_3 = i_4
    
    memcpy((sx.q(i_3) << 4) + result_1, var_e0[2], (r15_1 << 4).d)
    i_3 += r15_1.d
    i_5 = i_3
    i_6 = i_3

if (arg1 != -0x38)
    LeaveCriticalSection(&arg1[7])
    i_5 = i_6

if (i_5 != 0)
    int32_t var_7c_1 = 0x80
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_74_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    int32_t var_78_1 = 0xffffffff
    sub_141813e70(&var_a8, arg2)
    int16_t* var_100 = nullptr
    int32_t rdx_4 = 0
    int32_t var_f8_1 = 0
    int32_t rcx_7 = 0
    int32_t var_f4_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_100, rbx_1.d + 1)
            rcx_7 = var_f4_1
            rdx_4 = var_f8_1
        
        int32_t rax_2 = rbx_1.d + 1 + rdx_4
        var_f8_1 = rax_2
        
        if (rax_2 s> rcx_7)
            sub_140594770(&var_100)
        
        UnDecorator::getReferenceType(var_100, arg3, (rbx_1.d + 1) * 2)
    
    int64_t var_f0 = 0
    int32_t rdx_7 = 0
    int32_t var_e8_1 = 0
    int32_t rcx_11 = 0
    int32_t var_e4_1 = 0
    
    if (arg4 != 0 && *arg4 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg4[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_f0, rbx_3.d + 1)
            rcx_11 = var_e4_1
            rdx_7 = var_e8_1
        
        int32_t rax_3 = rbx_3.d + 1 + rdx_7
        var_e8_1 = rax_3
        
        if (rax_3 s> rcx_11)
            sub_140594770(&var_f0)
        
        UnDecorator::getReferenceType(var_f0, arg4, (rbx_3.d + 1) * 2)
    
    sub_140b20c40(&var_100)
    var_e0 = nullptr
    int32_t var_d8_1 = 0
    sub_14061cd70(&var_e0, 0x40)
    
    if (i_3 s> 0)
        int64_t** rbx_6 = result_1 + 8
        uint64_t i_2 = zx.q(i_3)
        uint64_t i
        
        do
            int16_t* r8_6 = &data_142d40450
            
            if (var_f8_1 != 0)
                r8_6 = var_100
            
            sub_141cf1e60(*rbx_6, &var_e0, r8_6, 1, 0, arg5)
            rbx_6 = &rbx_6[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int64_t* r12 = var_e0
    int64_t r14_2 = sx.q(var_d8_1)
    int64_t* rbx_7 = r12
    void* r15_4 = &r12[r14_2 * 2]
    
    if (r12 != r15_4)
        do
            if (var_e8_1 == 0 || var_e8_1 == 1)
            label_141d02852:
                char var_108 = 0
                int32_t var_c0
                sub_140598750(&var_a8, &var_c0)
                int64_t* var_b8
                sub_140596d10(var_b8, rbx_7)
                var_b8[2].d = 0xffffffff
                int32_t rax_6 = var_b8[1].d
                int16_t* rdx_14
                
                if (rax_6 == 0)
                    rdx_14 = &data_142d40450
                else
                    rdx_14 = *var_b8
                
                int32_t rcx_21 = rax_6 - 1
                
                if (rax_6 == 0)
                    rcx_21 = 0
                
                int32_t rax_7 = sub_1405969c0(rcx_21, rdx_14)
                char var_110
                var_110.q = &var_108
                char var_118
                var_118.d = var_c0
                sub_14059a6d0(&var_a8, &var_e0, rax_7, var_b8, var_118, var_110)
                
                if (var_108 == 0)
                    int64_t rdi_2 = sx.q(arg2[1].d)
                    int32_t rax_8 = (rdi_2 + 1).d
                    arg2[1].d = rax_8
                    
                    if (rax_8 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    sub_140596d10(&(*arg2)[rdi_2 * 2], rbx_7)
            else if (sub_140a236f0(rbx_7, &var_f0, 1) != 0)
                goto label_141d02852
            
            rbx_7 = &rbx_7[2]
        while (rbx_7 != r15_4)
    
    int64_t* rbx_8 = r12
    
    if (r14_2.d != 0)
        int32_t i_1
        
        do
            int64_t rcx_28 = *rbx_8
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            rbx_8 = &rbx_8[2]
            i_1 = r14_2.d
            r14_2 = zx.q(r14_2.d - 1)
        while (i_1 != 1)
    
    if (r12 != 0)
        sub_140a74f90(r12)
    
    int64_t rcx_30 = var_f0
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int16_t* rcx_31 = var_100
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int32_t var_60_2 = 0
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    sub_140669e00(&var_a8)

uint64_t result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_138)
return result
