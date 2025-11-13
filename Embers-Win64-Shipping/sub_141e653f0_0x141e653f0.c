// 函数: sub_141e653f0
// 地址: 0x141e653f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = nullptr
uint32_t zmm6[0x4] = zx.o(0)
int32_t* var_48 = nullptr
int32_t var_3c = 0
int64_t i_3 = sx.q(*(*arg1 + 0x38))
int32_t var_40 = i_3.d

if (i_3.d s> 0)
    sub_1406105e0(&var_48)
    rsi = var_48

memset(rsi, 0, i_3 << 2)
int32_t result = arg1[1].d
int32_t r12 = 0
uint32_t zmm0_1[0x4]

if (result s> 0)
    int64_t r8_1 = 0
    int32_t result_1
    
    do
        int64_t rax_1 = *arg1
        zmm0_1 = *(rax_1 + r8_1 + 0x10)
        
        if (zmm0_1[0] f>= 0f)
            zmm0_1 = _mm_min_ss(zmm0_1[0], 0x3f800000)
        else
            zmm0_1 = zx.o(0)
        
        bool cond:0_1 = *(rax_1 + r8_1 + 0x38) s<= 0
        zmm6[0] = zmm6[0] f+ zmm0_1[0]
        
        if (not(cond:0_1))
            int64_t r11_1 = 0
            
            if (i_3 s>= 4)
                void* r9_1 = &rsi[2]
                int64_t i_5 = ((i_3 - 4) u>> 2) + 1
                r11_1 = i_5 << 2
                int64_t i
                
                do
                    void* rdx_2 = -8 - rsi + r9_1
                    zmm0_1 = *(*(*arg1 + r8_1 + 0x30) + rdx_2)
                    zmm0_1[0] = zmm0_1[0] f+ *(r9_1 - 8)
                    *(r9_1 - 8) = zmm0_1[0]
                    zmm0_1 = *(*(*arg1 + r8_1 + 0x30) + rdx_2 + 4)
                    zmm0_1[0] = zmm0_1[0] f+ *(r9_1 - 4)
                    *(r9_1 - 4) = zmm0_1[0]
                    zmm0_1 = *(*(*arg1 + r8_1 + 0x30) + r9_1 + neg.q(rsi))
                    zmm0_1[0] = zmm0_1[0] f+ *r9_1
                    *r9_1 = zmm0_1[0]
                    zmm0_1 = *(*(*arg1 + r8_1 + 0x30) + 4 - rsi + r9_1)
                    zmm0_1[0] = zmm0_1[0] f+ *(r9_1 + 4)
                    *(r9_1 + 4) = zmm0_1[0]
                    r9_1 += 0x10
                    i = i_5
                    i_5 -= 1
                while (i != 1)
            
            if (r11_1 s< i_3)
                void* rdx_3 = &rsi[r11_1]
                int64_t i_4 = i_3 - r11_1
                int64_t i_1
                
                do
                    zmm0_1 = *(*(*arg1 + r8_1 + 0x30) + neg.q(rsi) + rdx_3)
                    zmm0_1[0] = zmm0_1[0] f+ *rdx_3
                    *rdx_3 = zmm0_1[0]
                    rdx_3 += 4
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        
        result_1 = arg1[1].d
        r12 += 1
        r8_1 += 0x40
    while (r12 s< result_1)
    
    result = result_1
    
    if (not(zmm6[0] f<= 9.99999975e-06f))
        zmm6[0] = zmm6[0] f- 1f
        
        if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] f<= 9.99999975e-06f))
            int32_t rdx_4 = 0
            
            if (result_1 s> 0)
                uint32_t zmm1[0x4] = 0x3f800000
                int64_t rcx_10 = 0
                zmm1[0] = 1f f/ zmm6[0]
                
                do
                    int64_t rax_7 = *arg1
                    rcx_10 += 0x40
                    rdx_4 += 1
                    zmm1[0] = zmm1[0] f* *(rcx_10 + rax_7 - 0x30)
                    *(rcx_10 + rax_7 - 0x30) = zmm1[0]
                    result = arg1[1].d
                while (rdx_4 s< result)

if (i_3 s> 0)
    int32_t* rdx_5 = rsi
    int64_t i_2
    
    do
        zmm0_1 = *rdx_5
        
        if (not(zmm0_1[0] f<= 9.99999975e-06f))
            zmm0_1[0] = zmm0_1[0] f- 1f
            
            if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f<= 9.99999975e-06f))
                int32_t r9_3 = 0
                
                if (result s> 0)
                    int64_t r8_2 = 0
                    
                    do
                        r8_2 += 0x40
                        r9_3 += 1
                        void* rcx_12 = *(r8_2 + *arg1 - 0x10) - rsi
                        zmm0_1 = *(rcx_12 + rdx_5)
                        zmm0_1[0] = zmm0_1[0] f/ *rdx_5
                        *(rcx_12 + rdx_5) = zmm0_1[0]
                        result = arg1[1].d
                    while (r9_3 s< result)
        
        rdx_5 = &rdx_5[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
