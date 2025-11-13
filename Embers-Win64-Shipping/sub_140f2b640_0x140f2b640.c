// 函数: sub_140f2b640
// 地址: 0x140f2b640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t zmm0 = data_143dbb1f0.d
int32_t zmm1 = data_143dbb1f0:4.d
void* var_88 = arg1
int32_t var_78 = zmm0
zmm0 = (zx.o(0)).d
int32_t var_70 = 0
int32_t var_74 = zmm1
int64_t rdx
int64_t var_80 = rdx
int32_t var_6c = 0xffffffff
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_3c = 0x80
int64_t var_58
__builtin_memset(&var_58, 0, 0x1c)
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
int32_t rax_3 = (**(arg1 + 0x2c0))(zmm0)

if (rax_3 s> var_60 - var_34)
    zmm0 = sub_140f5bc50(&var_68, rax_3)
    int32_t rax_6
    
    if (rax_3 u< 4)
        rax_6 = 1
    else
        uint32_t rbx_1 = rax_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t rcx_4
        
        if (rbx_1 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        
        if (rcx_6 == 0)
            rax_6 = 1
        else
            rax_6 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_3)))
    
    if (var_20 == 0 || var_20 s< rax_6)
        int32_t var_20_1 = rax_6
        zmm0 = sub_140f5b3a0(&var_68)

sub_140f2b2b0(&var_88, zmm0)
void* result = sub_140f23e90(&var_68)
__security_check_cookie(rax_1 ^ &var_a8)
return result
