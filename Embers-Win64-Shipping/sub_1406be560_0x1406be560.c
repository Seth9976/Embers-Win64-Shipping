// 函数: sub_1406be560
// 地址: 0x1406be560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x90) != 0 && *(arg1 + 0x94) == 0)
    *(arg1 + 0x94) = 1
    return 

int64_t rdx = sx.q(*(arg1 + 0x80))
int64_t* rdi = *(arg1 + (rdx << 3))
int64_t rcx = *rdi

if (rcx != 0)
    av_frame_unref(rcx)
    avsubtitle_free(&rdi[1])
    rdx = zx.q(*(arg1 + 0x80))

int32_t rax = (rdx + 1).d

if (rax == *(arg1 + 0x8c))
    rax = 0

*(arg1 + 0x80) = rax
EnterCriticalSection(arg1 + 0x98)
*(arg1 + 0x88) -= 1
int64_t* rcx_3 = *(arg1 + 0xc0)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

return LeaveCriticalSection(arg1 + 0x98) __tailcall
