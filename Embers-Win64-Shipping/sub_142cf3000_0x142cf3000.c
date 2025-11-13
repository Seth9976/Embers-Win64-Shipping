// 函数: sub_142cf3000
// 地址: 0x142cf3000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0x31
int64_t* rbx = &data_143f20240
void* result

do
    rbx = &rbx[-0xc]
    i -= 1
    rbx[1].d = 0
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result = sub_1419c3160(&rbx[-8])
    int64_t rcx_3 = rbx[-0xa]
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
while (i != 0)

return result
