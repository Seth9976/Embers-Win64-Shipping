// 函数: sub_1420dd830
// 地址: 0x1420dd830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13
int32_t* var_28 = r13
void* rcx = *(arg1 + 0x140)
int128_t zmm6 = zx.o(0)
float var_108
uint64_t var_f8
uint128_t zmm0
int64_t zmm1
uint128_t zmm2

if (rcx != 0)
    zmm1 = *arg2
    
    if (zmm1.d f!= 0f || 0f f!= *(arg2 + 4) || not(0f f== arg2[1].d))
        if (*(rcx + 8) != 0)
            if (arg3 == 0)
                int32_t rax_3 = arg2[1].d
                uint64_t var_e0 = *arg2
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_5
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_5.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
                        void var_78
                        void** rax_6 = sub_1420e0740(&var_78, nullptr, 0xff)
                        void* rcx_4 = *rax_6
                        *(rcx_4 + 0x10) = rcx.o
                        *(rcx_4 + 0x20) = rax_3.q
                        void* rcx_5 = *rax_6
                        int32_t r8 = rax_6[2].d
                        int64_t* rdx_3 = rax_6[1]
                        int64_t* rbx_1 = *(rcx_5 + 0x30)
                        int64_t* arg_10 = rbx_1
                        void* rdi_1 = &rbx_1[9]
                        
                        if (rbx_1 != 0)
                            *rdi_1 += 1
                            rbx_1 = arg_10
                        
                        zmm6 = sub_140778000(rcx_5, rdx_3, r8, 1)
                        
                        if (rbx_1 != 0)
                            int32_t rax_7 = *rdi_1
                            *rdi_1 -= 1
                            
                            if (rax_7 == 1)
                                zmm6 = sub_140a2f6e0(arg_10)
                    else
                        uint128_t var_a8 = rcx.o
                        int64_t var_98_1 = rax_3.q
                        sub_1422901b0(var_a8.q, &var_a8:8)
                else
                    sub_1422901b0(rcx, &var_e0)
        else if ((*(arg1 + 0x1f5) & 0x40) != 0)
            zmm2 = zx.o(*(arg1 + 0x1f0))
            var_f8 = *(arg1 + 0x1e8)
            uint64_t rax_1 = var_f8
            zmm0 = _mm_cvtepi32_ps(zx.o(var_f8.d))
            zmm2 = _mm_cvtepi32_ps(zmm2)
            zmm1.d = zmm1.d f- zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o((rax_1 u>> 0x20).d))
            var_108 = zmm1.d
            zmm1.d = (*(arg2 + 4)).d f- zmm0.d
            zmm0.d = arg2[1].d.d f- zmm2.d
            int32_t var_104_1 = zmm1.d
            int32_t var_100_1 = zmm0.d
            sub_1422901b0(rcx, &var_108)

void* rcx_7 = *(arg1 + 0x148)

if (rcx_7 != 0)
    zmm1 = *arg2
    
    if (zmm1.d f!= zmm6.d || zmm6.d f!= *(arg2 + 4) || not(zmm6.d f== arg2[1].d))
        if (*(rcx_7 + 8) != 0)
            if (arg3 == 0)
                int32_t rax_10 = arg2[1].d
                uint64_t var_c8 = *arg2
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_12
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_12.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_12.b == 0))
                        void var_60
                        void** rax_13 = sub_1420e05f0(&var_60, nullptr, 0xff)
                        void* rcx_11 = *rax_13
                        *(rcx_11 + 0x10) = rcx_7.o
                        *(rcx_11 + 0x20) = rax_10.q
                        void* rcx_12 = *rax_13
                        int32_t r8_1 = rax_13[2].d
                        int64_t* rdx_7 = rax_13[1]
                        int64_t* rbx_2 = *(rcx_12 + 0x30)
                        int64_t* arg_20 = rbx_2
                        void* rdi_2 = &rbx_2[9]
                        
                        if (rbx_2 != 0)
                            *rdi_2 += 1
                            rbx_2 = arg_20
                        
                        zmm6 = sub_140778000(rcx_12, rdx_7, r8_1, 1)
                        
                        if (rbx_2 != 0)
                            int32_t r15_1 = *rdi_2
                            *rdi_2 -= 1
                            
                            if (r15_1 == 1)
                                zmm6 = sub_140a2f6e0(arg_20)
                    else
                        uint128_t var_90 = rcx_7.o
                        int64_t var_80_1 = rax_10.q
                        sub_1422901e0(var_90.q, &var_90:8)
                else
                    sub_1422901e0(rcx_7, &var_c8)
        else if ((*(arg1 + 0x1f5) & 0x40) != 0)
            zmm2 = zx.o(*(arg1 + 0x1f0))
            var_108.q = *(arg1 + 0x1e8)
            int64_t rax_8 = var_108.q
            zmm0 = _mm_cvtepi32_ps(zx.o(var_108))
            zmm2 = _mm_cvtepi32_ps(zmm2)
            zmm1.d = zmm1.d f- zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o((rax_8 u>> 0x20).d))
            var_f8.d = zmm1.d
            zmm1.d = (*(arg2 + 4)).d f- zmm0.d
            zmm0.d = arg2[1].d.d f- zmm2.d
            var_f8:4.d = zmm1.d
            int32_t var_f0_1 = zmm0.d
            sub_1422901e0(rcx_7, &var_f8)

