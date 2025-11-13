// 函数: sub_140ecfb70
// 地址: 0x140ecfb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int64_t* rdi = arg1
int64_t* r15 = arg3
int64_t* rsi = arg2
char rax_2 = sub_140f03770(*arg2)
char rax_3

if (rax_2 != 0)
    rax_3 = sub_140f03770(*rsi)

if (rax_2 == 0 || rax_3 == 2)
    rdi[0x23] = *r15
    void* rbx_1 = r15[1]
    int64_t* rcx_2 = rdi[0x24]
    
    if (rbx_1 != rcx_2)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_2 = rdi[0x24]
        
        if (rcx_2 != 0)
            int32_t temp0_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        rdi[0x24] = rbx_1

if (*r15 != 0)
    int32_t rax_6 = sub_140e90ee0(&rdi[0x2a], rsi)
    
    if (rax_6 != 0xffffffff)
        void* rcx_4 = nullptr
        void* rdx_3 = (sx.q(rax_6) << 5) + rdi[0x2a]
        int64_t* r12_1 = *(rdx_3 + 0x18)
        int64_t* var_370_1 = r12_1
        
        if (r12_1 != 0)
            int32_t rax_7 = r12_1[1].d
            
            if (rax_7 != 0)
                r12_1[1].d = rax_7 + 1
                rax_7.b = 1
            
            if (rax_7.b == 0)
                r12_1 = nullptr
            
            var_370_1 = r12_1
            
            if (r12_1 != 0)
                rcx_4 = *(rdx_3 + 0x10)
        
        int32_t i = 0
        int32_t i_1 = 0
        void* rcx_5 = **(rcx_4 + 0xd8)
        
        if (*(rcx_5 + 0x80) s> 0)
            int64_t r13_1 = 0
            int64_t var_380_1 = 0
            
            do
                int64_t* rcx_6 = *(rcx_5 + 0x78)
                void* r15_1 = nullptr
                int64_t* rbx_2 = *(rcx_6 + r13_1 + 8)
                
                if (rbx_2 != 0)
                    int32_t rax_9 = rbx_2[1].d
                    
                    if (rax_9 == 0)
                        rbx_2 = nullptr
                    else
                        rbx_2[1].d = rax_9 + 1
                        
                        if (rbx_2 != 0)
                            r15_1 = *(rcx_6 + r13_1)
                
                void* var_318
                sub_140ebf640(r15_1, &var_318)
                void* rdi_1 = var_318
                int64_t* var_310
                
                if (rdi_1 == 0)
                    r15 = arg3
                else
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    void var_2b8
                    int64_t* rax_11 = sub_140dd5ed0(&var_2b8)
                    *(rax_11 + 0x1e1) = 0
                    void var_368
                    int64_t* rax_12 = sub_140e15940(rdi_1, &var_368)
                    int128_t zmm1_1 = *(rax_12 + 4)
                    *(rax_11 + 0x1e4) = *rax_12
                    rax_11[0x3d].d = zmm1_1.d
                    void var_2e8
                    int64_t* rax_13 = sub_140e173b0(rdi_1, &var_2e8)
                    void* var_360 = r15_1
                    int64_t* rdi_2 = rbx_2
                    zmm1_1 = *(rax_13 + 4)
                    *(rax_11 + 0x1ec) = (*rax_13).d
                    rax_11[0x3e].d = zmm1_1.d
                    *(rax_11 + 0x20e) = 0
                    *(rax_11 + 0x234) = 0
                    *(rax_11 + 0x1f4) = 0
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    if (&var_360 != &rax_11[0x4c])
                        var_360.o = *(rax_11 + 0x260)
                        rdi_2 = rbx_2
                        *(rax_11 + 0x260) = var_360.o
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t temp9_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp10_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    void*** rax_19 = j_sub_140a82f30(0xa88)
                    void*** r14_1 = rax_19
                    
                    if (rax_19 == 0)
                        r14_1 = nullptr
                    else
                        rax_19[1].d = 1
                        *(rax_19 + 0xc) = 1
                        *r14_1 = &data_142ecd2f8
                        
                        if (r14_1 != -0x10)
                            sub_140dde300(&r14_1[2])
                    
                    int64_t* var_348 = &r14_1[2]
                    sub_140918950(&var_348, &r14_1[2])
                    char var_398_1 = 0x78
                    void var_384
                    void* var_338_1 = &var_384
                    uint128_t var_308
                    sub_140de51f0(&var_348, &var_308, rax_11, sub_140e23ed0(&r14_1[2], "SWindow"))
                    
                    if (r14_1 != 0)
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d == 1)
                            (**r14_1)(r14_1)
                            int32_t temp12_1 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (temp12_1 == 1)
                                (*r14_1)[1](r14_1, 1)
                    
                    sub_140ddefc0(&var_2b8)
                    sub_140eda8e0(r15_1, &var_308)
                    r15 = arg3
                    int64_t var_2f8 = *r15
                    void* rax_23 = r15[1]
                    void* var_2f0_1 = rax_23
                    
                    if (rax_23 != 0)
                        *(rax_23 + 8) += 1
                    
                    uint128_t zmm0_3 = var_308
                    uint128_t var_2d8 = zmm0_3
                    void* rax_24 = _mm_bsrli_si128(zmm0_3, 8).q
                    
                    if (rax_24 != 0)
                        *(rax_24 + 8) += 1
                    
                    void var_2c8
                    sub_140e595a0(data_143e29f28, &var_2c8, &var_2d8, &var_2f8, 1)
                    int64_t* var_2c0
                    
                    if (var_2c0 != 0)
                        var_2c0[1].d -= 1
                        
                        if (var_2c0[1].d == 1)
                            (**var_2c0)(var_2c0)
                            int32_t temp14_1 = *(var_2c0 + 0xc)
                            *(var_2c0 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*var_2c0 + 8))(var_2c0, 1)
                    
                    int64_t* rcx_26 = data_143e29f28
                    var_348.o = var_318.o
                    
                    if (var_310 != 0)
                        var_310[1].d += 1
                    
                    (*(*rcx_26 + 0x130))(rcx_26, &var_348)
                    int64_t* rdi_6 = var_308:8.q
                    
                    if (rdi_6 != 0)
                        rdi_6[1].d -= 1
                        
                        if (rdi_6[1].d == 1)
                            (**rdi_6)(rdi_6)
                            int32_t temp16_1 = *(rdi_6 + 0xc)
                            *(rdi_6 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*rdi_6 + 8))(rdi_6, 1)
                    
                    i = i_1
                    r13_1 = var_380_1
                
                if (var_310 != 0)
                    var_310[1].d -= 1
                    
                    if (var_310[1].d == 1)
                        (**var_310)(var_310)
                        int32_t temp5_1 = *(var_310 + 0xc)
                        *(var_310 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*var_310 + 8))(var_310, 1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp6_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                i += 1
                r13_1 += 0x10
                i_1 = i
                var_380_1 = r13_1
            while (i s< *(rcx_5 + 0x80))
            
            r12_1 = var_370_1
            rdi = arg1
            rsi = arg2
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d == 1)
                (**r12_1)(r12_1)
                int32_t temp2_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*r12_1 + 8))(r12_1, 1)

int64_t result = sub_140ed00d0(rdi, rsi, r15)
__security_check_cookie(rax_1 ^ &var_3b8)
return result
