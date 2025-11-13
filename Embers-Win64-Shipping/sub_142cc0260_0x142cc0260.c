// 函数: sub_142cc0260
// 地址: 0x142cc0260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143de7d60
data_143de7d68 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_1405e1b50(&data_143de7d20, 0)
int64_t rcx_1 = data_143de7d40

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143de7d20

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int32_t i_1 = data_143de7d18.d
int64_t* rbx = data_143de7d10

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = data_143de7d10

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_5 = data_143de7d00

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
