// 函数: sub_1408df1b0
// 地址: 0x1408df1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x48))
int128_t result = zx.o(0)

if (rdi s<= 0)
    return zx.o(0)

int64_t rbx = 0

do
    int64_t* rcx = *(*(arg1 + 0x40) + (rbx << 3))
    (*(*rcx + 0x298))(rcx)
    
    if (not(result.d f> arg2.d))
        result = arg2
    
    rbx += 1
while (rbx s< rdi)

return result
