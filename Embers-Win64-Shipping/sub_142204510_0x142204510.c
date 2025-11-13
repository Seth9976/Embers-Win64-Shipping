// 函数: sub_142204510
// 地址: 0x142204510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x118) s<= 0 || *(arg2 + 0xf0) == 0 || *(arg2 + 0xf8) == 0)
    return 

int32_t* rax_2 = sub_141fe1890(arg1 + 0x30)
int32_t* rax_4 = sub_141fe1890(arg1 + 0x78)
int16_t* r14_1 = *(arg2 + 0xf8)
int32_t rbp_1 = *(arg2 + 0x114)
int64_t rsi_1 = *(arg2 + 0xf0)
*r14_1

if (rax_2 == 0 || rax_4 == 0)
    int32_t rax_6 = *(arg2 + 0x118)
    int64_t rdi_2 = sx.q(rax_6 - 1)
    
    if (rax_6 - 1 s>= 0)
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        int64_t temp2_1
        
        do
            void* rbx_7 = zx.q(zx.d(r14_1[rdi_2]) * rbp_1) + rsi_1
            
            if ((*(rbx_7 + 0x5c) & 0x4000000) == 0)
                int64_t var_60_1 = 0
                void var_48
                int64_t* rax_7
                int512_t zmm1_1
                int512_t zmm6_1
                rax_7, zmm1_1, zmm6_1 = sub_141fe56b0(arg1 + 0x30, &var_48, *(rbx_7 + 0xc), arg3, 
                    (*(arg2 + 0x18)).d, nullptr)
                zmm1_1.o = *(rbx_7 + 0xc)
                zmm6_1.o = zx.o(*rax_7)
                int32_t rax_8 = rax_7[1].d
                int128_t zmm0_1
                zmm0_1, zmm6 = sub_141fe5610(arg1 + 0x78, zmm1_1, *(arg2 + 0x18), nullptr)
                r14_1[rdi_2 + 1]
                arg3 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                *(rbx_7 + 0x64) = arg3[0]
                *(rbx_7 + 0x60) = zmm6[0]
                *(rbx_7 + 0x68) = rax_8.d
                *(rbx_7 + 0x6c) = zmm0_1.d
            
            temp2_1 = rdi_2
            rdi_2 -= 1
        while (temp2_1 - 1 s>= 0)
else
    int32_t rax_5 = *(arg2 + 0x118)
    int64_t rdi_1 = sx.q(rax_5 - 1)
    
    if (rax_5 - 1 s>= 0)
        int64_t temp3_1
        
        do
            void* rbx_4 = zx.q(zx.d(r14_1[rdi_1]) * rbp_1) + rsi_1
            
            if ((*(rbx_4 + 0x5c) & 0x4000000) == 0)
                sub_141fe52c0(rax_2, *(rbx_4 + 0xc), rbx_4 + 0x60)
                sub_141fe4fb0(rax_4, *(rbx_4 + 0xc), rbx_4 + 0x6c)
            
            temp3_1 = rdi_1
            rdi_1 -= 1
        while (temp3_1 - 1 s>= 0)
