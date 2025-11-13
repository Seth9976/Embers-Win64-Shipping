// 函数: sub_142872060
// 地址: 0x142872060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* r8 = *(arg1 + 0x488)
int32_t arg_8 = 0
int64_t rdx = *(r8 + 0x188)

if (rdx != 0)
    return sub_142873970(arg2, rdx, *(r8 + 0x190))

sub_142863be0(&arg_8, arg1, 0x5000e)
char rax_2 = (*(*(*(arg1 + 0xa8) + 0x238) + 0x1c)).b
int32_t rcx_3 = *arg1
int32_t rbx

if (rcx_3 s< 0x301 || (rax_2 & 0x10) == 0)
    rbx = 1
    
    if (rcx_3 == 0x300 && (rax_2 & 2) != 0)
        if (sub_142873b60(arg2, 5, 1) == 0)
            return 0
        
        if (sub_142873b60(arg2, 6, 1) == 0)
            return 0
    
    char rax_10 = arg_8.b
    
    if ((1 & rax_10) == 0)
        if (sub_142873b60(arg2, 1, 1) == 0)
            return 0
        
        rax_10 = arg_8.b
    
    if ((rax_10 & 2) == 0)
        if (sub_142873b60(arg2, 2, 1) == 0)
            return 0
        
        rax_10 = arg_8.b
    
    if (*arg1 s>= 0x301 && (rax_10 & 8) == 0 && sub_142873b60(arg2, 0x40, 1) == 0)
        return 0
else
    rbx = 1
    
    if (sub_142873b60(arg2, 0x16, 1) == 0)
        rbx = 0
    else if (sub_142873b60(arg2, 0xee, 1) == 0)
        rbx = 0
    else if (sub_142873b60(arg2, 0xef, 1) == 0)
        rbx = 0

return zx.q(rbx)
