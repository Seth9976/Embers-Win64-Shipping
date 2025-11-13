// 函数: sub_1423dd0a0
// 地址: 0x1423dd0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1] = 0xbf800000
*arg2 = 0
arg2[2] = 0xbf800000
int64_t* rcx = *(arg1 + 0xa50)

if (rcx == 0 || (*(*rcx + 0x10))(rcx) == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0xa50)

if ((*(*rcx_1 + 0x38))(rcx_1) == 0)
    int32_t rdi
    rdi.b = *(arg1 + 0xa70) != 0
    *arg2 = rdi + 1
else
    *arg2 = 3
    int64_t* rcx_2 = *(arg1 + 0xa50)
    (*(*rcx_2 + 0x20))(rcx_2)
    arg2[1] = arg3
    int64_t* rcx_3 = *(arg1 + 0xa50)
    (*(*rcx_3 + 0x28))(rcx_3)
    arg2[2] = arg3

arg2[1] = __minss_xmmss_memss(arg2[2], arg2[1])
