// 函数: sub_142850b10
// 地址: 0x142850b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t var_48
int32_t r8

if (*(arg1 + 0x30) != 0)
    if (sub_142856410(arg1) == 0)
        if ((*(arg1 + 0x5c8) & 0x100) != 0 && sub_1428ac8c0() == 0)
            void* rax_3 = *(arg1 + 8)
            void* var_38 = arg1
            int32_t var_20 = 2
            int64_t var_18 = *(rax_3 + 0x50)
            return sub_142852530(arg1, &var_38, sub_142851f30)
        
        jump(*(*(arg1 + 8) + 0x50))
    
    var_48 = 0x818
    r8 = 0x197
else
    var_48 = 0x807
    r8 = 0x114

sub_1428a5670(0x14, 0xe0, r8, "ssl\ssl_lib.c", var_48)
return 0xffffffff
