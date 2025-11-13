// 函数: sub_140e33a00
// 地址: 0x140e33a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_c8
struct Imf_2_3::IStream::VTable* result = __security_cookie ^ &var_c8
struct Imf_2_3::IStream::VTable* result_1 = result

if (*(arg1 + 0x10) == 0)
    int64_t rdi_1 = *(arg1 + 0x28)
    int64_t rbx_1 = *(arg1 + 0x20)
    void** const var_98
    sub_14297aaa0(&var_98, &data_1437020ab)
    var_98 = &data_142ed6420
    int64_t var_70_1 = rbx_1
    int64_t var_68_1 = rdi_1
    int64_t rdi_2 = 0
    int64_t var_60_1 = 0
    struct Imf_2_3::RgbaInputFile::VTable* var_58
    sub_142977fc0(&var_58, &var_98, sub_142977840())
    int32_t* rax_2 = sub_142978640(&var_58)
    int64_t r14_1 = sx.q(*rax_2)
    int64_t rbp_1 = sx.q(rax_2[1])
    int32_t r15_1 = rax_2[3]
    *(arg1 + 0x10) = 0
    
    if (*(arg1 + 0x18) != 0)
        sub_140a4fbe0(arg1 + 8, 0)
        rdi_2 = *(arg1 + 0x10)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(arg1 + 0x3b))
    int64_t rax_11 = ((sx.q(*(arg1 + 0x3c)) * sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
        * sx.q(*(arg1 + 0x40))) << 2) + rdi_2
    *(arg1 + 0x10) = rax_11
    
    if (rax_11 s> *(arg1 + 0x18))
        sub_140a4f990(arg1 + 8)
    
    int64_t r9_1 = sx.q(*(arg1 + 0x3c))
    sub_14297a260(&var_58, *(arg1 + 8) - ((rbp_1 * r9_1 + r14_1) << 3), 1, r9_1)
    sub_142978ab0(&var_58, rbp_1.d, r15_1)
    sub_1429781e0(&var_58)
    result = sub_14297aba0(&var_98)

__security_check_cookie(result_1 ^ &var_c8)
return result
