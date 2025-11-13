// 函数: sub_1409c2d20
// 地址: 0x1409c2d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12 = 0
uint64_t* r14 = arg3
arg3[1].d = 0
void* r13 = arg1

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

TEB* gsbase
int32_t* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cedffc s> *rsi_1)
    _Init_thread_header(&data_143cedffc)
    
    if (data_143cedffc == 0xffffffff)
        atexit(sub_142cb8240)
        _Init_thread_footer(&data_143cedffc)

if (data_143990e08 != data_143990e34)
    int32_t rax_3 = data_143990e0c
    data_143990e08 = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(&data_143990e00, 0)
    
    data_143990e30 = 0xffffffff
    data_143990e34 = 0
    sub_140774790(&data_143990e10)
    int64_t rcx_2 = sx.q(data_143990e48)
    
    if (rcx_2 s> 0)
        void* rax_4 = data_143990e40
        void* rdi_1 = &data_143990e38
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

if (data_143cee010 s> *rsi_1)
    _Init_thread_header(&data_143cee010)
    
    if (data_143cee010 == 0xffffffff)
        atexit(sub_142cb8330)
        _Init_thread_footer(&data_143cee010)

int32_t rcx_3 = data_143cee00c
int32_t rdi_2 = 0

if (rcx_3 s< 0)
    data_143cee008 = 0
    
    if (rcx_3 != 0)
        sub_1405c5570(&data_143cee000, 0)
        rcx_3 = data_143cee00c
        rdi_2 = data_143cee008

int32_t arg_24 = data_143a1c6b4
data_143cee008 = rdi_2 + 1

if (rdi_2 + 1 s> rcx_3)
    sub_1405a4d70(&data_143cee000)

*(data_143cee000 + (sx.q(rdi_2) << 3)) = arg2.q
int32_t i = data_143cee008
int32_t var_108

