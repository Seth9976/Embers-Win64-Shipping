// 函数: sub_140ff5700
// 地址: 0x140ff5700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f0f214 += 1

if (*(arg1 + 0x17d00) != 0)
    void* rax_1 = *(arg1 + 0x17d18)
    
    if (rax_1 != 0)
        *(rax_1 + 0x10) += 1

sub_140fde960(arg1 - 0x18)
(*(*(arg1 - 0x18) + 0x750))(arg1 - 0x18)
int32_t r8 = 0x2a

if (*(arg2 + 0x18) == 2)
    r8 = 0x39

*(arg1 + 0x40b8) = arg2 + 0x28
int64_t rdx = *(arg2 + 0x40)

if (*(arg1 + 0x25e8) != 0 || *(arg1 + 0x1d68) != rdx || *(arg1 + 0x1d70) != r8
        || *(arg1 + 0x1d74) != 0)
    int64_t* rcx_2 = *(arg1 + 0x170)
    *(arg1 + 0x1d68) = rdx
    *(arg1 + 0x1d70) = r8
    *(arg1 + 0x1d74) = 0
    (*(*rcx_2 + 0x98))(rcx_2, rdx, r8, 0)

int32_t rax_5 = sub_140fe8110(*(arg1 + 0x26c8), *(arg1 + 0x43bd))

if (*(arg1 + 0x1d78) != rax_5)
    int64_t* rcx_4 = *(arg1 + 0x170)
    *(arg1 + 0x1d78) = rax_5
    int64_t r8_1 = *rcx_4
    (*(r8_1 + 0xc0))(rcx_4, zx.q(rax_5), r8_1)

int64_t* rcx_5 = *(arg1 + 0x138)
(*(*rcx_5 + 0x138))(rcx_5, *(arg3 + 0x38), zx.q(arg4))
return sub_140fdca30(arg1 - 0x18) __tailcall
