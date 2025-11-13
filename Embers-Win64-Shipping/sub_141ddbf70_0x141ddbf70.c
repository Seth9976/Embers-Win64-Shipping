// 函数: sub_141ddbf70
// 地址: 0x141ddbf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r10 = sx.q(arg2)
void* const rcx_2

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_141ddbfe0:
    rcx_2 = nullptr
else
    void* rcx = *(arg1 + 0x98)
    void* r9_1 = arg1 + 0x90
    
    if (rcx != 0)
        r9_1 = rcx
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141ddbfe0_1:
        rcx_2 = nullptr
    else
        int64_t r8_3 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx = sx.q(rax_1) * 9
            rcx_2 = r8_3 + (rdx << 3)
            
            if (*(r8_3 + (rdx << 3)) == r10.d)
                break
            
            rax_1 = *(rcx_2 + 0x40)
            
            if (rax_1 == 0xffffffff)
                goto label_141ddbfe0_2
        
        if (rax_1 == 0xffffffff)
        label_141ddbfe0_2:
            rcx_2 = nullptr

void* rdx_1 = rcx_2 + 4

if (rcx_2 == 0)
    rdx_1 = nullptr

if (rdx_1 == 0)
    return sub_141db26c0(arg1 + 0x58, &arg_10, arg3)

int32_t zmm2 = *(rdx_1 + 0x28)
*rdx_1 = *arg3
*(rdx_1 + 0x10) = arg3[1]
*(rdx_1 + 0x20) = arg3[2]
*(rdx_1 + 0x30) = arg3[3].q
int32_t result = *(arg3 + 0x38)
*(rdx_1 + 0x38) = result
*(rdx_1 + 0x28) = zmm2
return result
