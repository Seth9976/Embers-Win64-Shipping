// 函数: sub_140fbc5e0
// 地址: 0x140fbc5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
_vfprintf_p_l(&var_28, u"New Theme", u"ColorThemesViewer")
int64_t var_48 = 0
int64_t var_40 = 0
void var_38
sub_140fbc770(&var_38, sub_140ac6680(&var_28), &var_48)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* rcx_7 = *(arg1 + 0x390)
(*(*rcx_7 + 0x240))(rcx_7)
sub_140fc26e0()
sub_140fbbf00(arg1)
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
