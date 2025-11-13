// 函数: sub_141b03040
// 地址: 0x141b03040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_108 = 0xffffffff
int64_t* rbx = arg4
int32_t var_104 = 0

if (arg4 != 0)
    sub_140d3a3a0(&var_108, rbx)
    var_108.q = var_108.q

void** const var_100
int64_t var_d8

if (*sub_141b1fda0(arg1 + 8, &var_100, &var_108) == 0xffffffff)
    __builtin_memset(&var_d8, 0, 0x2c)
    int32_t var_ac_1 = 0x80
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1
    __builtin_memset(&var_a4_1, 0, 0x1c)
    sub_141aedf60(arg1 + 8, &var_108, &var_d8)
    int64_t var_90
    var_90.d = 0
    int64_t var_98
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    int64_t var_d0
    var_d0.d = 0
    int32_t var_a8_2 = 0xffffffff
    int32_t var_a4_2 = 0
    int64_t var_c8
    sub_14059a8e0(&var_c8, 0)
    int64_t var_b8
    
    if (var_b8 != 0)
        sub_140a74f90(var_b8)
    
    int64_t rcx_7 = var_d8
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int64_t* result_1 = sub_141b21a50(arg1, var_108.q, arg_18)
int64_t* result

if (result_1 != 0)
    result = result_1
else
    void* rax_5 = sub_141af3a50(sub_140cde0b0())
    void* rax_6 = sub_142452380()
    void* rcx_10 = rbx[2]
    int64_t rdx_4 = sx.q(*(rax_6 + 0x38))
    void** rax_11
    int64_t* r14_1
    
    if (rdx_4.d s<= *(rcx_10 + 0x38) && *(*(rcx_10 + 0x30) + (rdx_4 << 3)) == rax_6 + 0x30)
        void* rax_8 = sub_142452380()
        void* rdx_5 = rbx[2]
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
            rbx = nullptr
        
        r14_1 = rbx[0x26]
        rax_11 = rbx[3]
        goto label_141b0327e
    
    void* rax_12 = sub_142459c10()
    void* rdx_6 = rbx[2]
    int64_t rax_13 = sx.q(*(rax_12 + 0x38))
    
    if (rax_13.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
        result = nullptr
    else
        void* rax_15 = sub_142459c10()
        void* rdx_7 = rbx[2]
        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
        int64_t* rdi_2
        
        if (rax_16.d s<= *(rdx_7 + 0x38))
            rdi_2 = rbx
        
        if (rax_16.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
            rdi_2 = nullptr
        
        rbx = rdi_2[0x14]
        void* rax_18 = sub_1425881f0()
        void* rdx_8 = rdi_2[2]
        int64_t rax_19 = sx.q(*(rax_18 + 0x38))
        
        if (rax_19.d s<= *(rdx_8 + 0x38))
            r14_1 = rdi_2
        
        if (rax_19.d s> *(rdx_8 + 0x38) || *(*(rdx_8 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
            r14_1 = nullptr
        
        rax_11 = rdi_2[3]
    label_141b0327e:
        var_100 = rax_11
        int64_t* var_f8
        sub_140b63b70(&var_100, &var_f8)
        int64_t* rsi_1 = var_f8
        
        if (rbx == 0 || r14_1 == 0)
            goto label_141b032d7
        
        int64_t* result_2 =
            sub_141e78140(rax_5, &var_d8, sub_141e714a0(&var_d8, (*(*rbx + 0x150))(rbx), rbx))
        
        if (result_2 != 0)
            var_100 = &data_143052ba8
            void var_e8
            int64_t* rax_23 = sub_141a6b800(&var_e8)
            int32_t var_f0_1 = *(arg5 + 0x2d8)
            var_f8 = *(arg5 + 0x2d0)
            sub_1405c5900(arg5 + 0xf8, *rax_23, &var_100, result_2, *(arg5 + 0x2dc), &var_f8)
            sub_140d3a3a0(&var_e8, result_2)
            sub_141b1fda0(arg1 + 8, &var_100, &var_108)
            int64_t rax_24 = sx.q(var_100.d)
            void* const rcx_28
            
            if (rax_24.d == 0xffffffff)
                rcx_28 = nullptr
            else
                rcx_28 = rax_24 * 0x60 + *(arg1 + 8)
            
            var_f8 = &arg_18
            var_f0_1.q = &var_e8
            sub_141aee170(rcx_28 + 8, &var_100, &var_f8, nullptr)
            result_2[1].d |= 0x40
            var_108.q = 0
            sub_141f32b40(result_2, r14_1, &data_143f3f280, var_108.q)
            sub_141afcf50(&var_d8)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            result = result_2
        else
            sub_141afcf50(&var_d8)
        label_141b032d7:
            
            if (rsi_1 == 0)
                result = nullptr
            else
                sub_140a74f90(rsi_1)
                result = nullptr

__security_check_cookie(rax_1 ^ &var_138)
return result
