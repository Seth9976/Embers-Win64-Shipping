// 函数: sub_1408fff50
// 地址: 0x1408fff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1af30
int64_t* rbx = arg1[0x2b]
int64_t rdi = 0
uint64_t r14_1 = sx.q(arg1[0x2c].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x2c]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx, 1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

arg1[0x2c].d = 0

if (*(arg1 + 0x164) != 0)
    sub_1405c5570(&arg1[0x2b], 0)

sub_1409014d0(&arg1[8], 0)
arg1[0x28].d = 0

if (*(arg1 + 0x144) != 0)
    sub_1405dadb0(&arg1[0x27], 0)

int64_t rcx_4 = arg1[0x2b]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x29]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x27]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_1 = arg1[0x21]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_5 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg1[0x1f]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_9 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg1[0x1d]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_13 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_13 = arg1[0x18]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int32_t i_1 = arg1[0x17].d
int64_t* rbx_4 = arg1[0x16]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rbx_4
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rbx_4 = &rbx_4[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_4 = arg1[0x16]

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

sub_1408ffb90(&arg1[8])
int64_t result = DeleteCriticalSection(&arg1[3])
int64_t* rcx_18 = arg1[2]

if (rcx_18 != 0)
    int32_t rdi_1 = *(rcx_18 + 0xc)
    *(rcx_18 + 0xc) -= 1
    
    if (rdi_1 == 1 && rcx_18 != 0)
        return (*(*rcx_18 + 8))(rcx_18, zx.q(rdi_1))

return result
