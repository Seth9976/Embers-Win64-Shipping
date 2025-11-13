// 函数: sub_140eeccf0
// 地址: 0x140eeccf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10 = data_143dbb1f0.d
int128_t zmm11 = data_143dbb1f0:4.d

if (*(arg1 + 0x300) != 0)
    int64_t* rcx = *(arg1 + 0x2f8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x300) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2f8)
        
        float var_e8[0x4]
        (*(*rcx_1 + 0x48))(rcx_1, &var_e8)
        arg3 = var_e8
        *(arg1 + 0x2e0) = arg3

bool cond:1 = *(arg1 + 0x330) == 0
float zmm12[0x4] = *(arg1 + 0x2e8)
float zmm13[0x4] = *(arg1 + 0x2ec)
zmm12[0] = zmm12[0] f+ *(arg1 + 0x2e0)
zmm13[0] = zmm13[0] f+ *(arg1 + 0x2e4)
int64_t arg_8

if (not(cond:1))
    int64_t* rcx_2 = *(arg1 + 0x328)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x330) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x328)
        
        (*(*rcx_3 + 0x48))(rcx_3, &arg_8)
        arg3 = zx.o(arg_8)
        *(arg1 + 0x318) = arg3.q

int128_t zmm14 = *(arg1 + 0x318)
int128_t zmm15 = *(arg1 + 0x31c)

if (*(arg1 + 0x348) != 0)
    int64_t* rcx_4 = *(arg1 + 0x340)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        int64_t* rcx_5
        
        if (*(arg1 + 0x348) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(arg1 + 0x340)
        
        (*(*rcx_5 + 0x48))(rcx_5)
        *(arg1 + 0x338) = arg3[0]

int128_t zmm9 = *(arg1 + 0x338)

if (*(arg1 + 0x360) != 0)
    int64_t* rcx_6 = *(arg1 + 0x358)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (*(arg1 + 0x360) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x358)
        
        (*(*rcx_7 + 0x48))(rcx_7)
        *(arg1 + 0x350) = arg3[0]

int128_t zmm8 = *(arg1 + 0x350)
int32_t r14 = 0
float zmm6[0x4] = zx.o(0)
int32_t rax_14 = (**(arg1 + 0x2b8))(arg1 + 0x2b8)
int64_t rdx_2 = *(arg1 + 0x2b8)
int32_t rax_15 = (*rdx_2)(arg1 + 0x2b8, rdx_2)
float zmm3[0x4]

if (rax_14 - 1 s> 0)
    int64_t i = 0
    
    do
        void* rbp_1 = *(*(arg1 + 0x2c8) + (i << 3))
        char* rbx_2 = *(rbp_1 + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_11 = *(rbx_2 + 8)
            
            if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                int64_t* rcx_12
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *(rbx_2 + 8)
                
                (*(*rcx_12 + 0x48))(rcx_12, &arg_8)
                *rbx_2 = arg_8.b
        
        if (*rbx_2 != data_1439ae51d)
            void arg_10
            int32_t* rax_21 = sub_140e13cf0(*(rbp_1 + 0x10), &arg_10)
            bool cond:6_1 = *(arg1 + 0x310) != 0
            zmm12[0] = zmm12[0] f+ *rax_21
            zmm13[0] = zmm13[0] f+ rax_21[1]
            float temp0_1[0x4] = _mm_max_ss(zmm12[0], zmm14.d)
            float temp0_2[0x4] = _mm_max_ss(zmm13[0], zmm15.d)
            
            if (cond:6_1)
                arg3 = temp0_2
                zmm3 = temp0_1
            else
                arg3 = temp0_1
                zmm3 = temp0_2
            
            if ((zmm9.d f<= 0f || not(arg3[0] f> zmm9.d)) && (zmm8.d f<= 0f || arg3[0] f>= zmm8.d))
                r14 += 1
                *(arg1 + 0x308) = __maxss_xmmss_memss(arg3[0], *(arg1 + 0x308))[0]
            else
                zmm10.d = zmm10.d f+ temp0_1[0]
                zmm11.d = zmm11.d f+ temp0_2[0]
            
            if (not(zmm6[0] >= zmm3[0]))
                zmm6 = zmm3
        
        i += 1
    while (i s< sx.q(rax_14 - 1))

zmm3 = data_143dbb1f0.d
float zmm4 = data_143dbb1f0:4.d

if (*(arg1 + 0x30c) != 0xffffffff)
    float (* rax_22)[0x4] = sub_140e13cf0(*(arg1 + 0x2a8), &arg_8)
    zmm3 = *rax_22
    zmm4 = (*rax_22)[1]

bool cond:5 = *(arg1 + 0x310) != 0
float zmm2[0x4] = _mm_cvtepi32_ps(zx.o(rax_15))
float zmm1[0x4] = _mm_cvtepi32_ps(zx.o(r14))
zmm2[0] = zmm2[0] * zmm6[0]
zmm1[0] = zmm1[0] f* *(arg1 + 0x308)

if (cond:5)
    zmm1[0] = zmm1[0] f+ zmm11.d
    arg3 = zmm1
    zmm1 = zmm2
    zmm2 = arg3
else
    zmm1[0] = zmm1[0] f+ zmm10.d

zmm1[0] = zmm1[0] + zmm3[0]
zmm2[0] = zmm2[0] + zmm4
*arg2 = zmm1[0]
arg2[1] = zmm2[0]
return arg2
