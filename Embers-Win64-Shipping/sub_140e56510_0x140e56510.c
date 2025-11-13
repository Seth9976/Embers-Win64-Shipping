// 函数: sub_140e56510
// 地址: 0x140e56510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
char* result_1 = rax + 0x4a8
char* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

if ((*result_1 & 0x20) != 0)
    int64_t performanceCount
    int64_t rdx
    result, rdx = QueryPerformanceCounter(&performanceCount)
    char* rbx_1 = arg2 + 0x2d0
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    int64_t i_1 = 0xb
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    int64_t i
    
    do
        if (*rbx_1 != 0 && not(zmm6.q f- *(rbx_1 - 8) f< data_1439b3868))
            int64_t rax_1 = *(rax + 0x118)
            int512_t zmm3
            zmm3.o = zx.o(0)
            performanceCount = 0
            rdx.b = 5
            result, rdx = (*(rax_1 + 0xa8))(rax + 0x118, rdx, &performanceCount, zmm3, 0)
            
            if (*rbx_1 != 0)
                *rbx_1 = 0
            
            *(rbx_1 + 8) = 0
        
        rbx_1 = &rbx_1[0x18]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
