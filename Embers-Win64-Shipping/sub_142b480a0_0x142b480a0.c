// 函数: sub_142b480a0
// 地址: 0x142b480a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_148 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rdi = arg4
struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_138
sub_142ab2b60(&var_138, arg3)
int32_t rax_2 = *(arg3 + 0x48)
int32_t rax_3 = *(arg3 + 0x4c)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e8
sub_142a479b0(&var_e8, arg3 + 0x50)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
sub_142a479b0(&var_a8, arg3 + 0x90)
int64_t rax_4 = *(arg3 + 0xd0)
int32_t rax_5 = sub_1408e52c0(arg2)
uint64_t r13
r13.b = 1
int64_t rdx_3 = *arg1
int64_t* rbx = (*(rdx_3 + 0x30))(arg1, rdx_3)
int64_t rdx_4 = *arg1

if (rbx u< (*(rdx_4 + 0x38))(arg1, rdx_4))
    bool cond:0_1
    
    do
        int64_t* r14_1 = *rbx
        int32_t rax_8 = sub_1408e52c0(arg2)
        
        if (sub_142b467c0(arg2) == 0)
            r13.b = 1
        else
            r13 = zx.q((*(*r14_1 + 0x10))(r14_1, arg2, arg3, rdi, rax_5, arg4, var_148))
        
        rdi.b = sub_1408e52c0(arg2) != rax_8
        char rax_13 = (*(*r14_1 + 8))(r14_1)
        
        if (rdi.b == 0)
            if (rax_13 == 0)
                sub_14266cbe0(arg2, rax_5)
                sub_142ab2ce0(arg3, &var_138)
                *(arg3 + 0x48) = rax_2
                *(arg3 + 0x4c) = rax_3
                sub_142a48100(arg3 + 0x50, &var_e8)
                sub_142a48100(arg3 + 0x90, &var_a8)
                *(arg3 + 0xd0) = rax_4.w
                *(arg3 + 0xd2) = rax_4:2.w
                *(arg3 + 0xd4) = rax_4:4.w
                *(arg3 + 0xd6) = rax_4:6.w
                break
            
            rbx = &rbx[1]
        else if (rax_13 == 0)
            rbx = &rbx[1]
            
            if (rbx u< (*(*arg1 + 0x38))(arg1))
                int32_t rdi_1 = *(arg3 + 0x48)
                
                if (sub_1408e52c0(arg2) != rdi_1 && rdi_1 s> rax_8)
                    sub_14266cbe0(arg2, rdi_1)
        
        cond:0_1 = rbx u< (*(*arg1 + 0x38))(arg1)
        rdi = arg4
    while (cond:0_1)

sub_142a47ff0(&var_a8)
sub_142a47ff0(&var_e8)
sub_142ab2c10(&var_138)
__security_check_cookie(rax_1 ^ &var_178)
return zx.q(r13.b)
