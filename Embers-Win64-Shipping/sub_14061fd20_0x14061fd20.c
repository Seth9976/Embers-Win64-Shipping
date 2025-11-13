// 函数: sub_14061fd20
// 地址: 0x14061fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = data_143cdb870
int32_t rax_3 = (*(*rcx + 0x38))(rcx)
int32_t r13 = 0
int16_t var_a8
int64_t var_98
uint64_t var_80
int64_t* var_60
int64_t var_48

if (rax_3 s> 0)
    do
        int64_t* rcx_1 = data_143cdb870
        int64_t r9_1 = *rcx_1
        (*(r9_1 + 0x40))(rcx_1, &var_60, zx.q(r13), r9_1, var_a8)
        int64_t rdx_1 = var_48
        int64_t* rsi_1 = &var_60
        int64_t* rcx_2 = var_60
        
        if (rdx_1 u>= 0x10)
            rsi_1 = rcx_2
        
        int64_t r15_1 = 0
        int32_t rdi_1 = 0
        var_98 = 0
        int32_t rax_4 = 0
        int64_t var_90_1 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (*(rsi_1 + rbx_1) != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_98, rbx_1.d + 1)
                rax_4 = var_90_1:4.d
                rdi_1 = var_90_1.d
                r15_1 = var_98
            
            rdi_1 += rbx_1.d + 1
            var_90_1.d = rdi_1
            
            if (rdi_1 s> rax_4)
                sub_140594770(&var_98)
                rdi_1 = var_90_1.d
                r15_1 = var_98
            
            var_a8 = 0x3f
            sub_1405a7220(r15_1, rbx_1.d + 1, rsi_1, rbx_1.d + 1, var_a8)
            rdx_1 = var_48
            rcx_2 = var_60
        
        if (rdx_1 u>= 0x10)
            int64_t* rax_5 = rcx_2
            
            if (rdx_1 + 1 u>= 0x1000)
                rcx_2 = rcx_2[-1]
                
                if (rax_5 - rcx_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_2)
        
        uint64_t rbx_3 = 0
        var_80 = 0
        uint64_t rsi_2
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_80, rdi_1, 0)
            rbx_3 = var_80
            memcpy(rbx_3, r15_1, rdi_1 * 2)
            rsi_2 = rbx_3
        else
            int32_t var_74_1 = 0
            rsi_2 = 0
        
        int64_t* r14_1 = nullptr
        int32_t r12_1 = 0
        var_60 = nullptr
        int32_t var_54_1 = 0
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_60, rdi_1, 0)
            r14_1 = var_60
            memcpy(r14_1, rsi_2, rdi_1 * 2)
            r12_1 = var_54_1
        
        if (rsi_2 != 0)
            sub_140a74f90(rbx_3)
        
        int64_t rbx_4 = sx.q(arg1[1].d)
        int32_t rax_8 = (rbx_4 + 1).d
        arg1[1].d = rax_8
        
        if (rax_8 s> *(arg1 + 0xc))
            sub_1406204d0(arg1)
        
        int64_t rax_9 = *arg1
        int64_t rdx_11 = rbx_4 * 3
        *(rax_9 + (rdx_11 << 3)) = r14_1
        *(rax_9 + (rdx_11 << 3) + 8) = rdi_1
        *(rax_9 + (rdx_11 << 3) + 0xc) = r12_1
        *(rax_9 + (rdx_11 << 3) + 0x10) = r13.b
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        r13 += 1
    while (r13 s< rax_3)

int64_t* rcx_13 = data_143cdb880
int64_t result = (*(*rcx_13 + 0x38))(rcx_13)
int32_t r13_1 = 0
int32_t var_88_1 = result.d

if (result.d s> 0)
    do
        int64_t* rcx_14 = data_143cdb880
        int64_t r9_3 = *rcx_14
        (*(r9_3 + 0x40))(rcx_14, &var_60, zx.q(r13_1), r9_3, var_a8)
        int64_t rdx_13 = var_48
        int64_t* rsi_4 = &var_60
        int64_t* rcx_15 = var_60
        
        if (rdx_13 u>= 0x10)
            rsi_4 = rcx_15
        
        int64_t r14_2 = 0
        int32_t rdi_2 = 0
        var_98 = 0
        int32_t rax_11 = 0
        int64_t var_90_2 = 0
        
        if (rsi_4 != 0 && *rsi_4 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (*(rsi_4 + rbx_5) != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_98, rbx_5.d + 1)
                rax_11 = var_90_2:4.d
                rdi_2 = var_90_2.d
                r14_2 = var_98
            
            rdi_2 += rbx_5.d + 1
            var_90_2.d = rdi_2
            
            if (rdi_2 s> rax_11)
                sub_140594770(&var_98)
                rdi_2 = var_90_2.d
                r14_2 = var_98
            
            var_a8 = 0x3f
            sub_1405a7220(r14_2, rbx_5.d + 1, rsi_4, rbx_5.d + 1, var_a8)
            rdx_13 = var_48
            rcx_15 = var_60
        
        if (rdx_13 u>= 0x10)
            int64_t* rax_12 = rcx_15
            
            if (rdx_13 + 1 u>= 0x1000)
                rcx_15 = rcx_15[-1]
                
                if (rax_12 - rcx_15 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_15)
        
        uint64_t rbx_7 = 0
        var_80 = 0
        uint64_t rsi_5
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_80, rdi_2, 0)
            rbx_7 = var_80
            memcpy(rbx_7, r14_2, rdi_2 * 2)
            rsi_5 = rbx_7
        else
            int32_t var_74_2 = 0
            rsi_5 = 0
        
        int64_t* r15_2 = nullptr
        int32_t r12_2 = 0
        var_60 = nullptr
        int32_t var_54_2 = 0
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_60, rdi_2, 0)
            r15_2 = var_60
            memcpy(r15_2, rsi_5, rdi_2 * 2)
            r12_2 = var_54_2
        
        if (rsi_5 != 0)
            sub_140a74f90(rbx_7)
        
        int64_t rbx_8 = sx.q(arg2[1].d)
        int32_t rax_15 = (rbx_8 + 1).d
        arg2[1].d = rax_15
        
        if (rax_15 s> *(arg2 + 0xc))
            sub_1406204d0(arg2)
        
        result = *arg2
        int64_t rdx_23 = rbx_8 * 3
        *(result + (rdx_23 << 3)) = r15_2
        *(result + (rdx_23 << 3) + 8) = rdi_2
        *(result + (rdx_23 << 3) + 0xc) = r12_2
        *(result + (rdx_23 << 3) + 0x10) = r13_1.b
        
        if (r14_2 != 0)
            result = sub_140a74f90(r14_2)
        
        r13_1 += 1
    while (r13_1 s< var_88_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