if (i s> 0)
    do
        int64_t r10_1 = data_143cee000
        int64_t rdi_4 = *(r10_1 + (sx.q(i - 1) << 3))
        
        if (0 != 0)
            memmove(r10_1 + (sx.q(i - 1) << 3), r10_1 + (sx.q(i) << 3), 0 << 3)
            i = data_143cee008
        
        data_143cee008 = i - 1
        sub_1405c53d0(&data_143cee000)
        sub_1409afd50(&data_143990e00, &var_108)
        int32_t rax_13 = var_108
        int32_t* var_100
        *var_100 = rdi_4.d
        var_100[1] = 0xffffffff
        void var_b8
        sub_1409b8810(&data_143990e00, &var_b8, rdi_4.d, var_100, rax_13, nullptr)
        void* r13_1 = *(r13 + 0x28)
        int32_t* r8_3 = nullptr
        int32_t r9_3 = 0
        int32_t* var_128 = nullptr
        int32_t var_11c_1 = 0
        int32_t arg_20 = 0
        int64_t rax_15 = *(r13_1 + 0x70)
        int64_t rdi_5 = sx.q(rdi_4.d) * 0x18
        int64_t var_e8_1 = rdi_5
        int32_t rdx_5 = *(rdi_5 + rax_15 + 0x10)
        
        if (rdx_5 s> 0)
            int32_t var_120_1 = 0
            sub_1405dadb0(&var_128, rdx_5)
            r9_3 = var_120_1
            rax_15 = *(r13_1 + 0x70)
            r8_3 = var_128
            arg_20 = r9_3
        
        int32_t* rbx_2 = *(rdi_5 + rax_15 + 8)
        int64_t rsi_2 = 0
        uint64_t r15_2 = sx.q(*(rdi_5 + rax_15 + 0x10)) << 2 u>> 2
        
        if (rbx_2 u> &rbx_2[sx.q(*(rdi_5 + rax_15 + 0x10))])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int32_t* rcx_13 = r8_3
                void* r14_3 = (sx.q(*rbx_2) << 4) + *(r13_1 + 0xa8)
                void* rdx_6 = &r8_3[sx.q(r9_3)]
                
                if (r8_3 != rdx_6)
                    while (*rcx_13 != *(r14_3 + 0xc))
                        rcx_13 = &rcx_13[1]
                        
                        if (rcx_13 == rdx_6)
                            goto label_1409c2fec
                
                if (r8_3 == rdx_6 || ((rcx_13 - r8_3) s>> 2).d == 0xffffffff)
                label_1409c2fec:
                    int64_t rdi_6 = sx.q(r9_3)
                    r9_3 = (rdi_6 + 1).d
                    
                    if (r9_3 s> var_11c_1)
                        sub_1405a4cf0(&var_128)
                        r8_3 = var_128
                    
                    r8_3[rdi_6] = *(r14_3 + 0xc)
                
                rbx_2 = &rbx_2[1]
                rsi_2 += 1
            while (rsi_2 != r15_2)
            
            arg_20 = r9_3
        
        int32_t r14_4 = rdi_4:4.d
        int64_t j_1 = 2
        int64_t j
        
        do
            void* r8_4 = arg1
            int64_t* rdx_8 = *(r8_4 + 0x28)
            int64_t rsi_3 = sx.q(*(var_e8_1 + rdx_8[0xe]))
            
            if (rsi_3.d != r14_4)
                int64_t rax_22 = *rdx_8
                int32_t rbx_3 = data_143a1c6bc
                int64_t rcx_19 = rsi_3 << 5
                int32_t* rdx_9 = *(rcx_19 + rax_22 + 0x10)
                int32_t* var_d0_1 = rdx_9
                void* rax_24 = &rdx_9[sx.q(*(rcx_19 + rax_22 + 0x18))]
                
                if (rdx_9 != rax_24)
                    while (true)
                        int64_t rdi_7 = sx.q(*rdx_9)
                        
                        if (data_143990e08 == data_143990e34)
                        label_1409c30f7:
                            void* r13_2 = *(r8_4 + 0x28)
                            int64_t r15_3 = rdi_7 * 0x18
                            char arg_10 = 1
                            int32_t* r10_2 = nullptr
                            int32_t* var_118 = nullptr
                            int32_t r9_4 = 0
                            int64_t rax_30 = *(r13_2 + 0x70)
                            int32_t var_10c_1 = 0
                            int32_t rdx_12 = *(r15_3 + rax_30 + 0x10)
                            
                            if (rdx_12 s> 0)
                                int32_t var_110_1 = 0
                                sub_1405dadb0(&var_118, rdx_12)
                                rax_30 = *(r13_2 + 0x70)
                                r9_4 = var_110_1
                                r10_2 = var_118
                            
                            int32_t* r13_3 = *(r15_3 + rax_30 + 8)
                            uint64_t r11_2 = sx.q(*(r15_3 + rax_30 + 0x10)) << 2 u>> 2
                            
                            if (r13_3 u> &r13_3[sx.q(*(r15_3 + rax_30 + 0x10))])
                                r11_2 = 0
                            
                            uint64_t var_b0_1 = r11_2
                            
                            if (r11_2 != 0)
                                do
                                    int32_t* r8_7 = *(r13_2 + 0xa8) + 0xc + (sx.q(*r13_3) << 4)
                                    int32_t* rcx_28 = r10_2
                                    void* rdx_13 = &r10_2[sx.q(r9_4)]
                                    
                                    if (r10_2 != rdx_13)
                                        while (*rcx_28 != *r8_7)
                                            rcx_28 = &rcx_28[1]
                                            
                                            if (rcx_28 == rdx_13)
                                                goto label_1409c31db
                                    
                                    if (r10_2 == rdx_13 || ((rcx_28 - r10_2) s>> 2).d == 0xffffffff)
                                    label_1409c31db:
                                        r15_3 = sx.q(r9_4)
                                        r9_4 = (r15_3 + 1).d
                                        
                                        if (r9_4 s> var_10c_1)
                                            sub_1405a4cf0(&var_118)
                                            r10_2 = var_118
                                            r11_2 = var_b0_1
                                        
                                        r10_2[r15_3] = *r8_7
                                    
                                    r13_3 = &r13_3[1]
                                    r12 += 1
                                while (r12 != r11_2)
                                
                                r14_4 = rdi_4:4.d
                            
                            int32_t* r8_8 = r10_2
                            void* r9_5 = &r10_2[sx.q(r9_4)]
                            
                            if (r10_2 == r9_5)
                            label_1409c3272:
                                r15_3 = 1
                            else
                                int32_t* rcx_32 = var_128
                                void* rdx_15 = &rcx_32[sx.q(arg_20)]
                                
                                while (true)
                                    if (rcx_32 != rdx_15)
                                        while (*rcx_32 != *r8_8)
                                            rcx_32 = &rcx_32[1]
                                            
                                            if (rcx_32 == rdx_15)
                                                goto label_1409c325d
                                        
                                        r15_3.b = 0
                                        break
                                    
                                label_1409c325d:
                                    r8_8 = &r8_8[1]
                                    
                                    if (r8_8 == r9_5)
                                        goto label_1409c3272
                                    
                                    rcx_32 = var_128
                            
                            if (r10_2 != 0)
                                sub_140a74f90(r10_2)
                            
                            if (r15_3.b != 0)
                                if (rbx_3 != data_143a1c6bc)
                                    break
                                
                                rbx_3 = rdi_7.d
                            
                            r8_4 = arg1
                            r12 = 0
                        else
                            void* rax_26 = data_143990e40
                            void* rdx_10 = &data_143990e38
                            
                            if (rax_26 != 0)
                                rdx_10 = rax_26
                            
                            int32_t rax_29 = *(rdx_10 + ((sx.q(data_143990e48 - 1) & rdi_7) << 2))
                            
                            if (rax_29 == 0xffffffff)
                                goto label_1409c30f7
                            
                            while (true)
                                int64_t rdx_11 = sx.q(rax_29) * 3
                                int64_t rcx_23 = data_143990e00
                                
                                if (*(rcx_23 + (rdx_11 << 2)) == rdi_7.d)
                                    break
                                
                                rax_29 = *(rcx_23 + (rdx_11 << 2) + 4)
                                
                                if (rax_29 == 0xffffffff)
                                    goto label_1409c30f7
                            
                            if (rax_29 == 0xffffffff)
                                goto label_1409c30f7
                        
                        rdx_9 = &var_d0_1[1]
                        var_d0_1 = rdx_9
                        
                        if (rdx_9 == rax_24)
                            if (rbx_3 != data_143a1c6bc)
                                int64_t rdi_8 = sx.q(data_143cee008)
                                int32_t var_c4_1 = rsi_3.d
                                int32_t rax_39 = (rdi_8 + 1).d
                                bool cond:6_1 = rax_39 s<= data_143cee00c
                                data_143cee008 = rax_39
                                
                                if (not(cond:6_1))
                                    sub_1405a4d70(&data_143cee000)
                                
                                *(data_143cee000 + (rdi_8 << 3)) = rbx_3.q
                            
                            break
            
            var_e8_1 += 4
            r12 = 0
            j = j_1
            j_1 -= 1
        while (j != 1)
        int32_t* r8_9 = var_128
        
        if (r8_9 != 0)
            sub_140a74f90(r8_9)
        
        i = data_143cee008
        r13 = arg1
    while (i s> 0)
    
    r14 = arg3

