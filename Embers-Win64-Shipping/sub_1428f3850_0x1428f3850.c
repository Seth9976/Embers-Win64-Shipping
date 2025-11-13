// 函数: sub_1428f3850
// 地址: 0x1428f3850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rbx = arg2
int32_t var_18_1
int32_t r8_1

if (arg1 != 0)
    if (arg2 == 0)
        rbx = arg1[6]
    
    if (arg2 != 0 || rbx != 0)
        int64_t result
        
        if ((*(arg1 + 0x14) & 1) == 0)
            int64_t rax_1 = arg1[4]
            
            if (rax_1 == 0)
                int64_t r8_2 = *(*arg1 + 0x28)
                
                if (r8_2 != 0)
                    result = r8_2(arg1, rbx)
                    goto label_1428f38b9
            else
                result = rax_1(arg1, rbx)
            label_1428f38b9:
                
                if (result != 0)
                    return result
        
        result = sub_1428a6ba0(rbx)
        
        if (result != 0)
            return result
        
        var_18_1 = 0x12f
        r8_1 = (result + 0x41).d
    else
        var_18_1 = 0x123
        r8_1 = (&arg2[0x6f]).d
else
    var_18_1 = 0x11d
    r8_1 = 0x43

sub_1428a5670(0x25, 0x7e, r8_1, "crypto\dso\dso_lib.c", var_18_1)
return 0
