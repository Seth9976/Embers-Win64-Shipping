// 函数: sub_1414b6e60
// 地址: 0x1414b6e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r15 = data_1439b7094
void** const var_a8 = &data_142da8520
uint64_t r15_1 = zx.q(r15 - 2)
void* var_a0
__builtin_memset(&var_a0, 0, 0x11)
uint32_t rdx = (r15_1 * 3).d

if (rdx != 0)
    sub_1407c42e0(&var_a0, rdx)

int32_t i = 0
int64_t var_98_1

if (r15_1.d s> 0)
    do
        int64_t rbx_1 = sx.q(var_98_1.d)
        int32_t rax_2 = (rbx_1 + 1).d
        var_98_1.d = rax_2
        
        if (rax_2 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_1.d)
        
        void* rcx_2
        
        if ((var_a0.b & 1) == 0)
            rcx_2 = var_a0
        else
            rcx_2 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_2 + (rbx_1 << 1)) = 0
        int16_t rdi_1 = i.w + 2
        int64_t rbx_2 = sx.q(var_98_1.d)
        int32_t rax_5 = (rbx_2 + 1).d
        var_98_1.d = rax_5
        
        if (rax_5 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_2.d)
        
        void* rcx_4
        
        if ((var_a0.b & 1) == 0)
            rcx_4 = var_a0
        else
            rcx_4 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_4 + (rbx_2 << 1)) = rdi_1 - 1
        int64_t rbx_3 = sx.q(var_98_1.d)
        int32_t rax_8 = (rbx_3 + 1).d
        var_98_1.d = rax_8
        
        if (rax_8 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_3.d)
        
        void* rcx_6
        
        if ((var_a0.b & 1) == 0)
            rcx_6 = var_a0
        else
            rcx_6 = &var_a0 + (var_a0 s>> 1)
        
        i += 1
        *(rcx_6 + (rbx_3 << 1)) = rdi_1
    while (i s< r15_1.d)

char rcx_7 = (data_1439c7a34).b
int128_t zmm0 = data_143dbb1e0
int64_t var_78
int64_t* var_b8 = &var_78
var_78 = 0
int64_t* rcx_8 = data_143f0f180
int32_t var_54 = (1 << rcx_7) - 1
int32_t var_68 = 1
void** const* var_70 = &var_a8
int128_t var_64 = zmm0
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void var_88
(*(*rcx_8 + 0x4d8))(rcx_8, &var_88, &data_143f02b98, 2, var_98_1.d * 2, 1, var_b8)
sub_1405d1600(arg1 + 0x10, &var_88)
sub_14081c9d0(&var_88)
int64_t result = sub_140a1d5c0(&var_a0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
