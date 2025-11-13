// 函数: sub_14230af40
// 地址: 0x14230af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = sx.q(*arg3)
int128_t zmm0
int128_t zmm1

if (rax_3.d s>= 0)
    void* r8 = *arg2
    
    if (rax_3.d s< *(r8 + 0x28))
        int64_t rax = *(r8 + 0x30)
        int64_t rdx_1 = rax_3 * 6
        zmm1 = *(rax + (rdx_1 << 3) + 0x10)
        *arg1 = *(rax + (rdx_1 << 3))
        zmm0 = *(rax + (rdx_1 << 3) + 0x20)
        arg1[1] = zmm1
        arg1[2] = zmm0
        return arg1

zmm1 = data_143dbb0d0
*arg1 = data_143dbb0c0
zmm0 = data_143dbb0e0
arg1[1] = zmm1
arg1[2] = zmm0
return arg1
