// 函数: sub_140586f90
// 地址: 0x140586f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143cc7728 = 0
atexit(sub_142a40fd0)
sub_142a43440()
int64_t rdx = sub_142a41030()

if (data_14400f120 != 0)
    sub_142a43620("malloc is redirected.\n", rdx)

char result = sub_142a43d70(6)

if (result != 0)
    int32_t rax = sub_142a43b90(6)
    int64_t rcx_1 = sx.q(rax)
    int128_t zmm1_1
    zmm1_1.q = float.d(rcx_1)
    
    if (rax s< 0)
        zmm1_1.q = zmm1_1.q f+ 1.8446744073709552e+19
    
    zmm1_1.q = zmm1_1.q f* 0.5
    result = sub_142a43050(rcx_1, zmm1_1, nullptr)

data_14400f370 = data_143cc8258 != 0
return result
