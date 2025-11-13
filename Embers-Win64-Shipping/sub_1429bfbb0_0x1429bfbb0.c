// 函数: sub_1429bfbb0
// 地址: 0x1429bfbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *arg4
int64_t rdx = sx.q(*arg1)
int64_t r10 = sx.q(*arg2)
int32_t zmm1 = *(r11 + (rdx << 2))
int32_t result = *(r11 + (r10 << 2))

if (zmm1 f> result)
label_1429bfc07:
    *arg2 = rdx.d
    *arg1 = r10.d
    r10 = zx.q(*arg2)
    r11 = *arg4
else if (not(result f> zmm1))
    int64_t rax_1 = arg4[1]
    result = *(rax_1 + (r10 << 2))
    zmm1 = *(rax_1 + (rdx << 2))
    
    if (zmm1 f> result)
        goto label_1429bfc07
    
    if (not(result f> zmm1) && r10.d s< rdx.d)
        goto label_1429bfc07

int64_t rcx = sx.q(*arg3)
int64_t rdx_1 = sx.q(r10.d)
result = *(r11 + (rcx << 2))
zmm1 = *(r11 + (rdx_1 << 2))

if (zmm1 f> result)
label_1429bfc4b:
    *arg3 = r10.d
    *arg2 = rcx.d
    int64_t rax_3 = *arg4
    int64_t rdx_2 = sx.q(*arg1)
    result = *(rax_3 + (rcx << 2))
    zmm1 = *(rax_3 + (rdx_2 << 2))
    
    if (zmm1 f> result)
        *arg2 = rdx_2.d
        *arg1 = rcx.d
    else if (not(result f> zmm1))
        int64_t rax_4 = arg4[1]
        result = *(rax_4 + (rcx << 2))
        zmm1 = *(rax_4 + (rdx_2 << 2))
        
        if (zmm1 f> result)
            *arg2 = rdx_2.d
            *arg1 = rcx.d
        else if (not(result f> zmm1) && rcx.d s< rdx_2.d)
            *arg2 = rdx_2.d
            *arg1 = rcx.d
else if (not(result f> zmm1))
    int64_t rax_2 = arg4[1]
    result = *(rax_2 + (rcx << 2))
    zmm1 = *(rax_2 + (rdx_1 << 2))
    
    if (zmm1 f> result)
        goto label_1429bfc4b
    
    if (not(result f> zmm1) && rcx.d s< r10.d)
        goto label_1429bfc4b

return result
