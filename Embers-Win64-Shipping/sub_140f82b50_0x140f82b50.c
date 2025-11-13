// 函数: sub_140f82b50
// 地址: 0x140f82b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t rbx = 0
char var_180 = data_1439ae51c
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 4
char var_48 = 0
sub_140de8410(arg1, arg3, &var_180)
int32_t r14 = arg6
int64_t r15

if (arg8 == 0)
    r15.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx = arg1[0x33]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x34].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (arg1[0x32].b == 0)
        r15.b = 0
    else
        r15.b = 1

int128_t zmm1 = arg2[1]
int128_t var_1b0 = *arg2
int128_t var_1a0 = zmm1
var_1a0:8.q = arg1
int128_t var_190 = arg2[2]
void var_178

if (var_50 s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rdi_1 = &var_178
        
        if (var_58 != 0)
            rdi_1 = var_58
        
        int128_t* rdi_2 = rdi_1 + rsi_1
        
        if (sub_140e1a4e0(arg1, arg4, rdi_2) == 0)
            int32_t rax_11 =
                sub_140e1f680(*(rdi_2 + 0x38), &var_1b0, rdi_2, arg4, arg5, r14 + 1, arg7, r15.b)
            
            if (r14 s>= rax_11)
                rax_11 = r14
            
            r14 = rax_11
        
        rbx += 1
        rsi_1 += 0x48
    while (rbx s< var_50)

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_1f8)
return zx.q(r14)
