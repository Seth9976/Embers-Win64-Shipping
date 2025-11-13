// 函数: sub_1408a3600
// 地址: 0x1408a3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = arg2
uint128_t zmm5 = arg3
uint32_t zmm7[0x4] = arg2

if (zmm7[0] f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

int32_t r11 = int.d(zmm0.d)

if (zmm5.d f< 0f)
    zmm0.d = zmm5.d f- 0.5f
else
    zmm0.d = zmm5.d f+ 0.5f

int32_t rcx = *(arg1 + 0x424)
uint32_t zmm4[0x4] = 0x497423f0
int32_t i_6 = 0
int32_t j_4 = 0
uint32_t zmm6[0x4]
uint32_t var_28[0x4] = zmm6
int32_t rbx = int.d(zmm0.d)
uint32_t zmm3[0x4]

if (rcx == 0)
label_1408a387d:
    
    for (int32_t i = r11 - 1; i s<= r11 + 1; i += 1)
        int32_t j = rbx - 1
        
        if (rbx - 1 s<= rbx + 1)
            zmm3 = *(arg1 + 0x440)
            zmm6 = _mm_cvtepi32_ps(zx.o(i))
            
            do
                zmm0.d = zmm6.d f- zmm7[0]
                uint64_t rcx_8 = zx.q(*(zx.q(zx.d(*(zx.q(j.b) + arg1)) + zx.d(i.b)) + arg1))
                int32_t j_3 = j
                arg3.d = zmm3.d f* *((rcx_8 << 2) + 0x142dfd650)
                zmm3[0] = zmm3[0] f* *((rcx_8 << 2) + 0x142dfd250)
                zmm3[0] = zmm3[0] f+ zmm0.d
                zmm0 = _mm_cvtepi32_ps(zx.o(j))
                zmm3[0] = zmm3[0] f* zmm3[0]
                zmm0.d = zmm0.d f- zmm5.d
                arg3.d = arg3.d f+ zmm0.d
                arg3.d = arg3.d f* arg3.d
                arg3.d = arg3.d f+ zmm3[0]
                zmm4[0] f- arg3.d
                bool cond:2_1 = zmm4[0] f<= arg3.d
                bool cond:3_1 = zmm4[0] f<= arg3.d
                arg3 = _mm_min_ss(arg3.d, zmm4[0])
                
                if (cond:2_1)
                    j_3 = j_4
                
                j_4 = j_3
                int32_t i_5 = i
                
                if (cond:3_1)
                    i_5 = i_6
                
                j += 1
                i_6 = i_5
                zmm4 = arg3
            while (j s<= rbx + 1)
else if (rcx == 1)
    for (int32_t i_1 = r11 - 1; i_1 s<= r11 + 1; i_1 += 1)
        int64_t rdx_1 = sx.q(rbx - 1)
        
        if (rdx_1.d s<= rbx + 1)
            zmm3 = *(arg1 + 0x440)
            int64_t rbx_2 = rdx_1
            arg3.d = _mm_cvtepi32_ps(zx.o(i_1)).d f- zmm7[0]
            
            do
                int32_t j_5 = rdx_1.d
                zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1.d)).d f- zmm5.d
                uint64_t rcx_6 = zx.q(*(zx.q(zx.d(*(zx.q(rbx_2.b) + arg1)) + zx.d(i_1.b)) + arg1))
                zmm3[0] = zmm3[0] f* *((rcx_6 << 2) + 0x142dfd650)
                zmm3[0] = zmm3[0] f+ zmm0.d
                zmm0.d = zmm3.d f* *((rcx_6 << 2) + 0x142dfd250)
                arg2 = _mm_and_ps(zmm3, 0x7fffffff)
                zmm0.d = zmm0.d f+ arg3.d
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                arg2[0] = arg2[0] f+ zmm0.d
                zmm4[0] f- arg2[0]
                bool cond:4_1 = zmm4[0] f<= arg2[0]
                bool cond:5_1 = zmm4[0] f<= arg2[0]
                arg2 = _mm_min_ss(arg2[0], zmm4[0])
                
                if (cond:4_1)
                    j_5 = j_4
                
                j_4 = j_5
                int32_t i_4 = i_1
                
                if (cond:5_1)
                    i_4 = i_6
                
                rdx_1 = zx.q(rdx_1.d + 1)
                rbx_2 += 1
                i_6 = i_4
                zmm4 = arg2
            while (rdx_1.d s<= rbx + 1)
