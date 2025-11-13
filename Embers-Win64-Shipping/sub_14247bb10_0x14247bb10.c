// 函数: sub_14247bb10
// 地址: 0x14247bb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg2 + 0x78)
int64_t* rbx = *(arg2 + 0x70)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg2 + 0x70)

if (rbx != 0)
    sub_140a74f90(rbx)

*(arg2 + 0x68) = 0
int64_t rcx_2 = *(arg2 + 0x60)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = sub_1407547c0(arg2 + 0x20, 0)
int64_t rcx_4 = *(arg2 + 0x40)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg2 + 0x20)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg2 + 0x10)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
