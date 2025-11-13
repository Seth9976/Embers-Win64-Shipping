// 函数: sub_141cde780
// 地址: 0x141cde780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
int64_t r9 = arg1[0x15]
int64_t r10 = arg1[7]
int32_t rax_2 = data_143a1c6b0
var_28 = rax_2
int32_t var_24 = rax_2
int32_t var_20 = rax_2
int64_t r11 = sx.q(arg2) << 2
int64_t rdi = sx.q(*(r10 + sx.q(*(r9 + (r11 << 2))) * 0x18))
var_28 = rdi.d
int32_t rbx = *(r10 + sx.q(*(r9 + (r11 << 2) + 4)) * 0x18)
int32_t rax_7 = *(r10 + sx.q(*(r9 + (r11 << 2) + 8)) * 0x18)
int64_t rax_8 = *arg1
int64_t rcx_3 = rdi << 5
int32_t* rdx_1 = *(rcx_3 + rax_8 + 0x10)
void* r9_1 = &rdx_1[sx.q(*(rcx_3 + rax_8 + 0x18))]
int64_t r8

if (rdx_1 == r9_1)
label_141cde85b:
    r8 = zx.q(data_143a1c6bc)
else
    int64_t r10_1 = arg1[0xe]
    
    while (true)
        r8 = sx.q(*rdx_1)
        int64_t rcx_4 = r8 * 3
        int32_t rcx_5 = *(r10_1 + (rcx_4 << 3))
        int32_t rax_11 = *(r10_1 + (rcx_4 << 3) + 4)
        
        if (rcx_5 == rdi.d && rax_11 == rbx)
            break
        
        if (rcx_5 == rbx && rax_11 == rdi.d)
            break
        
        rdx_1 = &rdx_1[1]
        
        if (rdx_1 == r9_1)
            goto label_141cde85b

int32_t* rdi_1 = *arg3
*rdi_1 = r8.d
int64_t rax_12 = *arg1
int64_t r8_1 = sx.q(rbx)
int64_t rcx_7 = r8_1 << 5
int32_t* rdx_2 = *(rcx_7 + rax_12 + 0x10)
void* r11_1 = &rdx_2[sx.q(*(rcx_7 + rax_12 + 0x18))]
int64_t r9_2

if (rdx_2 == r11_1)
label_141cde8ce:
    r9_2 = zx.q(data_143a1c6bc)
else
    int64_t rbx_1 = arg1[0xe]
    
    while (true)
        r9_2 = sx.q(*rdx_2)
        int64_t rcx_8 = r9_2 * 3
        int32_t rcx_9 = *(rbx_1 + (rcx_8 << 3))
        int32_t rax_15 = *(rbx_1 + (rcx_8 << 3) + 4)
        
        if (rcx_9 == r8_1.d && rax_15 == rax_7)
            break
        
        if (rcx_9 == rax_7 && rax_15 == r8_1.d)
            break
        
        rdx_2 = &rdx_2[1]
        
        if (rdx_2 == r11_1)
            goto label_141cde8ce

rdi_1[1] = r9_2.d
int64_t rax_16 = *arg1
int64_t r8_2 = sx.q(rax_7)
int64_t rcx_11 = r8_2 << 5
int32_t* rdx_3 = *(rcx_11 + rax_16 + 0x10)
void* r11_2 = &rdx_3[sx.q(*(rcx_11 + rax_16 + 0x18))]
int32_t result

if (rdx_3 == r11_2)
label_141cde93e:
    result = data_143a1c6bc
    rdi_1[2] = result
else
    int64_t rbx_2 = arg1[0xe]
    int32_t r9_3 = var_28
    
    while (true)
        int64_t r10_3 = sx.q(*rdx_3)
        int64_t rcx_12 = r10_3 * 3
        int32_t rcx_13 = *(rbx_2 + (rcx_12 << 3))
        result = *(rbx_2 + (rcx_12 << 3) + 4)
        
        if (rcx_13 == r8_2.d && result == r9_3)
            rdi_1[2] = r10_3.d
            break
        
        if (rcx_13 == r9_3 && result == r8_2.d)
            rdi_1[2] = r10_3.d
            break
        
        rdx_3 = &rdx_3[1]
        
        if (rdx_3 == r11_2)
            goto label_141cde93e

__security_check_cookie(rax_1 ^ &var_28)
return result
