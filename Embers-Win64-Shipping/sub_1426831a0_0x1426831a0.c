// 函数: sub_1426831a0
// 地址: 0x1426831a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80
__builtin_memset(&var_80, 0, 0x40)
void** const arg_8 = &data_143459ba8
void** const* var_88 = &arg_8
int32_t rax = *(arg1 + 0x2c8)
int128_t var_58

if (rax s> 0)
    sub_1408cf3a0(&var_58:8, rax)
    rax = *(arg1 + 0x2c8)

void** const arg_18 = &data_143459b90
uint64_t r14
r14.b = 1
int32_t i = 0

if (rax s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rax_1 = *(arg1 + 0xb8)
        void* r8_1 = arg1 + 0xa8
        
        if (rax_1 != 0)
            r8_1 = rax_1
        
        int32_t i_1 = i
        
        if (i s< 0)
            i_1 = i + 0x1f
        
        if (test_bit(*(r8_1 + (sx.q(i_1 s>> 5) << 2)), i & 0x1f))
            int64_t rcx_3 = *(arg1 + 0x2c0)
            int64_t* rax_4 = *(rcx_3 + rsi_1 + 0x28)
            
            if (rax_4 != 0 && *rax_4 != 0 && *(rcx_3 + rsi_1 + 0x20) s> 0)
                char rax_5 = sub_142683400(arg1, arg2, &arg_18, &arg_8, &var_88, i)
                r14 = zx.q(rax_5)
                
                if (rax_5 == 0)
                    goto label_1426832de
        
        i += 1
        rsi_1 += 0x38
    while (i s< *(arg1 + 0x2c8))

if (rax s<= 0 || r14.b != 0)
    sub_142671d90(arg1 + 0x2d0, &var_58:8)

label_1426832de:
void** const* rcx_6 = var_88

if (rcx_6 != 0)
    sub_141027da0(rcx_6, var_80)
    int64_t var_80_1 = 0
    int128_t var_78
    sub_142627a60(var_88, var_78.q)
    int32_t* rdx_6 = var_78:8.q
    var_78.q = 0
    sub_1426279e0(var_88, rdx_6)
    var_78:8.q = 0
    int128_t var_68
    sub_142627990(var_88, var_68.q)
    void* rdx_8 = var_68:8.q
    var_68.q = 0
    sub_142627aa0(var_88, rdx_8)
    var_68:8.q = 0
    sub_142627b10(var_88, var_58.q)
    void** const* rcx_12 = var_88
    var_58.q = 0
    
    if (rcx_12 != 0)
        sub_141027da0(rcx_12, var_80_1)
        int64_t var_80_2 = 0
        sub_142627a60(var_88, var_78.q)
        int32_t* rdx_12 = var_78:8.q
        var_78.q = 0
        sub_1426279e0(var_88, rdx_12)
        var_78:8.q = 0
        sub_142627990(var_88, var_68.q)
        void* rdx_14 = var_68:8.q
        var_68.q = 0
        sub_142627aa0(var_88, rdx_14)
        var_68:8.q = 0
        sub_142627b10(var_88, var_58.q)
        var_58.q = 0

sub_142671860(&var_58:8)
return zx.q(r14.b)
