// 函数: sub_140e1ee50
// 地址: 0x140e1ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t rsi = 0
char var_180 = data_1439ae51c
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 4
char var_48 = 0
(*(*arg1 + 0x238))(arg1, arg3, &var_180)
int32_t rbp = arg6
int128_t zmm1 = arg2[1]
int128_t var_1b0 = *arg2
int128_t var_1a0 = zmm1
var_1a0:8.q = arg1
int128_t var_190 = arg2[2]
int128_t* rdi

if (arg8 == 0)
    rdi.b = 0
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
        rdi.b = 0
    else
        rdi.b = 1

void var_178

if (var_50 s> 0)
    int64_t r14_1 = 0
    int64_t r15_1 = 0
    
    do
        void* rcx_2 = &var_178
        int32_t rbx_1 = rbp + 1
        
        if (var_58 != 0)
            rcx_2 = var_58
        
        void* rcx_3 = rcx_2 + r15_1
        
        if (r14_1 s<= 0)
            rbx_1 = rbp
        
        int32_t rax_11 =
            sub_140e1f680(*(rcx_3 + 0x38), &var_1b0, rcx_3, arg4, arg5, rbx_1, arg7, rdi.b)
        uint32_t rbp_1 = 0x64
        int32_t rdx_4 = (rax_11 - rbx_1) s/ 0xa
        uint64_t rcx_9 = 1
        
        if (rdx_4 s>= 1)
            rcx_9 = zx.q(rdx_4)
        
        uint32_t rdx_6 = (rcx_9 * 5).d * 2
        
        if (rdx_6 s<= 0x64)
            rbp_1 = rdx_6
        
        rsi += 1
        rbp = rbp_1 + rax_11
        r14_1 += 1
        r15_1 += 0x48
    while (rsi s< var_50)

sub_140d94d20(&var_178)
__security_check_cookie(rax_1 ^ &var_1f8)
return zx.q(rbp)
