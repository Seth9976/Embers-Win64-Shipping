// 函数: sub_142388730
// 地址: 0x142388730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result
uint64_t r9 = arg1

if (data_143f0f21f != 0)
    uint64_t r8_1 = zx.q(data_143f0f1a0)
    result = zx.q(*(sx.q(r8_1.d) * 0x14 + &data_143f025fc) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, r8_1))
            int32_t i_4
            
            if (*(arg1 + 0x178) != 0)
                void* rsi_1 = arg1 + 0x180
                int64_t rdi_1 = sx.q(*(rsi_1 + 0x388))
                void* var_a8_1 = rsi_1
                int32_t i_5 = *(*(arg1 + 0x150) + 8)
                int32_t rax_4 = rdi_1.d + i_5
                *(rsi_1 + 0x388) = rax_4
                
                if (rax_4 s> *(rsi_1 + 0x38c))
                    sub_142396ab0(rsi_1, rdi_1.d)
                    r9 = arg1
                
                void* rax_5 = *(rsi_1 + 0x380)
                void* rdx_3 = rsi_1
                
                if (rax_5 != 0)
                    rdx_3 = rax_5
                
                void* rdx_4 = rdx_3 + rdi_1 * 0x70
                
                if (i_5 != 0)
                    void* rax_6 = rdx_4 + 0x24
                    int32_t i
                    
                    do
                        *(rax_6 - 0x1c) = 0xffffffff
                        rdx_4 += 0x70
                        *(rax_6 - 0x18) = 4
                        rax_6 += 0x70
                        *(rdx_4 - 0x70) = &data_142dd5bb0
                        *(rax_6 - 0x7c) = 0
                        *(rax_6 - 0x74) = 0
                        *(rax_6 - 0x84) = &data_142dd5b70
                        *(rax_6 - 0x6c) = 0
                        __builtin_memset(rax_6 - 0x64, 0, 0x1c)
                        __builtin_memset(rax_6 - 0x44, 0, 0x1a)
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                
                int64_t* rdx_5 = *(r9 + 0x150)
                int32_t i_1 = 0
                i_4 = 0
                
                if (rdx_5[1].d s> 0)
                    int64_t* r8_2 = nullptr
                    int64_t* var_98_1 = nullptr
                    void* r9_1 = nullptr
                    void* var_a0_1 = nullptr
                    
                    do
                        void* rax_7 = *(rsi_1 + 0x380)
                        void* rcx_2 = rsi_1
                        
                        if (rax_7 != 0)
                            rcx_2 = rax_7
                        
                        void* r13_2 = r9_1 + 0x38 + rcx_2
                        void** r14_2 = *(r8_2 + *rdx_5) + 0x238
                        sub_14081d930(r13_2, *r14_2)
                        *(r13_2 + 8) = r14_2[1].d
                        *(r13_2 + 0xc) = *(r14_2 + 0xc)
                        *(r13_2 + 0x10) = r14_2[2].d
                        
                        if (r13_2 + 0x18 != &r14_2[3])
                            void* rbx_1 = *(r13_2 + 0x18)
                            
                            if ((rbx_1.b & 1) != 0)
                                rbx_1 = (rbx_1 s>> 1) + r13_2 + 0x18
                            
                            int32_t j_3 = *(r13_2 + 0x20)
                            
                            if (j_3 != 0)
                                int32_t j
                                
                                do
                                    sub_1405d1550(rbx_1)
                                    rbx_1 += 0x20
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                            
                            void* rdi_3 = r14_2[3]
                            int32_t j_2 = r14_2[4].d
                            
                            if ((rdi_3.b & 1) != 0)
                                rdi_3 = (rdi_3 s>> 1) + &r14_2[3]
                            
                            int32_t r8_3 = *(r13_2 + 0x24)
                            *(r13_2 + 0x20) = j_2
                            
                            if (j_2 != 0 || r8_3 != 0)
                                sub_1405e3e00(r13_2 + 0x18, j_2, r8_3)
                                void* rdx_8 = *(r13_2 + 0x18)
                                
                                if ((rdx_8.b & 1) != 0)
                                    rdx_8 = (rdx_8 s>> 1) + r13_2 + 0x18
                                
                                if (j_2 != 0)
                                    void* rcx_6 = rdi_3 + 0xc
                                    void* rdx_10 = rdx_8 + 0xc
                                    int32_t j_1
                                    
                                    do
                                        void* rax_12 = *(rcx_6 - 0xc)
                                        *(rdx_10 - 0xc) = rax_12
                                        
                                        if (rax_12 != 0)
                                            *(rax_12 + 8) += 1
                                        
                                        *(rdx_10 - 4) = *(rcx_6 - 4)
                                        *rdx_10 = *rcx_6
                                        *(rdx_10 + 4) = *(rcx_6 + 4)
                                        *(rdx_10 + 8) = *(rcx_6 + 8)
                                        *(rdx_10 + 0xc) = *(rcx_6 + 0xc)
                                        *(rdx_10 + 0x10) = *(rcx_6 + 0x10)
                                        *(rdx_10 + 0x11) = *(rcx_6 + 0x11)
                                        char rax_20 = *(rcx_6 + 0x12)
                                        rcx_6 += 0x20
                                        *(rdx_10 + 0x12) = rax_20
                                        rdx_10 += 0x20
                                        j_1 = j_2
                                        j_2 -= 1
                                    while (j_1 != 1)
                            else
                                *(r13_2 + 0x24) = 0
                        
                        *(r13_2 + 0x28) = r14_2[5]
                        *(r13_2 + 0x30) = r14_2[6].b
                        *(r13_2 + 0x31) = *(r14_2 + 0x31)
                        void* rdi_4 = *(r13_2 + 0x18)
                        
                        if ((rdi_4.b & 1) != 0)
                            rdi_4 = (rdi_4 s>> 1) + r13_2 + 0x18
                        
                        void* rsi_5 = (sx.q(*(r13_2 + 0x20)) << 5) + rdi_4
                        
                        if (rdi_4 != rsi_5)
                            do
                                int64_t* rbx_3 = *rdi_4
                                *rdi_4 = 0
                                
                                if (rbx_3 != 0)
                                    rbx_3[1].d -= 1
                                    
                                    if (rbx_3[1].d == 1)
                                        char rax_25
                                        
                                        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                                            rax_25 = sub_1405949a0()
                                        
                                        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                                            (**rbx_3)(rbx_3, 1)
                                        else
                                            bool z_1
                                            
                                            if (0 == *(rbx_3 + 0xc))
                                                *(rbx_3 + 0xc) = 1
                                                z_1 = true
                                            else
                                                *(rbx_3 + 0xc)
                                                z_1 = false
                                            
                                            if (z_1)
                                                int32_t rax_27 = sub_140a20af0()
                                                uint64_t rdx_11 = zx.q(rax_27)
                                                void* const rax_28
                                                
                                                if (rax_27 != 0)
                                                    rax_28 =
                                                        *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                                        + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                                                else
                                                    rax_28 = nullptr
                                                
                                                *(rax_28 + 8) = rbx_3
                                                sub_1405a42f0(&data_143f02390, rdx_11.d)
                                
                                rdi_4 += 0x20
                            while (rdi_4 != rsi_5)
                            
                            i_1 = i_4
                        
                        i_1 += 1
                        r9_1 = var_a0_1 + 0x70
                        r8_2 = &var_98_1[1]
                        rsi_1 = var_a8_1
                        *(r13_2 + 0x30) = 0x101
                        i_4 = i_1
                        rdx_5 = *(arg1 + 0x150)
                        var_a0_1 = r9_1
                        var_98_1 = r8_2
                    while (i_1 s< rdx_5[1].d)
                    
                    r9 = arg1
            
            int64_t rdi_6 = sx.q(*(r9 + 0x618))
            void* r14_3 = r9 + 0x510
            int32_t i_6 = *(r9 + 0x508)
            int32_t rax_34 = rdi_6.d + i_6
            *(r14_3 + 0x108) = rax_34
            
            if (rax_34 s> *(r14_3 + 0x10c))
                sub_141a63dd0(r14_3, rdi_6.d)
                r9 = arg1
            
            void* rax_35 = *(r14_3 + 0x100)
            void* rcx_12 = r14_3
            
            if (rax_35 != 0)
                rcx_12 = rax_35
            
            result = rdi_6 << 5
            void* rcx_13 = rcx_12 + result
            
            if (i_6 != 0)
                int32_t i_2
                
                do
                    __builtin_memset(rcx_13, 0, 0x1c)
                    rcx_13 += 0x20
                    i_2 = i_6
                    i_6 -= 1
                while (i_2 != 1)
            
            int32_t i_3 = 0
            
            if (*(r9 + 0x508) s> 0)
                void* rcx_14 = r9 + 0x180
                int64_t r12_1 = 0
                void* var_a8_2 = rcx_14
                int64_t r13_3 = 0
                
                do
                    void* rax_37 = *(rcx_14 + 0x380)
                    void* r15_2 = rcx_14
                    wchar16 const* const var_48_1 =
                        FStaticMeshSceneProxy::RayTracingDynamicVertexBuffer"
                    void* rdi_7 = r14_3
                    
                    if (rax_37 != 0)
                        r15_2 = rax_37
                    
                    void* rax_38 = *(r14_3 + 0x100)
                    void* r15_3 = r15_2 + r13_3
                    
                    if (rax_38 != 0)
                        rdi_7 = rax_38
                    
                    int64_t var_78 = 0
                    int32_t var_68_1 = 1
                    void* rdi_8 = rdi_7 + r12_1
                    char var_50_1 = 0
                    int32_t var_40_1 = 0
                    int64_t var_70_1 = 0
                    *(rdi_8 + 0x18) = 0x400
                    int64_t* rcx_16 = data_143f0f180
                    int128_t var_64_1 = data_143dbb1e0
                    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
                    void var_90
                    (*(*rcx_16 + 0x498))(rcx_16, &var_90, &data_143f02b98, 0x400, 0x208, &var_78, 
                        i_4, arg1)
                    sub_1405d1600(rdi_8, &var_90)
                    sub_1405d1550(&var_90)
                    int64_t* rcx_19 = data_143f0f180
                    int32_t var_d8_1
                    var_d8_1.b = 0xd
                    int64_t var_b8
                    (*(*rcx_19 + 0x590))(rcx_19, &var_b8, &data_143f02b98, *rdi_8, var_d8_1)
                    
                    if (rdi_8 + 8 != &var_b8)
                        int64_t* rbx_4 = *(rdi_8 + 8)
                        *(rdi_8 + 8) = var_b8
                        var_b8 = 0
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                char rax_45
                                
                                if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_45 = sub_1405949a0()
                                
                                if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_45 != 0))
                                    (**rbx_4)(rbx_4, 1)
                                else
                                    bool z_2
                                    
                                    if (0 == *(rbx_4 + 0xc))
                                        *(rbx_4 + 0xc) = 1
                                        z_2 = true
                                    else
                                        *(rbx_4 + 0xc)
                                        z_2 = false
                                    
                                    if (z_2)
                                        int32_t rax_47 = sub_140a20af0()
                                        uint64_t rdx_16 = zx.q(rax_47)
                                        void* const rax_48
                                        
                                        if (rax_47 != 0)
                                            rax_48 = *((rdx_16 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_16.d) & 0x3fff) * 0x18
                                        else
                                            rax_48 = nullptr
                                        
                                        *(rax_48 + 8) = rbx_4
                                        sub_1405a42f0(&data_143f02390, rdx_16.d)
                    
                    sub_1405d1550(&var_b8)
                    int64_t* rcx_26 = data_143f0f180
                    int64_t* var_d0_1
                    var_d0_1.b = 0xd
                    void var_88
                    (*(*rcx_26 + 0x4b8))(rcx_26, &var_88, &data_143f02b98, *rdi_8, 4, var_d0_1)
                    sub_1405d1600(rdi_8 + 0x10, &var_88)
                    sub_1405ec8a0(&var_88)
                    (*(*r15_3 + 0x28))(r15_3)
                    result = arg1
                    rcx_14 = var_a8_2
                    i_3 += 1
                    r13_3 += 0x70
                    r12_1 += 0x20
                while (i_3 s< *(result + 0x508))

__security_check_cookie(result_1 ^ &var_f8)
return result
