// 函数: ??1SimpleUString@@UEAA@XZ
// 地址: 0x14094c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142e259e0
*arg1 = &data_142e259e0
int64_t rcx = arg1[3]

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
