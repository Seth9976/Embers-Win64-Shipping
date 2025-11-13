// 函数: sub_1421285c0
// 地址: 0x1421285c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142128410(arg1, arg2, arg3)
int64_t rdi = 0
int64_t* rdx_5

if (*(arg1 + 0x410) == *(arg1 + 0x43c))
label_14212865e:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x440
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x450)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14212865e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x408)
            
            if (*rdx_5 == arg2)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_14212865e_2
        
        if (rax_4 == 0xffffffff)
        label_14212865e_2:
            rdx_5 = nullptr

int32_t* result = &rdx_5[1]

if (rdx_5 == 0)
    result = nullptr

if (result != 0)
    int32_t** rbx_1 = *result
    int64_t rsi_1 = sx.q(result[2]) << 3
    result = &rbx_1[sx.q(result[2])]
    uint64_t rsi_2 = rsi_1 u>> 3
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int128_t zmm0
            int128_t zmm6
            result, zmm0, zmm6 = sub_142128410(arg1, *rbx_1, arg3)
            rbx_1 = &rbx_1[1]
            rdi += 1
        while (rdi != rsi_2)

return result
