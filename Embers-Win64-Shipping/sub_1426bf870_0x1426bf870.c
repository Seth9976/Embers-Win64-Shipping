// 函数: sub_1426bf870
// 地址: 0x1426bf870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x12].d &= 0xfffffffe
uint64_t rax = sx.q(arg1[0x17].d)
*(arg1 + 0x84) = 1
arg1[0x11].d = 1

if (rax.d u>= arg1[0x14].d)
    int64_t rdx
    rdx.b = 2
    (*(*arg1 + 0x270))(arg2, rdx)
    int64_t rax_2
    rax_2.b = 1
    return rax_2

int64_t rcx = arg1[0x13]
void* rdi

if (*(arg1 + 0xbc) != 0)
    rdi = *(rcx + (rax << 3))
else
    int32_t var_18_1 = 0x7f800000
    int64_t arg_8 = 0
    void* rax_3 = sub_140d2e1f0(*(rcx + (rax << 3)), arg1, 0, 0xfffffff, 0, 0)
    rdi = rax_3
    void* rax_4
    int64_t rax_5
    void* rdx_2
    
    if (rax_3 != 0)
        rax_4 = sub_14273ed60()
        rdx_2 = *(rdi + 0x10)
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_3 == 0 || rax_5.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        rdi = nullptr
    
    rax = zx.q(arg1[0x17].d)

int64_t* rcx_3 = arg1[7]
arg1[0x17].d = rax.d + 1
int32_t rax_7
rax_7.b = 0
arg1[0x16] = rdi

if (rcx_3 == 0)
    return rax_7

return sub_1426bb1c0(rcx_3, rdi, arg1[0xc].d, arg1[8])
