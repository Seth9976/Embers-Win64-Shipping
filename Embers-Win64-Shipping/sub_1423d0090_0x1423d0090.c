// 函数: sub_1423d0090
// 地址: 0x1423d0090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140745b20(arg1 + 0x80)
int32_t i_3 = *(arg1 + 0x48)
void* rcx_1 = *(arg1 + 0x40)

if (i_3 != 0)
    int64_t* rbx_1 = rcx_1 + 0x30
    int32_t i
    
    do
        result = sub_140745b20(rbx_1)
        rbx_1 = &rbx_1[8]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx_1 = *(arg1 + 0x40)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int32_t i_4 = *(arg1 + 0x38)
void* rcx_3 = *(arg1 + 0x30)

if (i_4 != 0)
    int64_t* rbx_2 = rcx_3 + 0x30
    int32_t i_1
    
    do
        result = sub_140745b20(rbx_2)
        rbx_2 = &rbx_2[8]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rcx_3 = *(arg1 + 0x30)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int32_t i_5 = *(arg1 + 0x28)
void* rcx_5 = *(arg1 + 0x20)

if (i_5 != 0)
    int64_t* rbx_3 = rcx_5 + 0x30
    int32_t i_2
    
    do
        result = sub_140745b20(rbx_3)
        rbx_3 = &rbx_3[8]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rcx_5 = *(arg1 + 0x20)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_7 = *(arg1 + 0x10)

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
