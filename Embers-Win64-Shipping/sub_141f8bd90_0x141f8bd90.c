// 函数: sub_141f8bd90
// 地址: 0x141f8bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x78)

if (rcx == 0)
    *arg3 = 0
    *arg2 = 0
    return 

int32_t i = 0
float zmm0 = (*(arg1 + 0x70))[1].d
*arg3 = zmm0
*arg2 = zmm0

if (*(arg1 + 0x78) s<= 0)
    return 

char* rbx_1 = nullptr
int64_t rbp_1 = 0
int128_t zmm6 = 0x3e4ccccd

do
    int64_t rcx_1 = *(arg1 + 0x70)
    *arg2 = __minss_xmmss_memss(*arg2, *(rbx_1 + rcx_1 + 8))
    *arg3 = __maxss_xmmss_memss((*(rbx_1 + rcx_1 + 8)).d, *arg3).d
    
    if (rbx_1[rcx_1] == 2 && rbp_1 != sx.q(rcx - 1))
        uint128_t zmm1 = *(rbx_1 + rcx_1 + 4)
        int512_t zmm3
        zmm3.o = *(rbx_1 + rcx_1 + 8)
        int32_t* var_48_1 = arg2
        uint128_t zmm2 = *(*(arg1 + 0x70) + rbx_1 + 0x20)
        void** rax
        rax, arg4, zmm3, zmm6 =
            sub_141f786c0(arg1, zmm1, zmm2, arg4, (zmm2.d f- zmm1.d) f* zmm6.d, 0, 3, arg3)
    
    i += 1
    rbp_1 += 1
    rbx_1 = &rbx_1[0x1c]
while (i s< *(arg1 + 0x78))
