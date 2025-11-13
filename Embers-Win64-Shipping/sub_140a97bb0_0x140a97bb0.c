// 函数: sub_140a97bb0
// 地址: 0x140a97bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
InitializeCriticalSection(&arg1[8])
SetCriticalSectionSpinCount(&arg1[8], 0xfa0)
void* rdx = &arg1[0x40]
*(arg1 + 0x30) = 0
void* rcx_2 = &arg1[0x90]
*(arg1 + 0x38) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0xe0]
*(arg1 + 0xb0) = 0xffffffff
*(arg1 + 0xb4) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
*(arg1 + 0x100) = 0xffffffff
*(arg1 + 0x104) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 2
*(arg1 + 0x140) = 0
*(arg1 + 0x148) = 0
void*** rax_3 = j_sub_140a82f30(0x28)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142e66808
    *(rax_3 + 0xc) = 1
    rax_3[2] = &data_142e64fb0
    rax_3[3] = 0
    rax_3[4] = 0

*(arg1 + 0x150) = &rax_3[2]
*(arg1 + 0x158) = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp2_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rax_3)[1](rax_3, 1)

void*** rax_8 = sub_140a940f0()
*(arg1 + 0x160) = &rax_8[2]
*(arg1 + 0x168) = rax_8

if (rax_8 != 0)
    rax_8[1].d += 1
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp3_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_8)[1](rax_8, 1)

int64_t* rbx_3 = *(arg1 + 0x158)
int64_t r14 = *(arg1 + 0x150)

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d += 2

int64_t rbp = sx.q(*(arg1 + 0x148))
int32_t rax_13 = (rbp + 1).d
*(arg1 + 0x148) = rax_13

if (rax_13 s> *(arg1 + 0x14c))
    sub_1405a4f90(&arg1[0x140])

char arg_8 = 0
int64_t* rax_16 = (rbp << 4) + *(arg1 + 0x140)
*rax_16 = r14
rax_16[1] = rbx_3
char* arg_10 = &arg_8
sub_140a94580(*(arg1 + 0x140), *(arg1 + 0x148))

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)
    
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = *(arg1 + 0x168)
int64_t r14_1 = *(arg1 + 0x160)

if (rbx_4 != 0)
    rbx_4[1].d += 1
    
    if (rbx_4 != 0)
        rbx_4[1].d += 2

int64_t rbp_1 = sx.q(*(arg1 + 0x148))
int32_t rax_21 = (rbp_1 + 1).d
*(arg1 + 0x148) = rax_21

if (rax_21 s> *(arg1 + 0x14c))
    sub_1405a4f90(&arg1[0x140])

arg_8 = 0
int64_t* rax_24 = (rbp_1 << 4) + *(arg1 + 0x140)
*rax_24 = r14_1
rax_24[1] = rbx_4
arg_10 = &arg_8
sub_140a94580(*(arg1 + 0x140), *(arg1 + 0x148))

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)
    
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp11_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

return arg1
