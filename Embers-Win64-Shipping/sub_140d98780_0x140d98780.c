// 函数: sub_140d98780
// 地址: 0x140d98780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rdi.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1407c3b60(arg1)

int64_t* rdx_2 = rdi * 0x38 + *arg1

if (i_1 != 0)
    void* rcx = rdx_2 + 0x24
    int32_t i
    
    do
        *rdx_2 = 0
        rdx_2 = &rdx_2[7]
        *(rcx - 0x1c) = 0
        *(rcx - 0xc) = 0
        *(rcx - 0x14) = 0x3f800000
        *(rcx - 4) = 0
        *(rcx + 4) = 0
        *(rcx + 0xc) = 0
        rcx += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rdi.d)
