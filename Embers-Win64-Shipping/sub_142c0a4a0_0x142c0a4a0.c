// 函数: sub_142c0a4a0
// 地址: 0x142c0a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
uint64_t rsi = zx.q(arg2)
__builtin_memcpy(arg3, 
    "\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\x00\x00\x00\x00\xe0\xc1\x"
"00\x00\x00\x00\x00\x00\xe0\xc1", 
    0x20)

if (*arg1 == 0 || rsi.d u>= arg1[0x23].d)
    uint64_t result
    result.b = 0
    return result

char* rcx = arg1[0xf]
uint32_t rdi_1

if (rcx == &data_14369a5d0)
    rdi_1 = 0
else if (*rcx != 0)
    rdi_1 = sub_142c0b3b0(&rcx[1], rsi.d)
else
    rdi_1 = zx.d(rcx[rsi + 1])

int64_t var_140_1 = 0
int32_t var_138_1 = 0
int32_t var_130_1 = 0
char var_12c_1 = 0
int64_t var_120_1 = 0
int128_t* var_118_1 = nullptr
int64_t var_100_1 = 0
int32_t var_f8_1 = 0
int32_t var_f0_1 = 0
char var_ec_1 = 0
int64_t var_c8_1 = 0
int64_t var_c0_1 = 0
char var_68
sub_142bfcb90(arg1[0xd], &var_68, rsi.d)
int128_t* const r9_1

if (rdi_1 u< arg1[0x21].d)
    r9_1 = arg1[0x22] + zx.q(rdi_1) * 0x28
else
    r9_1 = &data_14369a5d0

void var_148
sub_142c0c560(&var_148, &var_68, arg1[0xc], r9_1[2].q)
char var_88_1 = 0
int32_t var_84_1 = 0
char r9
char var_78_1 = r9
var_68 = 0
int64_t* var_40_1 = arg1
uint128_t var_60
__builtin_memcpy(&var_60, 
    "\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\xc0\xff\xff\xff\xdf\x41\x00\x00\x00\x00\x00\x00\xe0\xc1\x"
"00\x00\x00\x00\x00\x00\xe0\xc1", 
    0x20)
char r11_1 = 0
char var_e0_1 = 0
char rbx_1 = 1
int32_t var_124
int32_t r9_3 = var_124
char rdx_4 = var_12c_1
int32_t rcx_5 = var_130_1
int32_t r8_2 = var_138_1

while (true)
    char var_128
    uint32_t rax_7
    
    if (rdx_4 != 0 || rcx_5 + 1 u> r8_2)
    label_142c0a748:
        rax_7 = 0xffff
    label_142c0a758:
        sub_142c0c980(rax_7, &var_148, &var_68)
        r11_1 = var_e0_1
        r9_3 = var_124
        rdx_4 = var_12c_1
        rcx_5 = var_130_1
        r8_2 = var_138_1
    else
        int128_t* const rax_2
        
        if (rcx_5 u< r8_2)
            rax_2 = zx.q(rcx_5) + var_140_1
        else
            rdx_4 = 1
            var_12c_1 = 1
            rax_2 = &data_14369a5d0
        
        rax_7 = zx.d(*rax_2)
        
        if (rax_7 == 0xc)
            if (rdx_4 != 0)
                goto label_142c0a748
            
            int128_t* const rax_4
            
            if (rcx_5 + 1 u< r8_2)
                rax_4 = zx.q(rcx_5 + 1) + var_140_1
            else
                rdx_4 = 1
                var_12c_1 = 1
                rax_4 = &data_14369a5d0
            
            rax_7 = zx.d(*rax_4) + 0x100
            
            if (rdx_4 != 0 || rcx_5 u> r8_2)
                goto label_142c0a68c
            
            rcx_5 += 1
            
            if (rcx_5 u> r8_2)
                goto label_142c0a68c
            
            goto label_142c0a685
        
        if (rdx_4 != 0 || rcx_5 u> r8_2)
        label_142c0a68c:
            rcx_5 = r8_2
            rdx_4 = 1
            var_12c_1 = 1
        else
        label_142c0a685:
            rcx_5 += 1
            
            if (rcx_5 u> r8_2)
                goto label_142c0a68c
        
        var_130_1 = rcx_5
        
        if (rax_7 == 0xe)
            if (var_88_1 == 0)
                if (r9_3 != 0 && (var_124.b & 1) != 0)
                    char rax_9 = var_128
                    
                    if (r9_3 == 0)
                        rax_9 = 1
                    
                    var_128 = rax_9
                    int128_t* rax_10
                    
                    if (var_120_1.d u> 0)
                        rax_10 = var_118_1
                    else
                        data_144017550.q = 0
                        rax_10 = &data_144017550
                    
                    uint64_t var_80_1 = *rax_10
                    var_88_1 = 1
                    int32_t var_84_3 = 1
                
                var_88_1 = 1
            
            if (r9_3 u>= 4)
                sub_142c0ce50(&var_148, &var_68)
                rdx_4 = var_12c_1
                rcx_5 = var_130_1
                r8_2 = var_138_1
            
            int32_t var_84_4 = 0
            r9_3 = 0
            var_124 = 0
            r11_1 = 1
            var_e0_1 = 1
        else
            if (rax_7 != 0x100)
                goto label_142c0a758
            
            int32_t var_84_2 = 0
            r9_3 = 0
            var_124 = 0
    char var_110
    char var_d0
    
    if (var_d0 != 0 || var_c8_1:4.d s< 0 || var_110 != 0 || rdx_4 != 0 || var_128 != rdx_4
            || var_120_1:4.d s< 0)
        rbx_1 = 0
        break
    
    if (r11_1 == 0)
        continue
    
    *arg3 = var_60
    int128_t var_50
    arg3[1] = var_50
    break

if (var_118_1 != 0)
    j_sub_140a74f90(var_118_1)

if (var_c0_1 != 0)
    j_sub_140a74f90(var_c0_1)

return zx.q(rbx_1)
