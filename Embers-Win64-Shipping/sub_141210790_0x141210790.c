// 函数: sub_141210790
// 地址: 0x141210790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t i = 5
void** const var_b8 = &data_142da8520
int32_t i_1 = 5
int16_t r13 = 0
void* var_b0
__builtin_memset(&var_b0, 0, 0x11)
int32_t var_90 = 0
int64_t var_a8_1

do
    for (int32_t j = 0; j s< 4; )
        int64_t rdi_1 = sx.q(var_a8_1.d)
        int16_t rbx_1 = j.w + r13 * 5
        int32_t rax_3 = (rdi_1 + 1).d
        var_a8_1.d = rax_3
        
        if (rax_3 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_1.d)
            i = i_1
        
        void* rcx_1
        
        if ((var_b0.b & 1) == 0)
            rcx_1 = var_b0
        else
            rcx_1 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_1 + (rdi_1 << 1)) = rbx_1
        int16_t rbx_2 = i.w + j.w
        int64_t rdi_2 = sx.q(var_a8_1.d)
        int32_t rax_6 = (rdi_2 + 1).d
        var_a8_1.d = rax_6
        
        if (rax_6 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_2.d)
        
        void* rcx_3
        
        if ((var_b0.b & 1) == 0)
            rcx_3 = var_b0
        else
            rcx_3 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_3 + (rdi_2 << 1)) = rbx_2
        int64_t rdi_3 = sx.q(var_a8_1.d)
        int32_t rax_9 = (rdi_3 + 1).d
        var_a8_1.d = rax_9
        
        if (rax_9 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_3.d)
        
        void* rcx_5
        
        if ((var_b0.b & 1) == 0)
            rcx_5 = var_b0
        else
            rcx_5 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_5 + (rdi_3 << 1)) = rbx_1 + 1
        int64_t rdi_4 = sx.q(var_a8_1.d)
        int32_t rax_12 = (rdi_4 + 1).d
        var_a8_1.d = rax_12
        
        if (rax_12 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_4.d)
        
        void* rcx_7
        
        if ((var_b0.b & 1) == 0)
            rcx_7 = var_b0
        else
            rcx_7 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_7 + (rdi_4 << 1)) = rbx_2
        int64_t rdi_5 = sx.q(var_a8_1.d)
        int32_t rax_15 = (rdi_5 + 1).d
        var_a8_1.d = rax_15
        
        if (rax_15 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_5.d)
        
        void* rcx_9
        
        if ((var_b0.b & 1) == 0)
            rcx_9 = var_b0
        else
            rcx_9 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_9 + (rdi_5 << 1)) = rbx_2 + 1
        int64_t rbx_3 = sx.q(var_a8_1.d)
        int32_t rax_18 = (rbx_3 + 1).d
        var_a8_1.d = rax_18
        
        if (rax_18 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rbx_3.d)
        
        void* rcx_11
        
        if ((var_b0.b & 1) == 0)
            rcx_11 = var_b0
        else
            rcx_11 = &var_b0 + (var_b0 s>> 1)
        
        i = i_1
        j += 1
        *(rcx_11 + (rbx_3 << 1)) = rbx_1 + 1
    
    i += 5
    int32_t rcx_13 = var_90 + 1
    i_1 = i
    var_90 = rcx_13
    r13 = rcx_13.w
while (i s< 0x19)

int32_t rdx_6 = var_a8_1.d
int64_t var_78 = 0
char var_50 = 0
int64_t var_48 = 0
*(arg1 + 0x18) = rdx_6
int64_t* rcx_15 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
void** const* var_70 = &var_b8
int32_t var_40 = 0
int32_t var_68 = 1
int128_t var_64 = data_143dbb1e0
(*(*rcx_15 + 0x4d8))(rcx_15, &var_90, &data_143f02b98, 2, rdx_6 * 2, 1, &var_78)
sub_1405d1600(arg1 + 0x10, &var_90)
sub_14081c9d0(&var_90)
int64_t result = sub_140a1d5c0(&var_b0)
__security_check_cookie(rax_1 ^ &var_f8)
return result
