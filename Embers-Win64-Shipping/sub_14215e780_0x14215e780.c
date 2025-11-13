// 函数: sub_14215e780
// 地址: 0x14215e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x100) = 0
int64_t rcx = *(arg1 + 0xf8)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0xc0) = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405c55e0(arg1 + 0xb8, 0)

*(arg1 + 0xe8) = 0xffffffff
*(arg1 + 0xec) = 0
sub_14059a8e0(arg1 + 0xc8, 0)
int64_t rcx_3 = *(arg1 + 0xd8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0xb8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg1 + 0xb0) = 0
int64_t rcx_5 = *(arg1 + 0xa8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140597460(arg1 + 0x68)
*(arg1 + 0x60) = 0
int64_t rcx_7 = *(arg1 + 0x58)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1407ece30(arg1 + 0x18, 0)
int64_t rcx_9 = *(arg1 + 0x38)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 0x18)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
