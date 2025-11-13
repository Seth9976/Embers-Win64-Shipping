// 函数: sub_140a99bd0
// 地址: 0x140a99bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_140aa9190(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140775520(arg1)

void* rbx = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rbx != &arg2[2])
    sub_14059a8e0(rbx, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rbx + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rbx + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rbx = r10_1
        
        memcpy(rbx, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *arg1
int32_t r14 = 0
int64_t i_1 = i_2

if (i_2.d s> 0)
    int32_t rbp = 1
    int64_t* rdi_2 = *arg2 - rax_4
    int64_t* rbx_1 = rax_4 + 0x28
    int64_t i
    
    do
        void* rax_5 = arg2[4]
        int64_t* rdx_5 = &rdi_2[-5] + rbx_1
        void* r8_4 = &arg2[2]
        
        if (rax_5 != 0)
            r8_4 = rax_5
        
        int32_t rax_6 = r14
        
        if (r14 s< 0)
            rax_6 = r14 + 0x1f
        
        if ((*(r8_4 + (sx.q(rax_6 s>> 5) << 2)) & rbp) == 0)
            rbx_1[-5].d = *rdx_5
            *(rbx_1 - 0x24) = *(rbx_1 + rdi_2 - 0x24)
        else
            sub_140596d10(&rbx_1[-5], rdx_5)
            rbx_1[-3].d = *(rbx_1 + rdi_2 - 0x18)
            rbx_1[-2] = *(rdi_2 + rbx_1 - 0x10)
            rbx_1[-2] = *(rdi_2 + rbx_1 - 0x10)
            rbx_1[-2].d = *(rdi_2 + rbx_1 - 0x10)
            rbx_1[-2] = *(rdi_2 + rbx_1 - 0x10)
            rbx_1[2].b = 0
            
            if (*(rdi_2 + rbx_1 + 0x10) != 0)
                rbx_1[-1] = *(rdi_2 + rbx_1 - 8)
                void* rax_15 = *(rdi_2 + rbx_1)
                *rbx_1 = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 8) += 1
                
                rbx_1[1].d = *(rdi_2 + rbx_1 + 8)
                rbx_1[2].b = 1
            
            rbx_1[3].d = *(rbx_1 + rdi_2 + 0x18)
            *(rbx_1 + 0x1c) = *(rbx_1 + rdi_2 + 0x1c)
        
        r14 += 1
        rbp = rol.d(rbp, 1)
        rbx_1 = &rbx_1[9]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
