// 函数: sub_140a99290
// 地址: 0x140a99290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = DeleteCriticalSection(arg1 + 0x48)
int64_t* rcx_1 = *(arg1 + 0x40)

if (rcx_1 != 0)
    result = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (result == 1 && rcx_1 != 0)
        result = (*(*rcx_1 + 8))(rcx_1, 1)

int64_t rcx_2 = *(arg1 + 0x20)

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t* rcx_3 = *(arg1 + 8)

if (rcx_3 != 0)
    int32_t rbx_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (rbx_1 == 1 && rcx_3 != 0)
        return (*(*rcx_3 + 8))(rcx_3, zx.q(rbx_1))

return result
