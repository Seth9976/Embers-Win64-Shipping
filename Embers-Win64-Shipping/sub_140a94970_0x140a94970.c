// 函数: sub_140a94970
// 地址: 0x140a94970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t r14 = 0
int64_t* result = arg1
int32_t var_1c8 = 0

if (arg3[1].d s<= 0)
    sub_1405d9400()
    *result = data_143cd6fd8
    void* rcx_60 = data_143cd6fe0
    result[1] = rcx_60
    
    if (rcx_60 != 0)
        *(rcx_60 + 8) += 1
    
    result[2].d = data_143cd6fe8
else
    sub_1405d9400()
    int64_t var_1b0 = data_143cd6fd8
    int64_t* rax_3 = data_143cd6fe0
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    int64_t i_1 = sx.q(arg3[1].d)
    int32_t var_1a0_1 = 0
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x2c)
    int32_t rbx_1 = (i_1 + 1).d
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int32_t var_c4_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    int64_t var_1d8 = 0
    int64_t var_1d0_1 = 0
    
    if (rbx_1 s> 0)
        sub_1409d9210(&var_f8, rbx_1)
        int32_t rax_6
        
        if (rbx_1 u< 4)
            rax_6 = 1
        else
            uint32_t rbx_2 = rbx_1 u>> 1
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
            int32_t var_168_1 = temp0_1
            int32_t rcx_1
            
            if (rbx_2 == 0xfffffff8)
                rcx_1 = 0x20
            else
                rcx_1 = 0x1f - temp0_1
            
            int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
            int32_t var_164_1 = temp0_2
            
            if (rcx_3 == 0)
                rax_6 = 1
            else
                rax_6 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_2.b)))
        
        if (var_b0_1 == 0 || var_b0_1 s< rax_6)
            int32_t var_b0_2 = rax_6
            sub_140abec40(&var_f8)
    
    int64_t var_98_1 = *arg2
    int64_t* rax_8 = arg2[1]
    int32_t var_a8 = 4
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    int32_t var_88_1 = arg2[2].d
    char var_80_1 = 1
    int64_t var_1c0 = 0
    int32_t var_1b8_1 = 0
    sub_1405947f0(&var_1c0, 0xa)
    int32_t rax_10 = var_1b8_1 + 0xa
    var_1b8_1 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_1c0)
    
    UnDecorator::getReferenceType(var_1c0, u"Delimiter", 0x14)
    int32_t var_150
    sub_140749df0(&var_f8, &var_150)
    int64_t* var_148
    sub_140a8f8b0(var_148, &var_1c0, &var_a8)
    var_148[8].d = 0xffffffff
    int16_t* rcx_13
    
    if (var_148[1].d == 0)
        rcx_13 = &data_142d40450
    else
        rcx_13 = *var_148
    
    void var_160
    sub_140aa7840(&var_f8, &var_160, sub_140a5ff80(rcx_13, 0), var_148, var_150, nullptr)
    int64_t rcx_15 = var_1c0
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (var_80_1 != 0 && rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t rax_15 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rax_8 + 8))(rax_8, 1)
    
    if (i_1 s> 0)
        int32_t r12 = i_1.d
        int64_t rsi_1 = 0
        int64_t i
        
        do
            int64_t* rcx_19 = *arg3
            int32_t var_78 = 4
            int64_t var_68_1 = *(rcx_19 + rsi_1)
            int64_t* rax_18 = *(rcx_19 + rsi_1 + 8)
            
            if (rax_18 != 0)
                rax_18[1].d += 1
            
            int32_t var_58_1 = *(rcx_19 + rsi_1 + 0x10)
            char var_50_1 = 1
            int64_t var_130
            sub_140a2e390(&var_130, u"%d", zx.q(r14))
            int32_t var_140
            sub_140749df0(&var_f8, &var_140)
            int64_t* var_138
            sub_140a8f8b0(var_138, &var_130, &var_78)
            var_138[8].d = 0xffffffff
            int16_t* rcx_23
            
            if (var_138[1].d == 0)
                rcx_23 = &data_142d40450
            else
                rcx_23 = *var_138
            
            void var_15c
            sub_140aa7840(&var_f8, &var_15c, sub_140a5ff80(rcx_23, 0), var_138, var_140, nullptr)
            int64_t rcx_25 = var_130
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            if (var_50_1 != 0 && rax_18 != 0)
                rax_18[1].d -= 1
                
                if (rax_18[1].d == 1)
                    (**rax_18)(rax_18)
                    int32_t rax_24 = *(rax_18 + 0xc)
                    *(rax_18 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*rax_18 + 8))(rax_18, 1)
            
            int32_t rdx_9 = var_1d0_1.d
            int32_t rbx_8 = rdx_9 - 1
            
            if (rdx_9 s<= 0)
                rbx_8 = 0
            
            int32_t rax_26
            rax_26.b = rdx_9 s<= 0
            int32_t rax_28 = rax_26 + 1 + rdx_9
            var_1d0_1.d = rax_28
            
            if (rax_28 s> var_1d0_1:4.d)
                sub_140594770(&var_1d8)
            
            *(var_1d8 + (sx.q(rbx_8) << 1)) = 0x7b
            int32_t rbx_9 = 0
            *(var_1d8 + (sx.q(rbx_8) << 1) + 2) = 0
            sub_140a20c40(&var_1d8, r14)
            int32_t rdx_11 = var_1d0_1.d
            
            if (rdx_11 s> 0)
                rbx_9 = rdx_11 - 1
            
            int32_t rax_31
            rax_31.b = rdx_11 s<= 0
            int32_t rax_33 = rax_31 + 1 + rdx_11
            var_1d0_1.d = rax_33
            
            if (rax_33 s> var_1d0_1:4.d)
                sub_140594770(&var_1d8)
            
            *(var_1d8 + (sx.q(rbx_9) << 1)) = 0x7d
            r14 += 1
            *(var_1d8 + (sx.q(rbx_9) << 1) + 2) = 0
            
            if (r14 s< r12)
                sub_140a20ba0(&var_1d8, u"{Delimiter}", 0xb)
            
            rsi_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = arg1
    
    int64_t* var_178
    int64_t* rax_37
    int64_t rdx_12
    int32_t rsi_2
    
    if (var_1d0_1.d s> 1)
        rsi_2 = 2
        void var_110
        rax_37 = sub_140a95a30(&var_110, &var_1d8)
        rdx_12 = *rax_37
    else
        rsi_2 = 1
        sub_1405d9400()
        int64_t* rcx_37 = data_143cd6fe0
        rdx_12 = data_143cd6fd8
        int64_t var_180 = rdx_12
        var_178 = rcx_37
        
        if (rcx_37 != 0)
            rcx_37[1].d += 1
        
        int32_t var_170_1 = data_143cd6fe8
        rax_37 = &var_180
    
    int64_t* rcx_39 = rax_37[1]
    
    if (rcx_39 != 0)
        rcx_39[1].d += 1
    
    int32_t rax_38 = rax_37[2].d
    
    if ((rsi_2.b & 2) != 0)
        rsi_2 &= 0xfffffffd
        int64_t* var_108
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t rax_41 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (rax_41 == 1)
                    (*(*var_108 + 8))(var_108, 1)
    
    if ((rsi_2.b & 1) != 0 && var_178 != 0)
        var_178[1].d -= 1
        
        if (var_178[1].d == 1)
            (**var_178)(var_178)
            int32_t rax_45 = *(var_178 + 0xc)
            *(var_178 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*var_178 + 8))(var_178, 1)
    
    int64_t rcx_45 = var_1b0
    int32_t rdx_15 = rax_38 | 2
    var_1b0 = rdx_12
    int32_t var_188_2 = rdx_15
    int64_t var_198_2 = rcx_45
    int64_t* var_190_2 = rax_3
    int32_t var_1a0_2 = rdx_15
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t rax_51 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*rax_3 + 8))(rax_3, 1)
    
    int64_t rcx_48 = var_1d8
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    void var_120
    sub_140a96390(&var_120, &var_1b0)
    int32_t var_1e8_1
    var_1e8_1.b = 0
    sub_140aad1b0(result, &var_120, &var_f8, 0, var_1e8_1.b)
    int64_t* var_118
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            (**var_118)(var_118)
            int32_t rax_55 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (rax_55 == 1)
                (*(*var_118 + 8))(var_118, 1)
    
    int32_t var_b0_3 = 0
    
    if (var_b8_1 != 0)
        sub_140a74f90(var_b8_1)
    
    sub_140aa9190(&var_f8, 0)
    int64_t var_d8
    
    if (var_d8 != 0)
        sub_140a74f90(var_d8)
    
    int64_t rcx_56 = var_f8
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    if (rcx_39 != 0)
        rcx_39[1].d -= 1
        
        if (rcx_39[1].d == 1)
            (**rcx_39)(rcx_39)
            int32_t rdi_1 = *(rcx_39 + 0xc)
            *(rcx_39 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_9 = *rcx_39
                (*(r8_9 + 8))(rcx_39, zx.q(rdi_1), r8_9)

__security_check_cookie(rax_1 ^ &var_208)
return result
