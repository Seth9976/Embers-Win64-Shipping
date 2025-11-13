// 函数: sub_14081f070
// 地址: 0x14081f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[0x3d]
*arg1 = &data_142dd7058
void* rax = arg1[0x3f]

if (rax != 0)
    rbx = rax

int64_t rdi = 0
int64_t rbp = sx.q(arg1[0x40].d) << 3
uint64_t rbp_1 = rbp u>> 3

if (rbx u> rbx + rbp)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx += 8
        rdi += 1
    while (rdi != rbp_1)

arg1[0x40].d = 0

if (*(arg1 + 0x204) != 0)
    sub_1408098d0(&arg1[0x3d], 0)

int32_t i_1 = arg1[0x43].d
int64_t* rbx_1 = arg1[0x42]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[0x42]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_4 = arg1[0x3f]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_14081d0c0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
