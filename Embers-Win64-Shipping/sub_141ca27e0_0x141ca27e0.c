// 函数: sub_141ca27e0
// 地址: 0x141ca27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* i = *arg2
int64_t var_128
__builtin_memset(&var_128, 0, 0x4c)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b4 = 0
void* var_a8 = nullptr
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t var_48 = 0
char var_46 = 0
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_6c = 0x80
void* r14 = &i[sx.q(arg2[1].d)]
int32_t var_68 = 0xffffffff

for (; i != r14; i = &i[1])
    int64_t rbx_1 = *i
    int32_t var_140
    int64_t var_e8
    sub_14098dfb0(&var_e8, &var_140)
    int64_t* var_138
    *var_138 = rbx_1
    var_138[3].b = 0
    var_138[4].d = 0xffffffff
    int32_t rbx_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    int32_t var_e0
    
    if (sub_14093d550(&var_e8, var_e0 - var_b4, 0) == 0)
        void var_b0
        void* rcx_3 = &var_b0
        int32_t r8_2 = (var_a0 - 1) & rbx_3
        *(var_138 + 0x24) = r8_2
        
        if (var_a8 != 0)
            rcx_3 = var_a8
        
        void* rdx_5 = &var_b0
        var_138[4].d = *(rcx_3 + ((sx.q(var_a0 - 1) & sx.q(r8_2)) << 2))
        
        if (var_a8 != 0)
            rdx_5 = var_a8
        
        *(rdx_5 + ((sx.q(var_a0 - 1) & sx.q(r8_2)) << 2)) = var_140

char rax_16 = (*(*arg1 + 0x40))(arg1, &var_128, arg3)
sub_141c941c0(&var_128)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rax_16)
