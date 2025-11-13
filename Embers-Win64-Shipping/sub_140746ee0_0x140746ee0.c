// 函数: sub_140746ee0
// 地址: 0x140746ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb8) = 0
int64_t rcx = *(arg1 + 0xb0)

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = sub_1407547c0(arg1 + 0x70, 0)
int64_t rcx_2 = *(arg1 + 0x90)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x70)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int32_t i_2 = *(arg1 + 0x68)
int64_t* rbx = *(arg1 + 0x60)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x60)

if (rbx != 0)
    result = sub_140a74f90(rbx)

int32_t i_3 = *(arg1 + 0x50)
int64_t* rbx_1 = *(arg1 + 0x48)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = *(arg1 + 0x48)

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int64_t* rbx_2 = *(arg1 + 0x20)

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        (**rbx_2)(rbx_2)
        result = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg1 + 8)

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi))

return result
