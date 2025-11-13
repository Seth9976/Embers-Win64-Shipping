// 函数: sub_140d42c80
// 地址: 0x140d42c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
void* rax_2 = arg2[2]
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[3] = arg5
arg1[5] = *arg3
void* rax_5 = arg3[1]
arg1[6] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[7].d = arg3[2].d
arg1[8].b = arg3[3].b
arg1[9] = 0
arg1[0xa].d = 0

if (&arg3[4] != &arg1[9] && arg3[5].d != 0)
    int64_t* rcx_1 = arg3[4]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

arg1[0xb] = *arg6
void* rax_10 = arg6[1]
arg1[0xc] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

arg1[0xd].d = arg6[2].d
arg1[0xe].b = arg6[3].b
arg1[0xf] = 0
arg1[0x10].d = 0

if (&arg6[4] != &arg1[0xf] && arg6[5].d != 0)
    int64_t* rcx_4 = arg6[4]
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4)

sub_140d434a0(arg1, arg4)
int64_t* rdi_1 = arg2[2]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
