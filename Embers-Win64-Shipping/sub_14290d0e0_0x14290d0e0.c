// 函数: sub_14290d0e0
// 地址: 0x14290d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void* rax = *(arg2 + 0x28)
int64_t arg_10 = 0

if (rax != 0)
    int64_t r8_1 = *(rax + 0x40)
    
    if (r8_1 != 0)
        int64_t var_20 = r8_1
        int32_t rcx = **(arg2 + 0x10)
        int32_t var_28
        
        if (rcx == 0x40a || rcx == 0x43f)
            var_28 = 0x20
        else
            int32_t rax_2
            rax_2.b = rcx != 0x40b
            var_28 = rax_2 + 0x38
        
        int32_t var_18 = 0
        int32_t rax_4 = sub_1428c3770(&var_28, &arg_10)
        int64_t rdi = sx.q(rax_4)
        int32_t var_48
        
        if (rax_4 s>= 0)
            if (sub_1428f10c0(arg1, sub_1428a9570(**(arg2 + 0x10)), 0, 0xffffffff, 0, arg_10, rdi.d)
                    != 0)
                return 1
            
            sub_1428a6890(arg_10, rdi, "crypto\ec\ecx_meth.c", 0xdd)
            var_48 = 0xde
        else
            var_48 = 0xd7
        
        sub_1428a5670(0x10, 0x10b, 0x41, "crypto\ec\ecx_meth.c", var_48)
        return 0

sub_1428a5670(0x10, 0x10b, 0x7b, "crypto\ec\ecx_meth.c", 0xcd)
return 0
