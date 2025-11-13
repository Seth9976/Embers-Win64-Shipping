// 函数: sub_1421eefc0
// 地址: 0x1421eefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int64_t* rcx = *(arg1 + 0x108)
void* r14 = arg3
int64_t* r12 = arg2
void var_78
sub_142076cb0(&var_78, (*(*rcx + 0x240))(rcx), 0, 1, *(arg1 + 0x168) u>> 1 & 1)
int32_t i_2 = 0
int32_t rbx_1 = 1
int32_t arg_8 = 1
int64_t performanceCount
uint128_t performanceCount_2

if (data_143a2ed01 == 0)
    int32_t i = 0
    
    if (r12[1].d s> 0)
        int32_t rdx_1 = 1
        int64_t* r10_1 = nullptr
        
        do
            if ((rdi & rdx_1) != 0)
                int32_t r9_1 = *(r14 + 0x3c)
                
                if (*(arg1 + 0x338) == 0)
                    float zmm3 = *(arg1 + 0xb4)
                    void* rcx_2 = *(r10_1 + *r12)
                    performanceCount_2 = zx.o(*(rcx_2 + 0x60c))
                    float zmm2 = *(arg1 + 0xb0) f- performanceCount_2.d
                    int32_t rax_3 = *(rcx_2 + 0x614)
                    uint128_t performanceCount_4 = performanceCount_2
                    performanceCount = performanceCount_2.q
                    performanceCount_2 = *(arg1 + 0xb8)
                    zmm3 = zmm3 f- _mm_shuffle_ps(performanceCount_4, performanceCount_4, 0x55).d
                    performanceCount_2.d = performanceCount_2.d f- rax_3
                    performanceCount_2.d = performanceCount_2.d f* performanceCount_2.d
                    performanceCount_4.d =
                        _mm_sqrt_ss(0, zmm3 * zmm3 + zmm2 * zmm2 f+ performanceCount_2.d).d f*
                        *(rcx_2 + 0xd5c)
                    
                    if (r9_1 != *(arg1 + 0x344))
                        *(arg1 + 0x344) = r9_1
                        *(arg1 + 0x33c) = performanceCount_4.d
                    else if (not(performanceCount_4.d f>= *(arg1 + 0x33c)))
                        *(arg1 + 0x33c) = performanceCount_4.d
            
            i += 1
            rdx_1 = rol.d(rdx_1, 1)
            r10_1 = &r10_1[1]
        while (i s< r12[1].d)

