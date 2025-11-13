// 函数: sub_142931f10
// 地址: 0x142931f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_18_1
int32_t r8_1

if (arg1 == 0 || arg2 == 0)
    var_18_1 = 0xa9
    r8_1 = 0x43
else if (sub_142898c70(*(arg1 + 8)) s>= 1)
    int32_t rax_2 = sub_142898c70(*(arg1 + 8))
    int64_t* rax_3 = sub_142898ea0(*(arg1 + 8), rax_2 - 1)
    
    if (rax_3 != 0)
        int64_t result = GetProcAddress(*rax_3, arg2)
        
        if (result != 0)
            return result
        
        sub_1428a5670((result + 0x25).d, (result + 0x65).d, (result + 0x6a).d, 
            "crypto\dso\dso_win32.c", 0xb7)
        sub_1428a4880(3)
        return 0
    
    var_18_1 = 0xb2
    r8_1 = (&rax_3[0xd]).d
else
    var_18_1 = 0xad
    r8_1 = 0x69

sub_1428a5670(0x25, 0x65, r8_1, "crypto\dso\dso_win32.c", var_18_1)
return 0
