// 函数: sub_140f2f3a0
// 地址: 0x140f2f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x2a8)
uint128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)
int128_t zmm8 = *(arg1 + 0x304)
int32_t r15 = 0
int32_t rbp = 0
int32_t arg_10
char arg_8
int32_t arg_14
int32_t arg_20
uint128_t zmm0

if (*(arg1 + 0x2d8) != 0)
    arg_10 = 0
    
    if ((*rax)(arg1 + 0x2a8) s> 0)
        void** rsi_2 = nullptr
        int32_t rax_19
        
        do
            void* r14_2 = *(rsi_2 + *(arg1 + 0x2b8))
            char* rbx_4 = *(r14_2 + 0x10) + 0x1a8
            
            if (*(rbx_4 + 0x10) != 0)
                int64_t* rcx_5 = *(rbx_4 + 8)
                
                if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                    int64_t* rcx_6
                    
                    if (*(rbx_4 + 0x10) == 0)
                        rcx_6 = nullptr
                    else
                        rcx_6 = *(rbx_4 + 8)
                    
                    (*(*rcx_6 + 0x48))(rcx_6, &arg_8)
                    *rbx_4 = arg_8
            
            if (*rbx_4 != data_1439ae51d)
                r15 += 1
                sub_140e13cf0(*(r14_2 + 0x10), &arg_20)
                zmm0 = arg_20
                
                if (not(zmm0.d f< zmm6.d))
                    zmm6 = zmm0
                
                zmm7.d = zmm7.d f+ arg3
            
            rbp += 1
            rsi_2 = &rsi_2[1]
            rax_19 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rbp s< rax_19)
        arg_10 = zmm6.d
    
    int32_t rax_20 = r15 - 1
    
    if (rax_20 s<= 0)
        rax_20 = 0
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f* zmm8.d
    zmm7.d = zmm7.d f+ zmm0.d
    arg_14 = zmm7.d
else
    arg_14 = 0
    
    if ((*rax)(arg1 + 0x2a8) s> 0)
        int64_t* rsi_1 = nullptr
        int32_t rax_9
        
        do
            void* r14_1 = *(rsi_1 + *(arg1 + 0x2b8))
            char* rbx_2 = *(r14_1 + 0x10) + 0x1a8
            
            if (*(rbx_2 + 0x10) != 0)
                int64_t* rcx_1 = *(rbx_2 + 8)
                
                if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                    int64_t* rcx_2
                    
                    if (*(rbx_2 + 0x10) == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(rbx_2 + 8)
                    
                    (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                    *rbx_2 = arg_8
            
            if (*rbx_2 != data_1439ae51d)
                r15 += 1
                sub_140e13cf0(*(r14_1 + 0x10), &arg_20)
                zmm0 = arg3
                zmm7.d = zmm7.d f+ arg_20
                
                if (not(zmm0.d f< zmm6.d))
                    zmm6 = zmm0
            
            rbp += 1
            rsi_1 = &rsi_1[1]
            rax_9 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rbp s< rax_9)
        arg_14 = zmm6.d
    
    int32_t rax_10 = r15 - 1
    
    if (rax_10 s<= 0)
        rax_10 = 0
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* zmm8.d
    zmm7.d = zmm7.d f+ zmm0.d
    arg_10 = zmm7.d
*arg2 = arg_10.q
return arg2
