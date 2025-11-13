// 函数: sub_14184ce20
// 地址: 0x14184ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
TEB* gsbase

if (data_143efa9e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa9e8)
    
    if (data_143efa9e8 == 0xffffffff)
        InitializeCriticalSection(&data_143efa9c0)
        SetCriticalSectionSpinCount(&data_143efa9c0, 0xfa0)
        atexit(sub_142cec3a0)
        _Init_thread_footer(&data_143efa9e8)

char rax_4 = *(arg1 + 0xc5)

if (rax_4 == 0)
    EnterCriticalSection(&data_143efa9c0)

EnterCriticalSection(arg1 + 0x718)

if (*(arg1 + 0x750) == 0)
    bool cond:0_1 = *(arg1 + 0x751) != 0
    *(arg1 + 0x750) = 1
    
    if (not(cond:0_1))
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        *(arg1 + 0x740) = performanceCount

LeaveCriticalSection(arg1 + 0x718)
int64_t rax_6 = *(arg1 + 0x2c0)
int32_t var_16c = 7
int32_t var_170 = zx.o(0).d
(*(rax_6 + 0x18))(arg1 + 0x2c0, &var_16c, &var_170)
int32_t i_2 = arg2[1].d
int64_t* rbx_1 = *arg2

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_14061cd70(arg2, 0)

int64_t* rcx_6 = *(arg1 + 0x5f0)
int32_t rax_8 = (*(*rcx_6 + 0x18))(rcx_6, arg2)
int64_t* var_f0
void* var_e8
int128_t var_e0

if (rax_8 != 0)
    int64_t* rdi = *(arg1 + 0x538)
    sub_1405d9400()
    var_f0 = data_143cd6fd8
    void* rcx_8 = data_143cd6fe0
    var_e8 = rcx_8
    
    if (rcx_8 != 0)
        *(rcx_8 + 8) += 1
    
    var_e0.d = data_143cd6fe8
    void* r8_3
    
    if (rax_8 == 2)
        r8_3 = data_1439c67d0
    else if (rax_8 == 3)
        r8_3 = data_1439c67d8
    else if (rax_8 == 4)
        r8_3 = data_1439c67e0
    else if (rax_8 == 5)
        r8_3 = data_1439c67e8
    else
        r8_3 = data_1439c67c8
    
    (*(*rdi + 0x38))(rdi, 4, r8_3, 0, &var_f0)

int64_t* rcx_10 = *(arg1 + 0x5c0)
int64_t var_98
(*(*rcx_10 + 0x50))(rcx_10, &var_98)
int32_t rcx_11 = 0
int32_t var_154 = 1
int32_t r8_4 = 0
int32_t var_158 = 0
void var_88
void* var_150 = &var_88
int32_t var_148 = 0xffffffff
int64_t var_144 = 0
void* var_78
int32_t var_70

if (var_70 != 0)
    void* r9_1 = &var_88
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_70 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14184d086:
        int32_t rax_19 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_19)
        int32_t var_154_1 = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_1
        
        int32_t rax_21 = r8_4 - rax_20 + 0x1f
        
        if (rax_21 s> var_70)
            rax_21 = var_70
        
        var_144.d = rax_21
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_11)
            r8_4 += 0x20
            rcx_11 += 1
            var_144:4.d = r8_4
            var_158 = rcx_11
            
            if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_144.d = var_70
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_148_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14184d086

int32_t var_a4 = var_70
var_f0 = &var_98
var_e8.o = var_158.o
int128_t zmm0 = var_f0.o
int128_t var_d8 = 0xffffffff
int512_t zmm1
zmm1.o = var_e0
int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_118 = zmm0
int128_t var_108 = zmm1.o
int64_t var_f8 = zmm2

