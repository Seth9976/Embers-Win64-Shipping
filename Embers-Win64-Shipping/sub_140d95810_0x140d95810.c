// 函数: sub_140d95810
// 地址: 0x140d95810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 + 0x70

for (int64_t i = 4; i != 0; )
    int64_t* rcx = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

int64_t* rbx = *(arg1 + 8)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp2_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rbx + 8))(rbx, 1)
