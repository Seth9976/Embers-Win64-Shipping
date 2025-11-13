// 函数: sub_14117b690
// 地址: 0x14117b690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t result = sub_14117b490(&arg1[4])
int32_t i_2 = arg1[3].d
int64_t* rbx = arg1[2]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[2]

if (rbx != 0)
    result = sub_140a74f90(rbx)

int32_t i_3 = arg1[1].d
int64_t* rbx_1 = *arg1

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = *arg1

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
