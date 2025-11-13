// 函数: sub_14087a990
// 地址: 0x14087a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rbx_1 = *arg1 + 0x10
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x18)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x38
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* rdi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3

if (i_3 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_140874c00(arg1, i_3, r8)
int64_t* r15_1 = *arg1

if (i_3 == 0)
    return arg1

void* rdi_1 = rdi + 0x30
void* rbx_2 = r15_1 + 0x1c
int32_t i_1

do
    *r15_1 = *(rdi_1 - 0x30)
    *(rbx_2 - 0x14) = *(rdi_1 - 0x28)
    *(rbx_2 - 0xc) = 0
    uint32_t count = *(rdi_1 - 0x18)
    int64_t rax_4 = *(rdi_1 - 0x20)
    *(rbx_2 - 4) = count
    
    if (count != 0)
        sub_1405da9e0(rbx_2 - 0xc, count, 0)
        memcpy(*(rbx_2 - 0xc), rax_4, count)
    else
        *rbx_2 = 0
    
    *(rbx_2 + 4) = *(rdi_1 - 0x10)
    *(rbx_2 + 0xc) = 0
    int64_t rbp_1 = sx.q(*rdi_1)
    int64_t rax_6 = *(rdi_1 - 8)
    *(rbx_2 + 0x14) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405a4be0(rbx_2 + 0xc, rbp_1.d, 0)
        memcpy(*(rbx_2 + 0xc), rax_6, (rbp_1 << 4).d)
    else
        *(rbx_2 + 0x18) = 0
    
    r15_1 = &r15_1[7]
    rbx_2 += 0x38
    rdi_1 += 0x38
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
