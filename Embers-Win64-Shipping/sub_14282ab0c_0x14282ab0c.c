// 函数: sub_14282ab0c
// 地址: 0x14282ab0c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x14)
char arg_8 = sub_14282a994(arg1)
char rax_1 = sub_14282a994(arg1)
int64_t* r8 = *arg1
char arg_9 = rax_1
uint64_t result = *r8

if (*(sx.q(*(result + 4)) + r8 + 0x10) != 0)
    return result

int64_t r14_1
r14_1.b = rbx != 2
void* r15_1 = &(&arg_8)[r14_1]
int64_t r14_2 = r14_1 ^ 1
uint32_t rbx_3 = zx.d(*r15_1) << 8 | zx.d((&arg_8)[r14_2])
void* rcx_8
uint32_t rdx_1

if (rbx_3 - 0xdc00 u<= 0x3ff)
    rdx_1 = 0xfffd
    rcx_8 = &arg1[3]
else if (rbx_3 - 0xd800 u> 0x3ff)
label_14282ac4c:
    rdx_1 = rbx_3
    rcx_8 = &arg1[3]
else
    arg_8 = sub_14282a994(arg1)
    char rax_6 = sub_14282a994(arg1)
    int64_t* rdx_2 = *arg1
    arg_9 = rax_6
    void* rbp_1
    
    if (*(sx.q(*(*rdx_2 + 4)) + rdx_2 + 0x10) != 0)
        rbp_1 = &arg1[3]
    label_14282ac72:
        rdx_1 = 0xfffd
    else
        while (true)
            uint32_t rsi_3 = zx.d(*r15_1) << 8 | zx.d((&arg_8)[r14_2])
            
            if (rsi_3 - 0xdc00 u<= 0x3ff)
                rbx_3 = ((rbx_3 & 0x3ff) << 0xa | (rsi_3 & 0x3ff)) + 0x10000
                goto label_14282ac4c
            
            rbp_1 = &arg1[3]
            sub_14282aa14(rbp_1, 0xfffd)
            
            if (rsi_3 - 0xd800 u> 0x7ff)
                rdx_1 = rbx_3
                break
            
            rbx_3 = rsi_3
            arg_8 = sub_14282a994(arg1)
            char rax_12 = sub_14282a994(arg1)
            int64_t* rdx_3 = *arg1
            arg_9 = rax_12
            
            if (*(sx.q(*(*rdx_3 + 4)) + rdx_3 + 0x10) != 0)
                goto label_14282ac72
    
    rcx_8 = rbp_1

return sub_14282aa14(rcx_8, rdx_1)
