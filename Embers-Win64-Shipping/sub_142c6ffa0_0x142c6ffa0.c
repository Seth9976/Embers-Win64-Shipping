// 函数: sub_142c6ffa0
// 地址: 0x142c6ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t result
    result.b = 0
    return result

uint64_t rbx
rbx.b = 0
int64_t rax = sub_142c52e00(*(arg1 + 0xc0))
int64_t rax_1 = sub_142c52d30(*(arg1 + 0xc0))
int64_t* rcx_2 = *(arg2 + 0x4d8)
int64_t rdx = -2

if (rcx_2 != 0)
    rdx = *(*rcx_2 + 0xd8)
    
    if (rax s> 0)
        rbx = 0
        
        if (rdx s> rax)
            rbx = 1

if (rax_1 s> 0)
    rbx = zx.q(rbx.b)
    
    if (*(arg2 + 0x40) s> rax_1)
        rbx = 1

char const* const rcx_4 = "FALSE"

if (rbx.b != 0)
    rcx_4 = "TRUE"

char const* const var_18 = rcx_4
int64_t var_20 = *(arg2 + 0x40)
int64_t var_28 = rdx
sub_142c64850(arg1, "Conn: %ld (%p) Receive pipe weight: (%I64d/%zu), penalized: %s\n", 
    zx.q(*(arg2 + 0x64)), arg3)
return zx.q(rbx.b)
