// 函数: sub_140d0cd50
// 地址: 0x140d0cd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r9 = 0
int32_t i = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t r12 = 0x20
int32_t var_5c = 0x80
int64_t* var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_108
int64_t** var_100
int32_t var_60

if (arg1[1].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t* rbx_1 = *(r15_1 + *arg1)
        int64_t* var_d8 = rbx_1
        void* rax_3 = *rbx_1
        void* rdx_1 = rax_3 + (sx.q(rbx_1[1].d) << 3)
        int64_t var_d0 = *(rax_3 + 8)
        int64_t var_c8_1 = *(rdx_1 - 8)
        int32_t var_e0
        sub_140cfe7b0(&var_88, &var_e0, &var_d0)
        int64_t rax_5 = sx.q(var_e0)
        void* const rcx_5
        
        if (rax_5.d == 0xffffffff)
            rcx_5 = nullptr
        else
            rcx_5 = (rax_5 << 5) + var_88
        
        int64_t* rsi_1 = rcx_5 + 0x10
        
        if (rcx_5 == 0)
            rsi_1 = nullptr
        
        if (rsi_1 == 0)
            var_108.q = &var_d0
            var_100 = &var_d8
            void var_c0
            sub_140cec7a0(&var_88, &var_c0, &var_108, nullptr)
        else
            int64_t* rsi_2 = *rsi_1
            
            if (rsi_2[1].d s> rbx_1[1].d)
                if (rsi_2 != 0)
                    int64_t rcx_6 = rsi_2[2]
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    int64_t rcx_7 = *rsi_2
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    j_sub_140a74f90(rsi_2)
                    rbx_1 = var_d8
                
                int32_t var_dc
                sub_140cfe7b0(&var_88, &var_dc, &var_d0)
                int64_t rax_7 = sx.q(var_dc)
                
                if (rax_7.d == 0xffffffff)
                    *0x10 = rbx_1
                else
                    *((rax_7 << 5) + var_88 + 0x10) = rbx_1
            else if (rbx_1 != 0)
                int64_t rcx_13 = rbx_1[2]
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                int64_t rcx_14 = *rbx_1
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                j_sub_140a74f90(rbx_1)
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< arg1[1].d)
    
    r9 = var_60

int32_t rax_8 = *(arg1 + 0xc)
arg1[1].d = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405c5570(arg1, 0)
    rax_8 = *(arg1 + 0xc)
    r9 = var_60

int32_t rdx_8 = var_80 - var_54
arg1[1].d = 0

if (rax_8 != rdx_8)
    sub_1405c5570(arg1, rdx_8)
    r9 = var_60

int32_t var_104 = 1
int32_t rcx_19 = 0
var_108 = 0
var_100 = &var_78
int32_t r8_4 = 0
int32_t var_f8 = 0xffffffff
int64_t var_f4 = 0
int64_t** var_68

if (r9 != 0)
    int64_t** r10_1 = &var_78
    
    if (var_68 != 0)
        r10_1 = var_68
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_11 = *r10_1
    
    if (rdx_11 != 0)
    label_140d0cfee:
        int32_t rax_16 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_104_1 = rax_16
        
        if (rax_16 != 0)
            r12 = 0x1f - temp0_1
        
        int32_t rax_17 = r8_4 - r12 + 0x1f
        
        if (rax_17 s> r9)
            rax_17 = r9
        
        var_f4.d = rax_17
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_19)
            r8_4 += 0x20
            rcx_19 += 1
            var_f4:4.d = r8_4
            var_108 = rcx_19
            
            if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_f4.d = r9
                break
            
            rdx_11 = *(r10_1 + (rdx_12 << 2) + 4)
            var_f8 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_140d0cfee

double zmm2[0x2] = var_f8.o
double var_b0[0x2] = var_108.o
uint32_t rax_19 = (zmm2[0] u>> 0x20).d
double var_a0[0x2] = zmm2
var_108.o = (&var_88).o
int64_t var_e8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_f8.o = var_b0

if (rax_19 s< r9)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rbx_2 = sx.q(arg1[1].d)
        int32_t rax_20 = (rbx_2 + 1).d
        arg1[1].d = rax_20
        
        if (rax_20 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t* r8_6 = *arg1 + (rbx_2 << 3)
        
        if (r8_6 != 0)
            *r8_6 = *((sx.q(i_1) << 5) + *var_108.q + 0x10)
        
        var_f4:4.d &= not.d(var_100:4.d)
        sub_14059bdd0(&var_100)
        i_1 = i_2
    while (i_1 s< *(var_f8.q + 0x18))

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void* result = sub_14059a8e0(&var_78, 0)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_28 = var_88

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_128)
return result
