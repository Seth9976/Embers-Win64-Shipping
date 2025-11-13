// 函数: sub_141d531c0
// 地址: 0x141d531c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0xea]
*arg1 = &data_143227ef0
arg1[5] = &data_143228440

if (rdi != 0)
    int64_t rcx = *(rdi + 0x60)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    j_sub_140a74f90(rdi)

int64_t rcx_2 = arg1[0x117]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&arg1[0x112])
sub_141c31b70(&arg1[0x10b])
sub_141c326e0(&arg1[0xf1])
int64_t rcx_6 = arg1[0xee]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rdi_1 = arg1[0xec]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_3 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rcx_9 = arg1[0xe8]

if (rcx_9 != 0)
    int32_t rsi_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_9 != 0)
        (*(*rcx_9 + 8))(rcx_9, zx.q(rsi_1))

DeleteCriticalSection(&arg1[0xe1])
sub_14094d090(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
