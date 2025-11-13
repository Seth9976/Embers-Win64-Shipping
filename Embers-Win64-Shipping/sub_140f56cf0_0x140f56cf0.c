// 函数: sub_140f56cf0
// 地址: 0x140f56cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t rbx = 0
char var_180 = data_1439ae51c
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 4
char var_48 = 0
char (* var_190)[0x10] = nullptr
int32_t var_188 = 0
int32_t var_184 = 0x10
char var_1a0[0x10]
sub_140f2c460(arg1, arg3, &var_180, &var_1a0, arg5)
char var_1e8_1

if (arg9 == 0)
    var_1e8_1 = 0
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx = *(arg1 + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    var_1e8_1 = 1
    
    if (*(arg1 + 0x190) == 0)
        var_1e8_1 = 0

int32_t r13 = arg7
int128_t zmm1 = arg2[1]
int32_t var_1e4 = r13
int128_t var_1d0 = *arg2
int128_t var_1c0 = zmm1
var_1c0:8.q = arg1
int128_t var_1b0 = arg2[2]
void var_178

if (var_50 s> 0)
    int64_t rsi_1 = 0
    int64_t r15_1 = 0
    
    do
        void* rdi_1 = &var_178
        
        if (var_58 != 0)
            rdi_1 = var_58
        
        int128_t* rdi_2 = rdi_1 + rsi_1
        
        if (sub_140e1a4e0(arg1, arg4, rdi_2) == 0)
            char (* rcx_3)[0x10] = &var_1a0
            
            if (var_190 != 0)
                rcx_3 = var_190
            
            int32_t rax_12 = r13 + 1
            
            if ((*rcx_3)[r15_1] == 0)
                rax_12 = var_1e4
            
            var_1e4 = rax_12
            int32_t rax_16 =
                sub_140e1f680(*(rdi_2 + 0x38), &var_1d0, rdi_2, arg4, arg6, rax_12, arg8, var_1e8_1)
            
            if (r13 s>= rax_16)
                rax_16 = r13
            
            r13 = rax_16
        
        rbx += 1
        r15_1 += 1
        rsi_1 += 0x48
    while (rbx s< var_50)

if (var_190 != 0)
    sub_140a74f90(var_190)

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_228)
return zx.q(r13)
