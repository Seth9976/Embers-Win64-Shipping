// 函数: sub_1422b8150
// 地址: 0x1422b8150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_140596d80(arg2 + 0x4b0)
sub_140596d80(arg2 + 0x4a0)
sub_140596d80(arg2 + 0x490)
int64_t rcx_3 = *(arg2 + 0x480)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg2 + 0x460)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg2 + 0x450)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1409aad70(arg2 + 0x440)
sub_140e52e40(arg2 + 0x430)
void* rbx_2 = arg2 + 0x438

for (int64_t i = 0x20; i != 0; )
    int64_t rcx_8 = *(rbx_2 - 0x20)
    rbx_2 -= 0x20
    i -= 1
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

int64_t* rbx_3 = *(arg2 + 0x28)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

j_sub_140a74f90(arg2)