if ((*(r14 + 0x2c) & 2) != 0)
    if (data_143f50534 != 0)
        QueryPerformanceCounter(&performanceCount)
    
    int32_t* rdx_2 = *(arg1 + 0x178)
    
    if (rdx_2 != 0)
        int32_t i_1 = 0
        int32_t i_3 = 0
        
        if (rdx_2[0x1c] s> 0)
            int64_t performanceCount_1 = 0
            performanceCount = 0
            
            do
                void* rax_4 = *(rdx_2 + 0x68)
                void* rcx_4 = &rdx_2[2]
                
                if (rax_4 != 0)
                    rcx_4 = rax_4
                
                int64_t* r12_1 = *(rcx_4 + performanceCount_1)
                
                if (r12_1 != 0 && (*(r12_1 + 0xc) & 2) != 0)
                    int32_t j = 0
                    *rdx_2 = i_1
                    
                    if (arg2[1].d s> 0)
                        int64_t* rdx_3 = arg2
                        int64_t* rcx_5 = nullptr
                        int64_t* var_b8_1 = nullptr
                        int32_t rax_6 = 1
                        int32_t var_d8_1 = 1
                        int64_t rsi_1 = 0
                        int64_t var_d0_1 = 0
                        
                        do
                            if ((rdi & rax_6) != 0)
                                void* rbx_2 = arg1 + 0x3c0
                                void* r14_1
                                
                                if (j s>= *(arg1 + 0x3d8))
                                    do
                                        int64_t rdi_1 = sx.q(*(rbx_2 + 0x18))
                                        int32_t rax_8 = (rdi_1 + 1).d
                                        *(rbx_2 + 0x18) = rax_8
                                        
                                        if (rax_8 s> *(rbx_2 + 0x1c))
                                            sub_140dbc6f0(rbx_2, rdi_1.d)
                                        
                                        void* rax_9 = *(rbx_2 + 0x10)
                                        void* rcx_8 = rbx_2
                                        
                                        if (rax_9 != 0)
                                            rcx_8 = rax_9
                                        
                                        void* rcx_9 = rcx_8 + (rdi_1 << 4)
                                        *rcx_9 = 0
                                        *(rcx_9 + 8) = 0
                                    while (j s>= *(arg1 + 0x3d8))
                                    
                                    r14_1 = &r12_1[2]
                                    goto label_1421ef258
                                
                                void* rcx_6 = *(rbx_2 + 0x10)
                                r14_1 = &r12_1[2]
                                int32_t k = *r14_1
                                void* rax_7 = rbx_2
                                
                                if (rcx_6 != 0)
                                    rax_7 = rcx_6
                                
                                if (k s>= *(rax_7 + rsi_1 + 8))
                                label_1421ef258:
                                    void* rax_12 = *(rbx_2 + 0x10)
                                    void* rdi_2 = rbx_2
                                    k = *r14_1
                                    
                                    if (rax_12 != 0)
                                        rdi_2 = rax_12
                                    
                                    void* rdi_3 = rdi_2 + rsi_1
                                    
                                    for (int32_t rsi_2 = *(rdi_3 + 8); k s>= rsi_2; k = *r14_1)
                                        *(rdi_3 + 8) = rsi_2 + 1
                                        
                                        if (rsi_2 + 1 s> *(rdi_3 + 0xc))
                                            sub_1405a4d70(rdi_3)
                                        
                                        *(*rdi_3 + (sx.q(rsi_2) << 3)) = 0
                                        rsi_2 = *(rdi_3 + 8)
                                    
                                    int64_t rdi_4 = *rdi_3
                                    int64_t k_1 = sx.q(k)
                                    
                                    if (*(rdi_4 + (k_1 << 3)) == 0)
                                        *(rdi_4 + (k_1 << 3)) =
                                            (*(*r12_1 + 8))(r12_1, zx.q(*(arg1 + 0x169)), arg1)
                                        k = r12_1[2].d
                                    
                                    rsi_1 = var_d0_1
                                
                                void* r8_1 = *(rbx_2 + 0x10)
                                void* rax_17 = rbx_2
                                
                                if (r8_1 != 0)
                                    rax_17 = r8_1
                                
                                int64_t r9_2 = *(*(rax_17 + rsi_1) + (sx.q(k) << 3))
                                
                                if (r9_2 == 0)
                                    if (j s>= *(arg1 + 0x3d8))
                                        do
                                            int64_t rdi_5 = sx.q(*(rbx_2 + 0x18))
                                            int32_t rax_19 = (rdi_5 + 1).d
                                            *(rbx_2 + 0x18) = rax_19
                                            
                                            if (rax_19 s> *(rbx_2 + 0x1c))
                                                sub_140dbc6f0(rbx_2, rdi_5.d)
                                            
                                            void* rax_20 = *(rbx_2 + 0x10)
                                            void* rcx_15 = rbx_2
                                            
                                            if (rax_20 != 0)
                                                rcx_15 = rax_20
                                            
                                            void* rcx_16 = rcx_15 + (rdi_5 << 4)
                                            *rcx_16 = 0
                                            *(rcx_16 + 8) = 0
                                        while (j s>= *(arg1 + 0x3d8))
                                        
                                        k = r12_1[2].d
                                        r8_1 = *(rbx_2 + 0x10)
                                    
                                    void* rdi_6 = rbx_2
                                    
                                    if (r8_1 != 0)
                                        rdi_6 = r8_1
                                    
                                    void* rdi_7 = rdi_6 + rsi_1
                                    
                                    for (int32_t rsi_3 = *(rdi_7 + 8); k s>= rsi_3; k = *r14_1)
                                        *(rdi_7 + 8) = rsi_3 + 1
                                        
                                        if (rsi_3 + 1 s> *(rdi_7 + 0xc))
                                            sub_1405a4d70(rdi_7)
                                        
                                        *(*rdi_7 + (sx.q(rsi_3) << 3)) = 0
                                        rsi_3 = *(rdi_7 + 8)
                                    
                                    int64_t rdi_8 = *rdi_7
                                    int64_t k_2 = sx.q(k)
                                    
                                    if (*(rdi_8 + (k_2 << 3)) == 0)
                                        *(rdi_8 + (k_2 << 3)) =
                                            (*(*r12_1 + 8))(r12_1, zx.q(*(arg1 + 0x169)), arg1)
                                        k = r12_1[2].d
                                    
                                    void* rax_27 = *(rbx_2 + 0x10)
                                    rsi_1 = var_d0_1
                                    
                                    if (rax_27 != 0)
                                        rbx_2 = rax_27
                                    
                                    r9_2 = *(*(rbx_2 + rsi_1) + (sx.q(k) << 3))
                                
                                r14 = arg3
                                uint8_t var_f8
                                var_f8.d = j
                                (*(*r12_1 + 0x20))(r12_1, arg1, *(var_b8_1 + *arg2), r14, var_f8, 
                                    arg5, r9_2)
                                rax_6 = var_d8_1
                                rcx_5 = var_b8_1
                                rdx_3 = arg2
                                rdi = arg4
                            
                            rax_6 = rol.d(rax_6, 1)
                            rsi_1 += 0x10
                            rcx_5 = &rcx_5[1]
                            var_d8_1 = rax_6
                            j += 1
                            var_d0_1 = rsi_1
                            var_b8_1 = rcx_5
                        while (j s< rdx_3[1].d)
                        
                        i_1 = i_3
                        rbx_1 = 1
                        performanceCount_1 = performanceCount
                
                rdx_2 = *(arg1 + 0x178)
                i_1 += 1
                performanceCount_1 += 8
                i_3 = i_1
                performanceCount = performanceCount_1
            while (i_1 s< rdx_2[0x1c])
            
            r12 = arg2
    
    if ((*(r14 + 0x2c) & 2) != 0 && r12[1].d s> 0)
        int64_t rbp_1 = 0
        
        do
            if ((rdi & rbx_1) != 0)
                int64_t* rsi_5 = arg5 + 0x50
                int64_t* rbx_3 = rsi_5[2]
                char var_f8_1 = sub_14076deb0(arg1)
                int64_t* rdx_11 = rsi_5
                
                if (rbx_3 != 0)
                    rdx_11 = rbx_3
                
                *(rdx_11 + rbp_1)
                
                if (sub_1421f59c0(arg1) != 0)
                    uint128_t* rax_32
                    float var_68[0xa]
                    
                    if ((*(arg1 + 0x168) & 8) == 0)
                        int32_t var_98_1 = *(arg1 + 0xd8)
                        uint128_t var_b0
                        rax_32 = &var_b0
                        performanceCount_2 = zx.o(*(arg1 + 0xd0))
                        var_b0 = *(arg1 + 0xc0)
                        uint64_t performanceCount_3 = performanceCount_2.q
                    else
                        rax_32 = sub_140ae2d40(arg1 + 0x3a4, &var_68, arg1 + 0x80)
                    int64_t* rbx_4 = rsi_5[2]
                    uint128_t var_94_1 = *rax_32
                    uint64_t var_84_1 = rax_32[1].q
                    int32_t var_7c_1 = *(rax_32 + 0x18)
                    char var_f8_2 = sub_14076deb0(arg1)
                    
                    if (rbx_4 != 0)
                        rsi_5 = rbx_4
                    
                    *(rsi_5 + rbp_1)
                
                rdi = arg4
                rbx_1 = arg_8
            
            rbx_1 = rol.d(rbx_1, 1)
            i_2 += 1
            rbp_1 += 8
            arg_8 = rbx_1
        while (i_2 s< r12[1].d)

return sub_142079870(&var_78)
