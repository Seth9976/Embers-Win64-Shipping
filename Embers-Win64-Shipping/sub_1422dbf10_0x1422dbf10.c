// 函数: sub_1422dbf10
// 地址: 0x1422dbf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1422f16f0(arg1)
int64_t rcx = arg1[0xb]

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x10))(rcx_1, 1)

int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
