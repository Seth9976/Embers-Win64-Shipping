// 函数: sub_142888c70
// 地址: 0x142888c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rcx = arg2[1]

if (rcx != 0)
    char* rax_1 = *arg2
    uint64_t r8_1 = zx.q(*rax_1)
    *arg2 = &rax_1[1]
    arg2[1] = rcx - 1
    
    if (rcx - 1 u>= r8_1)
        arg2[1] = rcx - 1 - r8_1
        *arg2 = &rax_1[1 + r8_1]
        void* rdi = *(arg1 + 0xa8)
        uint64_t count = *(rdi + 0x388)
        int32_t var_10
        
        if (zx.q(r8_1.d) == count)
            if (memcmp(&rax_1[1], rdi + 0x348, count) == 0)
                *(rdi + 0x3d8) = 1
                return 1
            
            var_10 = 0x41
        else
            var_10 = 0x3a
        
        sub_142856580(arg1, 0x28, 0x1d0, 0x151, "ssl\statem\extensions_srvr.c", var_10)
        return 0

sub_142856580(arg1, 0x32, 0x1d0, 0x150, "ssl\statem\extensions_srvr.c", 0x33)
return 0
