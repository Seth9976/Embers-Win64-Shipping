// 函数: sub_141844130
// 地址: 0x141844130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x30)
int64_t* rcx = &arg1[6]
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe].d = 4
int64_t* r8 = arg2[1]
int64_t rax_1 = *arg2
int64_t var_58 = rax_1
int64_t* var_50 = r8

if (r8 != 0)
    r8[1].d += 1
    r8 = var_50

if (arg1 != &var_58)
    *arg1 = rax_1
    var_58 = 0
    sub_1405aeff0(&arg1[1], &var_50)
    r8 = var_50

if (r8 != 0)
    r8[1].d -= 1
    
    if (r8[1].d == 1)
        int64_t* rbx_1 = var_50
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            int64_t* rcx_3 = var_50
            (*(*rcx_3 + 8))(rcx_3, 1)

int64_t* rdx_1 = arg3[1]
int64_t rax_6 = *arg3
int64_t var_48 = rax_6
int64_t* var_40 = rdx_1

if (rdx_1 != 0)
    rdx_1[1].d += 1
    rdx_1 = var_40

if (&arg1[2] != &var_48)
    arg1[2] = rax_6
    var_48 = 0
    sub_1405aeff0(&arg1[3], &var_40)
    rdx_1 = var_40

if (rdx_1 != 0)
    rdx_1[1].d -= 1
    
    if (rdx_1[1].d == 1)
        int64_t* rbx_2 = var_40
        (**rbx_2)(rbx_2, rdx_1)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_6 = var_40
            (*(*rcx_6 + 8))(rcx_6, zx.q(rdi_1))

sub_141823570(&arg1[4], arg4)
arg1[0xe].d = 1
arg4[9].d = 0
int64_t rcx_8 = arg4[8]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_14059ad90(arg4, 0)
int64_t rcx_10 = arg4[4]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = *arg4

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg1
