// 函数: sub_1409cb870
// 地址: 0x1409cb870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[0x9a].d
void*** r14 = arg1

if (result == *(arg1 + 0x4fc))
    return result

TEB* gsbase
int32_t* r12_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int32_t* var_c0_1 = r12_2

if (data_143cedfb0 s> *r12_2)
    _Init_thread_header(&data_143cedfb0)
    
    if (data_143cedfb0 == 0xffffffff)
        atexit(sub_142cba580)
        _Init_thread_footer(&data_143cedfb0)

int32_t rax_2 = data_143cedfac
data_143cedfa8 = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(&data_143cedfa0, 0)

void* r13_1 = &r14[0x9b]
int32_t var_e4_1 = 1
int32_t rdi_1 = *(r13_1 + 0x18)
int32_t rcx = 0
int32_t var_e8_1 = 0
void* var_e0_1 = r13_1
int32_t r8_1 = 0
int32_t var_d8_1 = 0xffffffff
int64_t var_d4_1 = 0

if (rdi_1 != 0)
    void* rax_3 = *(r13_1 + 0x10)
    void* r9_1 = r13_1
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi_1 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1409cb989:
        int32_t rax_10 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_e4_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_d4_1.d = r8_1 - rax_11 + 0x1f
        
        if (r8_1 - rax_11 + 0x1f s> rdi_1)
            var_d4_1.d = rdi_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_d4_1:4.d = r8_1
            var_e8_1 = rcx
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_d8_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1409cb989
        
        var_d4_1.d = rdi_1

int32_t rsi_1 = *(r13_1 + 0x18)
void* rdi_2 = &r14[0x99]
int32_t r11_1 = *(rdi_2 + 0x28)
void* var_78 = rdi_2
int32_t r8_4 = r11_1 s>> 5
int128_t var_70_1 = var_e8_1.o
int128_t zmm0 = var_78.o
int32_t r9_3 = r11_1 & 0xffffffe0
int32_t var_128_1 = r11_1
int128_t var_60_1 = 0xffffffff
int64_t var_80_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_a0 = zmm0
int128_t var_90_1 = var_70_1

if (r11_1 != rsi_1)
    void* rax_13 = *(r13_1 + 0x10)
    void* r11_2 = r13_1
    
    if (rax_13 != 0)
        r11_2 = rax_13
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rsi_1 - 1)
    int32_t rdx_9 = *(r11_2 + (sx.q(r8_4) << 2)) & 0xffffffff << (r11_1.b & 0x1f)
    
    if (rdx_9 != 0)
    label_1409cba4e:
        int32_t rax_20 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        r11_1 = r9_3 - rbx_1 + 0x1f
        var_128_1 = r11_1
        
        if (r11_1 s<= rsi_1)
            goto label_1409cba76
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_2 + (rcx_5 << 2) + 4)
            
            if (rdx_9 != 0)
                goto label_1409cba4e
    
    r11_1 = rsi_1
    var_128_1 = rsi_1
    goto label_1409cba76

