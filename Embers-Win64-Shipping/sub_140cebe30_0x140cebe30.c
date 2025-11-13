// 函数: sub_140cebe30
// 地址: 0x140cebe30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_b8 = 0
int32_t var_b0 = 0
void var_a8
sub_140cad390(&var_a8, &var_b8, arg1, 0, 1, 1, 1)
sub_140cba380(&var_a8, arg1, 0, 0)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= var_b0)
        break
    
    int64_t* r8_1 = *(var_b8 + (sx.q(i) << 3))
    
    if (r8_1 != 0)
        int32_t rax_3 = *(r8_1 + 0xc)
        void* const rax_7
        
        if (rax_3 s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            uint32_t rdx_2 = zx.d(rax_3.w)
            
            if (rax_3 s< 0)
                rax_3 += 0xffff
                rdx_2 -= 0x10000
            
            rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
        
        if (((*(rax_7 + 8) u>> 0x1e).b & 1) == 0)
            r8_1[1].d |= arg2
            (*(*r8_1 + 0x1a8))(r8_1, zx.q(arg2))

int32_t var_40 = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t var_80 = 0
uint64_t var_88
int32_t var_7c

if (var_7c != 0)
    sub_1405a5410(&var_88, 0)

int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

uint64_t rcx_10 = var_88

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

void** result = sub_140d16360(&var_a8)
int64_t rcx_12 = var_b8

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_f8)
return result
