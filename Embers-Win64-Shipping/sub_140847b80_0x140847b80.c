// 函数: sub_140847b80
// 地址: 0x140847b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x20
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

sub_14083a1f0(arg1, i_3, r8)
int64_t* r14_1 = *arg1

if (i_3 == 0)
    return arg1

int32_t* rdi_1 = rdi + 8
void* rbx_1 = r14_1 + 0x1c
int32_t i_1

do
    *r14_1 = 0
    int64_t rbp_1 = sx.q(*rdi_1)
    int64_t r13_1 = *(rdi_1 - 8)
    *(rbx_1 - 0x14) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a00(r14_1, rbp_1.d, 0)
        memcpy(*r14_1, r13_1, (rbp_1 << 3).d)
    else
        *(rbx_1 - 0x10) = 0
    
    *(rbx_1 - 0xc) = 0
    int64_t rbp_2 = sx.q(rdi_1[4])
    int64_t rax_2 = *(rdi_1 + 8)
    *(rbx_1 - 4) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1405c4a00(rbx_1 - 0xc, rbp_2.d, 0)
        memcpy(*(rbx_1 - 0xc), rax_2, (rbp_2 << 3).d)
    else
        *rbx_1 = 0
    
    r14_1 = &r14_1[4]
    rbx_1 += 0x20
    rdi_1 = &rdi_1[8]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
