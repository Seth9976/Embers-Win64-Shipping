// 函数: sub_142919d30
// 地址: 0x142919d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rax = *arg1
int64_t rbx = *(rax + 0xa8)
int32_t var_18_1
int32_t r8

if (rbx != 0 || (*rax & 1) != 0)
    if (rax == *arg2)
        int32_t r8_1 = arg1[4].d
        int32_t r9
        
        if (r8_1 != 0)
            r9 = arg2[1].d
        
        if (r8_1 == 0 || r9 == 0 || r8_1 == r9)
            if ((*rax & 1) == 0)
                jump(rbx)
            
            int32_t var_18
            var_18.q = arg5
            
            if (*(rax + 4) != 0x196)
                return sub_142954ce0(arg1, arg2, arg3, arg4, var_18)
            
            return sub_1429543d0(arg1, arg2, arg3, arg4, var_18)
    
    var_18_1 = 0x6e
    r8 = 0x65
else
    var_18_1 = 0x6a
    r8 = (rbx + 0x42).d

sub_1428a5670(0x10, 0x7a, r8, "crypto\ec\ec_oct.c", var_18_1)
return 0
