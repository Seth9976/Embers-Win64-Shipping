// 函数: sub_14290b6c0
// 地址: 0x14290b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int128_t* rax = *(arg2 + 0x28)
int128_t var_68 = *rax
int128_t var_58 = rax[1]
int128_t var_48 = rax[2]
int128_t var_38 = rax[3]
int128_t var_28 = rax[4]
void* rax_1 = sub_142891590(&var_68)
int32_t var_88_1
int32_t r8_1

if (rax_1 == 0)
    var_88_1 = 0x1f
    r8_1 = 0x7c
label_14290b909:
    sub_1428a5670(0x10, 0xdf, r8_1, "crypto\ec\ec_ameth.c", var_88_1)
    sub_1428a5670(0x10, 0xd6, 0x8e, "crypto\ec\ec_ameth.c", 0xe3)
    return 0

int32_t rax_2 = sub_14289a070(rax_1)
int32_t rax_3

if (rax_2 != 0)
    rax_3 = sub_140611e80(rax_1)

void* rbx_1
int32_t rsi

if (rax_2 == 0 || rax_3 == 0)
    void* rax_5 = sub_1428f2cf0()
    rbx_1 = rax_5
    
    if (rax_5 == 0)
        sub_1428a5670(0x10, 0xd6, 0x8e, "crypto\ec\ec_ameth.c", 0xe3)
        return 0
    
    int32_t rax_6 = sub_1428f00d0(&var_68, rax_5 + 8)
    *rbx_1 = rax_6
    
    if (rax_6 s<= 0)
        sub_1428f2c80(rbx_1)
        var_88_1 = 0x31
        r8_1 = 0x10
        goto label_14290b909
    
    rsi = 0x10
else
    rbx_1 = sub_1428a9570(rax_3)
    rsi = 6

sub_1428c1020(&var_68, sub_1406bc550(&var_68) | 1)
int32_t rax_9 = sub_1428f01d0(&var_68, nullptr)
int64_t rbp = sx.q(rax_9)

if (rax_9 == 0)
    sub_1428a5670(0x10, 0xd6, 0x10, "crypto\ec\ec_ameth.c", 0xf2)
    return 0

int64_t rax_11 = sub_1428a6730(rbp)

if (rax_11 != 0)
    int64_t arg_10 = rax_11
    
    if (sub_1428f01d0(&var_68, &arg_10) != 0)
        int32_t var_88
        var_88.q = rbx_1
        
        if (sub_1428f10c0(arg1, sub_1428a9570(0x198), 0, rsi, var_88, rax_11, rbp.d) != 0)
            return 1
        
        sub_1428a6780(rax_11)
    else
        sub_1428a6780(rax_11)
        sub_1428a5670(0x10, 0xd6, 0x10, "crypto\ec\ec_ameth.c", 0xfd)
else
    sub_1428a5670((rax_11 + 0x10).d, 0xd6, (rax_11 + 0x41).d, "crypto\ec\ec_ameth.c", 0xf7)

return 0
