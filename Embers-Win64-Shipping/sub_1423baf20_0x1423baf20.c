// 函数: sub_1423baf20
// 地址: 0x1423baf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14333b518
char* rcx = arg1[4]

if (rcx != 0 && (*rcx & 1) != 0)
    sub_1423c0390()
    sub_1423c7640(arg1[4][5], arg1)
    char* rax_1 = arg1[4]
    *rax_1 &= 0xfe
    rcx = arg1[4]

int64_t result = j_sub_140a74f90(rcx)
int64_t rcx_3 = arg1[2]

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
