// 函数: sub_142395410
// 地址: 0x142395410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char rdi_1 = *(arg2 + 0x208)

if ((rdi_1 & 0x10) == 0)
    return 

int32_t rcx = *(arg1 + 0x40)
int32_t rbx_1 = 0

if (rcx s> 0)
    int64_t* rdi_2 = nullptr
    int32_t rax_1
    
    do
        int64_t r9_1 = *(arg1 + 0x38)
        rax_1 = rcx
        
        if (*(rdi_2 + r9_1) == arg2)
            int32_t rax_3 = rax_1 - rbx_1 - 1
            
            if (rax_3 s>= 1)
                rax_3 = 1
            
            if (rax_3 != 0)
                memcpy(r9_1 + (sx.q(rbx_1) << 3), r9_1 + (sx.q(rcx - rax_3) << 3), rax_3 << 3)
                rcx = *(arg1 + 0x40)
            
            *(arg1 + 0x40) = rcx - 1
            sub_1405c53d0(arg1 + 0x38)
            rax_1 = *(arg1 + 0x40)
            rbx_1 -= 1
            rdi_2 -= 8
        
        rbx_1 += 1
        rdi_2 = &rdi_2[1]
        rcx = rax_1
    while (rbx_1 s< rax_1)
    rdi_1 = *(arg2 + 0x208)

rdi_1 &= 0xbf
*(arg2 + 0x208) = rdi_1
void arg_10

if (*sub_140865c40(*(arg1 + 8) + 0x168, &arg_10, arg2) != 0xffffffff)
    sub_14239a380(arg1 + 0x10)
    sub_1423b40c0(*(arg1 + 8), arg2, arg3)
    rdi_1 = *(arg2 + 0x208)

*(arg2 + 0x208) = rdi_1 & 0xef
