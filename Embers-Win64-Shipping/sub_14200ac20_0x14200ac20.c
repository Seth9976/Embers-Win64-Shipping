// 函数: sub_14200ac20
// 地址: 0x14200ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
*(arg1 + 0x5c) += 1
int32_t rax_2 = *(arg1 + 0x50)
int32_t rcx = *(arg1 + 0x5c)
int64_t r14
r14.b = 0
int64_t rdx = 0
int32_t var_98 = 0
int64_t var_48 = 0
char var_38 = 0
int64_t rdi = sx.q(rax_2 - 1)
int64_t var_90
__builtin_memset(&var_90, 0, 0x34)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_40 = 0

if (rax_2 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_4 = *(arg1 + 0x48)
        
        if (*(rbx_2 + rax_4 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_4)
            
            if (rcx_1 == 0)
                r14.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, &var_98) == 0)
                r14.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x5c)
    rdx = var_48

*(arg1 + 0x5c) = rcx - 1

if (r14.b != 0)
    sub_140599630(arg1 + 0x48, 0)
    rdx = var_48

int32_t var_40_1 = 0

if (rdx != 0)
    sub_140a74f90(rdx)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

uint64_t var_88
uint64_t rcx_7 = var_88

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_b8)
return result
