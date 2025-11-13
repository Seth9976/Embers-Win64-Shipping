// 函数: sub_140bccad0
// 地址: 0x140bccad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
char* var_78 = &arg_10
void*** (* var_80)() = sub_140884c50
void* rax = sub_140a756e0(&var_80, &data_14397f5f0)
char arg_8 = 0
int64_t rdi = *(rax + 0x40)
*(rax + 0x40) = arg1
char rax_1 = *(rax + 0x20)
*(rax + 0x20) = 1
void* r12 = *(arg1 + 0xc8)
uint32_t rax_2

if (data_143de5480 != 0)
    rax_2.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_2.b != 0)
    *(r12 + 0xc00450) += 1
    arg_8 = 1

char arg_18 = 0
char* var_68 = &arg_18
void*** (* var_70)() = sub_140884c50
sub_140a756e0(&var_70, &data_14397f5f0)
void* r14 = nullptr

while (*(arg1 + 0x68) s< *(arg1 + 0x118))
    void* rcx_2 = *(arg1 + 0xc8)
    bool z_1
    
    if (0 == *(rcx_2 + 0x19))
        *(rcx_2 + 0x19) = 0
        z_1 = true
    else
        int64_t rax_4
        rax_4.b = *(rcx_2 + 0x19)
        z_1 = false
    
    if (not(z_1))
        break
    
    TlsGetValue(data_143e1a81c)
    int64_t rcx_4 = sx.q(*(arg1 + 0x68))
    *(arg1 + 0x68) = (rcx_4 + 1).d
    int64_t* rax_8 = (rcx_4 << 4) + *(arg1 + 0x130)
    
    if (rax_8[1].b == 0)
        int64_t* rbx_1 = *rax_8
        
        if (((rbx_1[1].d u>> 0xc).b & 1) != 0)
            *(rax + 0x28) = rbx_1
            sub_140cd85e0(rbx_1)
            *(rax + 0x28) = 0
        
        int32_t rax_11 = *(rbx_1 + 0xc)
        void* const rdx_4
        
        if (rax_11 s>= data_143e1d9b4)
            rdx_4 = nullptr
        else
            int16_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(rax_11)
            uint32_t rdx_2 = zx.d(temp3_1)
            int32_t rax_13 = temp4_1 + rdx_2
            rdx_4 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                + sx.q(zx.d(rax_13.w) - rdx_2) * 0x18
        
        for (int32_t rax_17 = *(rdx_4 + 8); test_bit(rax_17, 0x1b); rax_17 = *(rdx_4 + 8))
            bool z_2
            
            if (rax_17 == *(rdx_4 + 8))
                *(rdx_4 + 8) = rax_17 & 0xf7ffffff
                z_2 = true
            else
                *(rdx_4 + 8)
                z_2 = false
            
            if (z_2)
                break

int32_t rcx_12 = *(arg1 + 0x118)
int32_t rsi = 0
int32_t temp0 = *(arg1 + 0x68)

if (temp0 == rcx_12)
    rsi = 2

