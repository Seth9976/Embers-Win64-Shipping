// 函数: sub_140da9330
// 地址: 0x140da9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = **arg2
int64_t* rdi = *(rdx + 0x78)
char rax_1 = (*(rdx + 8)).b
int32_t rcx

if ((rax_1 & 1) == 0 && (rax_1 & 2) != 0)
    rcx = *(*(rdx + 0x80) + 0x1c)

uint128_t zmm9

if ((rax_1 & 1) != 0 || (rax_1 & 2) == 0 || rcx s>= 0x10000)
    zmm9 = 0x3f800000
else
    zmm9.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* 1.52587891e-05f

int128_t zmm10 = 0x3f000000
uint128_t zmm8
zmm8.d = _mm_cvtepi32_ps(zx.o(*arg4)).d f* arg3.d
zmm8.d = zmm8.d f+ 0.5f
int32_t rcx_1 = int.d(zmm8.d)

if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm8.d))
    zmm8 = _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8, zmm8.q)) & 1)))

int64_t* rbx = arg5
uint128_t zmm7 = zx.o(0)
rbx[3].b = 1
*(rbx + 0x19) = *(rdx + 8) & 1
int64_t* rdi_3
uint128_t zmm0_3
int128_t var_138

if ((zmm8.d f> 0f || data_143e20cec == 1) && rdi[0xc].d == 0x6f75746c)
    int32_t* zmm1 = data_143dbb1f0
    void** rcx_3 = *arg1
    arg5 = zmm1
    uint128_t zmm0 = arg5:4.d
    int32_t var_dc_1 = zmm0.d
    int32_t var_e4_1 = zmm0.d
    int32_t var_e0_1 = zmm1.d
    int32_t var_e8_1 = zmm1.d
    void* var_f8_1 = nullptr
    int32_t var_f0_1 = 0
    char var_d8_1 = 0
    sub_140dbb730(*rcx_3, &rdi[0x13])
    int32_t* zmm1_1 = data_143dbb1f0
    char rax_6 = 0
    void* var_120_1 = nullptr
    int32_t var_118_1 = 0
    char var_100_1 = 0
    int64_t* arg_10 = nullptr
    arg5 = zmm1_1
    int32_t zmm3 = zmm1_1.d
    arg3 = arg5:4.d
    int32_t var_104_1 = arg3.d
    int32_t zmm4_1 = arg3.d
    int32_t var_10c_1 = arg3.d
    int32_t var_108_1 = zmm1_1.d
    int32_t var_110_1 = zmm1_1.d
    arg5 = nullptr
    
    if (not(zmm8.d f<= 0f))
        sub_142b9d850(**arg1, &arg5)
        sub_142b9dc60(arg5, int.d(zmm8.d * 64f), 1, 0, 0)
        sub_142b9bc60(rdi, &arg_10)
        sub_142b9c6e0(&arg_10, arg5, 0, 0)
        sub_140dbb730(**arg1, &arg_10[4])
        rax_6 = var_100_1
        arg3 = var_104_1
        zmm1_1 = var_108_1
        zmm4_1 = var_10c_1
        zmm3 = var_110_1
    
    var_138 = var_e8_1.o
    int128_t zmm0_1
    
    if (var_d8_1 == 0)
        if (rax_6 != 0)
            var_138 = var_110_1.o
    else if (rax_6 != 0)
        zmm0_1 = var_e8_1
        
        if (zmm0_1.d f> zmm3)
            var_138.d = zmm3
        else
            var_138.d = zmm0_1.d
        
        if (not(var_138:4.d.d f<= zmm4_1))
            var_138:4.d = zmm4_1
        
        if (not(var_138:8.d.d f>= zmm1_1.d))
            var_138:8.d = zmm1_1.d
        
        if (not(var_138:0xc.d.d f>= arg3.d))
            var_138:0xc.d = arg3.d
    
    int32_t rax_7 = *(rbx + 0xc)
    arg3.d = var_138:0xc.d.d f- var_138:4.d
    int64_t var_d0_1 = var_138.q
    zmm0_1.d = var_138:8.d.d f- var_138.d
    rbx[1].d = 0
    int32_t rdi_2 = int.d(zmm0_1.d) + 1
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405c5510(rbx, 0)
    
    rbx[2].w = rdi_2.w
    *(rbx + 0x12) = (int.d(arg3.d) + 1).w
    int64_t r12_1 = sx.q(rbx[1].d)
    int32_t r15_1 = (int.d(arg3.d) + 1) * rdi_2
    int32_t rax_8 = r15_1 + r12_1.d
    rbx[1].d = rax_8
    
    if (rax_8 s> *(rbx + 0xc))
        sub_1405daba0(rbx)
    
    memset(r12_1 + *rbx, 0, sx.q(r15_1))
    int32_t r11_1 = int.d(fconvert.t(var_d0_1.d))
    void* i = (sx.q(var_118_1) << 4) + var_120_1
    int32_t r15_2 = int.d(fconvert.t(var_d0_1:4.d))
    
    if (var_120_1 != i)
        int32_t* r8_3 = var_120_1 + 8
        
        do
            int32_t j = 0
            
            if (*r8_3 s> 0)
                do
                    int32_t rcx_21 =
                        (int.d(arg3.d) + r15_2 - r8_3[-1]) * rdi_2 + r8_3[-2] - r11_1 + j
                    j += 1
                    *(sx.q(rcx_21) + *rbx) = r8_3[1].b
                while (j s< *r8_3)
            
            r8_3 = &r8_3[4]
        while (&r8_3[-2] != i)
    
    if (zmm8.d f<= 0f)
        void* i_1 = (sx.q(var_f0_1) << 4) + var_f8_1
        
        if (var_f8_1 != i_1)
            void* r8_7 = var_f8_1 + 8
            
            do
                int32_t j_1 = 0
                
                if (*r8_7 s> 0)
                    do
                        int32_t rcx_35 = (int.d(arg3.d) + r15_2 - *(r8_7 - 4)) * rdi_2 + *(r8_7 - 8)
                            - r11_1 + j_1
                        j_1 += 1
                        *(sx.q(rcx_35) + *rbx) = *(r8_7 + 4)
                    while (j_1 s< *r8_7)
                
                r8_7 += 0x10
            while (r8_7 - 8 != i_1)
    else
        void* i_2 = (sx.q(var_f0_1) << 4) + var_f8_1
        
        if (var_f8_1 != i_2)
            int32_t* r9_1 = var_f8_1 + 8
            
            do
                int32_t j_2 = 0
                
                if (*r9_1 s> 0)
                    do
                        char rax_15 = r9_1[1].b
                        char* r8_5 = sx.q((int.d(arg3.d) + r15_2 - r9_1[-1]) * rdi_2 + r9_1[-2]
                            - r11_1 + j_2) + *rbx
                        
                        if (arg4[1].b == 0)
                            bool cond:7_1 = rax_15 == 0xff
                            rax_15 = 0xff
                            
                            if (not(cond:7_1))
                                rax_15 = *r8_5
                        else if (rax_15 == 0)
                            rax_15 = 0
                        else
                            char temp10_1
                            char temp11_1
                            temp10_1:temp11_1 = sx.q(zx.d(*r8_5) - zx.d(rax_15))
                            rax_15 = (temp11_1 ^ temp10_1) - temp10_1
                        
                        j_2 += 1
                        *r8_5 = rax_15
                    while (j_2 s< *r9_1)
                
                r9_1 = &r9_1[4]
            while (&r9_1[-2] != i_2)
    
    sub_142b9d440(arg5)
    sub_142b9bc20(arg_10)
    int32_t rdx_12 = 2
    rdi_3 = rdi
    
    if (data_1439ae500 != 0)
        rdx_12 = 0
    
    sub_142b95ab0(rdi_3, rdx_12)
    
    if (var_120_1 != 0)
        sub_140a74f90(var_120_1)
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
else
    int32_t rdx_13 = 2
    
    if (data_1439ae500 != 0)
        rdx_13 = 0
    
    sub_142b95ab0(rdi, rdx_13)
    char rax_25 = *(rdi + 0x82)
    int32_t r15_3 = 4
    void* rdi_4 = &rdi[0xd]
    void var_b8
    
    if (rax_25 == 7)
        rbx[3].b = 0
    else if (rax_25 != 2)
        sub_142b9c6b0(&var_b8)
        sub_142b9bfa0(**arg1, rdi_4, &var_b8, 4)
        rdi_4 = &var_b8
    
    if (rbx[3].b != 0)
        r15_3 = 1
    
    int32_t rax_26 = *(rbx + 0xc)
    rbx[1].d = 0
    
    if (rax_26 s< 0 && rax_26 != 0)
        sub_1405c5510(rbx, 0)
    
    int32_t rcx_47 = *(rdi_4 + 4) * *rdi_4 * r15_3 + rbx[1].d
    rbx[1].d = rcx_47
    
    if (rcx_47 s> *(rbx + 0xc))
        sub_1405daba0(rbx)
        rcx_47 = rbx[1].d
    
    if (rcx_47 != 0)
        int32_t i_3 = 0
        
        if (*rdi_4 u> 0)
            do
                int32_t rcx_49 = *(rdi_4 + 4)
                memcpy(sx.q(rcx_49 * i_3 * r15_3) + *rbx, 
                    zx.q(*(rdi_4 + 8) * i_3) + *(rdi_4 + 0x10), rcx_49 * r15_3)
                i_3 += 1
            while (i_3 u< *rdi_4)
        
        if (rbx[3].b != 0)
            int16_t rax_32 = *(rdi_4 + 0x18)
            
            if (rax_32 != 0x100)
                int64_t r9_2 = sx.q(rbx[1].d)
                int64_t r8_11 = 0
                char* rdx_18 = *rbx
                
                if (rdx_18 u> &rdx_18[r9_2])
                    r9_2 = 0
                
                if (r9_2 != 0)
                    do
                        char rcx_57 = *rdx_18
                        rdx_18 = &rdx_18[1]
                        r8_11 += 1
                        rdx_18[-1] = rcx_57 * (divs.dp.d(0:0xff, zx.d(rax_32) - 1)).b
                    while (r8_11 != r9_2)
    
    rbx[2].w = *(rdi_4 + 4)
    *(rbx + 0x12) = *rdi_4
    
    if (rdi_4 == &var_b8)
        sub_142b9c640(**arg1, rdi_4)
    
    if (not(zmm9.d f>= 1f))
        int32_t rcx_61 = sx.d(rbx[2].w)
        int32_t rdx_20 = sx.d(*(rbx + 0x12))
        int64_t* var_140_1 = &var_138
        var_138.q = 0
        zmm0_3 = _mm_cvtepi32_ps(zx.o(rcx_61))
        var_138:8.q = 0
        zmm0_3.d = zmm0_3.d f* zmm9.d
        int32_t rdi_5 = int.d(zmm0_3.d)
        zmm0_3.d = _mm_cvtepi32_ps(zx.o(rdx_20)).d f* zmm9.d
        int32_t rsi_3 = int.d(zmm0_3.d)
        
        if (rbx[3].b == 0)
            zmm7, zmm9, zmm10 = sub_140d904a0(rcx_61, rdx_20, rbx, rdi_5, rsi_3, var_140_1)
        else
            zmm7 = sub_140d90100(rcx_61, rdx_20, rbx, rdi_5, rsi_3, var_140_1)
        
        rbx[2].w = rdi_5.w
        *(rbx + 0x12) = rsi_3.w
        
        if (rbx == &var_138)
            int64_t rcx_63 = var_138.q
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
        else
            int64_t rcx_62 = *rbx
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
            
            *rbx = var_138.q
            rbx[1].d = var_138:8.d
            *(rbx + 0xc) = var_138:0xc.d
    
    rdi_3 = rdi
    zmm8 = zmm7
zmm8.d = zmm8.d f+ zmm8.d
float zmm1_2 = float.s(rdi_3[0x12].d) f* zmm9.d
*(rbx + 0x16) = (int.d(zmm1_2 + zmm1_2 f+ zmm10.d) s>> 1).w
zmm1_2 = float.s(*(rdi_3 + 0x94))
zmm0_3.d = float.s(int.d(zmm1_2 + zmm1_2 f+ zmm8.d f+ zmm10.d) s>> 1)
zmm0_3.d = zmm0_3.d f* zmm9.d
*(rbx + 0x14) = (int.d(zmm0_3.d)).w
int16_t result
result.b = 1
return result
