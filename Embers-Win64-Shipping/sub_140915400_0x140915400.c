// 函数: sub_140915400
// 地址: 0x140915400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1409146f0(arg1, arg2)
uint64_t rbx = zx.q(rax)

if (rax == 0xffffffff)
    rbx = sx.q(arg1[1].d)
    int32_t rax_1 = (rbx + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *(*arg1 + rbx * 0x10) = *arg2
    int64_t rbp_1 = sx.q(arg1[3].d)
    int32_t rax_3 = (rbp_1 + 1).d
    arg1[3].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x1c))
        sub_1405a4f90(&arg1[2])
    
    int64_t* rax_6 = (rbp_1 << 4) + arg1[2]
    *rax_6 = 0
    rax_6[1] = 0

int64_t* rbx_3 = (sx.q(rbx.d) << 4) + arg1[2]
int32_t result = sub_1409159b0(rbx_3, arg3)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(rbx_3[1].d)
int32_t rax_7 = (rdi_1 + 1).d
rbx_3[1].d = rax_7

if (rax_7 s> *(rbx_3 + 0xc))
    sub_1405c4ec0(rbx_3)

return sub_140914770(*rbx_3 + rdi_1 * 0x28, arg3)
