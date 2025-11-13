// 函数: sub_1410a9b50
// 地址: 0x1410a9b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
void* rsi = *arg2
arg2[8]
void* rax_2 = sub_14139ce70(arg1)
int32_t rbx

if (rax_2 == 0)
    rbx = (data_143ec4fdc).d
else
    rbx = (*(rax_2 + 0x14)).d

int32_t rcx_2 = *(arg1 + 0x154)
void* rax_3 = *(rsi + 0x15a0)
int64_t rdi = *(arg1 + 0x44)
void* var_280 = rax_3
var_280.d = divs.dp.d(sx.q(rax_3.d), rcx_2)
var_280:4.d = divs.dp.d(sx.q(var_280:4.d), rcx_2)
int64_t rax_9 = *(rsi + 0x1598)
void* rsi_1 = var_280
int64_t var_260 = rax_9
var_260.d = divs.dp.d(sx.q(rax_9.d), rcx_2)
var_260:4.d = divs.dp.d(sx.q(var_260:4.d), rcx_2)
void* rax_15 = data_143ec4d28
TEB* gsbase
void* rax_17 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
var_280 = rax_17

if (data_143e41338 s> *(rax_17 + 0x14))
    _Init_thread_header(&data_143e41338)
    
    if (data_143e41338 == 0xffffffff)
        int64_t* rcx_116 = data_143db18d0
        
        if (rcx_116 == 0)
            sub_140a53c40()
            rcx_116 = data_143db18d0
        
        int64_t r8_16
        r8_16.b = 1
        int64_t* rax_82 = (*(*rcx_116 + 0xb0))(rcx_116, u"r.AmbientOcclusion.Compute", r8_16)
        int64_t rax_83
        
        if (rax_82 == 0)
            rax_83 = 0
        else
            int64_t rdx_56 = *rax_82
            rax_83 = (*(rdx_56 + 0x58))(rax_82, rdx_56)
        
        data_143e41330 = rax_83
        _Init_thread_footer(&data_143e41338)

int32_t rax_19 = sub_141096bb0(*arg2)
uint128_t var_278

