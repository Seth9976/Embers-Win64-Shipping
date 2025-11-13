// 函数: sub_141ada350
// 地址: 0x141ada350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_3 = arg1[1].d

if (i_3 != 0)
    int64_t* rbx_1 = *arg1 + 0x30
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[8]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = arg2[1].d
void* rdi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_2

if (i_2 != 0 || r8 != 0)
    sub_1407c35c0(arg1, i_2, r8)
    int32_t* r14_1 = *arg1
    
    if (i_2 != 0)
        void* rdi_1 = rdi + 8
        void* rbx_2 = &r14_1[0xf]
        int32_t i_1
        
        do
            *r14_1 = *(rdi_1 - 8)
            *(rbx_2 - 0x34) = *rdi_1
            *(rbx_2 - 0x2c) = *(rdi_1 + 8)
            *(rbx_2 - 0x28) = *(rdi_1 + 0xc)
            *(rbx_2 - 0x24) = *(rdi_1 + 0x10)
            *(rbx_2 - 0x20) = *(rdi_1 + 0x14)
            *(rbx_2 - 0x1c) = *(rdi_1 + 0x18)
            *(rbx_2 - 0xc) = 0
            int64_t r12_1 = sx.q(*(rdi_1 + 0x30))
            int64_t rax_8 = *(rdi_1 + 0x28)
            *(rbx_2 - 4) = r12_1.d
            
            if (r12_1.d != 0)
                sub_140638750(rbx_2 - 0xc, r12_1.d, 0)
                memcpy(*(rbx_2 - 0xc), rax_8, (r12_1 << 2).d)
            else
                *rbx_2 = 0
            
            r14_1 = &r14_1[0x10]
            rbx_2 += 0x40
            rdi_1 += 0x40
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else
    *(arg1 + 0xc) = 0

return arg1
