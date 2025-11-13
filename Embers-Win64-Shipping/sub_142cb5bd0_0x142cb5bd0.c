// 函数: sub_142cb5bd0
// 地址: 0x142cb5bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0x31
int64_t* rbx = &data_143ce6b50
int64_t result

do
    rbx -= 0x50
    i -= 1
    rbx[9].d = 0
    int64_t rcx_1 = rbx[8]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result = sub_140885a50(rbx, 0)
    int64_t rcx_3 = rbx[4]
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rbx
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
while (i != 0)

return result
