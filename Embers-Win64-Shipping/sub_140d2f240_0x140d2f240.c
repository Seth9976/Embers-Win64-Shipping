// 函数: sub_140d2f240
// 地址: 0x140d2f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* const result = sub_140d2f6f0(sub_140bdf2e0(), arg2, arg3, arg4, arg5, arg6, 1, 0)

if (result != 0)
    int64_t rcx_1
    
    if (arg1 != 0)
        rcx_1 = sx.q(*(arg1 + 0x38))
    
    if (arg1 == 0 || rcx_1.d s> *(result + 0x38)
            || *(*(result + 0x30) + (rcx_1 << 3)) != arg1 + 0x30)
        int64_t var_108
        __builtin_memset(&var_108, 0, 0x2c)
        int32_t var_d8_1 = 0xffffffff
        int32_t var_dc_1 = 0x80
        int32_t var_d4_1 = 0
        int64_t var_c8_1 = 0
        int32_t var_c0_1 = 0
        int64_t var_198
        void var_178
        int64_t* rax_4 = sub_140aae2f0(&var_178, sub_140d21830(result, &var_198, 0, 0))
        int32_t var_b8 = 4
        int64_t var_a8_1 = *rax_4
        int64_t* rcx_6 = rax_4[1]
        
        if (rcx_6 != 0)
            rcx_6[1].d += 1
        
        int32_t var_98_1 = rax_4[2].d
        char var_90_1 = 1
        int64_t var_1c8 = 0
        int32_t var_1c0_1 = 0
        sub_1405947f0(&var_1c8, 0xa)
        int32_t rax_6 = var_1c0_1 + 0xa
        var_1c0_1 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_1c8)
        
        UnDecorator::getReferenceType(var_1c8, u"ClassName", 0x14)
        sub_140acb5e0(&var_108, &var_1c8, &var_b8)
        int64_t rcx_11 = var_1c8
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        if (var_90_1 != 0 && rcx_6 != 0)
            rcx_6[1].d -= 1
            
            if (rcx_6[1].d == 1)
                (**rcx_6)(rcx_6)
                int32_t rax_9 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
        
        int64_t* var_170
        
        if (var_170 != 0)
            var_170[1].d -= 1
            
            if (var_170[1].d == 1)
                (**var_170)(var_170)
                int32_t rax_13 = *(var_170 + 0xc)
                *(var_170 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*var_170 + 8))(var_170, 1)
        
        int64_t rcx_17 = var_198
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t var_188
        void var_160
        int64_t* rax_16 = sub_140aae2f0(&var_160, sub_140d21830(arg1, &var_188, 0, 0))
        int32_t var_88 = 4
        int64_t var_78_1 = *rax_16
        int64_t* rcx_21 = rax_16[1]
        
        if (rcx_21 != 0)
            rcx_21[1].d += 1
        
        int32_t var_68_1 = rax_16[2].d
        char var_60_1 = 1
        int64_t var_1b8 = 0
        int32_t var_1b0_1 = 0
        sub_1405947f0(&var_1b8, 0xe)
        int32_t rax_18 = var_1b0_1 + 0xe
        var_1b0_1 = rax_18
        
        if (rax_18 s> 0)
            sub_140594770(&var_1b8)
        
        UnDecorator::getReferenceType(var_1b8, u"BaseClassName", 0x1c)
        sub_140acb5e0(&var_108, &var_1b8, &var_88)
        int64_t rcx_26 = var_1b8
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        if (var_60_1 != 0 && rcx_21 != 0)
            rcx_21[1].d -= 1
            
            if (rcx_21[1].d == 1)
                (**rcx_21)(rcx_21)
                int32_t rax_21 = *(rcx_21 + 0xc)
                *(rcx_21 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*rcx_21 + 8))(rcx_21, 1)
        
        int64_t* var_158
        
        if (var_158 != 0)
            var_158[1].d -= 1
            
            if (var_158[1].d == 1)
                (**var_158)(var_158)
                int32_t rax_25 = *(var_158 + 0xc)
                *(var_158 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*var_158 + 8))(var_158, 1)
        
        int64_t rcx_32 = var_188
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        void var_148
        void var_130
        char* var_118
        int64_t* rax_30 = sub_140ac6680(sub_140aaca20(&var_148, 
            sub_140a96390(&var_118, 
                _vfprintf_p_l(&var_130, {ClassName} is not a child class of {BaseClassName}", 
                Core")), &var_108))
        uint64_t var_1a8 = 0
        int32_t rbx_5 = rax_30[1].d
        int64_t rsi_1 = *rax_30
        int32_t var_1a0_1 = rbx_5
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_1a8, rbx_5, 0)
            memcpy(var_1a8, rsi_1, rbx_5 * 2)
        
        int64_t* var_140
        
        if (var_140 != 0)
            var_140[1].d -= 1
            
            if (var_140[1].d == 1)
                (**var_140)(var_140)
                int32_t rax_33 = *(var_140 + 0xc)
                *(var_140 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*var_140 + 8))(var_140, 1)
        
        int64_t* var_128
        
        if (var_128 != 0)
            var_128[1].d -= 1
            
            if (var_128[1].d == 1)
                (**var_128)(var_128)
                int32_t rdi_1 = *(var_128 + 0xc)
                *(var_128 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_128 + 8))(var_128, zx.q(rdi_1))
        
        sub_140af2b60()
        sub_140b21a10(&data_143dbb3f0, u"TREATLOADWARNINGSASERRORS")
        uint64_t rcx_43 = var_1a8
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        int32_t var_c0_2 = 0
        
        if (var_c8_1 != 0)
            sub_140a74f90(var_c8_1)
        
        sub_140acd610(&var_108)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_208)
return result