while (true)
    int64_t rdx_7 = sx.q(var_108:0xc.d)
    char rax_23
    
    if (rdx_7.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d || var_108.q != &var_88)
        rax_23 = 0
    else
        rax_23 = 1
    
    int64_t rcx_14 = var_118.q
    
    if (rax_23 == 0 || rcx_14 != &var_98)
        rax_23 = 1
    else
        rax_23 = 0
    
    if (rax_23 == 0)
        break
    
    int32_t* r10_3 = (rdx_7 << 4) + *rcx_14
    int64_t r9_2 = sx.q(*r10_3)
    int32_t rax_26
    
    if (*(arg1 + 0x8a0) == *(arg1 + 0x8cc))
    label_14184d19d:
        rax_26 = 0
    else
        void* rcx_15 = *(arg1 + 0x8d8)
        void* r8_6 = arg1 + 0x8d0
        
        if (rcx_15 != 0)
            r8_6 = rcx_15
        
        int32_t rax_25 = *(r8_6 + (((sx.q(*(arg1 + 0x8e0)) - 1) & r9_2) << 2))
        
        if (rax_25 == 0xffffffff)
        label_14184d19d_1:
            rax_26 = 0
        else
            int64_t r8_7 = *(arg1 + 0x898)
            int64_t rdx_11
            
            while (true)
                rdx_11 = sx.q(rax_25)
                int64_t rcx_17 = rdx_11 * 2
                
                if (*(r8_7 + (rcx_17 << 3)) == r9_2.d)
                    break
                
                rax_25 = *(r8_7 + (rcx_17 << 3) + 8)
                
                if (rax_25 == 0xffffffff)
                    goto label_14184d19d_3
            
            if (rax_25 == 0xffffffff)
            label_14184d19d_2:
                rax_26 = 0
            else
                int64_t rdx_16 = rdx_11 << 4
                
                if (rdx_16 == neg.q(r8_7))
                label_14184d19d_3:
                    rax_26 = 0
                else
                    rax_26 = *(rdx_16 + r8_7 + 4)
    
    int32_t var_168
    
    if (rax_26 s< r10_3[1] && sub_1418ad380(r9_2.d, &var_168) != 0)
        void* rdi_1 = data_1439c66f0
        int64_t r14_1 = 0
        int32_t rdx_13 = 0
        int64_t var_190 = 0
        int32_t rcx_19 = 0
        int64_t var_188_1 = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_8 = -1
            
            do
                rbx_8 += 1
            while (*(rdi_1 + (rbx_8 << 1)) != 0)
            
            if (rbx_8.d + 1 s> 0)
                sub_1405947f0(&var_190, rbx_8.d + 1)
                rcx_19 = var_188_1:4.d
                rdx_13 = var_188_1.d
                r14_1 = var_190
            
            int32_t rax_28 = rdx_13 + rbx_8.d + 1
            var_188_1.d = rax_28
            
            if (rax_28 s> rcx_19)
                sub_140594770(&var_190)
                r14_1 = var_190
            
            UnDecorator::getReferenceType(r14_1, rdi_1, (rbx_8.d + 1) * 2)
        
        int32_t rax_29 = var_168
        void* rdi_2
        
        if (rax_29 == 2)
            rdi_2 = data_1439c67d0
        else if (rax_29 == 3)
            rdi_2 = data_1439c67d8
        else if (rax_29 == 4)
            rdi_2 = data_1439c67e0
        else if (rax_29 == 5)
            rdi_2 = data_1439c67e8
        else
            rdi_2 = data_1439c67c8
        
        int64_t rsi_1 = 0
        int32_t rdx_18 = 0
        int32_t rcx_23 = 0
        int64_t var_180 = 0
        int64_t var_178_1 = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_10 = -1
            
            do
                rbx_10 += 1
            while (*(rdi_2 + (rbx_10 << 1)) != 0)
            
            if (rbx_10.d + 1 s> 0)
                sub_1405947f0(&var_180, rbx_10.d + 1)
                rcx_23 = var_178_1:4.d
                rdx_18 = var_178_1.d
                rsi_1 = var_180
            
            int32_t rax_33 = rdx_18 + rbx_10.d + 1
            var_178_1.d = rax_33
            
            if (rax_33 s> rcx_23)
                sub_140594770(&var_180)
                rsi_1 = var_180
            
            UnDecorator::getReferenceType(rsi_1, rdi_2, (rbx_10.d + 1) * 2)
            
            if (rsi_1 != 0)
                zmm1 = sub_140a74f90(rsi_1)
        
        if (r14_1 != 0)
            zmm1 = sub_140a74f90(r14_1)
    
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)

int64_t var_58

if (arg1 + 0x898 != &var_98)
    zmm1 = sub_140780e10(arg1 + 0x898, &var_98)
    int64_t rsi_2 = var_58
    void var_60
    
    if (rsi_2 == 0)
        memmove(arg1 + 0x8d0, &var_60, (rsi_2 + 4).d)
    int64_t rcx_32 = *(arg1 + 0x8d8)
    
    if (rcx_32 != 0)
        zmm1 = sub_140a74f90(rcx_32)
        rsi_2 = var_58
    
    *(arg1 + 0x8d8) = rsi_2
    int32_t var_50
    *(arg1 + 0x8e0) = var_50
    int32_t var_50_1 = 0
    var_58 = 0

int64_t rax_37 = *(arg1 + 0x2c0)
int32_t var_164 = 0x3f800000
int32_t var_160 = 7
(*(rax_37 + 0x18))(arg1 + 0x2c0, &var_160, &var_164)
int64_t* rcx_34 = *(arg1 + 0x538)

