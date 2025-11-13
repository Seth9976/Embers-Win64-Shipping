// 函数: sub_14282c6d4
// 地址: 0x14282c6d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_18 = rsi
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rdi = 0
int32_t var_148 = 0
int64_t var_48 = 0
int64_t var_40 = 0xf
char var_58 = 0
int128_t var_f0
__builtin_memset(&var_f0, 0, 0x18)
sub_142827af4(arg1)
sub_14282b3cc(arg1)
*(arg1 + 0x82) = 0
int64_t var_b8 = 0
int64_t var_b0 = arg1[1]
int32_t var_a8 = arg1[2].d
int64_t var_90 = 0
int64_t var_88 = 0xf
char var_a0 = 0
int64_t* var_80
__builtin_memset(&var_80, 0, 0x1c)
sub_14282af24(arg1, 1)
int64_t var_158

while (sub_14282a90c(arg1) != 0)
    sub_14281fbb0()
    var_158 = 0
    int64_t* var_150_1 = arg1
    
    if (sub_14282694c(&data_143f895b0, &var_158) s>= 0)
        break
    
    char rax_4
    int64_t r8_1
    rax_4, r8_1 = sub_14282aff8(arg1)
    int64_t rdx_2 = var_90
    
    if (rdx_2 u>= var_88)
        r8_1.b = 0
        sub_14058b730(&var_a0, 1, r8_1, rax_4)
    else
        var_90 = rdx_2 + 1
        char* rcx_4 = &var_a0
        
        if (var_88 u>= 0x10)
            rcx_4 = var_a0.q
        
        rcx_4[rdx_2] = rax_4
        rcx_4[rdx_2 + 1] = 0

int128_t* var_78_1
int64_t var_70

while (true)
    sub_14281fb28()
    var_158 = 0
    int64_t* var_150_2 = arg1
    
    if (sub_14282694c(&data_143f89560, &var_158) s>= 0)
        sub_14282af24(arg1, 1)
    else
        if (sub_14282a90c(arg1) == 0)
            rsi.b = 1
        else
            sub_14281fc38()
            int64_t var_140 = 0
            int64_t* var_138_1 = arg1
            
            if (sub_14282694c(&data_143f89588, &var_140) s>= 0)
                rsi.b = 1
            else
                void var_110
                int32_t* rax_9 = sub_14281fdb8(&var_110)
                rdi |= 1
                int32_t var_148_1 = rdi
                int64_t var_130 = 0
                int64_t* var_128_1 = arg1
                rsi.b = 0
                
                if (sub_14282694c(rax_9, &var_130) s>= 0)
                    rsi.b = 1
        
        if ((1 & rdi.b) != 0)
            rdi &= 0xfffffffe
            void* var_108
            
            if (var_108 != 0)
                int64_t var_100
                sub_14281f774(var_108, var_100)
                int64_t var_f8
                sub_14058ba50(var_108, (var_f8 - var_108) & 0xffffffffffffffe0)
        
        if (rsi.b != 0)
            break
        
        int64_t var_c8_1 = 0
        int64_t var_c0_1 = 0xf
        char var_d8 = 0
        
        while (sub_14282a90c(arg1) != 0)
            sub_14281fbb0()
            int64_t var_120 = 0
            int64_t* var_118_1 = arg1
            
            if (sub_14282694c(&data_143f895b0, &var_120) s>= 0)
                break
            
            char rax_12
            int64_t r8_2
            rax_12, r8_2 = sub_14282aff8(arg1)
            int64_t rdx_11 = var_c8_1
            
            if (rdx_11 u>= var_c0_1)
                r8_2.b = 0
                sub_14058b730(&var_d8, 1, r8_2, rax_12)
            else
                var_c8_1 = rdx_11 + 1
                char* rcx_14 = &var_d8
                
                if (var_c0_1 u>= 0x10)
                    rcx_14 = var_d8.q
                
                rcx_14[rdx_11] = rax_12
                rcx_14[rdx_11 + 1] = 0
        
        if (var_78_1 == var_70)
            sub_140909240(&var_80, var_78_1, &var_d8)
        else
            var_78_1[1].q = 0
            *(var_78_1 + 0x18) = 0
            sub_140593830(var_78_1, &var_d8)
            var_78_1 = &var_78_1[2]
        
        if (var_c0_1 u>= 0x10)
            sub_14058ba50(var_d8.q, var_c0_1 + 1)

int64_t result = sub_14282b618(&arg1[0xb], &var_b8)
int64_t* rcx_21 = var_80

if (rcx_21 != 0)
    sub_140688f70(rcx_21, var_78_1)
    int64_t* rcx_22 = var_80
    result = sub_14058ba50(rcx_22, (var_70 - rcx_22) & 0xffffffffffffffe0)
    __builtin_memset(&var_80, 0, 0x18)

if (var_88 u>= 0x10)
    result = sub_14058ba50(var_a0.q, var_88 + 1)

__security_check_cookie(rax_1 ^ &var_178)
return result
