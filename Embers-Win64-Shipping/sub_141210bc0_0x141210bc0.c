// 函数: sub_141210bc0
// 地址: 0x141210bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void** const var_a8 = &data_142da8520
void* var_a0
__builtin_memset(&var_a0, 0, 0x11)
sub_1407c42e0(&var_a0, 0x948)
int32_t r8 = 0
int32_t var_88 = 0
int64_t var_98_1

for (int32_t i = 0; i s< 0xc6; )
    int32_t j_2 = 0
    int32_t j
    
    do
        int64_t rdi_1 = sx.q(var_98_1.d)
        j = j_2 + 1
        int16_t rsi_3 = j.w - (zx.q(j s/ 0x12) * 9).w * 2 + i.w
        int32_t rdx_6 = j_2 s/ 0x12
        int16_t r14_1 = j_2.w + (zx.q((r8 - rdx_6 + 1) * 9) << 1).w
        int32_t rax_13 = (rdi_1 + 1).d
        var_98_1.d = rax_13
        
        if (rax_13 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rdi_1.d)
        
        void* rcx_2
        
        if ((var_a0.b & 1) == 0)
            rcx_2 = var_a0
        else
            rcx_2 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_2 + (rdi_1 << 1)) = (r8.w - rdx_6.w) * 0x12 + j_2.w
        int64_t rbx_2 = sx.q(var_98_1.d)
        int32_t rax_16 = (rbx_2 + 1).d
        var_98_1.d = rax_16
        
        if (rax_16 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_2.d)
        
        void* rcx_4
        
        if ((var_a0.b & 1) == 0)
            rcx_4 = var_a0
        else
            rcx_4 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_4 + (rbx_2 << 1)) = rsi_3
        int64_t rbx_3 = sx.q(var_98_1.d)
        int32_t rax_19 = (rbx_3 + 1).d
        var_98_1.d = rax_19
        
        if (rax_19 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_3.d)
        
        void* rcx_6
        
        if ((var_a0.b & 1) == 0)
            rcx_6 = var_a0
        else
            rcx_6 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_6 + (rbx_3 << 1)) = r14_1
        int64_t rbx_4 = sx.q(var_98_1.d)
        int32_t rax_22 = (rbx_4 + 1).d
        var_98_1.d = rax_22
        
        if (rax_22 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_4.d)
        
        void* rcx_8
        
        if ((var_a0.b & 1) == 0)
            rcx_8 = var_a0
        else
            rcx_8 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_8 + (rbx_4 << 1)) = r14_1
        int64_t rbx_5 = sx.q(var_98_1.d)
        int32_t rax_25 = (rbx_5 + 1).d
        var_98_1.d = rax_25
        
        if (rax_25 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_5.d)
        
        void* rcx_10
        
        if ((var_a0.b & 1) == 0)
            rcx_10 = var_a0
        else
            rcx_10 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_10 + (rbx_5 << 1)) = rsi_3
        int64_t rbx_6 = sx.q(var_98_1.d)
        int32_t rax_28 = (rbx_6 + 1).d
        var_98_1.d = rax_28
        
        if (rax_28 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_6.d)
        
        void* rcx_12
        
        if ((var_a0.b & 1) == 0)
            rcx_12 = var_a0
        else
            rcx_12 = &var_a0 + (var_a0 s>> 1)
        
        r8 = var_88
        *(rcx_12 + (rbx_6 << 1)) = rsi_3 + 0x12
        j_2 = j
    while (j s< 0x12)
    r8 += 1
    i += 0x12
    var_88 = r8

int32_t r9 = 0
int32_t i_1 = 0xea
var_88 = 0

