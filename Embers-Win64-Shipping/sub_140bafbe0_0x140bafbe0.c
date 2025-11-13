// 函数: sub_140bafbe0
// 地址: 0x140bafbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg3
int128_t* r13 = arg4
void* r14 = arg1
int128_t zmm7 = arg2
char var_107 = 0
char* var_90 = &var_107
void*** (* var_98)() = sub_140884c50
void* rax = sub_140a756e0(&var_98, &data_14397f5f0)
void* r12 = rax
char var_108 = 0
int64_t rax_1 = *(rax + 0x40)
*(r12 + 0x40) = r14
char rax_2 = *(r12 + 0x20)
*(r12 + 0x20) = 1
bool cond:0 = data_143de5480 == 0
void* rbx = *(r14 + 0x1d8)
uint32_t rax_3

if (not(cond:0))
    rax_3.b = GetCurrentThreadId() == data_143de5470

if (cond:0 || rax_3.b != 0)
    int32_t rax_4 = *(rbx + 0x3a8)
    data_143e1a570 += 1
    data_1439a965c = rax_4
    var_108 = 1

int128_t zmm6
int128_t var_48 = zmm6
char var_106
char* var_80 = &var_106
var_106 = 0
void*** (* var_88)() = sub_140884c50
void* rax_5 = sub_140a756e0(&var_88, &data_14397f5f0)
uint128_t zmm8 = 0x4170000000000000
int32_t rbx_1 = 0
uint64_t r15 = 0
uint64_t var_100 = 0
int64_t var_f8 = 0
int64_t* rsi_1 = *(rax_5 + 0x48) + 0x10
int64_t* var_d0 = rsi_1
uint128_t zmm0_1
double zmm1
double zmm2

