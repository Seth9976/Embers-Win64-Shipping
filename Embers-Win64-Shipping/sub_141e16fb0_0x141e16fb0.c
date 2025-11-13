// 函数: sub_141e16fb0
// 地址: 0x141e16fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg2[2]
int128_t zmm0

if (rcx == 0)
    zmm0 = zx.o(0)
else
    zmm0 = sub_141e40f60(rcx)

int512_t zmm3
zmm3.o = zmm0
void* result = (*(*arg1 + 0x268))(arg1, *arg2, arg2[1], zmm3)
void* rcx_2 = *arg2

if (rcx_2 != 0)
    result = sub_141f3b9f0(rcx_2)
    
    if (result != 0)
        result = sub_141e02fc0(result, arg2[3].d)
        
        if (result != 0)
            *(result + 0x188) += 1

return result
