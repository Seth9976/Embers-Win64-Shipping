// 函数: sub_1418d2db0
// 地址: 0x1418d2db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x190) = 0

if (*(arg1 + 0x194) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x188, 0)

int64_t rcx_1 = *(arg1 + 0x198)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x188)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = sub_1418d2510(arg1 + 0x48)
int32_t i_1 = *(arg1 + 0x38)
int64_t* rbx = *(arg1 + 0x30)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x30)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