do
    int32_t j_3 = 0
    int16_t r10_1 = i_1.w - 0x12
    int32_t j_1
    
    do
        int64_t rdi_2 = sx.q(var_98_1.d)
        j_1 = j_3 + 1
        int16_t rcx_14 = j_1.w - (zx.q(j_1 s/ 0x12) * 9).w * 2
        int16_t rsi_4 = r10_1 + rcx_14
        int32_t rdx_18 = j_3 s/ 0x12
        int16_t r14_2 = j_3.w + (zx.q((r9 - rdx_18 + 0xd) * 9) << 1).w
        int32_t rax_42 = (rdi_2 + 1).d
        var_98_1.d = rax_42
        
        if (rax_42 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rdi_2.d)
        
        void* rcx_16
        
        if ((var_a0.b & 1) == 0)
            rcx_16 = var_a0
        else
            rcx_16 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_16 + (rdi_2 << 1)) = (r9.w - rdx_18.w + 0xc) * 0x12 + j_3.w
        int64_t rbx_8 = sx.q(var_98_1.d)
        int32_t rax_45 = (rbx_8 + 1).d
        var_98_1.d = rax_45
        
        if (rax_45 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_8.d)
        
        void* rcx_18
        
        if ((var_a0.b & 1) == 0)
            rcx_18 = var_a0
        else
            rcx_18 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_18 + (rbx_8 << 1)) = r14_2
        int64_t rbx_9 = sx.q(var_98_1.d)
        int32_t rax_48 = (rbx_9 + 1).d
        var_98_1.d = rax_48
        
        if (rax_48 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_9.d)
        
        void* rcx_20
        
        if ((var_a0.b & 1) == 0)
            rcx_20 = var_a0
        else
            rcx_20 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_20 + (rbx_9 << 1)) = rsi_4
        int64_t rbx_10 = sx.q(var_98_1.d)
        int32_t rax_51 = (rbx_10 + 1).d
        var_98_1.d = rax_51
        
        if (rax_51 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_10.d)
        
        void* rcx_22
        
        if ((var_a0.b & 1) == 0)
            rcx_22 = var_a0
        else
            rcx_22 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_22 + (rbx_10 << 1)) = rsi_4
        int64_t rbx_11 = sx.q(var_98_1.d)
        int32_t rax_54 = (rbx_11 + 1).d
        var_98_1.d = rax_54
        
        if (rax_54 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_11.d)
        
        void* rcx_24
        
        if ((var_a0.b & 1) == 0)
            rcx_24 = var_a0
        else
            rcx_24 = &var_a0 + (var_a0 s>> 1)
        
        *(rcx_24 + (rbx_11 << 1)) = r14_2
        int64_t rbx_12 = sx.q(var_98_1.d)
        int32_t rax_57 = (rbx_12 + 1).d
        var_98_1.d = rax_57
        
        if (rax_57 s> var_98_1:4.d)
            sub_1407c36f0(&var_a0, rbx_12.d)
        
        void* rcx_26
        
        if ((var_a0.b & 1) == 0)
            rcx_26 = var_a0
        else
            rcx_26 = &var_a0 + (var_a0 s>> 1)
        
        r9 = var_88
        j_3 = j_1
        *(rcx_26 + (rbx_12 << 1)) = i_1.w + rcx_14
        r10_1 = i_1.w - 0x12
    while (j_1 s< 0x12)
    r9 += 1
    i_1 += 0x12
    var_88 = r9
while (i_1 s< 0x1b0)

int32_t rdx_25 = var_98_1.d
int64_t var_78 = 0
char var_50 = 0
int64_t var_48 = 0
*(arg1 + 0x18) = rdx_25
int64_t* rcx_28 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
void** const* var_70 = &var_a8
int32_t var_40 = 0
int32_t var_68 = 1
int128_t var_64 = data_143dbb1e0
(*(*rcx_28 + 0x4d8))(rcx_28, &var_88, &data_143f02b98, 2, rdx_25 * 2, 1, &var_78)
sub_1405d1600(arg1 + 0x10, &var_88)
sub_14081c9d0(&var_88)
int64_t result = sub_140a1d5c0(&var_a0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
