// 函数: sub_140aec990
// 地址: 0x140aec990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t result = *(arg1 + 0x34)

if (result != 0)
    int32_t rdx_1 = *(arg1 + 8)
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x2c)
    int32_t var_2c_1 = 0
    int32_t var_34_1 = 0x80
    int32_t var_30_1 = 0xffffffff
    sub_140a42d40(&var_60, rdx_1 - result)
    void* var_88
    sub_1407453e0(&var_88, arg1)
    void* var_78
    int32_t i_1
    int64_t var_50
    int64_t* var_40
    
    for (int32_t i = i_1; i s< *(var_78 + 0x18); i = i_1)
        int64_t rbx_1
        
        if (var_2c_1 == 0)
            int64_t var_58_1
            rbx_1 = zx.q(var_58_1.d)
            int32_t rax_4 = (rbx_1 + 1).d
            var_58_1.d = rax_4
            
            if (rax_4 s> var_58_1:4.d)
                sub_1405c4f50(&var_60)
            
            int32_t var_38_1
            int32_t rdi_1 = var_38_1
            sub_1405a4980(&var_50, rdi_1 + 1)
            int64_t* rcx_8 = &var_50
            var_38_1 += 1
            
            if (var_40 != 0)
                rcx_8 = var_40
            
            int32_t rax_6 = rdi_1
            
            if (rdi_1 s< 0)
                rax_6 = rdi_1 + 0x1f
            
            void* rdx_8 = rcx_8 + (sx.q(rax_6 s>> 5) << 2)
            *rdx_8 &= not.d(1 << (rdi_1.b & 0x1f))
        else
            rbx_1 = sx.q(var_30_1)
            int64_t r8_1 = var_60
            bool cond:0_1 = var_2c_1 == 1
            int64_t rax_3 = sx.q(*(r8_1 + rbx_1 * 0x30 + 4))
            var_30_1 = rax_3.d
            var_2c_1 -= 1
            
            if (not(cond:0_1))
                *(r8_1 + rax_3 * 0x30) = 0xffffffff
        
        int64_t* rcx_10 = &var_50
        
        if (var_40 != 0)
            rcx_10 = var_40
        
        int32_t rax_12 = rbx_1.d
        
        if (rbx_1.d s< 0)
            rax_12 = (rbx_1 + 0x1f).d
        
        void* r8_2 = rcx_10 + (sx.q(rax_12 s>> 5) << 2)
        *r8_2 |= 1 << (rbx_1.b & 0x1f)
        int64_t* r14_3 = sx.q(rbx_1.d) * 0x30 + var_60
        int64_t* rsi_3 = sx.q(i) * 0x30 + *var_88
        *r14_3 = *rsi_3
        sub_140596d10(&r14_3[1], &rsi_3[1])
        sub_140596d10(&r14_3[3], &rsi_3[3])
        r14_3[5].d = rsi_3[5].d
        *(r14_3 + 0x2c) = *(rsi_3 + 0x2c)
        int32_t var_7c
        int32_t var_70 = var_70 & not.d(var_7c)
        void var_80
        sub_14059bdd0(&var_80)
    
    if (arg1 != &var_60)
        int128_t zmm3 = *arg1
        int128_t zmm4_1 = arg1[1]
        int128_t zmm5_1 = arg1[2]
        int64_t zmm2 = arg1[3].q
        uint128_t zmm1_1 = var_50.o
        *arg1 = var_60.o
        arg1[1] = zmm1_1
        arg1[2] = var_40.o
        arg1[3].q = var_30_1.q
        var_60.o = zmm3
        var_50.o = zmm4_1
        var_40.o = zmm5_1
        var_30_1.q = zmm2
    
    sub_140a42d40(&var_60, 0)
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    int64_t rcx_18 = var_60
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
