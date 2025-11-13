// 函数: sub_142ad76a0
// 地址: 0x142ad76a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &icu_64::SimpleDateFormat::`vftable'{for `icu_64::DateFormat'}
struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rbx = arg1[0x60]

if (rbx != 0)
    sub_142b57bd0(rbx)
    sub_142a47920(rbx)

int64_t rsi = arg1[0x64]

if (rsi != 0)
    for (int64_t i = 0; i s< 0x26; i += 1)
        int64_t* rcx_2 = *(rsi + (i << 3))
        
        if (rcx_2 != 0)
            sub_142aa6d70(rcx_2)
            *(rsi + (i << 3)) = 0
    
    sub_142a7dcd0(rsi)

int64_t* rcx_4 = arg1[0x61]

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

sub_142ad91e0(arg1)
int64_t* rcx_6 = arg1[0x6b]

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

sub_142a45a20(&arg1[0x44])
sub_142a47ff0(&arg1[0x3c])
sub_142a47ff0(&arg1[0x34])
sub_142a47ff0(&arg1[0x2c])
return sub_142a6cce0(arg1) __tailcall