if (arg1[0x2a].d != 2)
    int128_t zmm1_1 = data_142d3f5a0
    int32_t var_90_1 = 0
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x19)
    int64_t rax_33 = *(rax_15 + 8)
    int64_t var_160_1 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x11)
    int32_t var_94_1 = 0
    int32_t var_8c
    __builtin_memset(&var_8c, 0xff, 0x14)
    int128_t var_78_1 = zmm1_1
    int64_t var_168 = rax_33
    int32_t var_158_1 = 0xffffffff
    int16_t var_154_1 = 0x500
    bool var_4f_1 = *(rax_33 + 0x38) u> 1
    void var_150
    memset(&var_150, 0, 0xa8)
    void* r13_1 = arg2[8]
    int64_t rbx_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_34 = rbx_3 + 0x24
    
    if (rax_34 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x26)
        rbx_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_34 = rbx_3 + 0x24
    
    wchar16 const* const rcx_33 = u"GTAOHorizonSearch"
    *(r13_1 + 0x30) = rax_34
    wchar16 const i
    
    do
        i = *rcx_33
        *(rcx_33 + rbx_3 - u"GTAOHorizonSearch") = i
        rcx_33 = &rcx_33[1]
    while (i != 0)
    void*** rcx_36 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_35 = &rcx_36[0x27]
    
    if (rax_35 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x140)
        rcx_36 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_35 = &rcx_36[0x27]
    
    *(r13_1 + 0x30) = rax_35
    void**** rax_36 = *(r13_1 + 8)
    *(r13_1 + 0x14) += 1
    *rax_36 = rcx_36
    *(r13_1 + 8) = &rcx_36[1]
    sub_1405d11b0(rcx_36, &var_168, rbx_3)
    *(r13_1 + 0x1c4) = 1
    sub_1405d19b0(r13_1, &var_168)
    int512_t zmm2
    zmm2.o = zx.o(0)
    int512_t zmm3
    zmm3.o = 0x3f800000
    int64_t var_58
    *(r13_1 + 0x178) = var_58:7.b
    var_278 = var_260.o
    *(r13_1 + 0x179) = 0
    *(r13_1 + 0x1c4) = 1
    sub_1410b7780(arg2, &var_278, zmm2.o, zmm3.o)
    void* rcx_42 = arg2[8]
    int64_t var_1bc
    __builtin_memset(&var_1bc, 0, 0x43)
    int128_t var_218
    __builtin_memset(&var_218, 0, 0x30)
    int128_t var_1d0_1 = zx.o(0)
    int16_t var_178_1 = 0
    void* r9_6 = sub_140fdc870(rcx_42, &var_218)
    int64_t var_1e8_1 = data_14395da00
    int64_t var_1e0_1 = data_14395da18
    int64_t var_1d8_1 = data_14395d9e8
    int32_t var_1c0_1 = 0
    int16_t var_17c
    var_17c.b = 0
    uint128_t var_228 = zx.o(0)
    void* var_250
    void* var_248
    int128_t var_1f8
    void* r12_7
    
    if (rax_19 == 0)
        sub_1419a2ec0(arg2[0xc], &var_278, &data_143ed5e80, 0)
        void* rbx_22 = var_278:8.q
        int64_t* rcx_92 = arg2[0xc]
        r12_7 = var_278.q
        var_280 = rbx_22
        sub_1419a2ec0(rcx_92, &var_250, &data_143e3e6f0, 0)
        void* r13_6 = var_250
        var_218.q = data_1439c9210
        int64_t rax_67 = 0
        
        if (r12_7 != 0)
            int64_t rdx_51 = sx.q(*(r12_7 + 0x10c))
            int64_t* rbx_23 = *(rbx_22 + 0x10)
            int64_t rcx_94 = rdx_51
            int64_t rax_68 = rbx_23[3]
            
            if (*(rax_68 + (rdx_51 << 3)) == 0)
                sub_1419ccf30(rbx_23, rdx_51.d)
                rax_68 = rbx_23[3]
                rcx_94 = rdx_51
            
            rax_67 = *(rax_68 + (rcx_94 << 3))
        
        var_218:8.q = rax_67
        int64_t rax_69 = 0
        
        if (r13_6 != 0)
            int64_t rdx_52 = sx.q(*(r13_6 + 0x10c))
            int64_t* rbx_24 = *(var_248 + 0x10)
            int64_t rcx_96 = rdx_52
            int64_t rax_70 = rbx_24[3]
            
            if (*(rax_70 + (rdx_52 << 3)) == 0)
                sub_1419ccf30(rbx_24, rdx_52.d)
                rax_70 = rbx_24[3]
                rcx_96 = rdx_52
            
            rax_69 = *(rax_70 + (rcx_96 << 3))
        
        var_1f8.q = rax_69
        sub_1419870b0(arg2[8], &var_218, 2)
        void* rax_71 = sub_14139ce70(arg1)
        arg2[8]
        int64_t r9_15
        
        if (rax_71 == 0)
            r9_15 = data_143ec4fdc
        else
            r9_15 = *(rax_71 + 0x14)
        
        r9_6, zmm2, zmm3 = sub_1410b6df0(r13_6, arg2, rdi, r9_15)
    label_1410aa75c:
        var_278:8.q = var_280
        var_278.q = r12_7
        var_228 = var_278
    else
        if (rax_19 == 1)
            sub_1419a2ec0(arg2[0xc], &var_278, &data_143ed5e80, 0)
            void* rbx_18 = var_278:8.q
            int64_t* rcx_80 = arg2[0xc]
            r12_7 = var_278.q
            var_280 = rbx_18
            sub_1419a2ec0(rcx_80, &var_250, &data_143e3e9b0, 0)
            void* r13_5 = var_250
            var_218.q = data_1439c9210
            int64_t rax_61 = 0
            
            if (r12_7 != 0)
                int64_t rdx_43 = sx.q(*(r12_7 + 0x10c))
                int64_t* rbx_19 = *(rbx_18 + 0x10)
                int64_t rcx_82 = rdx_43
                int64_t rax_62 = rbx_19[3]
                
                if (*(rax_62 + (rdx_43 << 3)) == 0)
                    sub_1419ccf30(rbx_19, rdx_43.d)
                    rax_62 = rbx_19[3]
                    rcx_82 = rdx_43
                
                rax_61 = *(rax_62 + (rcx_82 << 3))
            
            var_218:8.q = rax_61
            int64_t rax_63 = 0
            
            if (r13_5 != 0)
                int64_t rdx_44 = sx.q(*(r13_5 + 0x10c))
                int64_t* rbx_20 = *(var_248 + 0x10)
                int64_t rcx_84 = rdx_44
                int64_t rax_64 = rbx_20[3]
                
                if (*(rax_64 + (rdx_44 << 3)) == 0)
                    sub_1419ccf30(rbx_20, rdx_44.d)
                    rax_64 = rbx_20[3]
                    rcx_84 = rdx_44
                
                rax_63 = *(rax_64 + (rcx_84 << 3))
            
            var_1f8.q = rax_63
            sub_1419870b0(arg2[8], &var_218, 2)
            void* rax_65 = sub_14139ce70(arg1)
            arg2[8]
            
            if (rax_65 == 0)
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_5, arg2, rdi, data_143ec4fdc)
            else
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_5, arg2, rdi, *(rax_65 + 0x14))
            
            goto label_1410aa75c
        
        if (rax_19 == 2)
            sub_1419a2ec0(arg2[0xc], &var_278, &data_143ed5e80, 0)
            void* rbx_14 = var_278:8.q
            int64_t* rcx_68 = arg2[0xc]
            r12_7 = var_278.q
            var_280 = rbx_14
            sub_1419a2ec0(rcx_68, &var_250, &data_143e3ec70, 0)
            void* r13_4 = var_250
            var_218.q = data_1439c9210
            int64_t rax_55 = 0
            
            if (r12_7 != 0)
                int64_t rdx_35 = sx.q(*(r12_7 + 0x10c))
                int64_t* rbx_15 = *(rbx_14 + 0x10)
                int64_t rcx_70 = rdx_35
                int64_t rax_56 = rbx_15[3]
                
                if (*(rax_56 + (rdx_35 << 3)) == 0)
                    sub_1419ccf30(rbx_15, rdx_35.d)
                    rax_56 = rbx_15[3]
                    rcx_70 = rdx_35
                
                rax_55 = *(rax_56 + (rcx_70 << 3))
            
            var_218:8.q = rax_55
            int64_t rax_57 = 0
            
            if (r13_4 != 0)
                int64_t rdx_36 = sx.q(*(r13_4 + 0x10c))
                int64_t* rbx_16 = *(var_248 + 0x10)
                int64_t rcx_72 = rdx_36
                int64_t rax_58 = rbx_16[3]
                
                if (*(rax_58 + (rdx_36 << 3)) == 0)
                    sub_1419ccf30(rbx_16, rdx_36.d)
                    rax_58 = rbx_16[3]
                    rcx_72 = rdx_36
                
                rax_57 = *(rax_58 + (rcx_72 << 3))
            
            var_1f8.q = rax_57
            sub_1419870b0(arg2[8], &var_218, 2)
            void* rax_59 = sub_14139ce70(arg1)
            arg2[8]
            
            if (rax_59 == 0)
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_4, arg2, rdi, data_143ec4fdc)
            else
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_4, arg2, rdi, *(rax_59 + 0x14))
            
            goto label_1410aa75c
        
        if (rax_19 == 3)
            sub_1419a2ec0(arg2[0xc], &var_278, &data_143ed5e80, 0)
            void* rbx_10 = var_278:8.q
            int64_t* rcx_56 = arg2[0xc]
            r12_7 = var_278.q
            var_280 = rbx_10
            sub_1419a2ec0(rcx_56, &var_250, &data_143e3ef30, 0)
            void* r13_3 = var_250
            var_218.q = data_1439c9210
            int64_t rax_49 = 0
            
            if (r12_7 != 0)
                int64_t rdx_27 = sx.q(*(r12_7 + 0x10c))
                int64_t* rbx_11 = *(rbx_10 + 0x10)
                int64_t rcx_58 = rdx_27
                int64_t rax_50 = rbx_11[3]
                
                if (*(rax_50 + (rdx_27 << 3)) == 0)
                    sub_1419ccf30(rbx_11, rdx_27.d)
                    rax_50 = rbx_11[3]
                    rcx_58 = rdx_27
                
                rax_49 = *(rax_50 + (rcx_58 << 3))
            
            var_218:8.q = rax_49
            int64_t rax_51 = 0
            
            if (r13_3 != 0)
                int64_t rdx_28 = sx.q(*(r13_3 + 0x10c))
                int64_t* rbx_12 = *(var_248 + 0x10)
                int64_t rcx_60 = rdx_28
                int64_t rax_52 = rbx_12[3]
                
                if (*(rax_52 + (rdx_28 << 3)) == 0)
                    sub_1419ccf30(rbx_12, rdx_28.d)
                    rax_52 = rbx_12[3]
                    rcx_60 = rdx_28
                
                rax_51 = *(rax_52 + (rcx_60 << 3))
            
            var_1f8.q = rax_51
            sub_1419870b0(arg2[8], &var_218, 2)
            void* rax_53 = sub_14139ce70(arg1)
            arg2[8]
            
            if (rax_53 == 0)
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_3, arg2, rdi, data_143ec4fdc)
            else
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_3, arg2, rdi, *(rax_53 + 0x14))
            
            goto label_1410aa75c
        
        if (rax_19 == 4)
            sub_1419a2ec0(arg2[0xc], &var_250, &data_143ed5e80, 0)
            int64_t* rcx_44 = arg2[0xc]
            r12_7 = var_250
            var_280 = var_248
            sub_1419a2ec0(rcx_44, &var_278, &data_143e3f1f0, 0)
            void* rcx_45 = var_278:8.q
            void* r13_2 = var_278.q
            var_218.q = data_1439c9210
            int64_t rax_43 = 0
            
            if (r12_7 != 0)
                int64_t rdx_19 = sx.q(*(r12_7 + 0x10c))
                int64_t* rbx_7 = *(var_248 + 0x10)
                int64_t rcx_46 = rdx_19
                int64_t rax_44 = rbx_7[3]
                
                if (*(rax_44 + (rdx_19 << 3)) == 0)
                    sub_1419ccf30(rbx_7, rdx_19.d)
                    rax_44 = rbx_7[3]
                    rcx_46 = rdx_19
                
                rax_43 = *(rax_44 + (rcx_46 << 3))
            
            var_218:8.q = rax_43
            int64_t rax_45 = 0
            
            if (r13_2 != 0)
                int64_t rdx_20 = sx.q(*(r13_2 + 0x10c))
                int64_t* rbx_8 = *(rcx_45 + 0x10)
                int64_t rcx_48 = rdx_20
                int64_t rax_46 = rbx_8[3]
                
                if (*(rax_46 + (rdx_20 << 3)) == 0)
                    sub_1419ccf30(rbx_8, rdx_20.d)
                    rax_46 = rbx_8[3]
                    rcx_48 = rdx_20
                
                rax_45 = *(rax_46 + (rcx_48 << 3))
            
            var_1f8.q = rax_45
            sub_1419870b0(arg2[8], &var_218, 2)
            void* rax_47 = sub_14139ce70(arg1)
            arg2[8]
            
            if (rax_47 == 0)
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_2, arg2, rdi, data_143ec4fdc)
            else
                r9_6, zmm2, zmm3 = sub_1410b6df0(r13_2, arg2, rdi, *(rax_47 + 0x14))
            
            goto label_1410aa75c
    int32_t rcx_102 = var_260:4.d
    int32_t rsi_8 = rsi_1.d - var_260.d
    int32_t var_290_1 = 1
    int32_t rax_74 = rsi_1:4.d - rcx_102
    int32_t var_298_1 = 1
    var_280:4.d = rax_74
    void* rcx_103 = arg2[8]
    uint128_t* var_2a0_1 = &var_228
    uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rax_74))
    var_280.d = rsi_8
    void* rax_75 = var_280
    zmm3.o = zx.o(rsi_8)
    int32_t var_2b8_1 = zmm4_1.d
    zmm3.o = _mm_cvtepi32_ps(zmm3.o)
    zmm2.o = zx.o(var_260.d)
    int32_t var_2c0_1 = zmm3.d
    zmm2.o = _mm_cvtepi32_ps(zmm2.o)
    int32_t var_2d0_1 = zmm2.d
    zmm2.o = zx.o(0)
    sub_1413993b0(rcx_103, zx.o(0), zmm2, r9_6, zmm3, zmm4_1.d, var_2d0_1, 
        _mm_cvtepi32_ps(zx.o(rcx_102)).d, var_2c0_1, var_2b8_1, rax_75, rdi, var_2a0_1, var_298_1, 
        var_290_1)
    sub_141096650(arg2[8])
    int64_t var_60
    sub_1405d1550(&var_60)
