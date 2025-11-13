// 函数: sub_142185220
// 地址: 0x142185220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = arg1[0xd]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t i = 2
void* rdi = &arg1[0xa]

do
    int64_t rcx_3 = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
while (i != 0)

*arg1 = &data_143218418

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
