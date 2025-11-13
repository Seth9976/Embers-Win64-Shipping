// 函数: sub_1407c9270
// 地址: 0x1407c9270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg3 + 0x1b0)
void* rbx = *(arg4 + 0x10)
int64_t arg_10 = rbp
sub_140741e30(arg3, &arg_10, arg2 + 8, rbx + 0xc8, 0)
sub_140741e30(arg3, &arg_10, arg2 + 0xe, rbx + 0xcc, 0)
sub_140741e30(arg3, &arg_10, arg2 + 0x14, rbx + 0xd0, 0)
uint64_t result = sub_140741e30(arg3, &arg_10, arg2 + 0x1a, rbx + 0xd4, 0)
int64_t r14 = *(rbx + 0xe0)

if (*(arg2 + 0x22) u> 0)
    uint32_t rsi_1 = zx.d(*(arg2 + 0x20))
    void*** rcx_6 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rcx_6[5]
    
    if (rax u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x30)
        rcx_6 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rcx_6[5]
    
    *(arg3 + 0x30) = rax
    void** rax_1 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_1 = rcx_6
    *(arg3 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    result = &data_142d99560
    *rcx_6 = &data_142d99560
    rcx_6[2] = rbp
    rcx_6[3].d = rsi_1
    rcx_6[4] = r14

return result
