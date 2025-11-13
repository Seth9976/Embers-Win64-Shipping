// 函数: sub_142ae2da0
// 地址: 0x142ae2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1188) = 0
*(arg1 + 0x1190) = 0
sub_142ae01b0(arg1, arg3)
sub_142ae02a0(arg1, arg2, arg3)
sub_142adfdf0(arg1, arg2, arg3)
sub_142ae4140(arg1, arg2, arg3)
sub_142ae4390(arg1, arg2, arg3)

if (*arg3 s<= 0)
    char rax_2
    
    if (data_144016840 != 2)
        rax_2 = sub_142a85f00(&data_144016840)
    
    if (data_144016840 == 2 || rax_2 == 0)
        int32_t rax_4 = data_144016844
        
        if (rax_4 s> 0)
            *arg3 = rax_4
    else
        sub_142ae2f70(arg3)
        data_144016844 = *arg3
        sub_142a85e80(&data_144016840)

sub_142ae10c0(arg1, arg2, arg3)
int32_t result = *arg3
*(arg1 + 0x11f8) = result
return result
