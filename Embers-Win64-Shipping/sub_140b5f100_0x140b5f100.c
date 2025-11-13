// 函数: sub_140b5f100
// 地址: 0x140b5f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* var_1f8 = arg4
int32_t var_1d8 = 0
bool cond:0 = arg1[1].d s<= 1
int64_t* var_208 = arg3
int64_t r11_1

if (not(cond:0))
    r11_1 = sx.q(arg2[1].d)

uint64_t result

if (cond:0 || r11_1.d s<= 1)
    result.b = 1
else
    uint64_t rbx
    uint64_t arg_8 = rbx
    int32_t r10_1 = 0
    int64_t r8 = 0
    int32_t r9 = 0
    uint64_t rdi_1 = 0
    int32_t r12_1 = 0
    int16_t* r14_1 = *arg2
    void* rsi_1 = nullptr
    int64_t var_1e8 = 0
    int64_t var_1e0_1 = 0
    int64_t var_148
    __builtin_memset(&var_148, 0, 0x2c)
    char* rcx = &r14_1[r11_1]
    int32_t var_114_1 = 0
    void* var_108_1 = nullptr
    int32_t var_100_1 = 0
    int32_t r15_1 = 0
    char* rax_2 = &rcx[-2]
    int32_t var_11c_1 = 0x80
    
    if (r11_1.d == 0)
        rax_2 = rcx
    
    int32_t var_118_1 = 0xffffffff
    char* var_1b8 = rax_2
    int64_t var_140_1
    int64_t var_138
    int64_t* var_128
    
    if (r14_1 == rax_2)
        rbx.b = 1
    else
        do
            rbx = zx.q(*r14_1)
            
            if (rdi_1.d == r9)
            label_140b5f243:
                
                for (int16_t* i = *arg1; i != &i[sx.q(arg1[1].d)]; i = &i[1])
                    if (*i == rbx.w)
                        if (rbx.w != 0)
                            int32_t rdi_2 = r10_1 - 1
                            
                            if (r10_1 s<= 0)
                                rdi_2 = 0
                            
                            int32_t rax_8
                            rax_8.b = r10_1 s<= 0
                            int32_t rax_10 = rax_8 + 1 + r10_1
                            var_1e0_1.d = rax_10
                            
                            if (rax_10 s> r12_1)
                                sub_140594770(&var_1e8)
                            
                            *(var_1e8 + (sx.q(rdi_2) << 1)) = rbx.w
                            *(var_1e8 + (sx.q(rdi_2) << 1) + 2) = 0
                            r9 = var_114_1
                            rdi_1 = zx.q(var_140_1.d)
                            r8 = var_148
                        
                        if (r9 == 0)
                            int32_t rax_14 = (rdi_1 + 1).d
                            var_140_1.d = rax_14
                            
                            if (rax_14 s> var_140_1:4.d)
                                sub_140638a00(&var_148)
                            
                            sub_1405b2ba0(&var_138, 0)
                        else
                            rdi_1 = sx.q(var_118_1)
                            int64_t rax_13 = sx.q(*(r8 + rdi_1 * 0xc + 4))
                            var_118_1 = rax_13.d
                            var_114_1 = r9 - 1
                            
                            if (r9 != 1)
                                *(r8 + rax_13 * 0xc) = 0xffffffff
                        
                        int64_t* rcx_11 = &var_138
                        
                        if (var_128 != 0)
                            rcx_11 = var_128
                        
                        int32_t rax_16 = rdi_1.d
                        
                        if (rdi_1.d s< 0)
                            rax_16 = (rdi_1 + 0x1f).d
                        
                        void* r8_1 = rcx_11 + (sx.q(rax_16 s>> 5) << 2)
                        char* var_210_1 = nullptr
                        int32_t var_218_1 = rdi_1.d
                        *r8_1 |= 1 << (rdi_1.b & 0x1f)
                        int16_t* r9_2 = var_148 + sx.q(rdi_1.d) * 0xc
                        *r9_2 = rbx.w
                        *(r9_2 + 4) = 0xffffffff
                        sub_140b5e0b0(&var_148, &var_1d8, zx.d(*r9_2), r9_2, var_218_1, var_210_1)
                        r10_1 = var_1e0_1.d
                        r9 = var_114_1
                        r8 = var_148
                        r12_1 = var_1e0_1:4.d
                        r15_1 = var_100_1
                        rsi_1 = var_108_1
                        rdi_1 = zx.q(var_140_1.d)
                        break
            else
                void var_110
                void* rax_5 = &var_110
                
                if (rsi_1 != 0)
                    rax_5 = rsi_1
                
                int32_t rax_6 = *(rax_5 + ((sx.q(r15_1 - 1) & zx.q(rbx.w)) << 2))
                
                if (rax_6 == 0xffffffff)
                    goto label_140b5f243
                
                while (true)
                    int64_t rdx = sx.q(rax_6) * 3
                    
                    if (*(r8 + (rdx << 2)) == rbx.w)
                        break
                    
                    rax_6 = *(r8 + (rdx << 2) + 4)
                    
                    if (rax_6 == 0xffffffff)
                        goto label_140b5f243
                
                if (rax_6 == 0xffffffff)
                    goto label_140b5f243
            
            r14_1 = &r14_1[1]
        while (r14_1 != var_1b8)
        
        if (r10_1 == 0 || r10_1 == 1)
            rbx.b = 1
        else
            int64_t* r14_2 = var_208
            
            if (r14_2 != 0)
                int64_t* rdx_6 = var_1f8
                int64_t var_f8
                __builtin_memset(&var_f8, 0, 0x2c)
                int32_t var_cc_1 = 0x80
                int32_t var_c8_1 = 0xffffffff
                int32_t var_c4_1 = 0
                int64_t var_b8_1 = 0
                int32_t var_b0_1 = 0
                int64_t* var_1c8
                int64_t* rax_24
                int64_t rcx_16
                int32_t rdi_3
                
                if (rdx_6 == 0)
                    rdi_3 = 2
                    void var_1a8
                    rax_24 = _vfprintf_p_l(&var_1a8, u"Name", u"Core")
                    rcx_16 = *rax_24
                else
                    int64_t* rax_22 = rdx_6[1]
                    rdi_3 = 1
                    rcx_16 = *rdx_6
                    int64_t var_1d0 = rcx_16
                    var_1c8 = rax_22
                    
                    if (rax_22 != 0)
                        rax_22[1].d += 1
                    
                    int32_t var_1c0_1 = rdx_6[2].d
                    rax_24 = &var_1d0
                
                int64_t var_98_1 = rcx_16
                int64_t* rcx_18 = rax_24[1]
                int32_t var_a8 = 4
                
                if (rcx_18 != 0)
                    rcx_18[1].d += 1
                
                int32_t var_88_1 = rax_24[2].d
                char var_80_1 = 1
                var_1f8 = nullptr
                int32_t var_1f0_1 = 0
                sub_1405947f0(&var_1f8, 9)
                int32_t rax_26 = var_1f0_1 + 9
                var_1f0_1 = rax_26
                
                if (rax_26 s> 0)
                    sub_140594770(&var_1f8)
                
                UnDecorator::getReferenceType(var_1f8, u"ErrorCtx", 0x12)
                sub_140acb5e0(&var_f8, &var_1f8, &var_a8)
                int64_t* rcx_23 = var_1f8
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                if (var_80_1 != 0 && rcx_18 != 0)
                    rcx_18[1].d -= 1
                    
                    if (rcx_18[1].d == 1)
                        (**rcx_18)(rcx_18)
                        int32_t rax_29 = *(rcx_18 + 0xc)
                        *(rcx_18 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            (*(*rcx_18 + 8))(rcx_18, 1)
                
                if ((rdi_3.b & 2) != 0)
                    rdi_3 &= 0xfffffffd
                    int64_t* var_1a0
                    
                    if (var_1a0 != 0)
                        var_1a0[1].d -= 1
                        
                        if (var_1a0[1].d == 1)
                            (**var_1a0)(var_1a0)
                            int32_t rax_33 = *(var_1a0 + 0xc)
                            *(var_1a0 + 0xc) -= 1
                            
                            if (rax_33 == 1)
                                (*(*var_1a0 + 8))(var_1a0, 1)
                
                if ((rdi_3.b & 1) != 0 && var_1c8 != 0)
                    var_1c8[1].d -= 1
                    
                    if (var_1c8[1].d == 1)
                        (**var_1c8)(var_1c8)
                        int32_t rax_37 = *(var_1c8 + 0xc)
                        *(var_1c8 + 0xc) -= 1
                        
                        if (rax_37 == 1)
                            (*(*var_1c8 + 8))(var_1c8, 1)
                
                void var_190
                int64_t* rax_39 = sub_140aae420(&var_190, &var_1e8)
                int32_t var_78 = 4
                int64_t var_68_1 = *rax_39
                int64_t* rcx_34 = rax_39[1]
                
                if (rcx_34 != 0)
                    rcx_34[1].d += 1
                
                int32_t var_58_1 = rax_39[2].d
                char var_50_1 = 1
                var_208 = nullptr
                int32_t var_200_1 = 0
                sub_1405947f0(&var_208, 0x16)
                int32_t rax_41 = var_200_1 + 0x16
                var_200_1 = rax_41
                
                if (rax_41 s> 0)
                    sub_140594770(&var_208)
                
                UnDecorator::getReferenceType(var_208, u"IllegalNameCharacters", 0x2c)
                sub_140acb5e0(&var_f8, &var_208, &var_78)
                int64_t* rcx_39 = var_208
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                if (var_50_1 != 0 && rcx_34 != 0)
                    rcx_34[1].d -= 1
                    
                    if (rcx_34[1].d == 1)
                        (**rcx_34)(rcx_34)
                        int32_t rax_44 = *(rcx_34 + 0xc)
                        *(rcx_34 + 0xc) -= 1
                        
                        if (rax_44 == 1)
                            (*(*rcx_34 + 8))(rcx_34, 1)
                
                int64_t* var_188
                
                if (var_188 != 0)
                    var_188[1].d -= 1
                    
                    if (var_188[1].d == 1)
                        (**var_188)(var_188)
                        int32_t rax_48 = *(var_188 + 0xc)
                        *(var_188 + 0xc) -= 1
                        
                        if (rax_48 == 1)
                            (*(*var_188 + 8))(var_188, 1)
                
                void var_178
                void var_160
                int64_t* rax_52 = sub_140aaca20(&var_178, 
                    sub_140a96390(&var_1b8, 
                        _vfprintf_p_l(&var_160, 
                            {ErrorCtx} may not contain the following characters: {IllegalNameCharacters}", 
                        Core")), &var_f8)
                int64_t rdx_14 = *r14_2
                *r14_2 = *rax_52
                *rax_52 = rdx_14
                int64_t rdx_15 = r14_2[1]
                r14_2[1] = rax_52[1]
                rax_52[1] = rdx_15
                r14_2[2].d = rax_52[2].d
                int64_t* var_170
                
                if (var_170 != 0)
                    var_170[1].d -= 1
                    
                    if (var_170[1].d == 1)
                        (**var_170)(var_170)
                        int32_t rax_57 = *(var_170 + 0xc)
                        *(var_170 + 0xc) -= 1
                        
                        if (rax_57 == 1)
                            (*(*var_170 + 8))(var_170, 1)
                
                uint64_t var_158
                
                if (var_158 != 0)
                    int32_t rax_60 = *(var_158 + 8)
                    *(var_158 + 8) -= 1
                    
                    if (rax_60 == 1)
                        (**var_158)(var_158)
                        int32_t rax_63 = *(var_158 + 0xc)
                        *(var_158 + 0xc) -= 1
                        
                        if (rax_63 == 1)
                            (*(*var_158 + 8))(var_158, 1)
                
                int32_t var_b0_2 = 0
                
                if (var_b8_1 != 0)
                    sub_140a74f90(var_b8_1)
                
                sub_140acd610(&var_f8)
                rsi_1 = var_108_1
            
            rbx.b = 0
    
    int32_t var_100_2 = 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    var_140_1.d = 0
    
    if (var_140_1:4.d != 0)
        sub_140638cc0(&var_148, 0)
    
    int32_t var_118_2 = 0xffffffff
    int32_t var_114_2 = 0
    sub_14059a8e0(&var_138, 0)
    
    if (var_128 != 0)
        sub_140a74f90(var_128)
    
    int64_t rcx_60 = var_148
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    int64_t rcx_61 = var_1e8
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
    
    result = zx.q(rbx.b)

__security_check_cookie(rax_1 ^ &var_238)
return result