else
    if (rcx != 2)
        goto label_1408a387d
    
    int32_t i_2 = r11 - 1
    
    if (i_2 s<= r11 + 1)
        uint128_t zmm8
        uint128_t var_48_1 = zmm8
        
        do
            int32_t j_1 = rbx - 1
            
            if (rbx - 1 s<= rbx + 1)
                zmm6 = *(arg1 + 0x440)
                zmm8 = _mm_cvtepi32_ps(zx.o(i_2))
                
                do
                    zmm0.d = zmm8.d f- zmm7[0]
                    uint64_t rcx_3 = zx.q(*(zx.q(zx.d(*(zx.q(j_1.b) + arg1)) + zx.d(i_2.b)) + arg1))
                    int32_t j_2 = j_1
                    zmm6[0] = zmm6[0] f* *((rcx_3 << 2) + 0x142dfd650)
                    arg3.d = zmm6.d f* *((rcx_3 << 2) + 0x142dfd250)
                    arg3.d = arg3.d f+ zmm0.d
                    zmm0.d = _mm_cvtepi32_ps(zx.o(j_1)).d f- zmm5.d
                    zmm6[0] = zmm6[0] f+ zmm0.d
                    zmm0 = arg3
                    arg3.d = arg3.d f* arg3.d
                    zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                    zmm6[0] = zmm6[0] f* zmm6[0]
                    zmm3 = _mm_and_ps(zmm6, 0x7fffffff)
                    zmm3[0] = zmm3[0] f+ zmm0.d
                    zmm6[0] = zmm6[0] f+ arg3.d
                    zmm3[0] = zmm3[0] f+ zmm6[0]
                    zmm4[0] f- zmm3[0]
                    bool cond:6_1 = zmm4[0] f<= zmm3[0]
                    bool cond:7_1 = zmm4[0] f<= zmm3[0]
                    zmm3 = _mm_min_ss(zmm3[0], zmm4[0])
                    
                    if (cond:6_1)
                        j_2 = j_4
                    
                    j_4 = j_2
                    int32_t i_3 = i_2
                    
                    if (cond:7_1)
                        i_3 = i_6
                    
                    j_1 += 1
                    i_6 = i_3
                    zmm4 = zmm3
                while (j_1 s<= rbx + 1)
            
            i_2 += 1
        while (i_2 s<= r11 + 1)
int32_t rcx_9 = *(arg1 + 0x428)

if (rcx_9 == 0)
    int32_t rcx_17 = (j_4 * 0x7a69) ^ (i_6 * 0x653) ^ *(arg1 + 0x400)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_17 * rcx_17 * rcx_17 * 0xec4d)).d f* 4.65661287e-10f
    return zmm0

if (rcx_9 != 1)
    if (rcx_9 == 2)
        return zmm4
    
    return zx.o(0)

arg2 = *(arg1 + 0x440)
zmm0 = _mm_cvtepi32_ps(zx.o(j_4))
uint64_t rcx_12 = zx.q(*(zx.q(zx.d(*(zx.q(j_4.b) + arg1)) + zx.d(i_6.b)) + arg1))
arg3.d = arg2.d f* *((rcx_12 << 2) + 0x142dfd650)
arg2[0] = arg2[0] f* *((rcx_12 << 2) + 0x142dfd250)
char* rcx_13 = *(arg1 + 0x430)
arg3.d = arg3.d f+ zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(i_6))
arg2[0] = arg2[0] f+ zmm0.d
return sub_1408a21c0(rcx_13, arg2, arg3) __tailcall
