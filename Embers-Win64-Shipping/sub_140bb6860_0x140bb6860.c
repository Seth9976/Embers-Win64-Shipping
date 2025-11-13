// 函数: sub_140bb6860
// 地址: 0x140bb6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 * 0x50
int64_t* rbx_3 = *arg1 + 0x20 + r14_2
int32_t i

do
    if (rbx_3[-2] != 0)
        void* rax_1 = *rbx_3
        void* rcx = &rbx_3[2]
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (*(*rcx + 0x10))(rcx)
    
    rbx_3 = &rbx_3[0xa]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t r9 = arg1[1].d
int32_t rdx_2 = r9 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rcx_1 = *arg1
    memcpy(rcx_1 + r14_2, sx.q(r9 - rdx_2) * 0x50 + rcx_1, rdx_2 * 0x50)
    r9 = arg1[1].d

arg1[1].d = r9 - arg3

if (arg4 != 0)
    sub_140976b40(arg1)
