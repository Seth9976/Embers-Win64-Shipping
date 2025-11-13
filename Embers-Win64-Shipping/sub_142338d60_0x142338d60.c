// 函数: sub_142338d60
// 地址: 0x142338d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rcx = (data_1439c7a34).b
void* rbp = *(**(arg1 + 0x48) + (sx.q(*(arg1 + 0x44)) << 3))
uint64_t rax_3 = zx.q(*(rbp + 0xec))
int128_t var_68 = zx.o(0)
int32_t var_58 = 1
char var_40 = 0
int32_t var_30 = 0
int32_t var_44 = (1 << rcx) - 1
wchar16 const* const var_38 = u"MorphVertexBuffer"
int128_t var_54 = data_143dbb1e0
char rax_6

if (data_143a2ff10 != 0)
    rax_6 = sub_1405fba70(data_143f0f1a0, 3)

int64_t rsi

if (data_143a2ff10 == 0 || rax_6 == 0)
    rsi.b = 0
else
    rsi.b = 1

*(arg1 + 0x40) = rsi.b
int64_t* rcx_2 = data_143f0f180
int32_t rax_7 = 0x202

if (rsi.b != 0)
    rax_7 = 0x209

int128_t* var_80 = &var_68
void var_78
(*(*rcx_2 + 0x498))(rcx_2, &var_78, &data_143f02b98, zx.q((rax_3 * 3).d << 3), rax_7, var_80)
sub_1405d1600(arg1 + 0x10, &var_78)
sub_1405d1550(&var_78)
int64_t rbx_2 = sx.q(data_143f0f1a0)

if (sub_1405fba70(rbx_2.d, 3) != 0)
label_142338ed9:
    
    if (sub_142060c40(rbx_2.d) != 0 && data_143a2e1b8 != 0)
        int64_t* rcx_11 = data_143f0f180
        var_80.b = 0xd
        (*(*rcx_11 + 0x4b8))(rcx_11, &var_78, &data_143f02b98, *(arg1 + 0x10), 4, var_80)
        sub_1405d1600(arg1 + 0x30, &var_78)
        sub_1405ec8a0(&var_78)
else
    int64_t rcx_8
    
    if (rbx_2.d u> 0x30)
    label_142338ead:
        rcx_8 = rbx_2
        
        if (*(rbx_2 * 0x14 + 0x143f025f8) == 1)
            goto label_142338ebd
    else
        switch (rbx_2)
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                goto label_142338ead
            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                rcx_8 = rbx_2
            label_142338ebd:
                
                if ((rbx_2 - 0x19).d u> 1 && *(rcx_8 * 0x14 + &data_143f025f0) != data_143f025d0)
                    goto label_142338ed9

int64_t* rcx_14 = data_143f0f180
int64_t result

if (rsi.b != 0)
    int32_t var_88
    var_88.b = 0x1c
    (*(*rcx_14 + 0x590))(rcx_14, &var_78, &data_143f02b98, *(arg1 + 0x10), var_88, var_80)
    sub_1405d1600(arg1 + 0x38, &var_78)
    result = sub_1405d1550(&var_78)
    *(arg1 + 0x18) = 0x100
else
    var_80.d = 1
    memset(
        (*(*rcx_14 + 0x130))(rcx_14, &data_143f02b98, *(arg1 + 0x10), 0, *(rbp + 0xec) * 0x18, 
            var_80), 
        0, zx.q(*(rbp + 0xec)) * 0x18)
    int64_t* rcx_17 = data_143f0f180
    result = (*(*rcx_17 + 0x138))(rcx_17, &data_143f02b98, *(arg1 + 0x10))
    *(arg1 + 0x18) = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