while (true)
    int64_t rax_21 = sx.q(var_90_1:0xc.d)
    int64_t* rdx_10 = var_a0.q
    
    if (rax_21.d == r11_1 && var_90_1.q == r13_1 && rdx_10 == rdi_2)
        return sub_1409b7340(r14, &data_143cedfa0, 0)
    
    int64_t rbx_2 = sx.q(*(*rdx_10 + rax_21 * 0xc))
    
    if (data_143cedfc8 s> *r12_2)
        _Init_thread_header(&data_143cedfc8)
        
        if (data_143cedfc8 == 0xffffffff)
            atexit(sub_142cba0e0)
            _Init_thread_footer(&data_143cedfc8)
    
    sub_1409c46d0(r14, rbx_2.d, &data_143cedfb8)
    
    if (data_143cedfe0 s> *r12_2)
        _Init_thread_header(&data_143cedfe0)
        
        if (data_143cedfe0 == 0xffffffff)
            atexit(sub_142cba100)
            _Init_thread_footer(&data_143cedfe0)
    
    sub_1409c29c0(r14, rbx_2.d, &data_143cedfd0)
    int64_t* rcx_12 = (rbx_2 << 5) + *r14[5]
    int64_t* var_f0_1 = rcx_12
    
    if (rcx_12[1].d - 1 s> 0)
        void* rdx_14 = nullptr
        int32_t arg_20 = 1
        void* var_f8_1 = nullptr
        int32_t i
        
        do
            int64_t rax_27 = *rcx_12
            int32_t* r9_5 = nullptr
            void* r13_2 = r14[5]
            int32_t* var_110 = nullptr
            int32_t var_104_1 = 0
            int64_t rdi_3 = sx.q(*(rdx_14 + rax_27))
            int64_t rdx_15 = *(r13_2 + 0x38)
            int32_t var_100_1 = rdi_3.d
            int64_t rcx_13 = rdi_3 * 3
            int32_t rax_28 = *(rdx_15 + (rcx_13 << 3) + 0x10)
            int64_t rbx_3 = rcx_13 << 3
            int32_t r8_5
            
            if (rax_28 s> 0)
                int32_t var_108_1 = 0
                sub_1405dadb0(&var_110, rax_28)
                rdx_15 = *(r13_2 + 0x38)
                r8_5 = var_108_1
                r9_5 = var_110
            else
                r8_5 = 0
            
            int64_t r14_1 = 0
            int32_t* rsi_2 = *(rdx_15 + rbx_3 + 8)
            uint64_t r12_4 = sx.q(*(rdx_15 + rbx_3 + 0x10)) << 2 u>> 2
            
            if (rsi_2 u> &rsi_2[sx.q(*(rdx_15 + rbx_3 + 0x10))])
                r12_4 = 0
            
            if (r12_4 != 0)
                do
                    int32_t* rcx_15 = r9_5
                    void* r15_3 = (sx.q(*rsi_2) << 4) + *(r13_2 + 0xa8)
                    void* rdx_17 = &r9_5[sx.q(r8_5)]
                    
                    if (r9_5 != rdx_17)
                        while (*rcx_15 != *(r15_3 + 0xc))
                            rcx_15 = &rcx_15[1]
                            
                            if (rcx_15 == rdx_17)
                                goto label_1409cbbdd
                    
                    if (r9_5 == rdx_17 || ((rcx_15 - r9_5) s>> 2).d == 0xffffffff)
                    label_1409cbbdd:
                        int64_t rbx_4 = sx.q(r8_5)
                        r8_5 = (rbx_4 + 1).d
                        
                        if (r8_5 s> var_104_1)
                            sub_1405a4cf0(&var_110)
                            r9_5 = var_110
                        
                        r9_5[rbx_4] = *(r15_3 + 0xc)
                    
                    rsi_2 = &rsi_2[1]
                    r14_1 += 1
                while (r14_1 != r12_4)
            
            if (r8_5 != 0)
                if (data_143cedff8 s> *var_c0_1)
                    _Init_thread_header(&data_143cedff8)
                    
                    if (data_143cedff8 == 0xffffffff)
                        atexit(sub_142cb93f0)
                        _Init_thread_footer(&data_143cedff8)
                
                void*** rsi_3 = arg1
                sub_1409c3ea0(rsi_3, *var_110, &data_143cedfb8, &data_143cedfd0, &data_143cedfe8)
                int32_t j = arg_20
                int64_t* rax_37 = var_f0_1
                int32_t j_1 = arg_20
                
                if (arg_20 s< rax_37[1].d)
                    void* rcx_23 = var_f8_1 + 4
                    void* var_c8_1 = rcx_23
                    
                    do
                        int64_t rbx_5 = sx.q(*(rcx_23 + *rax_37))
                        int32_t* rcx_24 = data_143cedfa0
                        void* rdx_20 = &rcx_24[sx.q(data_143cedfa8)]
                        
                        if (rcx_24 == rdx_20)
                        label_1409cbcd1:
                            void* r15_4 = rsi_3[5]
                            void* arg_18 = r15_4
                            int32_t* var_120 = nullptr
                            int64_t rsi_4 = rbx_5 * 0x18
                            int64_t var_118_1 = 0
                            int32_t* r10_2 = nullptr
                            int32_t r14_2 = 0
                            int32_t rdx_21 = *(*(r15_4 + 0x38) + rsi_4 + 0x10)
                            
                            if (rdx_21 s> 0)
                                sub_1405dadb0(&var_120, rdx_21)
                                r10_2 = var_120
                                r14_2 = var_118_1.d
                            
                            int64_t rax_41 = *(r15_4 + 0x38)
                            int32_t* r15_5 = *(rax_41 + rsi_4 + 8)
                            int64_t rsi_5 = 0
                            uint64_t r13_4 = sx.q(*(rax_41 + rsi_4 + 0x10)) << 2 u>> 2
                            
                            if (r15_5 u> &r15_5[sx.q(*(rax_41 + rsi_4 + 0x10))])
                                r13_4 = 0
                            
                            if (r13_4 != 0)
                                void* rdi_4 = arg_18
                                
                                do
                                    int32_t* rcx_27 = r10_2
                                    void* r12_7 = (sx.q(*r15_5) << 4) + *(rdi_4 + 0xa8)
                                    void* rdx_22 = &r10_2[sx.q(r14_2)]
                                    
                                    if (r10_2 != rdx_22)
                                        while (*rcx_27 != *(r12_7 + 0xc))
                                            rcx_27 = &rcx_27[1]
                                            
                                            if (rcx_27 == rdx_22)
                                                goto label_1409cbd91
                                    
                                    if (r10_2 == rdx_22 || ((rcx_27 - r10_2) s>> 2).d == 0xffffffff)
                                    label_1409cbd91:
                                        var_118_1.d = r14_2 + 1
                                        
                                        if (r14_2 + 1 s> var_118_1:4.d)
                                            sub_1405a4cf0(&var_120)
                                            r10_2 = var_120
                                        
                                        r10_2[sx.q(r14_2)] = *(r12_7 + 0xc)
                                        r14_2 = var_118_1.d
                                        r10_2 = var_120
                                    
                                    r15_5 = &r15_5[1]
                                    rsi_5 += 1
                                while (rsi_5 != r13_4)
                                
                                rdi_3 = zx.q(var_100_1)
                                j = j_1
                            
                            int32_t* r8_6 = data_143cedfe8
                            void* r9_6 = &r8_6[sx.q(data_143cedff0)]
                            
                            if (r8_6 != r9_6)
                                void* rdx_24 = &r10_2[sx.q(r14_2)]
                                
                                do
                                    int32_t* rcx_32 = r10_2
                                    
                                    if (r10_2 != rdx_24)
                                        while (*rcx_32 != *r8_6)
                                            rcx_32 = &rcx_32[1]
                                            
                                            if (rcx_32 == rdx_24)
                                                goto label_1409cbe11
                                        
                                        rsi_3 = arg1
                                        void** var_b0_1 = &arg_18
                                        int32_t var_b4_1 = rbx_5.d
                                        arg_18.b = 0
                                        var_70_1:8.q = &j_1
                                        j_1.b = 1
                                        var_78.o = rdi_3.d.o
                                        sub_140999940(&rsi_3[5][0x35], &var_78)
                                        
                                        if (j_1.b != 0)
                                            sub_1409d9000(rsi_3, rbx_5.d, rdi_3.d, &var_120)
                                            int64_t rsi_6 = sx.q(data_143cedfa8)
                                            int32_t rax_55 = (rsi_6 + 1).d
                                            bool cond:5_1 = rax_55 s<= data_143cedfac
                                            data_143cedfa8 = rax_55
                                            
                                            if (not(cond:5_1))
                                                sub_1405a4cf0(&data_143cedfa0)
                                            
                                            *(data_143cedfa0 + (rsi_6 << 2)) = rbx_5.d
                                            rsi_3 = arg1
                                        
                                        int32_t* rcx_39 = var_120
                                        
                                        if (rcx_39 != 0)
                                            sub_140a74f90(rcx_39)
                                        
                                        goto label_1409cbe2f
                                    
                                label_1409cbe11:
                                    r8_6 = &r8_6[1]
                                while (r8_6 != r9_6)
                            
                            if (r10_2 != 0)
                                sub_140a74f90(r10_2)
                            
                            rsi_3 = arg1
                        else
                            while (*rcx_24 != rbx_5.d)
                                rcx_24 = &rcx_24[1]
                                
                                if (rcx_24 == rdx_20)
                                    goto label_1409cbcd1
                        
                    label_1409cbe2f:
                        j += 1
                        rax_37 = var_f0_1
                        rcx_23 = var_c8_1 + 4
                        j_1 = j
                        var_c8_1 = rcx_23
                    while (j s< rax_37[1].d)
                
                sub_140a74f90(var_110)
            else if (r9_5 != 0)
                sub_140a74f90(r9_5)
            
            i = arg_20 + 1
            rcx_12 = var_f0_1
            rdx_14 = var_f8_1 + 4
            r14 = arg1
            arg_20 = i
            var_f8_1 = rdx_14
        while (i s<= rcx_12[1].d - 1)
        r12_2 = var_c0_1
        r13_1 = var_e0_1
    
    var_90_1:8.d &= not.d(var_a0:0xc.d)
    sub_14059bdd0(&var_a0:8)
    r11_1 = var_128_1
label_1409cba76:
    rdi_2 = &r14[0x99]
