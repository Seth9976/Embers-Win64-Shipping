// 函数: sub_142a9ff20
// 地址: 0x142a9ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x14))
int32_t rbx = 0
int32_t rax_3 = (temp1 - temp0) s>> 1
uint64_t result

if (rax_3 s<= 0)
label_142a9ff9d:
    result = *(arg1 + 0x48)
    
    if (result == 0 || *(result + 8) s<= 0)
    label_142a9ffd6:
        result.b = 0
    else
        while (zx.d(sub_142a486d0(sub_142ae72d0(result, rbx), 0).b) != zx.d(arg2))
            result = *(arg1 + 0x48)
            rbx += 1
            
            if (rbx s>= *(result + 8))
                goto label_142a9ffd6
        
        result.b = 1
else
    void* r14_1 = *(arg1 + 8)
    int64_t rdx_1 = 0
    int32_t* r9_1 = r14_1 + 4
    
    while (true)
        int32_t r8_1 = *(r14_1 + (rdx_1 << 3))
        int32_t rcx_1 = *r9_1 - 1
        uint32_t r10_1 = zx.d(arg2)
        result = zx.q(r8_1.b)
        
        if (((rcx_1 ^ r8_1) & 0xffffff00) != 0)
            if (result.d u<= r10_1)
                break
            
        label_142a9ff8c:
            
            if (r10_1 u<= zx.d(rcx_1.b))
                break
        else if (result.d u<= r10_1)
            goto label_142a9ff8c
        
        rdx_1 += 1
        r9_1 = &r9_1[2]
        
        if (rdx_1 s>= sx.q(rax_3))
            goto label_142a9ff9d
    
    result.b = 1

return result