if ((*(*rcx_34 + 0x10))(rcx_34) == 0)
    int64_t* i_1 = *arg2
    
    for (void* r15_4 = &i_1[sx.q(arg2[1].d) * 2]; i_1 != r15_4; i_1 = &i_1[2])
        zmm1 = sub_141828f90(arg1, i_1, 1, zmm1)
        int32_t rsi_3 = i_1[1].d
        int32_t rsi_4
        
        if (rsi_3 == 0)
            rsi_4 = 0
        else
            rsi_4 = rsi_3 - 1
        
        int32_t rbx_12 = *(arg1 + 0xf0)
        int32_t rax_41
        
        if (rbx_12 == 0)
            rax_41 = rbx_12 + 2
        
        if (rbx_12 != 0 || rsi_4 == 0xffffffff)
            rax_41 = 1
        
        int64_t r14_2 = *(arg1 + 0xe8)
        int32_t rcx_36 = rsi_4 + rax_41
        int16_t* var_1a0 = nullptr
        
        if (rbx_12 != 0 || rcx_36 != 0)
            sub_1405a4c70(&var_1a0, rbx_12 + rcx_36, 0)
            memcpy(var_1a0, r14_2, rbx_12 * 2)
        else
            int32_t var_194_1 = 0
        
        sub_140a2cf70(&var_1a0, *i_1, rsi_4)
        int64_t* rcx_40 = *(arg1 + 0x528)
        int16_t* const rdx_28 = &data_142d40450
        
        if (rbx_12 != 0)
            rdx_28 = var_1a0
        
        if ((*(*rcx_40 + 0x80))(rcx_40, rdx_28) != 0)
            int64_t* rcx_41 = *(arg1 + 0x528)
            int16_t* const rdx_29 = &data_142d40450
            
            if (rbx_12 != 0)
                rdx_29 = var_1a0
            
            (*(*rcx_41 + 0x68))(rcx_41, rdx_29)
        
        if (*(arg1 + 0xb8) != 0)
            int32_t rsi_5 = i_1[1].d
            int32_t rsi_6
            
            if (rsi_5 == 0)
                rsi_6 = 0
            else
                rsi_6 = rsi_5 - 1
            
            int32_t rbx_13 = *(arg1 + 0x70)
            int32_t rax_46
            
            if (rbx_13 == 0)
                rax_46 = rbx_13 + 2
            
            if (rbx_13 != 0 || rsi_6 == 0xffffffff)
                rax_46 = 1
            
            int64_t r14_3 = *(arg1 + 0x68)
            int32_t rcx_42 = rax_46 + rsi_6
            int16_t* var_1b0 = nullptr
            
            if (rbx_13 != 0 || rcx_42 != 0)
                sub_1405a4c70(&var_1b0, rbx_13 + rcx_42, 0)
                memcpy(var_1b0, r14_3, rbx_13 * 2)
            else
                int32_t var_1a4_1 = 0
            
            sub_140a2cf70(&var_1b0, *i_1, rsi_6)
            int64_t* rcx_46 = *(arg1 + 0x528)
            int16_t* const rdx_33 = &data_142d40450
            
            if (rbx_13 != 0)
                rdx_33 = var_1b0
            
            if ((*(*rcx_46 + 0x80))(rcx_46, rdx_33) != 0)
                int64_t* rcx_47 = *(arg1 + 0x528)
                int16_t* const rdx_34 = &data_142d40450
                
                if (rbx_13 != 0)
                    rdx_34 = var_1b0
                
                (*(*rcx_47 + 0x68))(rcx_47, rdx_34)
                int32_t var_c8
                sub_140598750(arg1 + 0x470, &var_c8)
                int64_t* var_c0
                sub_140596d10(var_c0, i_1)
                var_c0[2].d = 0xffffffff
                int32_t rax_50 = var_c0[1].d
                int16_t* rdx_37
                
                if (rax_50 == 0)
                    rdx_37 = &data_142d40450
                else
                    rdx_37 = *var_c0
                
                int32_t rcx_50 = rax_50 - 1
                
                if (rax_50 == 0)
                    rcx_50 = 0
                
                int32_t rax_51 = sub_1405969c0(rcx_50, rdx_37)
                int64_t* var_1c8
                var_1c8.d = var_c8
                void var_138
                zmm1 = sub_14059a6d0(arg1 + 0x470, &var_138, rax_51, var_c0, var_1c8.d, nullptr)
            
            int16_t* rcx_52 = var_1b0
            
            if (rcx_52 != 0)
                zmm1 = sub_140a74f90(rcx_52)
        
        int16_t* rcx_53 = var_1a0
        
        if (rcx_53 != 0)
            zmm1 = sub_140a74f90(rcx_53)

EnterCriticalSection(arg1 + 0x718)

if (*(arg1 + 0x750) != 0)
    bool cond:5_1 = *(arg1 + 0x751) != 0
    *(arg1 + 0x750) = 0
    
    if (not(cond:5_1))
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        *(arg1 + 0x748) += performanceCount_1 - *(arg1 + 0x740)

LeaveCriticalSection(arg1 + 0x718)

if (rax_4 == 0)
    LeaveCriticalSection(&data_143efa9c0)

int32_t var_50_2 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int32_t var_90 = 0
int32_t var_8c

if (var_8c != 0)
    sub_1405a5410(&var_98, 0)

int32_t var_68 = 0xffffffff
int32_t var_64 = 0
sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_61 = var_98

if (rcx_61 != 0)
    sub_140a74f90(rcx_61)

__security_check_cookie(rax_1 ^ &var_1e8)
return zx.q(rax_8 == 0)
