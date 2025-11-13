// 函数: sub_14266ef50
// 地址: 0x14266ef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi
void* const var_18 = rdi
int32_t i = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int128_t* r8 = arg1
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_1 = result.d
int32_t var_40
int128_t zmm0
int128_t zmm1
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    var_40 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< i)
            uint64_t rbx_1
            
            do
                int32_t r15_1 = r12_1 * 2
                rbx_1 = zx.q(r15_1 + 1)
                
                if ((rbx_1 + 1).d s< i)
                    int32_t rdx_1 = *(&r8[(sx.q(r15_1) + 2) * 2] + 8)
                    
                    if (rdx_1 == 0 || *(&r8[sx.q(rbx_1.d) * 2] + 8) == 0)
                        rdi.b = rdx_1 s<= *(&r8[sx.q(rbx_1.d) * 2] + 8)
                    else
                        void* r14_1 = r8[(sx.q(r15_1) + 2) * 2].q
                        void* rbp_1 = r8[sx.q(rbx_1.d) * 2].q
                        void* rax_6 = sub_140d3c6e0(r14_1 + 0x14)
                        rdi = rax_6
                        
                        if (rax_6 == 0)
                            rdi = nullptr
                        else
                            void* rax_7 = sub_1425492f0()
                            
                            if (rax_7 == 0)
                                rdi = nullptr
                            else
                                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                                
                                if (rax_8.d s> *(rdi + 0x38)
                                        || *(*(rdi + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                    rdi = nullptr
                        
                        rdi.b = rdi != 0
                        int64_t rax_10 = sub_140d3c6e0(rbp_1 + 0x14)
                        void* const rsi_1 = rax_10
                        
                        if (rax_10 == 0)
                            rsi_1 = nullptr
                        else
                            rax_10 = sub_1425492f0()
                            
                            if (rax_10 == 0)
                                rsi_1 = nullptr
                            else
                                int64_t rdx_3 = rax_10 + 0x30
                                rax_10 = sx.q(*(rax_10 + 0x38))
                                
                                if (rax_10.d s> *(rsi_1 + 0x38))
                                    rsi_1 = nullptr
                                else if (*(*(rsi_1 + 0x30) + (rax_10 << 3)) != rdx_3)
                                    rsi_1 = nullptr
                        
                        r8 = arg1
                        rax_10.b = rsi_1 != 0
                        
                        if (rdi.b == rax_10.b)
                            zmm0 = *(r14_1 + 4)
                            zmm1 = *(rbp_1 + 4)
                            
                            if (zmm0.d f== zmm1.d)
                                zmm0 = *(r14_1 + 8)
                                float temp3_1 = *(rbp_1 + 8)
                                zmm0.d f- temp3_1
                                rdi.b = zmm0.d f< temp3_1
                            else
                                rdi.b = zmm1.d f> zmm0.d
                    
                    if (rdi.b != 0)
                        rbx_1 = zx.q(r15_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* r15_4 = &r8[sx.q(r12_1) * 2]
                int128_t* r14_4 = &r8[sx.q(rbx_1.d) * 2]
                int32_t rax_11 = *(r15_4 + 8)
                
                if (rax_11 == 0 || *(r14_4 + 8) == 0)
                    rdi.b = rax_11 s<= *(r14_4 + 8)
                else
                    void* r13 = *r15_4
                    void* rbp_2 = *r14_4
                    void* rax_12 = sub_140d3c6e0(r13 + 0x14)
                    rdi = rax_12
                    
                    if (rax_12 == 0)
                        rdi = nullptr
                    else
                        void* rax_13 = sub_1425492f0()
                        
                        if (rax_13 == 0)
                            rdi = nullptr
                        else
                            int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                            
                            if (rax_14.d s> *(rdi + 0x38)
                                    || *(*(rdi + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                                rdi = nullptr
                    
                    rdi.b = rdi != 0
                    int64_t rax_16 = sub_140d3c6e0(rbp_2 + 0x14)
                    void* const rsi_2 = rax_16
                    
                    if (rax_16 == 0)
                        rsi_2 = nullptr
                    else
                        rax_16 = sub_1425492f0()
                        
                        if (rax_16 == 0)
                            rsi_2 = nullptr
                        else
                            int64_t rdx_5 = rax_16 + 0x30
                            rax_16 = sx.q(*(rax_16 + 0x38))
                            
                            if (rax_16.d s> *(rsi_2 + 0x38))
                                rsi_2 = nullptr
                            else if (*(*(rsi_2 + 0x30) + (rax_16 << 3)) != rdx_5)
                                rsi_2 = nullptr
                    
                    r8 = arg1
                    rax_16.b = rsi_2 != 0
                    
                    if (rdi.b == rax_16.b)
                        zmm0 = *(r13 + 4)
                        zmm1 = *(rbp_2 + 4)
                        
                        if (zmm0.d f== zmm1.d)
                            zmm0 = *(r13 + 8)
                            float temp2_1 = *(rbp_2 + 8)
                            zmm0.d f- temp2_1
                            i = arg2
                            rdi.b = zmm0.d f< temp2_1
                        else
                            i = arg2
                            rdi.b = zmm1.d f> zmm0.d
                    else
                        i = arg2
                
                if (rdi.b == 0)
                    break
                
                if (r15_4 != r14_4)
                    zmm2 = *r15_4
                    zmm3 = r15_4[1]
                    *r15_4 = *r14_4
                    r15_4[1] = r14_4[1]
                    *r14_4 = zmm2
                    r14_4[1] = zmm3
                
                r12_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< i)
            result = zx.q(result_1)
            rcx = var_40
        
        result = zx.q(result.d - 1)
        rcx -= 2
        result_1 = result.d
        var_40 = rcx
    while (result.d s>= 0)

int32_t i_1 = i - 1
int32_t i_2 = i_1

if (i_1 s> 0)
    result = &r8[sx.q(i_1) * 2]
    var_40.q = result
    
    do
        if (r8 != result)
            zmm2 = *r8
            zmm3 = r8[1]
            *r8 = *result
            r8[1] = *(result + 0x10)
            *result = zmm2
            *(result + 0x10) = zmm3
        
        int32_t r12_2 = 0
        
        if (i_1 s> 1)
            uint64_t rbx_2
            
            do
                int32_t r15_5 = r12_2 * 2
                rbx_2 = zx.q(r15_5 + 1)
                
                if ((rbx_2 + 1).d s< i_1)
                    int64_t* rcx_14 = (sx.q(r15_5) + 2) << 5
                    int64_t* rax_22 = sx.q(rbx_2.d) << 5
                    int32_t rdx_6 = *(rcx_14 + r8 + 8)
                    
                    if (rdx_6 == 0 || *(rax_22 + r8 + 8) == 0)
                        rdi.b = rdx_6 s<= *(rax_22 + r8 + 8)
                    else
                        void* r14_5 = *(rcx_14 + r8)
                        void* rbp_3 = *(rax_22 + r8)
                        void* rax_23 = sub_140d3c6e0(r14_5 + 0x14)
                        rdi = rax_23
                        
                        if (rax_23 == 0)
                            rdi = nullptr
                        else
                            void* rax_24 = sub_1425492f0()
                            
                            if (rax_24 == 0)
                                rdi = nullptr
                            else
                                int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                                
                                if (rax_25.d s> *(rdi + 0x38)
                                        || *(*(rdi + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                                    rdi = nullptr
                        
                        rdi.b = rdi != 0
                        int64_t rax_27 = sub_140d3c6e0(rbp_3 + 0x14)
                        void* const rsi_3 = rax_27
                        
                        if (rax_27 == 0)
                            rsi_3 = nullptr
                        else
                            rax_27 = sub_1425492f0()
                            
                            if (rax_27 == 0)
                                rsi_3 = nullptr
                            else
                                int64_t rdx_8 = rax_27 + 0x30
                                rax_27 = sx.q(*(rax_27 + 0x38))
                                
                                if (rax_27.d s> *(rsi_3 + 0x38))
                                    rsi_3 = nullptr
                                else if (*(*(rsi_3 + 0x30) + (rax_27 << 3)) != rdx_8)
                                    rsi_3 = nullptr
                        
                        r8 = arg1
                        rax_27.b = rsi_3 != 0
                        
                        if (rdi.b == rax_27.b)
                            zmm0 = *(r14_5 + 4)
                            zmm1 = *(rbp_3 + 4)
                            
                            if (zmm0.d f== zmm1.d)
                                zmm0 = *(r14_5 + 8)
                                float temp5_1 = *(rbp_3 + 8)
                                zmm0.d f- temp5_1
                                rdi.b = zmm0.d f< temp5_1
                            else
                                rdi.b = zmm1.d f> zmm0.d
                    
                    if (rdi.b != 0)
                        rbx_2 = zx.q(r15_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* r15_8 = &r8[sx.q(r12_2) * 2]
                int128_t* r14_8 = &r8[sx.q(rbx_2.d) * 2]
                int32_t rax_28 = *(r15_8 + 8)
                
                if (rax_28 == 0 || *(r14_8 + 8) == 0)
                    rdi.b = rax_28 s<= *(r14_8 + 8)
                else
                    void* r13_1 = *r15_8
                    void* rbp_4 = *r14_8
                    void* rax_29 = sub_140d3c6e0(r13_1 + 0x14)
                    rdi = rax_29
                    
                    if (rax_29 == 0)
                        rdi = nullptr
                    else
                        void* rax_30 = sub_1425492f0()
                        
                        if (rax_30 == 0)
                            rdi = nullptr
                        else
                            int64_t rax_31 = sx.q(*(rax_30 + 0x38))
                            
                            if (rax_31.d s> *(rdi + 0x38)
                                    || *(*(rdi + 0x30) + (rax_31 << 3)) != rax_30 + 0x30)
                                rdi = nullptr
                    
                    rdi.b = rdi != 0
                    int64_t rax_33 = sub_140d3c6e0(rbp_4 + 0x14)
                    void* const rsi_4 = rax_33
                    
                    if (rax_33 == 0)
                        rsi_4 = nullptr
                    else
                        rax_33 = sub_1425492f0()
                        
                        if (rax_33 == 0)
                            rsi_4 = nullptr
                        else
                            int64_t rdx_10 = rax_33 + 0x30
                            rax_33 = sx.q(*(rax_33 + 0x38))
                            
                            if (rax_33.d s> *(rsi_4 + 0x38))
                                rsi_4 = nullptr
                            else if (*(*(rsi_4 + 0x30) + (rax_33 << 3)) != rdx_10)
                                rsi_4 = nullptr
                    
                    r8 = arg1
                    rax_33.b = rsi_4 != 0
                    
                    if (rdi.b == rax_33.b)
                        zmm0 = *(r13_1 + 4)
                        zmm1 = *(rbp_4 + 4)
                        
                        if (zmm0.d f== zmm1.d)
                            zmm0 = *(r13_1 + 8)
                            float temp4_1 = *(rbp_4 + 8)
                            zmm0.d f- temp4_1
                            i_1 = i_2
                            rdi.b = zmm0.d f< temp4_1
                        else
                            i_1 = i_2
                            rdi.b = zmm1.d f> zmm0.d
                    else
                        i_1 = i_2
                
                if (rdi.b == 0)
                    break
                
                if (r15_8 != r14_8)
                    zmm2 = *r15_8
                    zmm3 = *(r15_8 + 0x10)
                    *r15_8 = *r14_8
                    *(r15_8 + 0x10) = r14_8[1]
                    *r14_8 = zmm2
                    r14_8[1] = zmm3
                
                r12_2 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i_1)
            result = var_40.q
        
        i_1 -= 1
        result -= 0x20
        i_2 = i_1
        var_40.q = result
    while (i_1 s> 0)

return result
