// 函数: sub_140b29040
// 地址: 0x140b29040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a2e390(arg2, u"%u", zx.q(*arg1))

if (arg3 s< 1)
    return arg2

int64_t var_18
sub_140a2e390(&var_18, u".%u", zx.q(arg1[1]))
int32_t rdi = 0
int32_t var_10
int32_t r8_3

if (var_10 == 0)
    r8_3 = 0
else
    r8_3 = var_10 - 1

sub_140a20ba0(arg2, var_18, r8_3)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (arg3 s>= 2)
    sub_140a2e390(&var_18, u".%u", zx.q(arg1[2]))
    int32_t r8_6
    
    if (var_10 == 0)
        r8_6 = 0
    else
        r8_6 = var_10 - 1
    
    sub_140a20ba0(arg2, var_18, r8_6)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (arg3 s>= 3)
        sub_140a2e390(&var_18, u"-%u", zx.q(*(arg1 + 8)) & 0x7fffffff)
        int32_t r8_10
        
        if (var_10 == 0)
            r8_10 = 0
        else
            r8_10 = var_10 - 1
        
        sub_140a20ba0(arg2, var_18, r8_10)
        int64_t rcx_9 = var_18
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (arg3 s>= 4)
            int32_t rax_1 = *(arg1 + 0x18)
            
            if (rax_1 != 0 && rax_1 - 1 s> 0)
                sub_140a2e390(&var_18, u"+%s", *(arg1 + 0x10))
                
                if (var_10 != 0)
                    rdi = var_10 - 1
                
                sub_140a20ba0(arg2, var_18, rdi)
                int64_t rcx_12 = var_18
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)

return arg2
