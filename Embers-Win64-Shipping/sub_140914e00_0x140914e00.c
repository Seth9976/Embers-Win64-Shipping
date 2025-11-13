// 函数: sub_140914e00
// 地址: 0x140914e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xe0)

if ((result & 1) != 0)
    void* rcx
    
    if ((result & 2) == 0)
        rcx = *(arg1 + 0xb0)
    else
        rcx = arg1 + 0xb0
    
    *(arg1 + 0xe0) = result & 0xfe
    result = (**rcx)(rcx, 0)
    
    if ((*(arg1 + 0xe0) & 2) == 0)
        result = sub_140a74f90(*(arg1 + 0xb0))

int32_t i_2 = *(arg1 + 0xa8)
int64_t* rbx = *(arg1 + 0xa0)

if (i_2 != 0)
    int32_t i
    
    do
        result = rbx[0x10].b
        
        if ((result & 1) != 0)
            int64_t* rcx_2 = rbx
            
            if ((result & 2) == 0)
                rcx_2 = *rbx
            
            rbx[0x10].b = result & 0xfe
            result = (**rcx_2)(rcx_2, 0)
            
            if ((rbx[0x10].b & 2) == 0)
                result = sub_140a74f90(*rbx)
        
        rbx = &rbx[0x11]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = *(arg1 + 0xa0)

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_5 = *(arg1 + 0x90)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x80)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x70)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x60)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int32_t i_3 = *(arg1 + 0x30)
void* rcx_9 = *(arg1 + 0x28)

if (i_3 != 0)
    int64_t* rbx_1 = rcx_9 + 0x48
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_1
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_1 = &rbx_1[0xb]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_9 = *(arg1 + 0x28)

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_11 = *(arg1 + 0x18)

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
