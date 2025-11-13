// 函数: sub_141a37bb0
// 地址: 0x141a37bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[0xb]
int64_t r8 = 0
int32_t rbx = -1
int128_t zmm0 = *(arg1[4] + 0xf8)
uint64_t r9_1 = sx.q(arg1[0xc].d) << 3 u>> 3

if (rdx u> &rdx[arg1[0xc]])
    r9_1 = 0

if (r9_1 != 0)
    do
        void* rax_3 = *rdx
        rdx = &rdx[1]
        int32_t rcx = *(rax_3 + 0xa8)
        
        if (rcx s>= rbx)
            rbx = rcx
        
        r8 += 1
    while (r8 != r9_1)

void* result = (*(*arg1 + 0x2d8))(arg1, rdx, r8, r9_1, zmm0)
*(result + 0xa8) = rbx + 1
sub_140d3a3a0(&data_1439d2850, result)

if (((*(result + 8) u>> 9).b & 1) != 0 || ((*(result + 0xb0) u>> 1).b & 1) == 0)
    *(result + 0x90) = zmm0

int64_t rbx_2 = sx.q(arg1[0xc].d)
int32_t rax_5 = (rbx_2 + 1).d
arg1[0xc].d = rax_5

if (rax_5 s> *(arg1 + 0x64))
    sub_1405a4d70(&arg1[0xb])

*(arg1[0xb] + (rbx_2 << 3)) = result
return result
