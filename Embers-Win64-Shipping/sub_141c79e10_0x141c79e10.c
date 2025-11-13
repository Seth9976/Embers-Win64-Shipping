// 函数: sub_141c79e10
// 地址: 0x141c79e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = zx.q(zx.d(*(arg3 + 0x38)) << 8) | zx.q(*(arg3 + 0x39))
uint32_t r9_3 = (zx.d(*(arg3 + 0x36)) | zx.d(*(arg3 + 0x35)) << 8) << 8 | zx.d(*(arg3 + 0x37))
int64_t rcx_5 =
    ((zx.q(*(arg3 + 0x32)) << 8 | zx.q(*(arg3 + 0x33))) << 8 | zx.q(*(arg3 + 0x34))) + arg2

if (r9_3 == 0)
    uint64_t result
    result.b = 0
    return result

uint16_t rbx = 0
int32_t var_58 = 0
int64_t var_50
__builtin_memset(&var_50, 0, 0x11)
int64_t var_30 = rcx_5
int64_t var_28 = rcx_5
void* var_38 = nullptr
uint32_t var_18 = r9_3
int64_t var_20 = zx.q(r9_3) + rcx_5
int64_t var_14 = 0
char rax_7 = sub_141c7af20(&var_30, &var_58)
char rax_8

if (rax_7 != 0)
    rax_8 = sub_141c7bfa0(&arg1[0x21], i_1.d)

int64_t* rdi

if (rax_7 == 0 || rax_8 == 0)
    rdi.b = 0
else
    rdi = arg1[0x21]
    uint16_t rsi_1 = 0
    
    if (i_1.d != 0)
        uint64_t i
        
        do
            rbx = zx.w(sub_141c79cd0(&var_30, &var_58) + rbx.b)
            rsi_1 = zx.w(sub_141c79cd0(&var_30, &var_58) + rsi_1.b)
            *rdi = rsi_1 << 8 | rbx
            rdi += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rdi.b = 1

if (var_38 != 0)
    int64_t rcx_10 = *(var_38 + 0xa8)
    
    if (rcx_10 != 0)
        sub_141c799d0(rcx_10 - 8)
    
    int64_t rcx_12 = *(var_38 + 0xb8)
    
    if (rcx_12 != 0)
        sub_141c799d0(rcx_12 - 8)
    
    sub_141c799d0(var_38)

int64_t rcx_15 = var_50

if (rcx_15 != 0)
    sub_141c799d0(rcx_15)

return zx.q(rdi.b)
