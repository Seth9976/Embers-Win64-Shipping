// 函数: sub_140ba1610
// 地址: 0x140ba1610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
wchar16 const* const rbx = u"\:*?"<>|' ,.&!~\n\r\t@#"
int16_t i_1 = 0x5c
int16_t var_166 = 0
int64_t var_160 = 0
int64_t var_158 = 0
int16_t i

do
    int16_t i_2 = i_1
    
    if (sub_140a23cf0(arg1, &i_2, 0, 0, 0xffffffff) != 0xffffffff)
        wchar16 const rsi_1 = *rbx
        
        if (rsi_1 != 0)
            int32_t rdx_1 = var_158.d
            int32_t r14_1 = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                r14_1 = 0
            
            int32_t rax_3
            rax_3.b = rdx_1 s<= 0
            int32_t rax_5 = rax_3 + 1 + rdx_1
            var_158.d = rax_5
            
            if (rax_5 s> var_158:4.d)
                sub_140594770(&var_160)
            
            int64_t rcx_2 = sx.q(r14_1)
            *(var_160 + (rcx_2 << 1)) = rsi_1
            *(var_160 + (rcx_2 << 1) + 2) = 0
    
    i = rbx[1]
    rbx = &rbx[1]
    i_1 = i
while (i != 0)
int32_t rax_8 = var_158.d

if (rax_8 == 0 || rax_8 == 1)
    rbx.b = 0
else
    if (arg2 != 0)
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x2c)
        int32_t var_9c_1 = 0x80
        int32_t var_98_1 = 0xffffffff
        int32_t var_94_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0
        void var_128
        int64_t* rax_10 = sub_140aae420(&var_128, &var_160)
        int32_t var_78 = 4
        int64_t var_68_1 = *rax_10
        int64_t* rcx_5 = rax_10[1]
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        int32_t var_58_1 = rax_10[2].d
        char var_50_1 = 1
        int64_t var_150 = 0
        int32_t var_148_1 = 0
        sub_1405947f0(&var_150, 0x16)
        int32_t rax_12 = var_148_1 + 0x16
        var_148_1 = rax_12
        
        if (rax_12 s> 0)
            sub_140594770(&var_150)
        
        UnDecorator::getReferenceType(var_150, u"IllegalNameCharacters", 0x2c)
        int64_t* var_138 = &var_150
        int32_t* var_130_1 = &var_78
        void var_140
        sub_140b91dc0(&var_c8, &var_140, &var_138, nullptr)
        int64_t rcx_10 = var_150
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        if (var_50_1 != 0)
            char var_50_2 = 0
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rcx_5)(rcx_5)
                    int32_t rax_15 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t rax_19 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rax_19 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        void var_110
        void var_f8
        char* var_e0
        int64_t* rax_23 = sub_140aaca20(&var_110, 
            sub_140a96390(&var_e0, 
                _vfprintf_p_l(&var_f8, 
                    Name may not contain the following characters: '{IllegalNameCharacters}'", 
                Core")), &var_c8)
        int64_t rdx_7 = *arg2
        *arg2 = *rax_23
        *rax_23 = rdx_7
        int64_t rdx_8 = arg2[1]
        arg2[1] = rax_23[1]
        rax_23[1] = rdx_8
        arg2[2].d = rax_23[2].d
        int64_t* var_108
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t rax_28 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*var_108 + 8))(var_108, 1)
        
        wchar16* var_f0
        
        if (var_f0 != 0)
            int32_t rax_31 = *(var_f0 + 8)
            *(var_f0 + 8) -= 1
            
            if (rax_31 == 1)
                (**var_f0)(var_f0)
                int32_t rdi_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_f0 + 8))(var_f0, zx.q(rdi_1))
        
        int32_t var_80_2 = 0
        
        if (var_88_1 != 0)
            sub_140a74f90(var_88_1)
        
        sub_140acd610(&var_c8)
    
    rbx.b = 1

int64_t rcx_26 = var_160

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(rbx.b)
