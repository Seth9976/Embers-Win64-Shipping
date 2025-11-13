// 函数: sub_140d0cc50
// 地址: 0x140d0cc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4

if (arg4 == 0)
    rbx = sx.q(*(arg1 + 0x4c)) + arg3

int64_t r9 = sx.q(sub_140758d90(rbx, arg2))

if (r9.d != 0xffffffff)
    int32_t rdx = rbx[1].d
    int32_t rcx_3 = rdx - r9.d - 1
    
    if (rcx_3 s>= 1)
        rcx_3 = 1
    
    if (rcx_3 != 0)
        memcpy((r9 << 4) + *rbx, (sx.q(rdx - rcx_3) << 4) + *rbx, rcx_3 << 4)
        rdx = rbx[1].d
    
    rbx[1].d = rdx - 1
    sub_1405a5010(rbx)

return sub_1408f4c10(rbx) __tailcall
