// 函数: sub_141cd81b0
// 地址: 0x141cd81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rdi = arg1
int32_t rdx_1 = arg1[1].d - *(arg1 + 0x34)
void* var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_4c = 0x80
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
sub_1409d9530(&var_78, rdx_1)
int32_t rbx = rdi[1].d
arg2[1].d = 0

if (*(arg2 + 0xc) != rbx)
    sub_1405c5570(arg2, rbx)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rbx)
int64_t* var_b0
sub_1407453e0(&var_b0, rdi)
int32_t i_1
int32_t i = i_1
void* var_a0
int64_t* var_58

if (i s< *(var_a0 + 0x18))
    do
        int32_t rbx_1 = data_143a1c6c4
        int64_t var_68
        int64_t rdi_1
        
        if (var_44 == 0)
            int64_t var_70_1
            rdi_1 = zx.q(var_70_1.d)
            int32_t rax_4 = (rdi_1 + 1).d
            var_70_1.d = rax_4
            
            if (rax_4 s> var_70_1:4.d)
                sub_1405c4ec0(&var_78)
            
            int32_t var_50_1
            int32_t rsi_1 = var_50_1
            sub_1405a4980(&var_68, rsi_1 + 1)
            int64_t* rcx_8 = &var_68
            var_50_1 += 1
            
            if (var_58 != 0)
                rcx_8 = var_58
            
            int32_t rax_6 = rsi_1
            
            if (rsi_1 s< 0)
                rax_6 = rsi_1 + 0x1f
            
            void* rdx_9 = rcx_8 + (sx.q(rax_6 s>> 5) << 2)
            *rdx_9 &= not.d(1 << (rsi_1.b & 0x1f))
        else
            rdi_1 = sx.q(var_48)
            bool cond:0_1 = var_44 == 1
            void* r8_1 = var_78
            int64_t rax_3 = sx.q(*(r8_1 + rdi_1 * 0x28 + 4))
            var_48 = rax_3.d
            var_44 -= 1
            
            if (not(cond:0_1))
                *(r8_1 + rax_3 * 0x28) = 0xffffffff
        
        int64_t* rcx_10 = &var_68
        
        if (var_58 != 0)
            rcx_10 = var_58
        
        int32_t rax_12 = rdi_1.d
        
        if (rdi_1.d s< 0)
            rax_12 = (rdi_1 + 0x1f).d
        
        void* r8_2 = rcx_10 + (sx.q(rax_12 s>> 5) << 2)
        *r8_2 |= 1 << (rdi_1.b & 0x1f)
        void* rax_16 = var_78
        int64_t r8_3 = sx.q(rdi_1.d) * 0x28
        __builtin_memset(rax_16 + r8_3, 0, 0x20)
        *(rax_16 + r8_3 + 0x20) = rbx_1
        int64_t* r14_2 = var_78 + r8_3
        int64_t* rbx_2 = *var_b0 + sx.q(i) * 0x28
        
        if (r14_2 != rbx_2)
            int64_t rcx_15 = *r14_2
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            *r14_2 = *rbx_2
            *rbx_2 = 0
            r14_2[1].d = rbx_2[1].d
            *(r14_2 + 0xc) = *(rbx_2 + 0xc)
            rbx_2[1] = 0
        
        if (&r14_2[2] != &rbx_2[2])
            int64_t rcx_16 = r14_2[2]
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            r14_2[2] = rbx_2[2]
            rbx_2[2] = 0
            r14_2[3].d = rbx_2[3].d
            *(r14_2 + 0x1c) = *(rbx_2 + 0x1c)
            rbx_2[3] = 0
        
        r14_2[4].d = rbx_2[4].d
        int32_t var_88[0x4]
        int32_t* rcx_18 = *(sub_1409ca6e0(arg2, &var_88, i) + 8)
        
        if (rcx_18 != 0)
            *rcx_18 = rdi_1.d
        
        int32_t var_a4
        int32_t var_98 = var_98 & not.d(var_a4)
        void var_a8
        sub_14059bdd0(&var_a8)
        i = i_1
    while (i s< *(var_a0 + 0x18))
    
    rdi = arg1

sub_1409fb720(rdi, &var_78)
int64_t result = sub_141cdb8d0(&var_78, 0)

if (var_58 != 0)
    result = sub_140a74f90(var_58)

void* rcx_23 = var_78

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_d8)
return result
