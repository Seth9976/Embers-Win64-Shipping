// 函数: sub_142857d90
// 地址: 0x142857d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rcx = *arg1

if (rcx != 0x100 && rcx - 0x300 u> 4 && rcx != 0xfefd && rcx != 0xfeff)
    sub_142856580(arg1, 0x50, 0x223, 0x103, "ssl\ssl_sess.c", 0x146)
    return 0

*(arg2 + 0x90) = 0x20

if (arg1[0x19c] != 0)
    *(arg2 + 0x90) = 0
    return 1

sub_1428a5c40(*(arg1 + 0x1708))
sub_1428a5c40(*(*(arg1 + 0x738) + 0x378))
int64_t (* rsi)(int32_t* arg1, int64_t arg2, int32_t* arg3) = *(arg1 + 0x528)
void* rcx_5 = *(arg1 + 0x738)

if (rsi == 0)
    int64_t (* rax_4)(int32_t* arg1, int64_t arg2, int32_t* arg3) = *(rcx_5 + 0x188)
    rsi = sub_142857a50
    
    if (rax_4 != 0)
        rsi = rax_4

sub_1428a5d00(*(rcx_5 + 0x378))
sub_1428a5d00(*(arg1 + 0x1708))
memset(arg2 + 0x98, 0, *(arg2 + 0x90))
int32_t arg_8 = *(arg2 + 0x90)
int32_t var_10
int32_t r9

if (rsi(arg1, arg2 + 0x98, &arg_8) != 0)
    uint64_t rax_7 = zx.q(arg_8)
    
    if (rax_7.d == 0 || rax_7 u> *(arg2 + 0x90))
        var_10 = 0x177
        r9 = 0x12f
    else
        *(arg2 + 0x90) = rax_7
        
        if (sub_14284fd10(arg1, arg2 + 0x98, rax_7.d) == 0)
            return 1
        
        var_10 = 0x17f
        r9 = 0x12e
else
    var_10 = 0x16d
    r9 = 0x12d

sub_142856580(arg1, 0x50, 0x223, r9, "ssl\ssl_sess.c", var_10)
return 0
