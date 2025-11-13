// 函数: sub_1426bb8e0
// 地址: 0x1426bb8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = arg1[0x13]
int64_t rdx

if (rdi == 0)
    rdx.b = 3
    (*(*arg1 + 0x270))(arg2, rdx)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

uint64_t rax_2 = zx.q(*(arg1 + 0xac))
int32_t temp0 = rax_2.d

if (temp0 == 0)
    rdx.b = 2
    (*(*arg1 + 0x270))(arg2, rdx)
    int64_t rax_4
    rax_4.b = 1
    return rax_4

if (temp0 s> 0)
    *(arg1 + 0xac) = rax_2.d - 1

if (arg1[0x16].d == 0)
    int32_t var_18_1 = 0x7f800000
    int64_t arg_8 = 0
    rax_2 = sub_140d2e1f0(rdi, arg1, 0, 0xfffffff, 0, 0)
    rdi = rax_2
    
    if (rax_2 == 0)
        rdi = 0
    else
        void* rax_5 = sub_14273ed60()
        void* rdx_2 = *(rdi + 0x10)
        rax_2 = sx.q(*(rax_5 + 0x38))
        
        if (rax_2.d s> *(rdx_2 + 0x38))
            rdi = 0
        else if (*(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_5 + 0x30)
            rdi = 0

int64_t* rcx_2 = arg1[7]
rax_2.b = 0
arg1[0x14] = rdi

if (rcx_2 == 0)
    return rax_2

return sub_1426bb1c0(rcx_2, rdi, arg1[0xc].d, arg1[8])