if (temp0 == rcx_12)
    uint64_t var_90 = 0
    int64_t var_88_1 = 0
    
    if (*(arg1 + 0x6c) s< rcx_12)
        do
            void* rcx_13 = *(arg1 + 0xc8)
            bool z_3
            
            if (0 == *(rcx_13 + 0x19))
                *(rcx_13 + 0x19) = 0
                z_3 = true
            else
                int64_t rax_20
                rax_20.b = *(rcx_13 + 0x19)
                z_3 = false
            
            if (not(z_3))
                break
            
            TlsGetValue(data_143e1a81c)
            int64_t rcx_15 = sx.q(*(arg1 + 0x6c))
            int64_t* rbx_4 = (rcx_15 << 4) + *(arg1 + 0x130)
            *(arg1 + 0x6c) = (rcx_15 + 1).d
            
            if (rbx_4[1].b == 0)
                void* rbx_5 = *rbx_4
                
                if (rbx_5 != 0)
                    void* rax_22 = sub_140bdf670()
                    void* rcx_16 = *(rbx_5 + 0x10)
                    int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                    void* rdi_1
                    
                    if (rax_23.d s<= *(rcx_16 + 0x38)
                            && *(*(rcx_16 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30)
                        rdi_1 = *(rbx_5 + 0x118)
                        
                        if (rdi_1 == 0)
                            int64_t var_60
                            int64_t* rax_25 = sub_140d21830(rbx_5, &var_60, 0, 0)
                            int16_t* const r9_1
                            
                            if (rax_25[1].d == 0)
                                r9_1 = &data_142d40450
                            else
                                r9_1 = *rax_25
                            
                            sub_140af98a0("Unknown", 0x1278, 
                                EDL did not create the CDO for %s before it finished loading.", r9_1)
                            int64_t rcx_18 = var_60
                            
                            if (rcx_18 != 0)
                                sub_140a74f90(rcx_18)
                            
                            sub_140afbb40()
                        
                        int32_t rax_26 = *(rdi_1 + 0xc)
                        void* const r8_3
                        
                        if (rax_26 s>= data_143e1d9b4)
                            r8_3 = nullptr
                        else
                            uint32_t rdx_7 = zx.d(rax_26.w)
                            
                            if (rax_26 s< 0)
                                rax_26 += 0xffff
                                rdx_7 -= 0x10000
                            
                            r8_3 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                                + sx.q(rdx_7) * 0x18
                        
                        for (int32_t rax_30 = *(r8_3 + 8); test_bit(rax_30, 0x1b); 
                                rax_30 = *(r8_3 + 8))
                            bool z_4
                            
                            if (rax_30 == *(r8_3 + 8))
                                *(r8_3 + 8) = rax_30 & 0xf7ffffff
                                z_4 = true
                            else
                                *(r8_3 + 8)
                                z_4 = false
                            
                            if (z_4)
                                break
                        
                        goto label_140bccdeb
                    
                    if (((*(rbx_5 + 8) u>> 4).b & 1) != 0)
                        rdi_1 = rbx_5
                    label_140bccdeb:
                        
                        if (rdi_1 != 0)
                            sub_140cdd100(rdi_1, &var_90)
                            uint64_t r9_2 = var_90
                            int64_t r10_1 = 0
                            int64_t rcx_24 = r9_2 + (sx.q(var_88_1.d) << 3)
                            uint64_t r11_4 = (rcx_24 - r9_2 + 7) u>> 3
                            
                            if (r9_2 u> rcx_24)
                                r11_4 = 0
                            
                            if (r11_4 != 0)
                                do
                                    void* rax_35 = *r9_2
                                    
                                    if (rax_35 != 0)
                                        int32_t r8_4 = *(rax_35 + 0xc)
                                        void* const rax_40
                                        
                                        if (r8_4 s>= data_143e1d9b4)
                                            rax_40 = nullptr
                                        else
                                            uint32_t rdx_10 = zx.d(r8_4.w)
                                            int32_t rax_36 = r8_4
                                            
                                            if (r8_4 s< 0)
                                                rax_36 = r8_4 + 0xffff
                                                rdx_10 -= 0x10000
                                            
                                            rax_40 =
                                                *(data_143e1d9a0 + (sx.q(rax_36 s>> 0x10) << 3))
                                                + sx.q(rdx_10) * 0x18
                                        
                                        if (((*(rax_40 + 8) u>> 0x1b).b & 1) != 0)
                                            void* const r8_6
                                            
                                            if (r8_4 s>= data_143e1d9b4)
                                                r8_6 = nullptr
                                            else
                                                uint32_t rax_43 = zx.d(r8_4.w)
                                                
                                                if (r8_4 s< 0)
                                                    r8_4 += 0xffff
                                                    rax_43 -= 0x10000
                                                
                                                r8_6 =
                                                    *(data_143e1d9a0 + (sx.q(r8_4 s>> 0x10) << 3))
                                                    + sx.q(rax_43) * 0x18
                                            
                                            for (int32_t rax_46 = *(r8_6 + 8); 
                                                    test_bit(rax_46, 0x1b); rax_46 = *(r8_6 + 8))
                                                bool z_5
                                                
                                                if (rax_46 == *(r8_6 + 8))
                                                    *(r8_6 + 8) = rax_46 & 0xf7ffffff
                                                    z_5 = true
                                                else
                                                    *(r8_6 + 8)
                                                    z_5 = false
                                                
                                                if (z_5)
                                                    break
                                    
                                    r9_2 += 8
                                    r10_1 += 1
                                while (r10_1 != r11_4)
                            
                            int32_t rax_48 = var_88_1:4.d
                            var_88_1.d = 0
                            
                            if (rax_48 s< 0 && rax_48 != 0)
                                sub_1405c5570(&var_90, 0)
        while (*(arg1 + 0x6c) s< *(arg1 + 0x118))
    
    if (*(arg1 + 0x6c) != *(arg1 + 0x118))
        rsi = 0
    else
        void* rax_51 = *(arg1 + 0x38)
        rsi = 2
        
        if (rax_51 != 0 && *(arg1 + 0x75) == 0)
            int32_t rax_52 = *(rax_51 + 0xc)
            
            if (rax_52 s< data_143e1d9b4)
                int16_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_52)
                uint32_t rdx_14 = zx.d(temp1_1)
                int32_t rax_54 = temp2_1 + rdx_14
                r14 = *(data_143e1d9a0 + (sx.q(rax_54 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_54.w) - rdx_14) * 0x18
            
            for (int32_t rax_59 = *(r14 + 8); test_bit(rax_59, 0x1b); rax_59 = *(r14 + 8))
                bool z_6
                
                if (rax_59 == *(r14 + 8))
                    *(r14 + 8) = rax_59 & 0xf7ffffff
                    z_6 = true
                else
                    *(r14 + 8)
                    z_6 = false
                
                if (z_6)
                    break
            
            void* rax_61 = *(arg1 + 0x38)
            *(rax_61 + 0x28) |= 2
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            void* rax_62 = *(arg1 + 0x38)
            double zmm0_1[0x2] = zx.o(0)
            zmm0_1[0] = float.d(performanceCount)
            zmm0_1[0] = zmm0_1[0] f* data_143d796f8
            zmm0_1[0] = zmm0_1[0] + 16777216.0
            zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0x78)
            *(rax_62 + 0x2c) = _mm_cvtpd_ps(zmm0_1)[0].d
            
            if (sub_140d1a340() != 0)
                int64_t* i = *(arg1 + 0x130)
                
                for (void* rdi_4 = &i[sx.q(*(arg1 + 0x138)) * 2]; i != rdi_4; i = &i[2])
                    if (i[1].b == 0)
                        int64_t* rcx_39 = *i
                        
                        if ((*(*rcx_39 + 0x18))(rcx_39) != 0)
                            *(arg1 + 0x74) = 1
                            break
    
    data_1439aaa30 += 1
    data_1439a9d84 += 1
    uint64_t rcx_40 = var_90
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)

if (arg_8 != 0)
    *(r12 + 0xc00450) -= 1

*(rax + 0x20) = rax_1
*(rax + 0x40) = rdi
return zx.q(rsi)
