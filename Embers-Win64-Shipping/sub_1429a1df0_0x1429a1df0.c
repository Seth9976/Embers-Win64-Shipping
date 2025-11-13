// 函数: sub_1429a1df0
// 地址: 0x1429a1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_198 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rax_2 = __RTDynamicCast(arg2, 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
    &class Imf_2_3::OpaqueAttribute `RTTI Type Descriptor', 0)

if (rax_2 != 0)
    char* rcx_1 = *(arg1 + 0x10)
    void* r9_2 = *(rax_2 + 0x10) - rcx_1
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rcx_1)
        i = zx.d(*(rcx_1 + r9_2))
        
        if (r8_1 != i)
            break
        
        rcx_1 = &rcx_1[1]
    while (i != 0)
    
    if (r8_1 - i == 0)
        int64_t rdi = sx.q(*(rax_2 + 0x18))
        int64_t rax_3 = j_sub_140a82f30(rdi)
        j_sub_140a74f90(*(arg1 + 0x28))
        *(arg1 + 0x20) = rdi.d
        *(arg1 + 0x28) = rax_3
        *(arg1 + 0x18) = *(rax_2 + 0x18)
        int64_t result = memcpy(rax_3, *(rax_2 + 0x28), *(rax_2 + 0x18))
        __security_check_cookie(rax_1 ^ &var_1c8)
        return result

void* var_188
sub_1429779b0(&var_188, 3, 1)
char* rax_5 = sub_1405948a0(arg1 + 8)
int64_t rdx_1 = *arg2
char* rax_6 = (*(rdx_1 + 8))(arg2, rdx_1)
void var_178
sub_14058b120(
    sub_14058b120(
        sub_14058b120(
            sub_14058b120(
                sub_14058b120(&var_178, 
                    "Cannot copy the value of an image file attribute of type ""), 
                rax_6), 
            "" to an attribute of type ""), 
        rax_5), 
    "".")
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d5d0(&exceptionObject, &var_188)
_CxxThrowException(&exceptionObject, &data_143946630)
noreturn
