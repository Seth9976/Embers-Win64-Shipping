// 函数: sub_14228d630
// 地址: 0x14228d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433132d0
int64_t rcx = arg1[0x62]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x60]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t i = 4
void* rsi = &arg1[0x5f]

do
    int64_t rcx_2 = *(rsi - 0x18)
    rsi -= 0x18
    i -= 1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
while (i != 0)

arg1[0x4a] = &data_142e259e0
int64_t rcx_3 = arg1[0x4d]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rbx = arg1[0x4c]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_6 = arg1[0x48]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405ae4b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
