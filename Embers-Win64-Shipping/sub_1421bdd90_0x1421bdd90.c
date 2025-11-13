// 函数: sub_1421bdd90
// 地址: 0x1421bdd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rdx = arg1[0x16].d
int32_t r8 = 1
int64_t* rcx = arg1[0x27]
int32_t rax = 1

if (rdx s>= 1)
    rax = rdx

arg1[0x16].d = rax
int32_t rax_1 = *(arg1 + 0xb4)

if (rax_1 s>= 1)
    r8 = rax_1

*(arg1 + 0xb4) = r8
void* result = rcx[3]

if (*(result + 8) == 0)
    return result

return sub_141997e80(rcx, rdx) __tailcall
