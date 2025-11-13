// 函数: sub_142162500
// 地址: 0x142162500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t result = *(arg1 + 0x34)

if (result != 0)
    int32_t rbx_1 = *(arg1 + 8)
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x2c)
    int32_t var_34_1 = 0x80
    int32_t var_30_1 = 0xffffffff
    int32_t var_2c_1 = 0
    int32_t rbx_2 = rbx_1 - result
    
    if (rbx_1 != result)
        sub_140638cc0(&var_60, rbx_2)
    
    int32_t var_30_2 = 0xffffffff
    int32_t var_2c_2 = 0
    int64_t var_54
    sub_14059a8e0(&var_54:4, rbx_2)
    int64_t* var_88
    sub_1407453e0(&var_88, arg1)
    void* var_78
    int32_t i_1
    void* var_40
    
    for (int32_t i = i_1; i s< *(var_78 + 0x18); i = i_1)
        int64_t rbx_3
        
        if (var_2c_2 == 0)
            int32_t var_58_1
            rbx_3 = zx.q(var_58_1)
            int32_t rax_4 = (rbx_3 + 1).d
            var_58_1 = rax_4
            
            if (rax_4 s> var_54.d)
                sub_140638a00(&var_60)
            
            int32_t var_38_1
            int32_t rdi_1 = var_38_1
            sub_1405a4980(&var_54:4, rdi_1 + 1)
            void* rcx_7 = &var_54:4
            var_38_1 += 1
            
            if (var_40 != 0)
                rcx_7 = var_40
            
            int32_t rax_6 = rdi_1
            
            if (rdi_1 s< 0)
                rax_6 = rdi_1 + 0x1f
            
            void* rdx_8 = rcx_7 + (sx.q(rax_6 s>> 5) << 2)
            *rdx_8 &= not.d(1 << (rdi_1.b & 0x1f))
        else
            rbx_3 = sx.q(var_30_2)
            bool cond:0_1 = var_2c_2 == 1
            int64_t r8_1 = var_60
            int64_t rax_3 = sx.q(*(r8_1 + rbx_3 * 0xc + 4))
            var_30_2 = rax_3.d
            var_2c_2 -= 1
            
            if (not(cond:0_1))
                *(r8_1 + rax_3 * 0xc) = 0xffffffff
        
        void* rcx_9 = &var_54:4
        
        if (var_40 != 0)
            rcx_9 = var_40
        
        int32_t rax_12 = rbx_3.d
        
        if (rbx_3.d s< 0)
            rax_12 = (rbx_3 + 0x1f).d
        
        void* r8_2 = rcx_9 + (sx.q(rax_12 s>> 5) << 2)
        *r8_2 |= 1 << (rbx_3.b & 0x1f)
        uint64_t* r8_3 = var_60 + sx.q(rbx_3.d) * 0xc
        int64_t rdx_10 = sx.q(i) * 3
        int64_t rcx_13 = *var_88
        *r8_3 = *(rcx_13 + (rdx_10 << 2))
        r8_3[1].d = *(rcx_13 + (rdx_10 << 2) + 8)
        int32_t var_7c
        int32_t var_70 = var_70 & not.d(var_7c)
        void var_80
        sub_14059bdd0(&var_80)
    
    if (arg1 != &var_60)
        int128_t zmm3 = *arg1
        int128_t zmm4_1 = arg1[1]
        int128_t zmm5_1 = arg1[2]
        int64_t zmm2 = arg1[3].q
        uint128_t zmm1_1 = var_54:4.o
        *arg1 = var_60.o
        arg1[1] = zmm1_1
        arg1[2] = var_40.o
        arg1[3].q = var_30_2.q
        var_60.o = zmm3
        var_54:4.o = zmm4_1
        var_40.o = zmm5_1
        var_30_2.q = zmm2
    
    int32_t var_58_2 = 0
    
    if (var_54.d != 0)
        sub_140638cc0(&var_60, 0)
    
    int32_t var_30_3 = 0xffffffff
    int32_t var_2c_3 = 0
    sub_14059a8e0(&var_54:4, 0)
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    int64_t rcx_18 = var_60
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
