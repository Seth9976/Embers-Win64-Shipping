// 函数: sub_1417ce5b0
// 地址: 0x1417ce5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x128)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = sub_1407481d0(arg1 + 0x108, *(arg1 + 0x108))
int32_t i_2 = *(arg1 + 0xe8)
void* rcx_3 = *(arg1 + 0xe0)

if (i_2 != 0)
    void* rbx_1 = rcx_3 + 0x50
    int32_t i
    
    do
        int64_t rcx_4 = *(rbx_1 + 0x10)
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_1 += 0x70
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_3 = *(arg1 + 0xe0)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int32_t i_3 = *(arg1 + 0xd8)
void* rcx_6 = *(arg1 + 0xd0)

if (i_3 != 0)
    void* rbx_2 = rcx_6 + 0x50
    int32_t i_1
    
    do
        int64_t rcx_7 = *(rbx_2 + 0x10)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rbx_2 += 0x70
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_6 = *(arg1 + 0xd0)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_9 = *(arg1 + 0x48)

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
