// 函数: sub_14238a130
// 地址: 0x14238a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
void* result = __security_cookie ^ &var_2e8
void* result_3 = result
int64_t* rsi = arg1

if ((*(arg1 + 0x36) & 4) == 0)
    uint64_t r13
    uint64_t var_30_1 = r13
    int128_t zmm6
    int128_t var_48_1 = zmm6
    result = (*(*arg1 + 0xf0))()
    int64_t* r8_1 = rsi[0x2a]
    int64_t r10_1 = sx.q(*(rsi + 0x624))
    int32_t r9_1 = rsi[0xd].d
    int32_t rbx_1 = *(rsi[0x21] + 8)
    int32_t rcx_1 = rsi[0xc4].d
    int64_t rdx = sx.q(r8_1[1].d)
    char var_2a7_1 = result.b
    int32_t var_288_1 = rbx_1
    int32_t var_2a4_1 = r9_1
    int32_t var_2a0_1 = r10_1.d
    int128_t var_238
    int32_t var_1fc
    int32_t var_1d4
    int32_t var_19c
    int128_t var_198
    int32_t var_fc
    int512_t zmm2
    
    if (rcx_1 s<= 0)
        int64_t var_258_1 = r10_1
        int64_t r8_5 = r10_1
        
        if (r10_1 s< rdx)
            uint64_t rdi_4 = zx.q(data_14401b1a0)
            void* rdx_9 = (r10_1 << 2) + 0x20
            TEB* gsbase
            void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            int64_t r11_2 = r10_1 << 7
            int64_t var_260_1 = r11_2
            void* var_280_1 = rdx_9
            
            do
                int64_t* rcx_18 = rsi[0x2a]
                r13.b = 0
                char var_2a5_1 = 0
                char var_2a6_1 = 0
                zmm6 = *(rdx_9 + rcx_18)
                void* result_4 = *(*rcx_18 + (r8_5 << 3))
                void* result_1 = result_4
                char var_2c8
                char var_2c0
                char var_2b8
                int128_t* var_2b0
                char var_2a8
                int32_t i_3
                void* var_278
                int32_t var_268
                
                if (data_143a2ff90 != 0 && (*(result_4 + 0x44) & 2) != 0)
                    void* r9_3 = rsi[0x2c]
                    var_278 = r9_3
                    
                    if (rbx_1 s>= 3)
                        if (data_143f59c98 s> *(0x14 + *(ThreadLocalStoragePointer + (rdi_4 << 3))))
                            int64_t r8_16
                            rcx_18, r8_16 = _Init_thread_header(&data_143f59c98)
                            
                            if (data_143f59c98 == 0xffffffff)
                                int64_t* rcx_69 = data_143db18d0
                                
                                if (rcx_69 == 0)
                                    sub_140a53c40()
                                    rcx_69 = data_143db18d0
                                
                                r8_16.b = 1
                                int64_t* rax_105 =
                                    (*(*rcx_69 + 0xb0))(rcx_69, r.LightPropagationVolume", r8_16)
                                int64_t rax_103
                                
                                if (rax_105 == 0)
                                    rax_103 = 0
                                else
                                    int64_t rdx_29 = *rax_105
                                    rax_103 = (*(rdx_29 + 0x58))(rax_105, rdx_29)
                                
                                data_143f59c90 = rax_103
                                _Init_thread_footer(&data_143f59c98)
                            
                            r11_2 = var_260_1
                            result_4 = result_1
                            r9_3 = var_278
                        
                        rcx_18.b = *(data_143f59c90 + 4) == 0
                    else
                        rcx_18.b = 1
                    
                    rsi.b = 0
                    ThreadLocalStoragePointer.b = 1
                    r13 = 0
                    rdi_4.b = *(arg1 + 0x32) - 1 u<= 1
                    char rdx_11 = arg1[0xc5].b & 1
                    char var_29c_1 = rdi_4.b
                    var_2a8 = rdx_11
                    
                    if (rcx_18.b == 0)
                    label_14238a8be:
                        rsi = arg1
                    else
                        var_268.q = 0
                        int64_t r8_6 = 0
                        i_3.q = 0
                        
                        while (r13.d s< *(result_4 + 0x30))
                            int64_t* rcx_20 = r9_3 + 0x30 + r11_2
                            int64_t* rax_32 = rcx_20[2]
                            
                            if (rax_32 != 0)
                                rcx_20 = rax_32
                            
                            int64_t* rcx_21 = *(rcx_20 + r8_6)
                            int64_t* rax_34 = (*(*rcx_21 + 0x280))(rcx_21)
                            int64_t var_248 = 0
                            int64_t r9_4 = *rax_34
                            int64_t* rax_35
                            rax_35, rcx_18 = (*(r9_4 + 0x40))(rax_34, zx.q(rbx_1), &var_248, r9_4, 
                                var_2c8, var_2c0, var_2b8, var_2b0, var_2a8, var_2a0_1, arg1, i_3, 
                                var_288_1, var_280_1, var_278, result_1, var_268, var_260_1, 
                                var_258_1)
                            char rax_36
                            
                            if (rsi.b == 0 && rdi_4.b == 0)
                                int64_t rdx_13 = *rax_35
                                rax_36, rcx_18 = (*(rdx_13 + 0x30))(rax_35, rdx_13)
                            
                            if (rsi.b != 0 || (rdi_4.b == 0 && rax_36 != 0))
                                rsi.b = 1
                            else
                                rsi.b = 0
                            
                            char rax_38
                            
                            if (ThreadLocalStoragePointer.b != 0 && rdi_4.b == 0)
                                rax_38, rcx_18 = (*(*rax_35 + 0x30))(rax_35)
                            
                            if (ThreadLocalStoragePointer.b == 0 || rdi_4.b != 0 || rax_38 == 0)
                                ThreadLocalStoragePointer.b = 0
                            else
                                ThreadLocalStoragePointer.b = 1
                            
                            void* rdi_6 = result_1 + 0x10
                            void* rax_39 = *(rdi_6 + 0x18)
                            
                            if (rax_39 != 0)
                                rdi_6 = rax_39
                            
                            if (rsi.b == 0 || ThreadLocalStoragePointer.b != 0)
                                char rax_40
                                rax_40, rcx_18 = sub_142134f80(rax_35, 0)
                                
                                if (rax_40 == 0)
                                    rcx_18.b = 0
                                else
                                    char rax_42
                                    rax_42, rcx_18 = (*(*rax_35 + 0x28))(rax_35)
                                    
                                    if (rax_42 != 0)
                                        rcx_18.b = 0
                                    else
                                        int32_t rax_44
                                        rax_44, rcx_18 = (*(*rax_35 + 0x1d8))(rax_35)
                                        
                                        if (rax_44 u> 1)
                                            rcx_18.b = 0
                                        else
                                            char rax_45
                                            rax_45, rcx_18 = sub_14212f090(rax_35)
                                            
                                            if (rax_45 != 0)
                                                rcx_18.b = 0
                                            else
                                                int32_t rax_47
                                                rax_47, rcx_18 = (*(*rax_35 + 0x20))(rax_35)
                                                
                                                if (rax_47 != 0)
                                                    rcx_18.b = 0
                                                else
                                                    void var_250
                                                    rcx_18.w =
                                                        *(*(*rax_35 + 0x1e8))(rax_35, &var_250)
                                                        u>> 0xa
                                                    
                                                    if ((rcx_18.b & 1) != 0)
                                                        rcx_18.b = 0
                                                    else
                                                        rcx_18.b = 1
                            else
                                rcx_18.b = 0
                            
                            r13 = zx.q(r13.d + 1)
                            rdx_11 = var_2a8 & *(rdi_6 + var_268.q + 0x15)
                            var_268.q += 0x18
                            r8_6 = i_3.q + 0x10
                            rdi_4 = zx.q(var_29c_1)
                            r9_3 = var_278
                            r11_2 = var_260_1
                            rbx_1 = var_288_1
                            var_2a8 = rdx_11
                            i_3.q = r8_6
                            
                            if (rcx_18.b == 0)
                                goto label_14238a8be_1
                            
                            result_4 = result_1
                        
                        rsi = arg1
                        
                        if (rcx_18.b != 0)
                            var_2a5_1 = rdx_11
                            
                            if ((*(rsi + 0x3c) & 1) == 0 || *(rsi[0x21] + 8) s< 3
                                    || *(rsi + 0x32) - 1 u<= 1)
                                r13.b = 0
                            else
                                r13.b = 1
                            
                            var_2a6_1 = r13.b
                            
                            if (rdx_11 != 0 || r13.b != 0)
                                int32_t rax_53 = (*(*rsi + 0x188))(rsi)
                                int64_t r8_9 = *arg2
                                (*(r8_9 + 0x10))(arg2, zx.q(rax_53), r8_9)
                                int32_t rbx_5 = 0
                                
                                if (rax_53 s> 0)
                                    do
                                        int32_t var_15c = var_15c & 0xf8000000
                                        int32_t var_134 = var_134 & 0xfffff800
                                        var_fc = (var_fc & 0xfc0c003c) | 0x40c003c
                                        int64_t rax_57 = *arg1
                                        var_2c0 = ThreadLocalStoragePointer.b
                                        var_2c8.q = &var_198
                                        int64_t var_130_2 = 0
                                        int32_t var_124_2 = 1
                                        int64_t var_120
                                        __builtin_memset(&var_120, 0, 0x18)
                                        int32_t var_108_2 = 0xffffffff
                                        int32_t var_104_2 = 0
                                        int16_t var_100
                                        var_100.d = 0xffff0000
                                        int32_t var_128_2 = 1
                                        __builtin_memset(&var_198, 0, 0x3c)
                                        int64_t var_150_1 = 1
                                        int32_t var_140_1 = 0xffffffff
                                        int32_t var_13c_1 = 0
                                        int32_t var_138_1 = 0x3f800000
                                        
                                        if ((*(rax_57 + 0x190))(zx.o(0), zx.q(var_2a0_1), 
                                                zx.q(rbx_5), zx.q(var_2a7_1), var_2c8, var_2c0, 
                                                var_2b8, var_2b0, var_2a8, var_2a0_1, arg1, i_3, 
                                                var_288_1, var_280_1, var_278, result_1, var_268, 
                                                var_260_1, var_258_1) != 0)
                                            uint32_t rax_59 = zx.d(r13.b)
                                            zmm2.o = zmm6
                                            var_fc = (((rax_59 * 2) | rax_59) << 2
                                                | (zx.d(var_2a8) & 1)) << 2 | (var_fc & 0xffffffc3)
                                            (*(*arg2 + 0x18))(arg2, &var_198, zmm2)
                                        
                                        if (var_130_2 != 0)
                                            sub_140a74f90(var_130_2)
                                        
                                        rbx_5 += 1
                                    while (rbx_5 s< rax_53)
                                    
                                    var_2a5_1 = var_2a8
                                label_14238a8be_1:
                                    rsi = arg1
                    
                    rdx_9 = var_280_1
                    r9_1 = var_2a4_1
                
                result = result_1
                int32_t i = 0
                i_3 = 0
                
                if (*(result + 0x30) s> 0)
                    int32_t r15_2 = r9_1 + 1
                    var_268 = r15_2
                    
                    do
                        int32_t j_1 = (*(*rsi + 0x188))(rsi)
                        int64_t r8_11 = *arg2
                        int32_t j = j_1
                        var_278.d = j_1
                        (*(r8_11 + 0x10))(arg2, zx.q(r15_2 * j_1), r8_11)
                        r13 = 0
                        
                        if (j s> 0)
                            do
                                var_1fc &= 0xf8000000
                                var_1d4 &= 0xfffff800
                                var_2b0 = &var_238
                                var_19c = (var_19c & 0xfc0c003c) | 0x40c003c
                                int64_t rax_69 = *rsi
                                var_2b8 = 1
                                var_2c0 = 0
                                var_2c8 = var_2a7_1
                                int128_t* var_1d0_2 = nullptr
                                int32_t var_1c4_2 = 1
                                int128_t var_1c0_1
                                __builtin_memset(&var_1c0_1, 0, 0x18)
                                int32_t var_1a8_2 = 0xffffffff
                                int32_t var_1a4_2 = 0
                                int32_t var_1a0_2 = 0xffff0000
                                int32_t var_1c8_2 = 1
                                __builtin_memset(&var_238, 0, 0x3c)
                                int64_t var_1f0_2 = 1
                                int32_t var_1e0_2 = 0xffffffff
                                int32_t var_1dc_2 = 0
                                int32_t var_1d8_2 = 0x3f800000
                                
                                if ((*(rax_69 + 0x198))(rsi, zx.q(var_2a0_1), zx.q(r13.d), zx.q(i), 
                                        var_2c8, var_2c0, var_2b8, var_2b0, var_2a8, var_2a0_1, 
                                        arg1, i_3, var_288_1, var_280_1, var_278, result_1, 
                                        var_268, var_260_1, var_258_1) != 0)
                                    int64_t var_1b0_1
                                    void var_f8
                                    int32_t var_5c
                                    int32_t rbx_6
                                    
                                    if (var_2a4_1 s<= 0)
                                        rbx_6 = var_1c8_2
                                    else
                                        rbx_6 = var_1c8_2
                                        void* rdx_21 = nullptr
                                        void* var_90_1 = nullptr
                                        int32_t var_88_1 = rbx_6
                                        
                                        if (rbx_6 != 0)
                                            sub_14083a160(&var_f8, rbx_6, 0)
                                            int128_t* rdx_23 = &var_238
                                            void* rcx_47 = &var_f8
                                            
                                            if (var_1d0_2 != 0)
                                                rdx_23 = var_1d0_2
                                            
                                            if (var_90_1 != 0)
                                                rcx_47 = var_90_1
                                            
                                            memcpy(rcx_47, rdx_23, rbx_6 * 0x68)
                                            rdx_21 = var_90_1
                                            rbx_6 = var_1c8_2
                                        else
                                            int32_t var_84_1 = 1
                                        
                                        char* rdi_10 = rsi[0xc]
                                        int64_t r15_3 = sx.q(rsi[0xd].d)
                                        int64_t rsi_5 = 0
                                        int64_t var_80_1 = var_1c0_1.q
                                        int64_t var_78_1 = var_1c0_1:8.q
                                        int64_t var_70_1 = var_1b0_1
                                        int32_t var_68_1 = var_1a8_2
                                        int16_t var_60_1 = var_1a0_2.w
                                        char var_5e_1 = var_1a0_2:2.b
                                        char var_5d_1 = var_1a0_2:3.b
                                        int32_t var_64_1 = var_1a4_2.d
                                        int32_t rcx_51 =
                                            (var_5c & 0xf8400000) | (var_19c & 0x79fffc3) | 0x400000
                                        var_5c = rcx_51
                                        
                                        if (rdi_10 u> &rdi_10[r15_3])
                                            r15_3 = 0
                                        
                                        if (r15_3 != 0)
                                            while (true)
                                                zmm2.o = zmm6
                                                var_5c = rcx_51 ^ ((zx.d(*rdi_10) << 0x17 ^ rcx_51)
                                                    & 0x3800000)
                                                (*(*arg2 + 0x18))(arg2, &var_f8, zmm2)
                                                rsi_5 += 1
                                                rdi_10 = &rdi_10[1]
                                                
                                                if (rsi_5 == r15_3)
                                                    break
                                                
                                                rcx_51 = var_5c
                                            
                                            rbx_6 = var_1c8_2
                                            rdx_21 = var_90_1
                                        
                                        if (rdx_21 != 0)
                                            sub_140a74f90(rdx_21)
                                            rbx_6 = var_1c8_2
                                        
                                        rsi = arg1
                                    
                                    void* var_90_2 = nullptr
                                    int32_t var_88_2 = rbx_6
                                    
                                    if (rbx_6 != 0)
                                        sub_14083a160(&var_f8, rbx_6, 0)
                                        int128_t* rdx_26 = &var_238
                                        void* rcx_56 = &var_f8
                                        
                                        if (var_1d0_2 != 0)
                                            rdx_26 = var_1d0_2
                                        
                                        if (var_90_2 != 0)
                                            rcx_56 = var_90_2
                                        
                                        memcpy(rcx_56, rdx_26, rbx_6 * 0x68)
                                    else
                                        int32_t var_84_2 = 1
                                    
                                    zmm2.o = zmm6
                                    int64_t var_80_2 = var_1c0_1.q
                                    int64_t var_78_2 = var_1c0_1:8.q
                                    int64_t var_70_2 = var_1b0_1
                                    int32_t var_68_2 = var_1a8_2
                                    int16_t var_60_2 = var_1a0_2.w
                                    char var_5e_2 = var_1a0_2:2.b
                                    char var_5d_2 = var_1a0_2:3.b
                                    int32_t rax_96 = 0
                                    
                                    if (var_2a6_1 == 0)
                                        rax_96 = 0x20
                                    
                                    int32_t var_64_2 = var_1a4_2.d
                                    int32_t rax_98 = 0
                                    
                                    if (var_2a6_1 == 0)
                                        rax_98 = 0x10
                                    
                                    int32_t rax_100 = 0
                                    
                                    if (var_2a5_1 == 0)
                                        rax_100 = 4
                                    
                                    var_5c = (((var_5c ^ var_19c) & 0x7ffffff) ^ var_5c)
                                        & (rax_96 | 0xffffffdf) & (rax_98 | 0xffffffef)
                                        & (rax_100 | 0xfffffffb)
                                    (*(*arg2 + 0x18))(arg2, &var_f8, 0x20, zmm2)
                                    
                                    if (var_90_2 != 0)
                                        sub_140a74f90(var_90_2)
                                    
                                    i = i_3
                                    j = var_278.d
                                
                                if (var_1d0_2 != 0)
                                    sub_140a74f90(var_1d0_2)
                                
                                r13 = zx.q(r13.d + 1)
                            while (r13.d s< j)
                            
                            r15_2 = var_268
                        
                        result = result_1
                        i += 1
                        i_3 = i
                    while (i s< *(result + 0x30))
                    
                    rdx_9 = var_280_1
                
                rdx_9 += 4
                r8_5 = var_258_1 + 1
                var_2a0_1 += 1
                r11_2 = var_260_1 + 0x80
                r9_1 = var_2a4_1
                rbx_1 = var_288_1
                rdi_4 = zx.q(data_14401b1a0)
                ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                var_258_1 = r8_5
                var_280_1 = rdx_9
                var_260_1 = r11_2
            while (r8_5 s< rdx)
    else
        int32_t rax_2 = (r10_1 + 1).d
        
        if (rcx_1 s>= rax_2)
            if (rcx_1 s< rdx.d)
                rdx = zx.q(rcx_1)
            
            rax_2 = rdx.d
        
        int32_t rdi_1 = rax_2 - 1
        int32_t i_1 = 0
        int32_t var_290 = rdi_1
        int32_t i_2 = 0
        result = *(*r8_1 + (sx.q(rax_2) << 3) - 8)
        void* result_2 = result
        
        if (*(result + 0x30) s> 0)
            int32_t rsi_1 = r9_1 + 1
            int32_t var_288_2 = rsi_1
            
            do
                int32_t rax_5 = (*(*arg1 + 0x188))(arg1)
                int64_t r8_2 = *arg2
                (*(r8_2 + 0x10))(arg2, zx.q(rsi_1 * rax_5), r8_2)
                int32_t r15_1 = 0
                
                if (rax_5 s> 0)
                    int64_t* rsi_2 = arg1
                    
                    do
                        var_1fc &= 0xf8000000
                        var_1d4 &= 0xfffff800
                        int128_t* var_2b0_1 = &var_238
                        var_19c = (var_19c & 0xfc0c003c) | 0x40c003c
                        int64_t rax_9 = *rsi_2
                        char var_2b8_1 = 1
                        char var_2c0_1 = 0
                        int128_t* var_1d0_1 = nullptr
                        int32_t var_1c4_1 = 1
                        int128_t var_1c0
                        __builtin_memset(&var_1c0, 0, 0x18)
                        int32_t var_1a8_1 = 0xffffffff
                        int32_t var_1a4_1 = 0
                        int32_t var_1a0_1 = 0xffff0000
                        int32_t var_1c8_1 = 1
                        __builtin_memset(&var_238, 0, 0x3c)
                        int64_t var_1f0_1 = 1
                        int32_t var_1e0_1 = 0xffffffff
                        int32_t var_1dc_1 = 0
                        int32_t var_1d8_1 = 0x3f800000
                        
                        if ((*(rax_9 + 0x198))(rsi_2, zx.q(rdi_1), zx.q(r15_1), zx.q(i_1), 
                                var_2a7_1, var_2c0_1, var_2b8_1, var_2b0_1) != 0)
                            if (var_2a4_1 s> 0)
                                int128_t* rdx_4 = nullptr
                                int128_t* var_130_1 = nullptr
                                int32_t var_128_1 = var_1c8_1
                                
                                if (var_1c8_1 != 0)
                                    sub_14083a160(&var_198, var_1c8_1, 0)
                                    int128_t* rdx_6 = &var_238
                                    int128_t* rcx_8 = &var_198
                                    
                                    if (var_1d0_1 != 0)
                                        rdx_6 = var_1d0_1
                                    
                                    if (var_130_1 != 0)
                                        rcx_8 = var_130_1
                                    
                                    memcpy(rcx_8, rdx_6, var_1c8_1 * 0x68)
                                    rdx_4 = var_130_1
                                else
                                    int32_t var_124_1 = 1
                                
                                char* rbx_3 = rsi_2[0xc]
                                int64_t rdi_3 = 0
                                int64_t rsi_3 = sx.q(rsi_2[0xd].d)
                                int64_t var_120_1 = var_1c0.q
                                int64_t var_118_1 = var_1c0:8.q
                                int64_t var_1b0
                                int64_t var_110_1 = var_1b0
                                int32_t var_108_1 = var_1a8_1
                                int16_t var_100_1 = var_1a0_1.w
                                char var_fe_1 = var_1a0_1:2.b
                                char var_fd_1 = var_1a0_1:3.b
                                int32_t var_104_1 = var_1a4_1.d
                                int32_t rcx_12 =
                                    (var_fc & 0xf8400000) | (var_19c & 0x79fffc3) | 0x400000
                                var_fc = rcx_12
                                
                                if (rbx_3 u> &rbx_3[rsi_3])
                                    rsi_3 = 0
                                
                                if (rsi_3 != 0)
                                    while (true)
                                        zmm2.o = 0x7f7fffff
                                        var_fc =
                                            rcx_12 ^ ((zx.d(*rbx_3) << 0x17 ^ rcx_12) & 0x3800000)
                                        (*(*arg2 + 0x18))(arg2, &var_198, zmm2)
                                        rdi_3 += 1
                                        rbx_3 = &rbx_3[1]
                                        
                                        if (rdi_3 == rsi_3)
                                            break
                                        
                                        rcx_12 = var_fc
                                    
                                    rdx_4 = var_130_1
                                
                                if (rdx_4 != 0)
                                    sub_140a74f90(rdx_4)
                                
                                rsi_2 = arg1
                                rdi_1 = var_290
                                i_1 = i_2
                            
                            zmm2.o = 0x7f7fffff
                            (*(*arg2 + 0x18))(arg2, &var_238, zmm2)
                        
                        if (var_1d0_1 != 0)
                            sub_140a74f90(var_1d0_1)
                        
                        r15_1 += 1
                    while (r15_1 s< rax_5)
                    
                    rsi_1 = var_288_2
                
                result = result_2
                i_1 += 1
                i_2 = i_1
            while (i_1 s< *(result + 0x30))

__security_check_cookie(result_3 ^ &var_2e8)
return result
