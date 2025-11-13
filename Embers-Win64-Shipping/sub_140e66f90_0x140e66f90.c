// 函数: sub_140e66f90
// 地址: 0x140e66f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = **arg1
bool rax_1 = sub_140d6df00(rbx)
char rax_2

if (rax_1 != 0)
    rax_2 = sub_140d6dea0(rbx)

char rcx_1

if (rax_1 == 0 || rax_2 != 0)
    rcx_1 = 0
else
    rcx_1 = 1

int64_t* rdx = *arg1

if (rcx_1 == 0)
    rdx = &rdx[2]

int64_t* rbx_1 = rdx[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140e662c0(*rdx, arg2)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
