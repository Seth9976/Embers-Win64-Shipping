// 函数: sub_140a99730
// 地址: 0x140a99730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x168)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x158)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140596d80(arg1 + 0x140)
sub_140596eb0(arg1 + 0x128)
*(arg1 + 0x118) = 0
int64_t rcx_6 = *(arg1 + 0x110)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140aa8c10(arg1 + 0xd0, 0)
int64_t rcx_8 = *(arg1 + 0xf0)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0xd0)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*(arg1 + 0xc8) = 0
int64_t rcx_10 = *(arg1 + 0xc0)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140aa8dc0(arg1 + 0x80, 0)
int64_t rcx_12 = *(arg1 + 0xa0)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = *(arg1 + 0x80)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

*(arg1 + 0x78) = 0
int64_t rcx_14 = *(arg1 + 0x70)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_140aa9240(arg1 + 0x30, 0)
int64_t rcx_16 = *(arg1 + 0x50)

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = *(arg1 + 0x30)

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return DeleteCriticalSection(arg1 + 8) __tailcall
