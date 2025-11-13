// 函数: sub_140b29d00
// 地址: 0x140b29d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

if (arg1[0xd].d == 0)
    return 

int64_t* rax_1 = sub_140b3d620(*arg1[0xc])
int64_t var_28 = *rax_1
void* rdx_1 = rax_1[1]
void* var_20_1 = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

int64_t rbx_1 = *arg1
int32_t var_18_1 = rax_1[2].d
int128_t zmm0_1
int512_t zmm1_1
zmm0_1, zmm1_1 = sub_140b3dc80(&arg1[0xc], 0)
zmm1_1.o = zmm0_1
(*(rbx_1 + 0x68))(arg1, zmm1_1, &var_28)
