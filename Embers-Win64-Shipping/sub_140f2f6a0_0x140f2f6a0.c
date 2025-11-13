// 函数: sub_140f2f6a0
// 地址: 0x140f2f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = data_143dbb1f0:4.d
float zmm7[0x4] = data_143dbb1f0.d

if (*(arg1 + 0x2f0) != 0)
    int64_t* rcx = *(arg1 + 0x2e8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2f0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2e8)
        
        float var_98[0x4]
        (*(*rcx_1 + 0x48))(rcx_1, &var_98)
        arg3 = var_98
        *(arg1 + 0x2d0) = arg3

bool cond:1 = *(arg1 + 0x310) == 0
float zmm8[0x4] = *(arg1 + 0x2d8)
float zmm9[0x4] = *(arg1 + 0x2dc)
zmm8[0] = zmm8[0] f+ *(arg1 + 0x2d0)
zmm9[0] = zmm9[0] f+ *(arg1 + 0x2d4)

if (not(cond:1))
    int64_t* rcx_2 = *(arg1 + 0x308)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x310) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x308)
        
        (*(*rcx_3 + 0x48))(rcx_3)
        *(arg1 + 0x300) = arg3[0]

int128_t zmm11 = *(arg1 + 0x300)

if (*(arg1 + 0x328) != 0)
    int64_t* rcx_4 = *(arg1 + 0x320)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        int64_t* rcx_5
        
        if (*(arg1 + 0x328) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(arg1 + 0x320)
        
        (*(*rcx_5 + 0x48))(rcx_5)
        *(arg1 + 0x318) = arg3[0]

int128_t zmm10 = *(arg1 + 0x318)
int64_t rax_10 = *(arg1 + 0x2a8)
int32_t rbp = 0
*(arg1 + 0x2f8) = 0

if ((*rax_10)(arg1 + 0x2a8) s> 0)
    int64_t* rsi_1 = nullptr
    int32_t rax_24
    
    do
        void* r14_1 = *(rsi_1 + *(arg1 + 0x2b8))
        char* rdi_2 = *(r14_1 + 0x10) + 0x1a8
        
        if (*(rdi_2 + 0x10) != 0)
            int64_t* rcx_7 = *(rdi_2 + 8)
            
            if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                int64_t* rcx_8
                
                if (*(rdi_2 + 0x10) == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = *(rdi_2 + 8)
                
                char arg_8
                (*(*rcx_8 + 0x48))(rcx_8, &arg_8)
                *rdi_2 = arg_8
        
        if (*rdi_2 != data_1439ae51d)
            int32_t rcx_9 = *(arg1 + 0x2f8)
            int32_t rax_19 = *(r14_1 + 0x28) + 1
            
            if (rax_19 s>= rcx_9)
                rcx_9 = rax_19
            
            *(arg1 + 0x2f8) = rcx_9
            int32_t rcx_10 = *(arg1 + 0x2fc)
            int32_t rax_21 = *(r14_1 + 0x2c) + 1
            
            if (rax_21 s>= rcx_10)
                rcx_10 = rax_21
            
            *(arg1 + 0x2fc) = rcx_10
            void arg_10
            int64_t* rax_22 = sub_140e13cf0(*(r14_1 + 0x10), &arg_10)
            zmm8[0] = zmm8[0] f+ *rax_22
            zmm9[0] = zmm9[0] f+ *(rax_22 + 4)
            float temp0_1[0x4] = _mm_max_ss(zmm8[0], zmm11.d)
            float temp0_2[0x4] = _mm_max_ss(zmm8[0], zmm11.d)
            float temp0_3[0x4] = _mm_max_ss(zmm9[0], zmm10.d)
            float temp0_4[0x4] = _mm_max_ss(zmm9[0], zmm10.d)
            
            if (not(zmm7[0] >= temp0_1[0]))
                zmm7 = temp0_2
            
            if (not(zmm6[0] >= temp0_4[0]))
                zmm6 = temp0_3
        
        rbp += 1
        rsi_1 = &rsi_1[1]
        rax_24 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (rbp s< rax_24)

arg3 = zx.o(0)
arg3[0] = float.s(*(arg1 + 0x2f8))
float zmm1[0x4] = zx.o(0)
zmm1[0] = float.s(*(arg1 + 0x2fc))
arg3[0] = arg3[0] * zmm7[0]
zmm1[0] = zmm1[0] * zmm6[0]
*arg2 = arg3[0]
arg2[1] = zmm1[0]
return arg2
