// 函数: sub_140e291a0
// 地址: 0x140e291a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x28)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rbx + 0x18)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1407e4370(rbx)
        rbx += 0x38
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* r14_1 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3
int32_t i_4 = i_3

if (i_3 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_140874c00(arg1, i_3, r8)
int64_t* r13_1 = *arg1

if (i_3 == 0)
    return arg1

int32_t* r14_2 = r14_1 + 8
void* rsi_1 = r13_1 + 0x24
int32_t i_1

do
    *r13_1 = 0
    int32_t j_1 = *r14_2
    void* rbx_1 = *(r14_2 - 8)
    *(rsi_1 - 0x1c) = j_1
    
    if (j_1 != 0)
        sub_1407751d0(r13_1, j_1, 0)
        int64_t* r15 = *r13_1
        char* rbx_2 = rbx_1 + 0x19
        void* rdi = r15 + 0x19
        int32_t j
        
        do
            *r15 = *(rbx_2 - 0x19)
            sub_140596d10(rdi - 0x11, &rbx_2[-0x11])
            r15 = &r15[5]
            *(rdi - 1) = rbx_2[-1]
            rdi += 0x28
            char rax_4 = *rbx_2
            rbx_2 = &rbx_2[0x28]
            *(rdi - 0x28) = rax_4
            *(rdi - 0x25) = *(rbx_2 - 0x25)
            *(rdi - 0x21) = *(rbx_2 - 0x21)
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_3 = i_4
    else
        *(rsi_1 - 0x18) = 0
    
    *(rsi_1 - 0x14) = r14_2[2]
    *(rsi_1 - 0xc) = 0
    int64_t rbx_3 = sx.q(r14_2[6])
    int64_t rbp_1 = *(r14_2 + 0x10)
    *(rsi_1 - 4) = rbx_3.d
    
    if (rbx_3.d != 0)
        sub_1405a4be0(rsi_1 - 0xc, rbx_3.d, 0)
        memcpy(*(rsi_1 - 0xc), rbp_1, (rbx_3 << 4).d)
    else
        *rsi_1 = 0
    
    sub_140596d10(rsi_1 + 4, &r14_2[8])
    r13_1 = &r13_1[7]
    rsi_1 += 0x38
    r14_2 = &r14_2[0xe]
    i_1 = i_3
    i_3 -= 1
    i_4 = i_3
while (i_1 != 1)
return arg1
