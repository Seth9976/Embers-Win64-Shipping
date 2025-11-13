// 函数: sub_14120f650
// 地址: 0x14120f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void** const var_b8 = &data_142da8520
int16_t rax_2 = 0
void* var_b0
__builtin_memset(&var_b0, 0, 0x11)
int32_t i = 0xd
int32_t var_98 = 0
int64_t var_a8_1
int32_t var_90

do
    int32_t j = 0
    int32_t rax_4 = zx.d(rax_2) * 0xd
    var_90 = rax_4
    
    do
        int64_t rdi_1 = sx.q(var_a8_1.d)
        int16_t rbx_1 = j.w + rax_4.w
        int32_t rax_5 = (rdi_1 + 1).d
        var_a8_1.d = rax_5
        
        if (rax_5 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_1.d)
        
        void* rcx_1
        
        if ((var_b0.b & 1) == 0)
            rcx_1 = var_b0
        else
            rcx_1 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_1 + (rdi_1 << 1)) = rbx_1
        int16_t rbx_2 = j.w + i.w
        int64_t rdi_2 = sx.q(var_a8_1.d)
        int32_t rax_8 = (rdi_2 + 1).d
        var_a8_1.d = rax_8
        
        if (rax_8 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_2.d)
        
        void* rcx_3
        
        if ((var_b0.b & 1) == 0)
            rcx_3 = var_b0
        else
            rcx_3 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_3 + (rdi_2 << 1)) = rbx_2
        int64_t rdi_3 = sx.q(var_a8_1.d)
        int32_t rax_11 = (rdi_3 + 1).d
        var_a8_1.d = rax_11
        
        if (rax_11 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_3.d)
        
        void* rcx_5
        
        if ((var_b0.b & 1) == 0)
            rcx_5 = var_b0
        else
            rcx_5 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_5 + (rdi_3 << 1)) = rbx_1 + 1
        int64_t rdi_4 = sx.q(var_a8_1.d)
        int32_t rax_14 = (rdi_4 + 1).d
        var_a8_1.d = rax_14
        
        if (rax_14 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_4.d)
        
        void* rcx_7
        
        if ((var_b0.b & 1) == 0)
            rcx_7 = var_b0
        else
            rcx_7 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_7 + (rdi_4 << 1)) = rbx_2
        int64_t rdi_5 = sx.q(var_a8_1.d)
        int32_t rax_17 = (rdi_5 + 1).d
        var_a8_1.d = rax_17
        
        if (rax_17 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rdi_5.d)
        
        void* rcx_9
        
        if ((var_b0.b & 1) == 0)
            rcx_9 = var_b0
        else
            rcx_9 = &var_b0 + (var_b0 s>> 1)
        
        *(rcx_9 + (rdi_5 << 1)) = rbx_2 + 1
        int64_t rbx_3 = sx.q(var_a8_1.d)
        int32_t rax_20 = (rbx_3 + 1).d
        var_a8_1.d = rax_20
        
        if (rax_20 s> var_a8_1:4.d)
            sub_1407c36f0(&var_b0, rbx_3.d)
        
        void* rcx_11
        
        if ((var_b0.b & 1) == 0)
            rcx_11 = var_b0
        else
            rcx_11 = &var_b0 + (var_b0 s>> 1)
        
        rax_4 = var_90
        j += 1
        *(rcx_11 + (rbx_3 << 1)) = rbx_1 + 1
    while (j s< 0xc)
    
    i += 0xd
    int32_t rcx_13 = var_98 + 1
    var_98 = rcx_13
    rax_2 = rcx_13.w
while (i s< 0xf7)

int32_t rdx_7 = var_a8_1.d
int64_t var_78 = 0
char var_50 = 0
int64_t var_48 = 0
*(arg1 + 0x18) = rdx_7
int64_t* rcx_15 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
void** const* var_70 = &var_b8
int32_t var_40 = 0
int32_t var_68 = 1
int128_t var_64 = data_143dbb1e0
(*(*rcx_15 + 0x4d8))(rcx_15, &var_90, &data_143f02b98, 2, rdx_7 * 2, 1, &var_78)
sub_1405d1600(arg1 + 0x10, &var_90)
sub_14081c9d0(&var_90)
int64_t result = sub_140a1d5c0(&var_b0)
__security_check_cookie(rax_1 ^ &var_f8)
return result
