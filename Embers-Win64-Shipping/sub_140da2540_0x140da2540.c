// 函数: sub_140da2540
// 地址: 0x140da2540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        return rax_1

sub_140da2730(arg1)
int64_t* i = *(arg1 + 0x110)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x118)) * 2]; i != rdi_2; i = &i[2])
    int64_t* rcx_1 = *i
    (*(*rcx_1 + 0x20))(rcx_1)

int64_t r14
r14.b = 0
*(arg1 + 0x194) += 1
int32_t rax_3 = *(arg1 + 0x188)
int32_t rcx_2 = *(arg1 + 0x194)
int64_t rbx = sx.q(rax_3 - 1)

if (rax_3 - 1 s>= 0)
    int64_t rdi_4 = rbx << 4
    int64_t temp1_1
    
    do
        int64_t rax_5 = *(arg1 + 0x180)
        
        if (*(rdi_4 + rax_5 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_3 = *(rdi_4 + rax_5)
            
            if (rcx_3 == 0)
                r14.b = 1
            else if ((*(*rcx_3 + 0x50))(rcx_3, arg1) == 0)
                r14.b = 1
        
        rdi_4 -= 0x10
        temp1_1 = rbx
        rbx -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_2 = *(arg1 + 0x194)

*(arg1 + 0x194) = rcx_2 - 1

if (r14.b != 0)
    sub_140599630(arg1 + 0x180, 0)

*(arg1 + 0xe8) = 0

if (*(arg1 + 0xec) != 0)
    sub_1405dadb0(arg1 + 0xe0, 0)

*(arg1 + 0xf8) = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405dadb0(arg1 + 0xf0, 0)

*(arg1 + 0x108) = 0

if (*(arg1 + 0x10c) != 0)
    sub_1405dadb0(arg1 + 0x100, 0)

int32_t i_2 = *(arg1 + 0x118)

if (i_2 != 0)
    int64_t* rdi_6 = *(arg1 + 0x110) + 8
    int32_t i_1
    
    do
        int64_t* rbx_1 = *rdi_6
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_6 = &rdi_6[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(arg1 + 0x118) = 0

if (*(arg1 + 0x11c) != 0)
    sub_1405a5410(arg1 + 0x110, 0)

EnterCriticalSection(arg1 + 0x148)
bool cond:2 = *(arg1 + 0x17c) == 0
*(arg1 + 0x178) = 0

if (not(cond:2))
    sub_1405c5570(arg1 + 0x170, 0)

if (arg1 != -0x148)
    LeaveCriticalSection(arg1 + 0x148)

int64_t rax_11
rax_11.b = 1
return rax_11
