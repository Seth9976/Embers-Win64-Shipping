// 函数: sub_142411900
// 地址: 0x142411900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
int16_t* rdx = *(arg1 + 0x10)
int64_t r9 = sx.q(*(arg1 + 0x18))
int16_t* r8 = rdx
void* rcx = &rdx[r9]
int64_t rsi
rsi.b = *(arg1 + 0x20) != data_143f5bcb0
int64_t var_18
int32_t var_10

if (rdx == rcx)
label_14241195b:
    int32_t r8_1 = (r9 - 1).d
    
    if (r9.d == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, rdx, r8_1)
else
    while (*r8 != 0x3a)
        r8 = &r8[1]
        
        if (r8 == rcx)
            goto label_14241195b
    
    int32_t r8_5 = ((r8 - rdx) s>> 1).d
    
    if (r8_5 == 0xffffffff || rcx == rdx)
        goto label_14241195b
    
    while (true)
        rcx -= 2
        
        if (*rcx == 0x3a)
            break
        
        if (rcx == rdx)
            goto label_14241195b
    
    int32_t rcx_7 = ((rcx - rdx) s>> 1).d
    
    if (rcx_7 == 0xffffffff || r8_5 == rcx_7 || rsi.b == 0)
        goto label_14241195b
    
    int16_t* r8_6 = &data_142d40450
    
    if (r9.d != 0)
        r8_6 = rdx
    
    sub_140a2e390(&var_18, u"[%s]", r8_6)
    int32_t r8_8
    
    if (var_10 == 0)
        r8_8 = 0
    else
        r8_8 = var_10 - 1
    
    sub_140a20ba0(arg2, var_18, r8_8)
    int64_t rcx_10 = var_18
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if (rsi.b != 0)
    sub_140a20ba0(arg2, &data_142d84ee0, 1)
    sub_140a2e390(&var_18, u"%i", zx.q(*(arg1 + 0x20)))
    
    if (var_10 != 0)
        rdi = var_10 - 1
    
    sub_140a20ba0(arg2, var_18, rdi)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
