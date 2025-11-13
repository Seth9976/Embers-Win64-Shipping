// 函数: sub_140b4cb40
// 地址: 0x140b4cb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xc]
void** const result = &data_142e78988
*arg1 = &data_142e78988

if (rdi != 0)
    int64_t rcx = *rdi
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    result = j_sub_140a74f90(rdi)

void* rbx_1 = arg1[0x10]

if (rbx_1 == 0)
    return result

int64_t rcx_2 = *(rbx_1 + 0x40)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return j_sub_140a74f90(rbx_1)
