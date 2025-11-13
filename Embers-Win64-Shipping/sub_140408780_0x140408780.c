// 函数: sub_140408780
// 地址: 0x140408780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg5)
int64_t r10 = sx.q(arg3)
int128_t result = zx.o(0)
int64_t r8 = sx.q(arg4)
int64_t i = 0

do
    int64_t r9 = r10
    
    if (r10 s< r8)
        int128_t result_1
        
        if (r8 - r10 s>= 4)
            int64_t rdx_1 = arg1 - arg2
            void* rcx = arg2 + ((rsi * i + 1 + r10) << 2)
            int64_t j_2 = ((r8 - r10 - 4) u>> 2) + 1
            r9 = r10 + (j_2 << 2)
            int64_t j
            
            do
                result_1 = *(rdx_1 + rcx - 4)
                float zmm2 = *(rdx_1 + rcx + 4)
                rcx += 0x10
                result_1.d = result_1.d f- *(rcx - 0x14)
                zmm2 = zmm2 f- *(rcx - 0xc)
                result_1.d = result_1.d f* result_1.d
                result_1.d = result_1.d f+ result.d
                result.d = (*(rdx_1 + rcx - 0x10)).d f- *(rcx - 0x10)
                result.d = result.d f* result.d
                result.d = result.d f+ result_1.d
                zmm2 = zmm2 * zmm2 f+ result.d
                result.d = (*(rdx_1 + rcx - 8)).d f- *(rcx - 8)
                result.d = result.d f* result.d
                result.d = result.d f+ zmm2
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        if (r9 s< r8)
            void* rcx_1 = arg2 + ((rsi * i + r9) << 2)
            int64_t j_3 = r8 - r9
            int64_t j_1
            
            do
                result_1 = *(arg1 - arg2 + rcx_1)
                rcx_1 += 4
                result_1.d = result_1.d f- *(rcx_1 - 4)
                result_1.d = result_1.d f* result_1.d
                result_1.d = result_1.d f+ result.d
                result = result_1
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
    
    i += 1
while (i s< sx.q(arg6))

if (result.d f> 200f)
    return 0x43480000

return result