if (*(r14 + 0xb8) s< *(r14 + 0x100))
    while (true)
        void* rcx_2 = *(r14 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_2 + 0x84))
            *(rcx_2 + 0x84) = 0
            z_1 = true
        else
            *(rcx_2 + 0x84)
            z_1 = false
        
        if (z_1)
            zmm6 = *r13
            bool rax_8
            
            if (rdi != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                zmm1 = float.d(performanceCount)
                zmm0_1 = _mm_cvtps_pd(zmm6.q)
                zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                zmm2 = zmm1 f- zmm7.q
                rax_8 = zmm2 f> zmm0_1.q
                
                if (rax_8 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                        && not(zmm2 f<= _mm_cvtps_pd(data_1439a9644.q).q))
                    zmm6.d = zmm6.d f* data_1439a9640
                    
                    if (not(zmm2 f<= _mm_cvtps_pd(zmm6.q).q))
                        data_1439a9888 = zmm7.q
                
                data_1439a9890 = zmm1
            
            if (rdi == 0 || rax_8 == 0)
                void* rcx_4 = data_143e1adf0
                bool z_2
                
                if (0 == *(rcx_4 + 8))
                    *(rcx_4 + 8) = 0
                    z_2 = true
                else
                    *(rcx_4 + 8)
                    z_2 = false
                
                rcx_4.b = not(z_2)
                
                if (rcx_4.b == 0)
                    int64_t rdx_1 = sx.q(*(r14 + 0xb8))
                    int64_t rcx_5 = *(r14 + 0xf8)
                    *(r14 + 0xb8) = (rdx_1 + 1).d
                    int64_t* rdi_1 = *(rcx_5 + (rdx_1 << 3))
                    
                    if ((*(*rdi_1 + 0x68))(rdi_1) == 0)
                        *(r14 + 0xb8) -= 1
                        r13 = arg4
                        rdi = arg3
                    else
                        *(r14 + 0xd8) = rdi_1
                        *(r14 + 0xe0) = u"postloading_gamethread"
                        *(r12 + 0x28) = rdi_1
                        sub_140cd85e0(rdi_1)
                        *(r12 + 0x28) = 0
                        int64_t rdi_2 = sx.q(rsi_1[1].d)
                        
                        if (rdi_2.d == 0)
                            r15 = var_100
                        else
                            int32_t rbx_2 = var_f8.d
                            int32_t r12_1 = var_f8:4.d
                            int32_t rdx_2 = rbx_2 + rdi_2.d
                            
                            if (rdx_2 s> r12_1)
                                sub_1405c5570(&var_100, rdx_2)
                                r12_1 = var_f8:4.d
                                rbx_2 = var_f8.d
                            
                            r15 = var_100
                            memcpy(r15 + (sx.q(rbx_2) << 3), *rsi_1, (rdi_2 << 3).d)
                            int32_t i = rbx_2 + rdi_2.d
                            var_f8.d = i
                            rsi_1[1].d = 0
                            
                            if (*(rsi_1 + 0xc) s<= 0xffffffff)
                                sub_1405c5570(rsi_1, 0)
                            
                            if (i != 0)
                                do
                                    int32_t rax_14 = *(r14 + 0x100)
                                    int32_t rdx_4 = rax_14 + i
                                    
                                    if (rdx_4 s> *(r14 + 0x104))
                                        sub_1405c5570(r14 + 0xf8, rdx_4)
                                        rax_14 = *(r14 + 0x100)
                                    
                                    memcpy(*(r14 + 0xf8) + (sx.q(rax_14) << 3), r15, i << 3)
                                    *(r14 + 0x100) += i
                                    uint64_t rdi_3 = r15
                                    int64_t rcx_14 = r15 + (sx.q(i) << 3)
                                    int64_t rsi_2 = 0
                                    uint64_t r14_4 = (rcx_14 - r15 + 7) u>> 3
                                    
                                    if (r15 u> rcx_14)
                                        r14_4 = 0
                                    
                                    if (r14_4 != 0)
                                        do
                                            uint64_t rbx_3 = *rdi_3
                                            
                                            if (rbx_3 != 0 && sub_140d3cb50(rbx_3) != 0)
                                                zmm7, zmm8 = sub_140cc45a0(
                                                    sub_140d3cb50(rbx_3) + 0x200, rbx_3)
                                            
                                            rdi_3 += 8
                                            rsi_2 += 1
                                        while (rsi_2 != r14_4)
                                    
                                    var_f8.d = 0
                                    i = 0
                                    
                                    if (r12_1 s< 0 && r12_1 != 0)
                                        sub_1405c5570(&var_100, 0)
                                        r12_1 = var_f8:4.d
                                        i = var_f8.d
                                        r15 = var_100
                                    
                                    rsi_1 = var_d0
                                    int64_t rdi_4 = sx.q(rsi_1[1].d)
                                    
                                    if (rdi_4.d != 0)
                                        int32_t rdx_7 = i + rdi_4.d
                                        
                                        if (rdx_7 s> r12_1)
                                            sub_1405c5570(&var_100, rdx_7)
                                            r12_1 = var_f8:4.d
                                            i = var_f8.d
                                            r15 = var_100
                                        
                                        memcpy(r15 + (sx.q(i) << 3), *rsi_1, (rdi_4 << 3).d)
                                        i += rdi_4.d
                                        var_f8.d = i
                                    
                                    rsi_1[1].d = 0
                                    
                                    if (*(rsi_1 + 0xc) s<= 0xffffffff)
                                        sub_1405c5570(rsi_1, 0)
                                while (i != 0)
                                
                                r14 = arg1
                            
                            r12 = rax
                            rbx_1 = 0
                        
                        *(r14 + 0xd8) = rdi_1
                        sub_140bbd840(r14)
                        r13 = arg4
                        rdi = arg3
                        
                        if (*(r14 + 0xb8) s>= *(r14 + 0x100))
                            break
                        
                        continue
        
        r15 = var_100
        break

int32_t rcx_23 = *(r14 + 0x100)
int32_t temp0_4 = *(r14 + 0xb8)

if (temp0_4 == rcx_23)
    rbx_1 = 2

if (temp0_4 == rcx_23)
    *(r14 + 0xe0) = u"DeferredFinalizeObjects"
    int32_t rax_22 = *(r14 + 0x110)
    *(r14 + 0xd8) = 0
    uint64_t var_f0 = 0
    int64_t var_e8_1 = 0
    
    if (*(r14 + 0xbc) s< rax_22)
        do
            int32_t rcx_24 = *(r14 + 0xb8)
            
            if (rcx_24 == rcx_24 s/ 0x64 * 0x64)
                void* rcx_25 = *(r14 + 0x1d8)
                bool z_3
                
                if (0 == *(rcx_25 + 0x84))
                    *(rcx_25 + 0x84) = 0
                    z_3 = true
                else
                    *(rcx_25 + 0x84)
                    z_3 = false
                
                if (not(z_3))
                    break
                
                zmm6 = *r13
                
                if (rdi != 0)
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    zmm1 = float.d(performanceCount_1)
                    zmm0_1 = _mm_cvtps_pd(zmm6.q)
                    zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                    zmm2 = zmm1 f- zmm7.q
                    bool rax_27 = zmm2 f> zmm0_1.q
                    
                    if (rax_27 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                            && not(zmm2 f<= _mm_cvtps_pd(data_1439a9644.q).q))
                        zmm6.d = zmm6.d f* data_1439a9640
                        
                        if (not(zmm2 f<= _mm_cvtps_pd(zmm6.q).q))
                            data_1439a9888 = zmm7.q
                    
                    data_1439a9890 = zmm1
                    
                    if (rax_27 != 0)
                        break
                
                void* rcx_27 = data_143e1adf0
                bool z_4
                
                if (0 == *(rcx_27 + 8))
                    *(rcx_27 + 8) = 0
                    z_4 = true
                else
                    *(rcx_27 + 8)
                    z_4 = false
                
                rcx_27.b = not(z_4)
                
                if (rcx_27.b != 0)
                    break
            
            int64_t rdx_12 = sx.q(*(r14 + 0xbc))
            int64_t rcx_28 = *(r14 + 0x108)
            *(r14 + 0xbc) = (rdx_12 + 1).d
            int64_t* rbx_4 = *(rcx_28 + (rdx_12 << 3))
            
            if (rbx_4 != 0)
                int32_t rax_30 = *(rbx_4 + 0xc)
                void* const rdx_16
                
                if (rax_30 s>= data_143e1d9b4)
                    rdx_16 = nullptr
                else
                    int16_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rax_30)
                    uint32_t rdx_14 = zx.d(temp4_1)
                    int32_t rax_32 = temp5_1 + rdx_14
                    rdx_16 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_32.w) - rdx_14) * 0x18
                
                for (int32_t rax_36 = *(rdx_16 + 8); test_bit(rax_36, 0x1b); rax_36 = *(rdx_16 + 8))
                    bool z_5
                    
                    if (rax_36 == *(rdx_16 + 8))
                        *(rdx_16 + 8) = rax_36 & 0xf7ffffff
                        z_5 = true
                    else
                        *(rdx_16 + 8)
                        z_5 = false
                    
                    if (z_5)
                        break
                
                void* rax_38 = sub_140bdf670()
                void* rdx_17 = rbx_4[2]
                int64_t rax_39 = sx.q(*(rax_38 + 0x38))
                int64_t* rdi_5
                
                if (rax_39.d s<= *(rdx_17 + 0x38)
                        && *(*(rdx_17 + 0x30) + (rax_39 << 3)) == rax_38 + 0x30)
                    rdi_5 = rbx_4[0x23]
                    
                    if (data_143de5452 != 0)
                        if (rdi_5 == 0)
                            int64_t var_78
                            int64_t* rax_41 = sub_140d21830(rbx_4, &var_78, 0, 0)
                            int16_t* const r9
                            
                            if (rax_41[1].d == 0)
                                r9 = &data_142d40450
                            else
                                r9 = *rax_41
                            
                            sub_140af98a0("Unknown", 0x196b, 
                                EDL did not create the CDO for %s before it finished loading.", r9)
                            int64_t rcx_37 = var_78
                            
                            if (rcx_37 != 0)
                                sub_140a74f90(rcx_37)
                            
                            sub_140afbb40()
                        
                        int32_t rax_42 = *(rdi_5 + 0xc)
                        void* const r8_8
                        
                        if (rax_42 s>= data_143e1d9b4)
                            r8_8 = nullptr
                        else
                            uint32_t rdx_19 = zx.d(rax_42.w)
                            
                            if (rax_42 s< 0)
                                rax_42 += 0xffff
                                rdx_19 -= 0x10000
                            
                            r8_8 = *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                                + sx.q(rdx_19) * 0x18
                        
                        for (int32_t rax_46 = *(r8_8 + 8); test_bit(rax_46, 0x1b); 
                                rax_46 = *(r8_8 + 8))
                            bool z_6
                            
                            if (rax_46 == *(r8_8 + 8))
                                *(r8_8 + 8) = rax_46 & 0xf7ffffff
                                z_6 = true
                            else
                                *(r8_8 + 8)
                                z_6 = false
                            
                            if (z_6)
                                break
                        
                        goto label_140bb039b
                    
                    int64_t* rsi_3 = rdi_5
                    
                    if (rdi_5 == 0)
                        (*(*rbx_4 + 0x390))(rbx_4)
                        rdi_5 = rbx_4[0x23]
                    
                    if (rsi_3 != rdi_5 && rdi_5 != 0)
                        int32_t rax_49 = *(rdi_5 + 0xc)
                        void* const r8_9
                        
                        if (rax_49 s>= data_143e1d9b4)
                            r8_9 = nullptr
                        else
                            uint32_t rdx_21 = zx.d(rax_49.w)
                            
                            if (rax_49 s< 0)
                                rax_49 += 0xffff
                                rdx_21 -= 0x10000
                            
                            r8_9 = *(data_143e1d9a0 + (sx.q(rax_49 s>> 0x10) << 3))
                                + sx.q(rdx_21) * 0x18
                        
                        for (int32_t rax_53 = *(r8_9 + 8); test_bit(rax_53, 0x1b); 
                                rax_53 = *(r8_9 + 8))
                            bool z_7
                            
                            if (rax_53 == *(r8_9 + 8))
                                *(r8_9 + 8) = rax_53 & 0xf7ffffff
                                z_7 = true
                            else
                                *(r8_9 + 8)
                                z_7 = false
                            
                            if (z_7)
                                break
                        
                        goto label_140bb039b
                else if (((rbx_4[1].d u>> 4).b & 1) != 0)
                    rdi_5 = rbx_4
                label_140bb039b:
                    
                    if (rdi_5 != 0)
                        sub_140cdd100(rdi_5, &var_f0)
                        uint64_t r11_1 = var_f0
                        int64_t rbx_5 = 0
                        int64_t rcx_48 = r11_1 + (sx.q(var_e8_1.d) << 3)
                        uint64_t rdi_9 = (rcx_48 - r11_1 + 7) u>> 3
                        
                        if (r11_1 u> rcx_48)
                            rdi_9 = 0
                        
                        if (rdi_9 != 0)
                            int32_t r9_1 = data_143e1d9b4
                            int64_t r10_1 = data_143e1d9a0
                            
                            do
                                void* rax_58 = *r11_1
                                
                                if (rax_58 != 0)
                                    int32_t r8_10 = *(rax_58 + 0xc)
                                    void* const rdx_25
                                    
                                    if (r8_10 s>= r9_1)
                                        rdx_25 = nullptr
                                    else
                                        uint32_t rcx_49 = zx.d(r8_10.w)
                                        int32_t rax_59 = r8_10
                                        
                                        if (r8_10 s< 0)
                                            rax_59 = r8_10 + 0xffff
                                            rcx_49 -= 0x10000
                                        
                                        rdx_25 = *(r10_1 + (sx.q(rax_59 s>> 0x10) << 3))
                                            + sx.q(rcx_49) * 0x18
                                    
                                    if (((*(rdx_25 + 8) u>> 0x1b).b & 1) != 0)
                                        void* const rdx_27
                                        
                                        if (r8_10 s>= r9_1)
                                            rdx_27 = nullptr
                                        else
                                            uint32_t rax_65 = zx.d(r8_10.w)
                                            
                                            if (r8_10 s< 0)
                                                r8_10 += 0xffff
                                                rax_65 -= 0x10000
                                            
                                            rdx_27 = *(r10_1 + (sx.q(r8_10 s>> 0x10) << 3))
                                                + sx.q(rax_65) * 0x18
                                        
                                        int32_t rax_68 = *(rdx_27 + 8)
                                        
                                        if (test_bit(rax_68, 0x1b))
                                            do
                                                bool z_8
                                                
                                                if (rax_68 == *(rdx_27 + 8))
                                                    *(rdx_27 + 8) = rax_68 & 0xf7ffffff
                                                    z_8 = true
                                                else
                                                    *(rdx_27 + 8)
                                                    z_8 = false
                                                
                                                if (z_8)
                                                    break
                                                
                                                rax_68 = *(rdx_27 + 8)
                                            while (test_bit(rax_68, 0x1b))
                                            
                                            r9_1 = data_143e1d9b4
                                            r10_1 = data_143e1d9a0
                                
                                r11_1 += 8
                                rbx_5 += 1
                            while (rbx_5 != rdi_9)
                        
                        int32_t rax_70 = var_e8_1:4.d
                        var_e8_1.d = 0
                        
                        if (rax_70 s< 0 && rax_70 != 0)
                            sub_1405c5570(&var_f0, 0)
            
            rdi = arg3
        while (*(r14 + 0xbc) s< *(r14 + 0x110))
    
    zmm6 = *r13
    bool rax_72
    
    if (arg3 != 0)
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        zmm1 = float.d(performanceCount_2)
        zmm0_1 = _mm_cvtps_pd(zmm6.q)
        zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
        zmm2 = zmm1 f- zmm7.q
        rax_72 = zmm2 f> zmm0_1.q
        
        if (rax_72 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                && not(zmm2 f<= _mm_cvtps_pd(data_1439a9644.q).q))
            zmm6.d = zmm6.d f* data_1439a9640
            
            if (not(zmm2 f<= _mm_cvtps_pd(zmm6.q).q))
                data_1439a9888 = zmm7.q
        
        data_1439a9890 = zmm1
    
    if (arg3 == 0 || rax_72 == 0)
        void* rcx_56 = data_143e1adf0
        
        if (0 == *(rcx_56 + 8))
            *(rcx_56 + 8) = 0
        else
            *(rcx_56 + 8)
    
    if (*(r14 + 0xbc) != *(r14 + 0x110))
        rbx_1 = 0
    else
        *(r14 + 0xbc) = 0
        *(r14 + 0x110) = 0
        
        if (*(r14 + 0x114) s<= 0xffffffff)
            sub_1405c5570(r14 + 0x108, 0)
        
        void* rax_75 = *(r14 + 0x58)
        rbx_1 = 2
        
        if (rax_75 != 0 && *(r14 + 0xcb) == 0)
            *(r14 + 0xd8) = rax_75
            *(r14 + 0xe0) = u"CreateClustersFromPackage"
            int32_t rax_76 = *(rax_75 + 0xc)
            void* const r8_12
            
            if (rax_76 s>= data_143e1d9b4)
                r8_12 = nullptr
            else
                int16_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(rax_76)
                uint32_t rdx_29 = zx.d(temp6_1)
                int32_t rax_78 = temp7_1 + rdx_29
                r8_12 = *(data_143e1d9a0 + (sx.q(rax_78 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_78.w) - rdx_29) * 0x18
            
            for (int32_t rax_83 = *(r8_12 + 8); test_bit(rax_83, 0x1b); rax_83 = *(r8_12 + 8))
                bool z_9
                
                if (rax_83 == *(r8_12 + 8))
                    *(r8_12 + 8) = rax_83 & 0xf7ffffff
                    z_9 = true
                else
                    *(r8_12 + 8)
                    z_9 = false
                
                if (z_9)
                    break
            
            void* rax_85 = *(r14 + 0x58)
            *(rax_85 + 0x28) |= 2
            int64_t performanceCount_3
            QueryPerformanceCounter(&performanceCount_3)
            zmm0_1.q = float.d(performanceCount_3)
            zmm0_1.q = zmm0_1.q f* data_143d796f8
            zmm0_1.q = zmm0_1.q f+ zmm8.q
            zmm0_1.q = zmm0_1.q f- *(r14 + 0xe8)
            *(*(r14 + 0x58) + 0x2c) = _mm_cvtpd_ps(zmm0_1).d
            void* rcx_65 = *(r14 + 0x50)
            
            if (rcx_65 != 0)
                sub_140d1db50(rcx_65, r14 + 0x138)
            
            zmm6 = *r13
            bool rax_87
            
            if (arg3 != 0)
                int64_t performanceCount_4
                QueryPerformanceCounter(&performanceCount_4)
                zmm1 = float.d(performanceCount_4)
                zmm0_1 = _mm_cvtps_pd(zmm6.q)
                zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                zmm2 = zmm1 f- zmm7.q
                rax_87 = zmm2 f> zmm0_1.q
                
                if (rax_87 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                        && not(zmm2 f<= _mm_cvtps_pd(data_1439a9644.q).q))
                    zmm6.d = zmm6.d f* data_1439a9640
                    
                    if (not(zmm2 f<= _mm_cvtps_pd(zmm6.q).q))
                        data_1439a9888 = zmm7.q
                
                data_1439a9890 = zmm1
            
            if (arg3 == 0 || rax_87 == 0)
                void* rcx_67 = data_143e1adf0
                
                if (0 == *(rcx_67 + 8))
                    *(rcx_67 + 8) = 0
                else
                    *(rcx_67 + 8)
    
    data_1439aaa30 += 1
    data_1439a9d84 += 1
    uint64_t rcx_68 = var_f0
    
    if (rcx_68 != 0)
        sub_140a74f90(rcx_68)
    
    r15 = var_100

if (r15 != 0)
    sub_140a74f90(r15)

if (var_108 != 0)
    int32_t temp3_1 = data_143e1a570
    data_143e1a570 -= 1
    int32_t rcx_70 = data_1439a965c
    
    if (temp3_1 == 1)
        rcx_70 = -1
    
    data_1439a965c = rcx_70

*(r12 + 0x20) = rax_2
*(r12 + 0x40) = rax_1
return zx.q(rbx_1)
