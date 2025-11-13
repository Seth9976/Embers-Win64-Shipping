// 函数: sub_141d0f650
// 地址: 0x141d0f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rdi = arg4
int64_t r14 = arg3
int128_t zmm6 = *(*arg1 + 0xd0)
void* rax_3 = arg1[0xe]
void* rcx = arg1 + 0x80

if (rax_3 != 0)
    rcx = rax_3

int64_t* rax_6 = arg1[0xc]((*(*rcx + 8))(rcx))
int64_t rdx = arg1[0x14]
int64_t r8 = *(*rax_6 + 0x178)
int128_t var_68
void var_58

if (((arg2 + 0xf) & 0xfffffffffffffff0) == arg2)
    r8(rax_6, rdx + arg2)
else
    int64_t rcx_6 = arg2 & 0xfffffffffffffff0
    int64_t rbx_1 = rdi
    int64_t rbp_1 = arg2 - rcx_6
    
    if (0x10 - rbp_1 s<= rdi)
        rbx_1 = 0x10 - rbp_1
    
    r8(rax_6, rdx + rcx_6)
    (*(*rax_6 + 0x150))(rax_6, &var_58, 0x10)
    var_68 = zmm6
    zmm6 = sub_141cff040(&var_58, 0x10, &var_68)
    memcpy(r14, &var_58 + rbp_1, rbx_1.d)
    r14 += rbx_1
    rdi -= rbx_1

int64_t rbx_3 = rdi & 0xfffffffffffffff0
(*(*rax_6 + 0x150))(rax_6, r14, rbx_3)
var_68 = zmm6
int64_t result
int128_t zmm6_1
result, zmm6_1 = sub_141cff040(r14, rbx_3.d, &var_68)
int64_t rdi_1 = rdi - rbx_3

if (rdi_1 s> 0)
    (*(*rax_6 + 0x150))(rax_6, &var_58, 0x10)
    var_68 = zmm6_1
    sub_141cff040(&var_58, 0x10, &var_68)
    result = memcpy(r14 + rbx_3, &var_58, rdi_1.d)

__security_check_cookie(rax_1 ^ &var_88)
return result
