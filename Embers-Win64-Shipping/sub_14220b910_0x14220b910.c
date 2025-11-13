// 函数: sub_14220b910
// 地址: 0x14220b910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rbx_1 = *arg1 + 0x50
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x70
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

sub_140f15120(arg1, i_3, r8)
int64_t* r12_1 = *arg1

if (i_3 == 0)
    return arg1

void* rdi_1 = rdi + 0x68
void* rbx_2 = r12_1 + 0x5c
int32_t i_1

do
    int64_t rcx_3 = *(rdi_1 - 0x58)
    int64_t r9_1 = *(rdi_1 - 0x28)
    int64_t r8_1 = *(rdi_1 - 0x48)
    int64_t rdx_1 = *(rdi_1 - 0x50)
    *(rbx_2 - 0x34) = *(rdi_1 - 0x40)
    *r12_1 = rbx_2 - 0xc
    *(rbx_2 - 0x54) = rbx_2 + 4
    *(rbx_2 - 0x4c) = rcx_3
    *(rbx_2 - 0x44) = rdx_1
    *(rbx_2 - 0x3c) = r8_1
    *(rbx_2 - 0x1c) = r9_1
    *(rbx_2 - 0x2b) = 0
    *(rbx_2 - 0x28) = 0xbf800000
    *(rbx_2 - 0x24) = 0
    int32_t* rax_3
    rax_3.b = *data_143f510e0 != 0
    *(rbx_2 - 0x14) = rax_3.b
    *(rbx_2 - 0xc) = 0
    int32_t rax_4 = *(rdi_1 - 0x10)
    int64_t rcx_4 = *(rdi_1 - 0x18)
    *(rbx_2 - 4) = rax_4
    
    if (rax_4 != 0)
        sub_1405c4a00(rbx_2 - 0xc, rax_4, 0)
        memcpy(*(rbx_2 - 0xc), rcx_4, rax_4 << 3)
    else
        *rbx_2 = 0
    
    *(rbx_2 + 4) = 0
    int64_t rbp_2 = sx.q(*rdi_1)
    int32_t arg_8
    arg_8.q = *(rdi_1 - 8)
    *(rbx_2 + 0xc) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1405a4b40(rbx_2 + 4, rbp_2.d, 0)
        memcpy(*(rbx_2 + 4), arg_8.q, (rbp_2 * 0x30).d)
    else
        *(rbx_2 + 0x10) = 0
    
    r12_1 = &r12_1[0xe]
    rbx_2 += 0x70
    rdi_1 += 0x70
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
