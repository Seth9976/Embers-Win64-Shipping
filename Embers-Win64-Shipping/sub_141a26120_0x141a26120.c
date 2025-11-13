// 函数: sub_141a26120
// 地址: 0x141a26120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1
int16_t* const r8
int32_t r9_1
int32_t r10_1

if (*arg1 s< 0)
label_141a26164:
    rax_1 = arg1[3]
    r8 = &data_142e74850
    r10_1 = arg1[2]
    r9_1 = arg1[1]
else
    r9_1 = arg1[1]
    
    if (r9_1 s< 0)
        goto label_141a26164
    
    r10_1 = arg1[2]
    
    if (r10_1 s< 0)
        goto label_141a26164
    
    rax_1 = arg1[3]
    
    if (rax_1 s< 0)
        goto label_141a26164
    
    r8 = &data_142d40450
    
    if (arg3 != 0)
        r8 = &data_142e74858

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r10_1)
int32_t var_18 = (temp1 ^ temp0) - temp0
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r9_1)
int32_t var_20 = (temp3 ^ temp2) - temp2
*arg1
int32_t var_28 = (temp5 ^ temp4) - temp4
wchar16* rdx_4 = u"%s%02d;%02d;%02d;%02d"

if (arg1[4].b == 0)
    rdx_4 = u"%s%02d:%02d:%02d:%02d"

sub_140a2e390(arg2, rdx_4, r8)
return arg2
