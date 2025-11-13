// 函数: sub_142373660
// 地址: 0x142373660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0
int32_t arg_8

if (arg2 != 0)
    sub_140d3a3a0(&arg_8, arg2)
    arg_10.q = arg_8.q

sub_1423611b0(arg1 + 0x3d0, &arg_8, &arg_10)
int64_t rax_2 = sx.q(arg_8)
int64_t rdi_2
void* rdi_3

if (rax_2.d != 0xffffffff)
    rdi_2 = rax_2 << 5
    rdi_3 = rdi_2 + *(arg1 + 0x3d0)

int64_t* rdi_4

if (rax_2.d == 0xffffffff || rdi_2 == neg.q(*(arg1 + 0x3d0)))
    rdi_4 = nullptr
else
    rbx = *(rdi_3 + 8)
    rdi_4 = *(rdi_3 + 0x10)
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1

int64_t* rbx_1 = *(rbx + 0x18)

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_28 = *(rbx + 0x10)

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140f89820(*(arg1 + 0x450), &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

uint64_t result = sub_142372590(arg1 + 0x3d0, &arg_10)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        result = (**rdi_4)(rdi_4)
        int32_t temp7_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rdi_4 + 8))(rdi_4, 1)

return result