int32_t rdi_9 = data_143990e28
void* var_100_1 = &data_143990e10
int32_t rcx_35 = 0
int32_t var_f0 = 0
var_108 = 0
int32_t var_104 = 1
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0

if (rdi_9 != 0)
    void* rax_41 = data_143990e20
    void* r8_10 = &data_143990e10
    
    if (rax_41 != 0)
        r8_10 = rax_41
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rdi_9 - 1)
    int32_t rdx_21 = *r8_10
    
    if (rdx_21 != 0)
    label_1409c33c8:
        int32_t rax_48 = neg.d(rdx_21) & rdx_21
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_48)
        int32_t var_104_1 = rax_48
        int32_t rax_49
        
        if (rax_48 == 0)
            rax_49 = 0x20
        else
            rax_49 = 0x1f - temp0_2
        
        int32_t rax_50 = rcx_35 - rax_49 + 0x1f
        
        if (rax_50 s> rdi_9)
            rax_50 = rdi_9
        
        int32_t var_f4_2 = rax_50
    else
        while (true)
            int64_t rdx_22 = sx.q(r12.d)
            rcx_35 += 0x20
            r12 = zx.q(r12.d + 1)
            int32_t var_f0_1 = rcx_35
            var_108 = r12.d
            
            if (rdx_22.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                int32_t var_f4_1 = rdi_9
                break
            
            rdx_21 = *(r8_10 + (rdx_22 << 2) + 4)
            var_f8 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_1409c33c8

double zmm2[0x2] = var_f8.o
double var_60[0x2] = zmm2
int32_t var_f4_3 = rdi_9
int128_t var_70 = var_108.o
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_a0 = (&data_143990e00).o
int128_t var_90 = var_70
int64_t var_80 = zmm2.q
char result

while (true)
    int64_t rcx_38 = sx.q(var_90:0xc.d)
    
    if (rcx_38.d != ((0xffffffff << (rdi_9.b & 0x1f)).q u>> 0x20).d || var_90.q != &data_143990e10)
        result = 0
    else
        result = 1
    
    int64_t* rdx_24 = var_a0.q
    
    if (result == 0 || rdx_24 != &data_143990e00)
        result = 1
    else
        result = 0
    
    if (result == 0)
        break
    
    int64_t rbx_4 = sx.q(r14[1].d)
    int32_t rdi_10 = *(*rdx_24 + rcx_38 * 0xc)
    int32_t rax_53 = (rbx_4 + 1).d
    r14[1].d = rax_53
    
    if (rax_53 s> *(r14 + 0xc))
        sub_1405a4cf0(r14)
    
    *(*r14 + (rbx_4 << 2)) = rdi_10
    var_90:8.d &= not.d(var_a0:0xc.d)
    sub_14059bdd0(&var_a0:8)

return result
