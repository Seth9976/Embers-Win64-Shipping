// 函数: sub_140d9cff0
// 地址: 0x140d9cff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)

if (rdi == 0)
    return 

sub_140596d80(rdi + 0x150)
int64_t* rbx_1 = *(rdi + 0x148)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140d94d20(rdi + 8)
j_sub_140a74f90(rdi)