int32_t rdi_4 = 0
int32_t i = 0

if (*(arg1 + 0xa0) s> 0)
    int64_t* r15_2 = nullptr
    
    do
        int64_t* rcx_14 = *(r15_2 + *(arg1 + 0x98))
        
        if (rcx_14 != 0)
            int64_t* rax_15
            
            if (arg3 != 0)
                rax_15 = &data_143dbb1f8
            
            if (arg3 == 0 || (*(rcx_14 + 0x5a) & 0x10) == 0)
                rax_15 = arg2
            
            zmm0 = zx.o(*rax_15)
            int32_t var_b0_1 = rax_15[1].d
            int64_t rax_17 = *rcx_14
            uint64_t var_b8 = zmm0.q
            (*(rax_17 + 0x3b0))(zmm0, &var_b8, zx.q(arg3))
        
        i += 1
        r15_2 = &r15_2[1]
    while (i s< *(arg1 + 0xa0))

int32_t i_1 = 0

if (*(arg1 + 0xd0) s> 0)
    int64_t* r15_3 = nullptr
    
    do
        int64_t* rcx_15 = *(r15_3 + *(arg1 + 0xc8))
        (*(*rcx_15 + 0x3d8))(rcx_15, arg2, zx.q(arg3))
        i_1 += 1
        r15_3 = &r15_3[1]
    while (i_1 s< *(arg1 + 0xd0))

if (zmm6.d f!= *arg2 || zmm6.d f!= *(arg2 + 4) || not(zmm6.d f== arg2[1].d))
    void*** rax_20 = sub_141f88540()
    void** r9_3 = *rax_20
    r9_3[0xb](rax_20, arg1, arg2, r9_3)

int64_t rax_21 = *(arg1 + 0xb8)
r13.b = 0
int32_t rdx_11 = data_143a30748
int32_t rcx_18 = data_143a30754 + 1
data_143a30754 = rcx_18
int32_t result = rdx_11 - 1
int64_t result_1 = sx.q(result)

if (result s>= 0)
    int64_t rbx_4 = result_1 << 4
    int64_t result_2
    
    do
        int64_t rcx_19 = data_143a30740
        
        if (*(rbx_4 + rcx_19 + 8) == 0)
            r13.b = 1
        else
            int64_t* rcx_20 = *(rbx_4 + rcx_19)
            
            if (rcx_20 == 0)
                r13.b = 1
            else
                result = (*(*rcx_20 + 0x50))(rcx_20, arg1, rax_21, arg2, arg3)
                
                if (result.b == 0)
                    r13.b = 1
        
        rbx_4 -= 0x10
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)
    rcx_18 = data_143a30754
    rdi_4 = 0
    rdx_11 = data_143a30748

data_143a30754 = rcx_18 - 1

if (r13.b != 0 && rcx_18 - 1 s<= 0)
    int32_t rsi_1 = rdx_11
    
    if (rdx_11 s> 0)
        int64_t* rbx_5 = nullptr
        
        do
            int64_t rcx_22 = data_143a30740
            
            if (*(rbx_5 + rcx_22 + 8) == 0)
                sub_1405a4880(&data_143a30740, rdi_4, 1, 1)
            else
                int64_t* rcx_23 = *(rbx_5 + rcx_22)
                
                if (rcx_23 == 0)
                    sub_1405a4880(&data_143a30740, rdi_4, 1, 1)
                else if ((*(*rcx_23 + 0x20))(rcx_23) != 0)
                    sub_1405a4880(&data_143a30740, rdi_4, 1, 1)
                else
                    rdi_4 += 1
                    rbx_5 = &rbx_5[2]
            
            rdx_11 = data_143a30748
        while (rdi_4 s< rdx_11)
    
    result = rdx_11 * 2
    
    if (result s<= 2)
        result = 2
    
    data_143a30750 = result
    
    if (rsi_1 s> result && data_143a3074c != rdx_11)
        return sub_1405a5410(&data_143a30740, rdx_11)

return result