else
    if (data_143e41348 s> *(var_280 + 0x14))
        _Init_thread_header(&data_143e41348)
        
        if (data_143e41348 == 0xffffffff)
            sub_140b58260(&data_143e41340, u"AsyncStartFence", 1)
            _Init_thread_footer(&data_143e41348)
    
    int64_t* rcx_6 = data_143f0f180
    (*(*rcx_6 + 0x98))(rcx_6, &var_280, &data_143e41340)
    void* r14_1 = arg2[8]
    void* rax_22 = var_280
    int64_t* rsi_4 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rax_24 = *(rax_15 + 0x18)
    void* rcx_7 = &rsi_4[1]
    
    if (rcx_7 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x10)
        rsi_4 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_7 = &rsi_4[1]
    
    *(r14_1 + 0x30) = rcx_7
    *rsi_4 = rax_24
    void*** rcx_11 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_11[6]
    
    if (rax_25 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x38)
        rcx_11 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_11[6]
    
    *(r14_1 + 0x30) = rax_25
    *(r14_1 + 0x14) += 1
    **(r14_1 + 8) = rcx_11
    *(r14_1 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_142da7798
    rcx_11[5] = rax_22
    rcx_11[2].d = 1
    rcx_11[3] = rsi_4
    rcx_11[4] = 2
    void* rsi_7 = var_280
    void*** rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    void* rax_29 = &rcx_17[3]
    
    if (rax_29 u> data_143f02d98)
        sub_140b0e3d0(&data_143f02d90, 0x20)
        rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_17[3]
    
    data_143f02d74 += 1
    data_143f02d90 = rax_29
    *data_143f02d68 = rcx_17
    data_143f02d68 = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142f11608
    rcx_17[2] = rsi_7
    sub_1410e0370(arg2[8])
    
    if (rax_19 == 0)
        var_278 = var_260.o
        sub_14107b3e0(arg1, arg2, &var_278, rdi, rbx)
        sub_1405d1550(&var_280)
    else if (rax_19 == 1)
        var_278 = var_260.o
        sub_1410765a0(arg1, arg2, &var_278, rdi, rbx)
        sub_1405d1550(&var_280)
    else if (rax_19 == 2)
        var_278 = var_260.o
        sub_1410772f0(arg1, arg2, &var_278, rdi, rbx)
        sub_1405d1550(&var_280)
    else if (rax_19 == 3)
        var_278 = var_260.o
        sub_141078040(arg1, arg2, &var_278, rdi, rbx)
        sub_1405d1550(&var_280)
    else if (rax_19 != 4)
        sub_1405d1550(&var_280)
    else
        var_278 = var_260.o
        sub_141078d90(arg1, arg2, &var_278, rdi, rbx)
        sub_1405d1550(&var_280)
void* rsi_9 = arg2[8]
int64_t rax_77 = *(rax_15 + 8)
int64_t* rbx_28 = (*(rsi_9 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_106 = &rbx_28[1]

if (rcx_106 u> *(rsi_9 + 0x38))
    sub_140b0e3d0(rsi_9 + 0x30, 0x10)
    rbx_28 = (*(rsi_9 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_106 = &rbx_28[1]

*(rsi_9 + 0x30) = rcx_106
*rbx_28 = rax_77
void*** rcx_110 = (*(rsi_9 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_78 = &rcx_110[5]

if (rax_78 u> *(rsi_9 + 0x38))
    sub_140b0e3d0(rsi_9 + 0x30, 0x30)
    rcx_110 = (*(rsi_9 + 0x30) + 7) & 0xfffffffffffffff8
    rax_78 = &rcx_110[5]

*(rsi_9 + 0x30) = rax_78
void**** rax_79 = *(rsi_9 + 8)
*(rsi_9 + 0x14) += 1
*rax_79 = rcx_110
*(rsi_9 + 8) = &rcx_110[1]
rcx_110[1] = 0
*rcx_110 = &data_142d549c8
rcx_110[2].d = 1
rcx_110[3] = rbx_28
rcx_110[4].d = 0
__security_check_cookie(rax_1 ^ &var_2f8)
return &data_142d549c8
