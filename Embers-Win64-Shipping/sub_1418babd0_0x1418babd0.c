// 函数: sub_1418babd0
// 地址: 0x1418babd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 0)
    *(arg1 + 0x30) = sub_1418d9250(*(*(arg1 + 0x38) + 0x468))

int64_t r9 = sx.q(*(arg2 + 0x44))
int32_t rax_3 = *(arg1 + 0xc8)
int32_t arg_18 = r9.d
uint64_t result
int64_t** rbx

if (rax_3 == *(arg1 + 0xf4))
labelid_6:
    rbx = sub_1418b7f00(arg1 + 0xc0, r9.d, &arg_18)
else
    void* rcx_1 = *(arg1 + 0x100)
    void* r8 = arg1 + 0xf8
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = zx.q(*(r8 + (((sx.q(*(arg1 + 0x108)) - 1) & r9) << 2)))
    
    if (result.d == 0xffffffff)
    label_1418bac79:
        rbx = sub_1418b7f00(arg1 + 0xc0, r9.d, &arg_18)
    else
        int64_t r8_1 = *(arg1 + 0xc0)
        void* rcx_3
        
        while (true)
            int64_t rdx_3 = sx.q(result.d) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == r9.d)
                break
            
            result = zx.q(*(rcx_3 + 0x10))
            
            if (result.d == 0xffffffff)
                goto label_1418bac79_1
        
        if (result.d == 0xffffffff || rcx_3 == 0)
        label_1418bac79_1:
            rbx = sub_1418b7f00(arg1 + 0xc0, r9.d, &arg_18)
        else
            rbx = rcx_3 + 8

int64_t* rcx_5 = *rbx

if (rcx_5 == 0)
    int64_t* rax_4 = sub_1418d9370(*(arg1 + 0x30), arg2)
    *rbx = rax_4
    return sub_1418d98b0(rax_4, arg2, arg4)

if (arg3 != 0)
    return sub_1418d98b0(rcx_5, arg2, arg4)

result.b = 0
return result
