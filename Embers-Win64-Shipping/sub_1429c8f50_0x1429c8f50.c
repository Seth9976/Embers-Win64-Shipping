// 函数: sub_1429c8f50
// 地址: 0x1429c8f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_14 = sx.q(arg2)
int64_t i_11 = i_14
uint64_t i_7 = zx.q(*arg1) & 0x60
uint128_t zmm0
float zmm2

if (i_7.d == 0 || i_14.d s< 2)
    int64_t rsi_2 = 0
    
    if (i_11 s>= 4)
        void* rcx_4 = arg3 - arg4
        int64_t i_8 = ((i_14 - 4) u>> 2) + 1
        i_7 = arg4 + 4
        rsi_2 = i_8 << 2
        int64_t i
        
        do
            zmm0 = *(i_7 + rcx_4 - 4)
            
            if (0f f>= zmm0.d)
                zmm0 = zx.o(0)
            else if (not(zmm0.d f< 10f))
                zmm0 = 0x41200000
            else if (zmm0.d f<= 1f)
                zmm0 = zx.o(0)
            else
                zmm0.d = zmm0.d f- 1f
            
            *(i_7 - 4) = zmm0.d
            zmm2 = *(i_7 + rcx_4)
            
            if (0f >= zmm2)
                zmm2 = (zx.o(0)).d
            else if (not(zmm2 < 10f))
                zmm2 = 10f
            else if (zmm2 <= 1f)
                zmm2 = (zx.o(0)).d
            else
                zmm2 = zmm2 - 1f
            
            *i_7 = zmm2
            zmm0 = *(i_7 + rcx_4 + 4)
            
            if (0f f>= zmm0.d)
                zmm0 = zx.o(0)
            else if (not(zmm0.d f< 10f))
                zmm0 = 0x41200000
            else if (zmm0.d f<= 1f)
                zmm0 = zx.o(0)
            else
                zmm0.d = zmm0.d f- 1f
            
            *(i_7 + 4) = zmm0.d
            zmm0 = *(i_7 + rcx_4 + 8)
            
            if (0f f>= zmm0.d)
                zmm0 = zx.o(0)
            else if (not(zmm0.d f< 10f))
                zmm0 = 0x41200000
            else if (zmm0.d f<= 1f)
                zmm0 = zx.o(0)
            else
                zmm0.d = zmm0.d f- 1f
            
            *(i_7 + 8) = zmm0.d
            i_7 += 0x10
            i = i_8
            i_8 -= 1
        while (i != 1)
    
    if (rsi_2 s< i_11)
        i_7 = arg4 + (rsi_2 << 2)
        int64_t i_13 = i_11 - rsi_2
        int64_t i_1
        
        do
            zmm0 = *(i_7 + arg3 - arg4)
            
            if (0f f>= zmm0.d)
                zmm0 = zx.o(0)
            else if (not(zmm0.d f< 10f))
                zmm0 = 0x41200000
            else if (zmm0.d f<= 1f)
                zmm0 = zx.o(0)
            else
                zmm0.d = zmm0.d f- 1f
            
            *i_7 = zmm0.d
            i_7 += 4
            i_1 = i_13
            i_13 -= 1
        while (i_1 != 1)
else if (i_7.d == 0x20)
    int64_t rsi_1 = 0
    int32_t zmm3 = (zx.o(0)).d
    int32_t rcx = 0
    uint32_t rdi_1 = 0
    
    if (i_14.d s>= 4)
        void* rdx = arg3 + 8
        i_7 = zx.q(((i_14 - 4).d u>> 2) + 1)
        uint64_t i_9 = zx.q(i_7.d)
        rdi_1 = (i_7 << 2).d
        uint64_t i_2
        
        do
            zmm0 = *(rdx - 8)
            
            if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
                rcx += 1
                zmm3 = zmm3 f+ zmm0.d
            
            zmm0 = *(rdx - 4)
            
            if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
                rcx += 1
                zmm3 = zmm3 f+ zmm0.d
            
            zmm0 = *rdx
            
            if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
                rcx += 1
                zmm3 = zmm3 f+ zmm0.d
            
            zmm0 = *(rdx + 4)
            
            if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
                rcx += 1
                zmm3 = zmm3 f+ zmm0.d
            
            rdx += 0x10
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
    
    if (rdi_1 s< i_14.d)
        void* rdx_1 = arg3 + (sx.q(rdi_1) << 2)
        i_7 = zx.q(i_14.d - rdi_1)
        uint64_t i_3
        
        do
            zmm0 = *rdx_1
            
            if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
                rcx += 1
                zmm3 = zmm3 f+ zmm0.d
            
            rdx_1 += 4
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    if (rcx == 0)
        if (i_11 s>= 4)
            void* rdx_3 = arg3 - arg4
            int64_t i_10 = ((i_11 - 4) u>> 2) + 1
            void* rcx_1 = arg4 + 4
            rsi_1 = i_10 << 2
            int64_t i_4
            
            do
                *(rcx_1 - 4) = *(rdx_3 + rcx_1 - 4)
                *rcx_1 = *(rdx_3 + rcx_1)
                *(rcx_1 + 4) = *(rdx_3 + rcx_1 + 4)
                i_7 = zx.q(*(rdx_3 + rcx_1 + 8))
                *(rcx_1 + 8) = i_7.d
                rcx_1 += 0x10
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
        
        if (rsi_1 s< i_11)
            int32_t* rcx_2 = arg4 + (rsi_1 << 2)
            int64_t i_12 = i_11 - rsi_1
            int32_t rax_7
            int64_t i_5
            
            do
                rax_7 = *(rcx_2 + arg3 - arg4)
                *rcx_2 = rax_7
                rcx_2 = &rcx_2[1]
                i_5 = i_12
                i_12 -= 1
            while (i_5 != 1)
            return rax_7
    else if (i_11 s> 0)
        float* rbx_1 = arg4 - arg3
        int64_t i_6
        
        do
            zmm2 = *arg3
            
            if (0f >= zmm2)
                *(rbx_1 + arg3) = 0
            else if (not(zmm2 < 10f))
                *(rbx_1 + arg3) = 0x41200000
            else if (sx.q(rcx) != 1)
                i_7 = zx.q(rcx - 1)
                float zmm1 =
                    (zmm3 - zmm2) f/ _mm_cvtepi32_ps(zx.o(i_7.d)).d * 0.25f + zmm2 * 0.75f - 1f
                *(rbx_1 + arg3) = zmm1
                
                if (not(0f < zmm1))
                    *(rbx_1 + arg3) = 0
            else if (0f >= zmm2)
                *(rbx_1 + arg3) = 0
            else if (not(zmm2 < 10f))
                *(rbx_1 + arg3) = 0x41200000
            else if (zmm2 <= 1f)
                *(rbx_1 + arg3) = 0
            else
                *(rbx_1 + arg3) = zmm2 - 1f
            
            arg3 += 4
            i_6 = i_11
            i_11 -= 1
        while (i_6 != 1)
return i_7
