// 函数: sub_1409e2d70
// 地址: 0x1409e2d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r12 = arg1
arg4[1].d = 0

if (*(arg4 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg4, 0)

uint64_t j_5
sub_14090aa40(&r12[5][0x2a], &j_5, data_143f35cc8)
TEB* gsbase
void* r13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* var_168 = r13

if (data_143ceeea0 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeea0)
    
    if (data_143ceeea0 == 0xffffffff)
        atexit(sub_142cb9310)
        _Init_thread_footer(&data_143ceeea0)

int32_t rax_2 = data_143ceee9c
data_143ceee98 = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(&data_143ceee90, 0)

if (data_143ceeeb8 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeeb8)
    
    if (data_143ceeeb8 == 0xffffffff)
        atexit(sub_142cba680)
        _Init_thread_footer(&data_143ceeeb8)

int32_t rax_4 = data_143ceeeb4
int32_t i_7 = data_143ceeeb0
int64_t* rdi = data_143ceeea8

if (rax_4 s< 0)
    if (i_7 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *rdi
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rdi = &rdi[3]
            i = i_7
            i_7 -= 1
        while (i != 1)
        rax_4 = data_143ceeeb4
    
    data_143ceeeb0 = 0
    
    if (rax_4 != 0)
        sub_1405a5130(&data_143ceeea8, 0)
else
    if (i_7 != 0)
        int32_t i_1
        
        do
            int64_t rcx_4 = *rdi
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rdi = &rdi[3]
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    data_143ceeeb0 = 0

int32_t* rsi = *arg2
int64_t r14_1 = 0
uint64_t r15_1 = sx.q(arg2[1].d) << 2 u>> 2

if (rsi u> &rsi[arg2[1]])
    r15_1 = 0

int64_t var_140
uint128_t var_118

if (r15_1 != 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    do
        int64_t r8_1 = sx.q(*rsi)
        
        if (arg3 == 0 || *(r12[5][0x1c] + r8_1 * 0x28 + 8) s> 3)
            sub_1409b2fe0(r12, &var_140, r8_1.d)
            int64_t rdi_1 = sx.q(data_143ceeeb0)
            int32_t rax_8 = (rdi_1 + 1).d
            bool cond:1_1 = rax_8 s<= data_143ceeeb4
            data_143ceeeb0 = rax_8
            
            if (not(cond:1_1))
                sub_1405a4df0(&data_143ceeea8)
            
            int64_t* rdi_2 = data_143ceeea8 + rdi_1 * 0x18
            
            if (rdi_2 == 0)
                rdi_2 = nullptr
            else
                *rdi_2 = 0
                rdi_2[1] = 0
                rdi_2[2].d = data_143a1c6b4
            
            int64_t rbx = sx.q(rdi_2[1].d)
            zmm6 = data_142d3f660
            int32_t var_138
            int32_t var_f0_1 = var_138
            int32_t rax_12 = (rbx + 1).d
            var_118.b = 2
            uint64_t var_f8_1 = var_140
            int64_t var_d8_1 = 0
            rdi_2[1].d = rax_12
            
            if (rax_12 s> *(rdi_2 + 0xc))
                sub_14090a6a0(rdi_2)
            
            int64_t rdi_3 = *rdi_2
            int64_t rax_13 = data_143f35cc8
            int64_t rcx_11 = rbx * 0x60
            *(rcx_11 + rdi_3 + 0x10) = var_118
            *(rcx_11 + rdi_3) = rax_13
            *(rcx_11 + rdi_3 + 0x20) = zmm6
            *(rcx_11 + rdi_3 + 8) = 0
            *(rcx_11 + rdi_3 + 0x30) = var_f8_1.o
            int128_t var_e8
            *(rcx_11 + rdi_3 + 0x40) = var_e8
            *(rcx_11 + rdi_3 + 0x50) = var_d8_1.o
        
        rsi = &rsi[1]
        r14_1 += 1
    while (r14_1 != r15_1)
    
    r13 = var_168

sub_1409b5680(r12, &data_143ceeea8, &data_143ceee90)

if (data_143ceeebc s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeebc)
    
    if (data_143ceeebc == 0xffffffff)
        atexit(sub_142cb8690)
        _Init_thread_footer(&data_143ceeebc)

data_143991154

if (data_143991128 != data_143991154)
    int32_t rax_17 = data_14399112c
    data_143991128 = 0
    
    if (rax_17 s< 0 && rax_17 != 0)
        sub_140638cc0(&data_143991120, 0)
    
    data_143991150 = 0xffffffff
    data_143991154 = 0
    sub_140774790(&data_143991130)
    int64_t rcx_13 = sx.q(data_143991168)
    
    if (rcx_13 s> 0)
        void* rax_18 = data_143991160
        void* rdi_4 = &data_143991158
        
        if (rax_18 != 0)
            rdi_4 = rax_18
        
        __builtin_memset(rdi_4, 0xffffffff, rcx_13 << 2)

int32_t i_2 = 0
int32_t var_1a0
int32_t var_190
int64_t* rax_16

if (arg2[1].d s> 0)
    rax_16 = arg2
    int32_t* r14_3 = nullptr
    
    do
        int32_t rdi_5 = *(r14_3 + *rax_16)
        
        if (data_143ceeed0 s> *(0x14 + r13))
            _Init_thread_header(&data_143ceeed0)
            
            if (data_143ceeed0 == 0xffffffff)
                atexit(&data_142cb91b0)
                _Init_thread_footer(&data_143ceeed0)
        
        sub_1409c3b80(r12, rdi_5, &data_143ceeec0)
        int64_t rax_21 = sx.q(data_143ceeec8)
        
        if (arg3 == 1 || rax_21.d s> 3)
            for (int32_t* j = data_143ceeec0; j != &j[rax_21]; j = &j[1])
                int32_t rdi_6 = *j
                sub_1409afd50(&data_143991120, &var_190)
                int32_t rax_22 = var_190
                int32_t* var_188
                *var_188 = rdi_6
                var_188[1] = 0xffffffff
                sub_1409b8810(&data_143991120, &var_1a0, rdi_6, var_188, rax_22, nullptr)
        
        rax_16 = arg2
        i_2 += 1
        r14_3 = &r14_3[1]
    while (i_2 s< rax_16[1].d)

int32_t rsi_2 = data_143991148
int32_t var_188_1 = 0x43991130
int32_t var_180 = 0xffffffff
int32_t rcx_16 = 0
var_190 = 0
int32_t rdi_7 = 0
int32_t var_18c = 1
int64_t var_17c = 0

if (rsi_2 != 0)
    void* rax_23 = data_143991140
    void* r8_3 = &data_143991130
    
    if (rax_23 != 0)
        r8_3 = rax_23
    
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(rsi_2 - 1)
    int32_t rdx_10 = *r8_3
    
    if (rdx_10 != 0)
    label_1409e3229:
        int32_t rax_29 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_29)
        int32_t var_18c_1 = rax_29
        int32_t rax_30
        
        if (rax_29 == 0)
            rax_30 = 0x20
        else
            rax_30 = 0x1f - temp0_1
        
        rax_16 = zx.q(rdi_7 - rax_30 + 0x1f)
        
        if (rax_16.d s> rsi_2)
            rax_16 = zx.q(rsi_2)
        
        var_17c.d = rax_16.d
    else
        while (true)
            int64_t* rdx_11 = sx.q(rcx_16)
            rdi_7 += 0x20
            rcx_16 += 1
            var_17c:4.d = rdi_7
            var_190 = rcx_16
            
            if (rdx_11.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                var_17c.d = rsi_2
                break
            
            var_180 = 0xffffffff
            rdx_10 = *(r8_3 + (rdx_11 << 2) + 4)
            
            if (rdx_10 != 0)
                goto label_1409e3229

uint128_t zmm0_2 = var_190.o
double zmm2[0x2] = var_180.o
int64_t* var_88 = &data_143991120
uint128_t var_80 = zmm0_2
zmm0_2 = var_88.o
double var_70[0x2] = zmm2
double temp0_2[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
var_118 = zmm0_2
uint128_t var_108 = var_80
int64_t var_f8_2 = temp0_2.q
int32_t rax_31

while (true)
    int64_t rcx_18 = sx.q(var_108:0xc.d)
    
    if (rcx_18.d != rsi_2 || var_108.q != &data_143991130)
        rax_16.b = 0
    else
        rax_16.b = 1
    
    int64_t* rdx_12 = var_118.q
    
    if (rax_16.b == 0 || rdx_12 != &data_143991120)
        rax_16.b = 1
    else
        rax_16.b = 0
    
    rax_31 = *(0x14 + r13)
    
    if (rax_16.b == 0)
        break
    
    int32_t rdi_9 = *(*rdx_12 + rcx_18 * 0xc)
    
    if (data_143ceeee8 s> rax_31)
        _Init_thread_header(&data_143ceeee8)
        
        if (data_143ceeee8 == 0xffffffff)
            atexit(sub_142cb9d40)
            _Init_thread_footer(&data_143ceeee8)
    
    int32_t rax_34 = data_143ceeee0
    
    if (rax_34 s< 1)
        bool cond:10_1 = data_143ceeee4 s>= 1
        data_143ceeee0 = 1
        
        if (not(cond:10_1))
            sub_1406105e0(&data_143ceeed8)
    else if (rax_34 s> 1)
        int32_t rbx_1 = rax_34 - 1
        
        if (rbx_1 != 0)
            int32_t rcx_21 = rax_34 - rbx_1
            
            if (rcx_21 != 1)
                int64_t rax_33 = data_143ceeed8
                memmove(rax_33 + 4, rax_33 + (sx.q(rbx_1 + 1) << 2), (rcx_21 - 1) << 2)
                rax_34 = data_143ceeee0
            
            data_143ceeee0 = rax_34 - rbx_1
            sub_1405dac90(&data_143ceeed8)
    
    *data_143ceeed8 = 0x3f000000
    
    if (data_143ceef00 s> *(0x14 + r13))
        _Init_thread_header(&data_143ceef00)
        
        if (data_143ceef00 == 0xffffffff)
            atexit(sub_142cb8e60)
            _Init_thread_footer(&data_143ceef00)
    
    sub_1409deb00(r12, rdi_9, &data_143ceeed8, &data_143ceeef0)
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)

int64_t* r14_4 = arg2

if (data_143ceef18 s> rax_31)
    _Init_thread_header(&data_143ceef18)
    
    if (data_143ceef18 == 0xffffffff)
        atexit(sub_142cb97d0)
        _Init_thread_footer(&data_143ceef18)

int32_t i_8 = data_143ceef10

if (data_143ceef14 s< 0)
    if (i_8 != 0)
        int64_t* rdi_13 = data_143ceef08 + 8
        int32_t i_3
        
        do
            sub_1408464b0(rdi_13)
            rdi_13 = &rdi_13[4]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    bool cond:11_1 = data_143ceef14 == 0
    data_143ceef10 = 0
    
    if (not(cond:11_1))
        sub_1405a51b0(&data_143ceef08, 0)
else
    if (i_8 != 0)
        int64_t* rdi_11 = data_143ceef08 + 8
        int32_t i_4
        
        do
            sub_1408464b0(rdi_11)
            rdi_11 = &rdi_11[4]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
    
    data_143ceef10 = 0

int32_t i_5 = 0
int32_t i_6 = 0

if (r14_4[1].d s> 0)
    uint64_t j_7 = j_5
    int64_t rcx_29 = 0
    char rdi_14 = arg3
    int64_t rdx_17 = 0
    int64_t var_128_1 = 0
    int64_t var_198_1 = 0
    
    do
        int32_t rsi_3 = data_143a1c6b4
        int64_t r14_5 = sx.q(*(*r14_4 + (rcx_29 << 2)))
        int64_t r9_2 = r14_5 * 5
        int64_t r8_6 = r12[5][0x1c]
        int64_t var_1c0_1 = r8_6
        int64_t var_1c8_1 = r9_2
        int32_t r15_2 = *(r8_6 + (r9_2 << 3) + 0x20)
        int32_t rcx_30 = *(r8_6 + (r9_2 << 3) + 8)
        int32_t var_1d0_1 = r15_2
        
        if (rdi_14 == 0 || rcx_30 s> 6)
            rsi_3 = *(data_143ceee90 + (rdx_17 << 2))
            rdx_17 += 1
            var_198_1 = rdx_17
        
        int32_t var_1e8
        
        if ((rdi_14 != 0 && rcx_30 s<= 6) || rcx_30 s<= 6)
            if (rdi_14 == 0)
                int32_t rcx_51 = 1
                uint64_t j_1 = 0
                int32_t var_1d4_2 = 1
                j_5 = 0
                
                do
                    int64_t r8_16 = *(r8_6 + (r9_2 << 3))
                    int64_t r12_2 = sx.q(data_143ceef10)
                    int32_t rdi_23 = *(j_1 + r8_16)
                    int32_t rbx_6 = *(r8_16 + (sx.q(rcx_51 s% 3) << 2))
                    int32_t rax_87 = (r12_2 + 1).d
                    bool cond:17_1 = rax_87 s<= data_143ceef14
                    data_143ceef10 = rax_87
                    
                    if (not(cond:17_1))
                        sub_1405c4e40(&data_143ceef08)
                    
                    int32_t* rcx_55 = (r12_2 << 5) + data_143ceef08
                    *rcx_55 = data_143a1c6c4
                    *(rcx_55 + 8) = 0
                    *(rcx_55 + 0x10) = 0
                    rcx_55[6] = data_143a1c6c8
                    rcx_55[7].b = 0
                    int32_t* rcx_58 = (sx.q(data_143ceef10 - 1) << 5) + data_143ceef08
                    int64_t* r10_1 = &rcx_58[2]
                    int64_t* var_1b8_2 = r10_1
                    *rcx_58 = r15_2
                    int32_t rax_92 = r10_1[1].d
                    
                    if (rax_92 s< 3)
                        r10_1[1].d = 3
                        int32_t k_4 = 3 - rax_92
                        
                        if (*(r10_1 + 0xc) s< 3)
                            sub_1405a4df0(r10_1)
                            r10_1 = var_1b8_2
                        
                        int32_t* r8_17 = *r10_1 + sx.q(rax_92) * 0x18
                        
                        if (k_4 != 0)
                            void* rcx_61 = &r8_17[5]
                            int32_t k
                            
                            do
                                rcx_61 += 0x18
                                *r8_17 = data_143a1c6b8
                                r8_17 = &r8_17[6]
                                *(rcx_61 - 0x28) = data_143a1c6b4
                                *(rcx_61 - 0x24) = 0
                                *(rcx_61 - 0x1c) = 0
                                k = k_4
                                k_4 -= 1
                            while (k != 1)
                    else if (rax_92 s> 3)
                        r9_2.b = 1
                        sub_1409d8830(r10_1, 3, rax_92 - 3, r9_2.b)
                        r10_1 = var_1b8_2
                    
                    r12 = arg1
                    **r10_1 = rdi_23
                    *(*r10_1 + 0x18) = rbx_6
                    *(*r10_1 + 0x34) = rsi_3
                    int64_t rcx_63 = **(j_7 + 0x18)
                    int64_t rax_100 = sx.q(rsi_3) * 3
                    int32_t var_90_1 = *(rcx_63 + (rax_100 << 2) + 8)
                    var_1e8.q = &var_190
                    uint64_t var_98 = *(rcx_63 + (rax_100 << 2))
                    sub_1409b2b10(r12, &var_1a0, r14_5.d, &var_98, var_1e8)
                    int64_t rax_102 = sx.q(var_1a0)
                    
                    if (rax_102.d != data_143a1c6c0)
                        void* r9_10 = r12[5]
                        uint64_t var_14c_2 = var_190.q
                        int32_t* r8_22 = (rax_102 << 4) + *(r9_10 + 0xa8)
                        int32_t var_158_2 = *r8_22
                        int32_t var_154_2 = r8_22[1]
                        int32_t var_144_2 = var_188_1
                        int128_t zmm1_4 = r8_22[2].o
                        var_118 = (*var_1b8_2 + 0x38).o
                        int128_t var_108_1 = zmm1_4
                        sub_140999fc0(r9_10 + 0x1a8, &var_118)
                    
                    rcx_51 = var_1d4_2 + 1
                    r8_6 = var_1c0_1
                    j_1 = j_5 + 4
                    r9_2 = var_1c8_1
                    var_1d4_2 = rcx_51
                    j_5 = j_1
                while (j_1 s< 0xc)
                
                goto label_1409e3d4c
            
            if (rdi_14 == 1)
                int64_t rdi_27 = sx.q(data_143ceef10)
                int32_t rax_106 = (rdi_27 + 1).d
                bool cond:14_1 = rax_106 s<= data_143ceef14
                data_143ceef10 = rax_106
                
                if (not(cond:14_1))
                    sub_1405c4e40(&data_143ceef08)
                    r8_6 = var_1c0_1
                    r9_2 = var_1c8_1
                
                int64_t rbx_8 = rdi_27 << 5
                int32_t* rbx_9 = rbx_8 + data_143ceef08
                
                if (rbx_8 == neg.q(data_143ceef08))
                    rbx_9 = nullptr
                else
                    *rbx_9 = data_143a1c6c4
                    *(rbx_9 + 8) = 0
                    *(rbx_9 + 0x10) = 0
                    rbx_9[6] = data_143a1c6c8
                    rbx_9[7].b = 0
                
                *rbx_9 = r15_2
                
                for (int32_t j_2 = 1; j_2 s< 7; )
                    int64_t rsi_4 = sx.q(rbx_9[4])
                    int32_t rax_111 = (rsi_4 + 1).d
                    int64_t r12_3 = sx.q(mods.dp.d(sx.q(j_2), *(r8_6 + (r9_2 << 3) + 8)))
                    rbx_9[4] = rax_111
                    
                    if (rax_111 s> rbx_9[5])
                        sub_1405a4df0(&rbx_9[2])
                        r8_6 = var_1c0_1
                        r9_2 = var_1c8_1
                    
                    int32_t* rdx_47 = *(rbx_9 + 8) + rsi_4 * 0x18
                    
                    if (rdx_47 == 0)
                        rdx_47 = nullptr
                    else
                        *rdx_47 = data_143a1c6b8
                        rdx_47[1] = data_143a1c6b4
                        *(rdx_47 + 8) = 0
                        *(rdx_47 + 0x10) = 0
                    
                    j_2 += 2
                    *rdx_47 = *(*(r8_6 + (r9_2 << 3)) + (r12_3 << 2))
                
                int32_t j_3 = 0
                int64_t r12_4 = 0
                
                do
                    int32_t rcx_72 = *(r8_6 + (r9_2 << 3) + 8)
                    int64_t rdi_29 = sx.q(data_143ceef10)
                    int32_t temp42_1
                    int32_t temp43_1
                    temp42_1:temp43_1 = sx.q(j_3 - 1 + rcx_72)
                    int32_t temp48_1
                    int32_t temp49_1
                    temp48_1:temp49_1 = sx.q(j_3 + 1)
                    int32_t rax_119 = (rdi_29 + 1).d
                    bool cond:19_1 = rax_119 s<= data_143ceef14
                    data_143ceef10 = rax_119
                    
                    if (not(cond:19_1))
                        sub_1405c4e40(&data_143ceef08)
                        r8_6 = var_1c0_1
                        r9_2 = var_1c8_1
                    
                    int64_t rcx_74 = rdi_29 << 5
                    int32_t* rcx_75 = rcx_74 + data_143ceef08
                    
                    if (rcx_74 == neg.q(data_143ceef08))
                        rcx_75 = nullptr
                    else
                        *rcx_75 = data_143a1c6c4
                        *(rcx_75 + 8) = 0
                        *(rcx_75 + 0x10) = 0
                        rcx_75[6] = data_143a1c6c8
                        rcx_75[7].b = 0
                    
                    *rcx_75 = r15_2
                    int64_t rsi_5 = sx.q(rcx_75[4])
                    
                    if (rsi_5.d s< 3)
                        rcx_75[4] = 3
                        int32_t k_3 = 3 - rsi_5.d
                        
                        if (rcx_75[5] s< 3)
                            sub_1405a4df0(&rcx_75[2])
                        
                        int32_t* rdx_55 = *(rcx_75 + 8) + rsi_5 * 0x18
                        
                        if (k_3 != 0)
                            void* rcx_78 = &rdx_55[5]
                            int32_t k_1
                            
                            do
                                rcx_78 += 0x18
                                *rdx_55 = data_143a1c6b8
                                rdx_55 = &rdx_55[6]
                                *(rcx_78 - 0x28) = data_143a1c6b4
                                *(rcx_78 - 0x24) = 0
                                *(rcx_78 - 0x1c) = 0
                                k_1 = k_3
                                k_3 -= 1
                            while (k_1 != 1)
                        
                        r8_6 = var_1c0_1
                        r9_2 = var_1c8_1
                    else if (rsi_5.d s> 3)
                        r9_2.b = 1
                        sub_1409d8830(&rcx_75[2], 3, (rsi_5 - 3).d, r9_2.b)
                        r8_6 = var_1c0_1
                        r9_2 = var_1c8_1
                    
                    j_3 += 2
                    **(rcx_75 + 8) =
                        *(*(r8_6 + (r9_2 << 3)) + (sx.q(mods.dp.d(temp42_1:temp43_1, rcx_72)) << 2))
                    int32_t rax_126 = *(*(r8_6 + (r9_2 << 3)) + r12_4)
                    r12_4 += 8
                    *(*(rcx_75 + 8) + 0x18) = rax_126
                    *(*(rcx_75 + 8) + 0x30) =
                        *(*(r8_6 + (r9_2 << 3)) + (sx.q(mods.dp.d(temp48_1:temp49_1, rcx_72)) << 2))
                while (j_3 s< 6)
                
                goto label_1409e3d45
        else
            if (data_143ceef30 s> *(var_168 + 0x14))
                _Init_thread_header(&data_143ceef30)
                
                if (data_143ceef30 == 0xffffffff)
                    atexit(sub_142cb9270)
                    _Init_thread_footer(&data_143ceef30)
                
                r9_2 = var_1c8_1
            
            void* r12_1 = r12[5]
            int64_t r9_3 = sx.q(*(*(r12_1 + 0xe0) + (r9_2 << 3) + 8))
            
            if (r9_3.d s<= data_143ceef28)
                int32_t rax_47 = data_143ceef28
                
                if (r9_3.d s< rax_47)
                    int32_t rbx_3 = rax_47 - r9_3.d
                    
                    if (rax_47 != r9_3.d)
                        int32_t rax_48 = rax_47 - rbx_3
                        
                        if (rax_48 != r9_3.d)
                            int64_t rdi_15 = data_143ceef20
                            memmove(rdi_15 + (r9_3 << 2), rdi_15 + (sx.q(rbx_3 + r9_3.d) << 2), 
                                (rax_48 - r9_3.d) << 2)
                        
                        data_143ceef28 -= rbx_3
                        sub_1405dac90(&data_143ceef20)
                    
                    i_5 = i_6
            else
                bool cond:16_1 = r9_3.d s<= data_143ceef2c
                data_143ceef28 = r9_3.d
                
                if (not(cond:16_1))
                    sub_1405a4cf0(&data_143ceef20)
            
            int64_t rax_51 = *(r12_1 + 0xe0)
            int64_t rdi_16 = 0
            int32_t* r8_9 = *(rax_51 + (var_1c8_1 << 3))
            uint64_t r9_5 = sx.q(*(rax_51 + (var_1c8_1 << 3) + 8)) << 2 u>> 2
            
            if (r8_9 u> &r8_9[sx.q(*(rax_51 + (var_1c8_1 << 3) + 8))])
                r9_5 = 0
            
            if (r9_5 != 0)
                do
                    int64_t rax_54 = sx.q(*r8_9)
                    r8_9 = &r8_9[1]
                    *(data_143ceef20 + (rdi_16 << 2)) = *(*(r12_1 + 0x38) + rax_54 * 0x18)
                    rdi_16 += 1
                while (rdi_16 != r9_5)
            
            r12 = arg1
            int32_t rdi_17 = rcx_30
            var_140 = r12[5][0x1c]
            int32_t temp25_1
            int32_t temp26_1
            temp25_1:temp26_1 = sx.q(rdi_17)
            int32_t j_6 = (temp26_1 - temp25_1) s>> 1
            
            if (j_6 s<= 0)
                rdi_14 = arg3
                rdx_17 = var_198_1
            else
                int32_t rcx_36 = 1
                var_1c0_1.d = 1
                int32_t r8_10 = rdi_17 - 2
                j_5 = zx.q(j_6)
                int64_t var_1b8_1 = 0
                uint64_t j_4
                
                do
                    int64_t rbx_4 = sx.q(mods.dp.d(sx.q(rcx_36 + r8_10), rdi_17))
                    int64_t rdi_18 = sx.q(data_143ceef10)
                    int32_t rax_65 = (rdi_18 + 1).d
                    bool cond:21_1 = rax_65 s<= data_143ceef14
                    data_143ceef10 = rax_65
                    
                    if (not(cond:21_1))
                        sub_1405c4e40(&data_143ceef08)
                    
                    int64_t rcx_38 = rdi_18 << 5
                    int32_t* rcx_39 = rcx_38 + data_143ceef08
                    
                    if (rcx_38 == neg.q(data_143ceef08))
                        rcx_39 = nullptr
                    else
                        *rcx_39 = data_143a1c6c4
                        *(rcx_39 + 8) = 0
                        *(rcx_39 + 0x10) = 0
                        rcx_39[6] = data_143a1c6c8
                        rcx_39[7].b = 0
                    
                    int64_t r8_11 = sx.q(mods.dp.d(sx.q(rcx_36), rdi_17))
                    int64_t r9_6 = rbx_4
                    *rcx_39 = r15_2
                    int32_t k_2 = 0
                    int32_t var_1a8_1
                    var_1a8_1.q = r8_11
                    
                    do
                        int64_t rdi_19 = sx.q(rcx_39[4])
                        int32_t rax_68 = (rdi_19 + 1).d
                        rcx_39[4] = rax_68
                        
                        if (rax_68 s> rcx_39[5])
                            sub_1405a4df0(&rcx_39[2])
                            r8_11 = var_1a8_1.q
                            r9_6 = rbx_4
                        
                        int64_t rcx_41 = rdi_19 * 3
                        int64_t rdx_29 = *(rcx_39 + 8)
                        *(rdx_29 + (rcx_41 << 3)) = data_143a1c6b8
                        *(rdx_29 + (rcx_41 << 3) + 4) = data_143a1c6b4
                        *(rdx_29 + (rcx_41 << 3) + 8) = 0
                        *(rdx_29 + (rcx_41 << 3) + 0x10) = 0
                        int64_t rdi_20 = *(rcx_39 + 8)
                        int64_t rdx_30 = sx.q(rcx_39[4]) * 3
                        int64_t rcx_44
                        
                        if (k_2 == 0)
                            rcx_44 = r9_6
                        else
                            if (k_2 == 1)
                                rcx_44 = var_1b8_1
                                goto label_1409e375b
                            
                            if (k_2 != 2)
                                goto label_1409e3765
                            
                            rcx_44 = r8_11
                        
                    label_1409e375b:
                        
                        if (rcx_44 != -1)
                            *(rdi_20 + (rdx_30 << 3) - 0x18) =
                                *(*(var_140 + (var_1c8_1 << 3)) + (rcx_44 << 2))
                        else
                        label_1409e3765:
                            *(rdi_20 + (rdx_30 << 3) - 0x14) = rsi_3
                            int64_t rcx_45 = **(j_7 + 0x18)
                            int64_t rax_74 = sx.q(rsi_3) * 3
                            int32_t var_b0_1 = *(rcx_45 + (rax_74 << 2) + 8)
                            int64_t var_a8
                            var_1e8.q = &var_a8
                            uint64_t var_b8 = *(rcx_45 + (rax_74 << 2))
                            int32_t var_170
                            sub_1409b2b10(arg1, &var_170, r14_5.d, &var_b8, var_1e8)
                            int64_t rax_76 = sx.q(var_170)
                            
                            if (rax_76.d != data_143a1c6c0)
                                uint64_t var_14c_1 = var_a8
                                void* r8_14 = arg1[5]
                                int32_t* rax_78 = (rax_76 << 4) + *(r8_14 + 0xa8)
                                int32_t var_158_1 = *rax_78
                                int32_t var_154_1 = rax_78[1]
                                int32_t var_a0
                                int32_t var_144_1 = var_a0
                                var_88.o = (rdi_20 + (rdx_30 << 3) - 0x10).o
                                var_80 = rax_78[2].o
                                sub_140999fc0(r8_14 + 0x1a8, &var_88)
                        
                        r8_11 = var_1a8_1.q
                        k_2 += 1
                        r9_6 = rbx_4
                    while (k_2 s< 4)
                    
                    rdi_17 = rcx_30
                    rcx_36 = var_1c0_1.d + 2
                    var_1b8_1 += 2
                    j_4 = j_5
                    j_5 -= 1
                    r15_2 = var_1d0_1
                    r8_10 = rdi_17 - 2
                    var_1c0_1.d = rcx_36
                while (j_4 != 1)
            label_1409e3d45:
                r12 = arg1
            label_1409e3d4c:
                i_5 = i_6
                rdi_14 = arg3
                rdx_17 = var_198_1
        i_5 += 1
        r14_4 = arg2
        rcx_29 = var_128_1 + 1
        i_6 = i_5
        var_128_1 = rcx_29
    while (i_5 s< r14_4[1].d)
    
    r13 = var_168

sub_1409b6930(r12, r14_4, 0, 0, 0, 0)

if (data_143ceef48 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceef48)
    
    if (data_143ceef48 == 0xffffffff)
        atexit(sub_142cb8b20)
        _Init_thread_footer(&data_143ceef48)

return sub_1409b4ab0(r12, &data_143ceef08, arg4, &data_143ceef38) __tailcall
