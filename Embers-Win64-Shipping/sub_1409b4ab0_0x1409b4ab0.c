// 函数: sub_1409b4ab0
// 地址: 0x1409b4ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_18 = arg3
uint64_t* r12 = arg3
void*** r13 = arg1
int64_t* r14 = arg2
int32_t rdx = arg2[1].d
int32_t r15 = 0
arg3[1].d = 0

if (rdx s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx)

int32_t rax = *(arg4 + 0xc)
arg4[1].d = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg4, 0)

TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* var_f0 = rbx_1

if (data_143cee580 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143cee580)
    
    if (data_143cee580 == 0xffffffff)
        atexit(sub_142cb7be0)
        _Init_thread_footer(&data_143cee580)

int32_t rax_3 = data_143cee57c
int32_t i_3 = data_143cee578

if (rax_3 s< 0)
    if (i_3 != 0)
        int64_t* rbx_5 = data_143cee570 + 8
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_5
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_5 = &rbx_5[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_3 = data_143cee57c
        rbx_1 = var_f0
    
    data_143cee578 = 0
    
    if (rax_3 != 0)
        sub_1405a5130(&data_143cee570, 0)
else
    if (i_3 != 0)
        int64_t* rbx_3 = data_143cee570 + 8
        int32_t i_1
        
        do
            int64_t rcx_3 = *rbx_3
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_3 = &rbx_3[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_1 = var_f0
    
    data_143cee578 = 0

void* rcx_5 = r13[5]
sub_1409d9530(rcx_5 + 0xe0, *(rcx_5 + 0xe8) - *(rcx_5 + 0x114) + r14[1].d)
int32_t* rdi = *r14
void* rax_6 = &rdi[sx.q(r14[1].d) * 8]
int32_t* var_100 = rdi
int64_t var_128

if (rdi != rax_6)
    do
        if (data_143cee598 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143cee598)
            
            if (data_143cee598 == 0xffffffff)
                atexit(sub_142cb9290)
                _Init_thread_footer(&data_143cee598)
        
        if (data_143cee5b0 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143cee5b0)
            
            if (data_143cee5b0 == 0xffffffff)
                atexit(sub_142cb8b60)
                _Init_thread_footer(&data_143cee5b0)
        
        sub_1409b4110(r13, &rdi[2], &data_143cee5a0, &data_143cee588)
        int32_t rbx_6 = rdi[6]
        bool cond:1_1 = rbx_6 == data_143a1c6c8
        int64_t* rsi_1 = r13[5]
        int64_t r14_1 = data_143cee588
        int32_t r15_1 = data_143cee590
        int32_t rdi_1 = *rdi
        uint64_t var_d8 = 0
        int64_t var_d0
        __builtin_memset(&var_d0, 0, 0x28)
        int32_t rax_9 = data_143a1c6c4
        int64_t var_c8
        int128_t zmm0_1
        int64_t var_b8
        
        if (cond:1_1)
            rbx_6 = sub_14090b0b0(&rsi_1[0x1c], &var_c8)
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            int64_t rcx_12 = var_c8
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            var_128 = r14_1
            int32_t var_120_1 = r15_1
            zmm0_1 = var_128.o
        else
            sub_1409c9360(&rsi_1[0x1c], rbx_6, &var_c8)
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            int64_t rcx_10 = var_c8
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int32_t var_60_1 = r15_1
            zmm0_1 = r14_1.o
        int128_t var_e8 = zmm0_1
        sub_141cda990(rsi_1, rbx_6, rdi_1, &var_e8, &var_d8)
        int64_t rdi_2 = sx.q(r12[1].d)
        int32_t rax_11 = (rdi_2 + 1).d
        r12[1].d = rax_11
        
        if (rax_11 s> *(r12 + 0xc))
            sub_1405a4cf0(r12)
        
        *(*r12 + (rdi_2 << 2)) = rbx_6
        int64_t rbx_7 = sx.q(data_143cee5a8)
        
        if (rbx_7.d != 0)
            int32_t rax_13 = arg4[1].d
            int32_t rdx_9 = rax_13 + rbx_7.d
            
            if (rdx_9 s> *(arg4 + 0xc))
                sub_1405dadb0(arg4, rdx_9)
                rax_13 = arg4[1].d
            
            memcpy(*arg4 + (sx.q(rax_13) << 2), data_143cee5a0, (rbx_7 << 2).d)
            arg4[1].d += rbx_7.d
            rbx_7 = zx.q(data_143cee5a8)
        
        int32_t r8_4 = data_143cee590
        int32_t r13_2 = r8_4 - rbx_7.d
        int32_t rdx_12 = data_143cee578 + r13_2
        
        if (rdx_12 s> data_143cee57c)
            sub_1405a5130(&data_143cee570, rdx_12)
            r8_4 = data_143cee590
        
        uint64_t r14_2 = *arg4
        int32_t* rcx_18 = var_100
        rsi_1.b = ((rcx_18[7].b - 1) & 0xfd) == 0
        char var_138_1 = rsi_1.b
        int64_t r15_2 = 0
        int64_t r12_1 = sx.q(arg4[1].d) << 2
        uint64_t r12_2 = r12_1 u>> 2
        
        if (r14_2 u> r14_2 + r12_1)
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                int64_t rbx_8 = data_143f36118
                int64_t* rsi_3 = &arg1[5][0x40]
                int64_t rdi_4 = sx.q(*r14_2)
                var_e8.q = rbx_8
                void* const rcx_22
                
                if (rsi_3[1].d == *(rsi_3 + 0x34))
                label_1409b4eaf:
                    rcx_22 = nullptr
                else
                    int32_t rax_20 = sub_140b5ead0(rbx_8.d) + var_e8:4.d
                    void* r8_5 = &rsi_3[7]
                    void* rcx_20 = *(r8_5 + 8)
                    
                    if (rcx_20 != 0)
                        r8_5 = rcx_20
                    
                    int32_t rax_22 = *(r8_5 + (((sx.q(rsi_3[9].d) - 1) & sx.q(rax_20)) << 2))
                    
                    if (rax_22 == 0xffffffff)
                    label_1409b4eaf_1:
                        rcx_22 = nullptr
                    else
                        int64_t r8_6 = *rsi_3
                        
                        while (true)
                            int64_t rdx_16 = sx.q(rax_22) * 3
                            rcx_22 = r8_6 + (rdx_16 << 3)
                            
                            if (*(r8_6 + (rdx_16 << 3)) == rbx_8)
                                break
                            
                            rax_22 = *(rcx_22 + 0x10)
                            
                            if (rax_22 == 0xffffffff)
                                goto label_1409b4eaf_2
                        
                        if (rax_22 == 0xffffffff)
                        label_1409b4eaf_2:
                            rcx_22 = nullptr
                
                r14_2 += 4
                rsi_1 = zx.q(var_138_1)
                r15_2 += 1
                *(rdi_4 + **(*(rcx_22 + 8) + 0x18)) = rsi_1.b
            while (r15_2 != r12_2)
            
            r8_4 = data_143cee590
            rcx_18 = var_100
        
        r13 = arg1
        
        if (r13_2 s> 0 && rcx_18[7].b - 2 u<= 1)
            int32_t* r14_3 = data_143cee588
            int64_t r15_3 = 0
            int32_t rax_28 = r14_3[sx.q(r8_4 - 1)]
            void* rdx_17 = &r14_3[sx.q(r8_4)]
            uint64_t r12_6 = (rdx_17 - r14_3 + 3) u>> 2
            
            if (r14_3 u> rdx_17)
                r12_6 = 0
            
            if (r12_6 != 0)
                do
                    int64_t* rcx_25 = r13[5]
                    int64_t rbx_9 = sx.q(*r14_3)
                    int64_t r10_1 = rcx_25[7]
                    int32_t i_2
                    sub_141cdf680(rcx_25, &i_2, *(r10_1 + rbx_9 * 0x18), 
                        *(r10_1 + sx.q(rax_28) * 0x18))
                    int32_t* rcx_26 = data_143cee5a0
                    void* rdx_20 = &rcx_26[sx.q(data_143cee5a8)]
                    
                    if (rcx_26 == rdx_20)
                    label_1409b4f94:
                        int64_t rdi_5 = sx.q(data_143cee578)
                        int32_t rax_32 = (rdi_5 + 1).d
                        bool cond:6_1 = rax_32 s<= data_143cee57c
                        data_143cee578 = rax_32
                        
                        if (not(cond:6_1))
                            sub_1405a4df0(&data_143cee570)
                        
                        int64_t rax_33 = data_143cee570
                        int64_t rcx_27 = rdi_5 * 3
                        int128_t zmm6_1 = data_142d3f660
                        char var_8c_1 = rsi_1.b
                        var_c8.b = 6
                        *(rax_33 + (rcx_27 << 3)) = 0
                        *(rax_33 + (rcx_27 << 3) + 8) = 0
                        *(rax_33 + (rcx_27 << 3) + 0x10) = 0
                        int64_t var_88_1 = 0
                        int64_t rdx_22 = sx.q(data_143cee578 - 1) * 3
                        int64_t rcx_29 = data_143cee570
                        void* rdi_6 = rcx_29 + (rdx_22 << 3)
                        *(rcx_29 + (rdx_22 << 3)) = i_2
                        int64_t rsi_4 = sx.q(*(rdi_6 + 0x10))
                        int32_t rax_37 = (rsi_4 + 1).d
                        *(rdi_6 + 0x10) = rax_37
                        
                        if (rax_37 s> *(rdi_6 + 0x14))
                            sub_14090a6a0(rdi_6 + 8)
                        
                        int64_t rax_38 = data_143f36118
                        int64_t* rcx_33 = rsi_4 * 0x60 + *(rdi_6 + 8)
                        *(rcx_33 + 0x10) = var_c8.o
                        *rcx_33 = rax_38
                        *(rcx_33 + 0x20) = zmm6_1
                        rcx_33[1].d = 0
                        *(rcx_33 + 0x30) = rax_9.o
                        int128_t var_98
                        *(rcx_33 + 0x40) = var_98
                        *(rcx_33 + 0x50) = var_88_1.o
                    else
                        while (*rcx_26 != i_2)
                            rcx_26 = &rcx_26[1]
                            
                            if (rcx_26 == rdx_20)
                                goto label_1409b4f94
                    
                    rsi_1 = zx.q(var_138_1)
                    r14_3 = &r14_3[1]
                    r15_3 += 1
                    rax_28 = rbx_9.d
                while (r15_3 != r12_6)
        
        uint64_t rcx_34 = var_d8
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        r12 = arg_18
        rdi = &var_100[8]
        rbx_1 = var_f0
        var_100 = rdi
    while (rdi != rax_6)
    
    r14 = arg2
    r15 = 0

sub_1409dc390(r13, &data_143cee570)
uint64_t rdi_8 = 0
int64_t* rbx_10 = r13[0x77]
uint64_t rsi_6 = sx.q(r13[0x78].d) << 3 u>> 3

if (rbx_10 u> &rbx_10[r13[0x78]])
    rsi_6 = 0

if (rsi_6 != 0)
    do
        int64_t* rcx_36 = *rbx_10
        (*(*rcx_36 + 0x328))(rcx_36, r13, r12)
        rdi_8 += 1
        rbx_10 = &rbx_10[1]
    while (rdi_8 != rsi_6)

if (r13[0xc1] != 0)
    sub_140992690(&r13[0xd7], r12)

sub_140992690(&r13[0x7b], r12)
sub_140992690(&r13[0x8f], r12)
int32_t rdx_28 = r14[1].d
int32_t rbx_11 = 0
var_128 = 0
int64_t rsi_7 = 0
int32_t var_120_2 = 0
int32_t var_11c = 0
int32_t var_118 = 0x10101

if (rdx_28 s> 0)
    sub_1405dadb0(&var_128, rdx_28)
    r15 = var_11c
    rbx_11 = var_120_2
    rsi_7 = var_128

void*** rcx_41 = arg_18
rdi_8.b = 0
r12.b = 0
int32_t var_118_1 = 0
r13.b = 0
int32_t rax_42 = rcx_41[1].d
int64_t r14_4 = sx.q(rax_42 - 1)

if (rax_42 - 1 s>= 0)
    int64_t temp4_1
    
    do
        void** r12_7 = *rcx_41
        int64_t rdi_9 = sx.q(rbx_11)
        rbx_11 = (rdi_9 + 1).d
        
        if (rbx_11 s> r15)
            sub_1405a4cf0(&var_128)
            r15 = var_11c
            rsi_7 = var_128
        
        int32_t rax_44 = *(r12_7 + (r14_4 << 2))
        temp4_1 = r14_4
        r14_4 -= 1
        rcx_41 = arg_18
        *(rsi_7 + (rdi_9 << 2)) = rax_44
    while (temp4_1 - 1 s>= 0)
    r13 = zx.q(var_118_1:2.b)
    r12 = zx.q(var_118_1:1.b)
    rdi_8 = zx.q(var_118_1.b)

void*** rax_45 = j_sub_140a82f30(0x20)

if (rax_45 != 0)
    *rax_45 = &data_142e3f778
    rax_45[1] = rsi_7
    rsi_7 = 0
    rax_45[2].d = rbx_11
    *(rax_45 + 0x14) = r15
    rax_45[3].b = rdi_8.b
    *(rax_45 + 0x19) = r12.b
    *(rax_45 + 0x1a) = r13.b
    *(rax_45 + 0x1b) = var_118_1:3.b

arg_18 = rax_45
int64_t result = sub_1409afc10(arg1, &arg_18)

if (rsi_7 == 0)
    return result

return sub_140a74f90(rsi_7)
