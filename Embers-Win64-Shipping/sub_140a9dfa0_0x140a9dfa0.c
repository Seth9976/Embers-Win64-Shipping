// 函数: sub_140a9dfa0
// 地址: 0x140a9dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x98)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = *(arg1 + 0x80)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i_1 = *(arg1 + 0x70)
void* rbx_1 = *(arg1 + 0x68)

if (i_1 != 0)
    int32_t i
    
    do
        sub_140b0bbf0(rbx_1)
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *(arg1 + 0x68)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_5 = *(arg1 + 0x58)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

DeleteCriticalSection(arg1 + 0x30)
int64_t* rbx_2 = *(arg1 + 0x20)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_7 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg1 + 0x10)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rbp_1))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
