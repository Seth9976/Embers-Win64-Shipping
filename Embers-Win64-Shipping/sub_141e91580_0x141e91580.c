// 函数: sub_141e91580
// 地址: 0x141e91580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = *arg1 + 0x518
int32_t* rcx_5

if (rbx_1[1].d == *(rbx_1 + 0x34))
label_141e915ee:
    rcx_5 = nullptr
else
    int64_t r10_1 = sx.q(arg1[1].d)
    void* r8_1 = &rbx_1[7]
    void* rdx_1 = *(r8_1 + 8)
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t rax_1 = *(r8_1 + (((sx.q(rbx_1[9].d) - 1) & r10_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141e915ee_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_1) * 0x70 + *rbx_1
            
            if (*rcx_5 == r10_1.d)
                break
            
            rax_1 = rcx_5[0x1a]
            
            if (rax_1 == 0xffffffff)
                goto label_141e915ee_2
        
        if (rax_1 == 0xffffffff)
        label_141e915ee_2:
            rcx_5 = nullptr

void* result = &rcx_5[2]

if (rcx_5 == 0)
    result = nullptr

if (result != 0)
    int32_t zmm2 = *(result + 8)
    *result = *(arg1 + 8)
    *(result + 0x10) = *(arg1 + 0x18)
    *(result + 0x20) = *(arg1 + 0x28)
    *(result + 0x30) = *(arg1 + 0x38)
    *(result + 0x40) = *(arg1 + 0x48)
    *(result + 0x50) = *(arg1 + 0x58)
    
    if (not(zmm2 f== arg1[2].d))
        char arg_8 = 0
        char* arg_10 = &arg_8
        char** arg_18 = &arg_10
        
        if (rbx_1[1].d - *(rbx_1 + 0x34) s> 0)
            sub_141e98230(rbx_1)
            char*** arg_20 = &arg_18
            sub_141e8e910(*rbx_1, rbx_1[1].d - *(rbx_1 + 0x34), arg_8)
        
        return sub_141892340(rbx_1)

return result
