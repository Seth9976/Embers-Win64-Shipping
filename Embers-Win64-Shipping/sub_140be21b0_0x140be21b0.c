// 函数: sub_140be21b0
// 地址: 0x140be21b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_18 = rdi
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* var_100 = arg1
int64_t* rsi = arg1
int64_t var_148

if (arg3 == 0)
    for (int64_t* i = arg1[0xa]; i != 0; i = i[4])
        int64_t rax_31
        
        if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
            rax_31 = 0
        else
            rax_31 = i[2]
        
        if (rax_31 != rsi)
            break
        
        if (i != 0 && ((*(i[1] + 0x10) u>> 0xf).b & 1) != 0)
            (*(*i + 0x70))(i, arg2)
else
    void* rax_3 = (*(*arg1 + 0x270))()
    
    if ((arg2[5].b & 1) != 0)
        if (rax_3 != 0)
            int64_t r8 = *arg2
            (*(r8 + 0x170))(arg2, rax_3, r8)
        
        for (void* i_1 = rsi[9]; i_1 != 0; i_1 = *(i_1 + 0x28))
            void* rax_4
            int64_t rax_5
            void* rdx_1
            
            if (data_143de5452 != 0 && i_1 != 0)
                rax_4 = sub_140bdfab0()
                rdx_1 = *(i_1 + 0x10)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (data_143de5452 == 0 || i_1 == 0 || rax_5.d s> *(rdx_1 + 0x38)
                    || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                (*(*arg2 + 0x170))(arg2, i_1)
    
    int32_t rax_8 = 0
    var_148.d = 0
    int32_t r12_1 = 1
    
    do
        rsi[0xb].d = 0
        *(rsi + 0x5c) = 1
        
        if (rax_3 != 0)
            rsi[0xb].d = *(rax_3 + 0x58)
            *(rsi + 0x5c) = *(rax_3 + 0x5c)
            rax_8 = var_148.d
        
        int64_t* i_2 = rsi[0xa]
        
        if (i_2 != 0)
            do
                int64_t rax_13
                
                if (sub_140cc16a0(&i_2[2], sub_140d41340()) == 0)
                    rax_13 = 0
                else
                    rax_13 = i_2[2]
                
                if (rax_13 != rsi)
                    break
                
                if (i_2 != 0 && ((*(i_2[1] + 0x10) u>> 0xf).b & 1) != 0)
                    sub_140cc16a0(&i_2[2], sub_140d41340())
                    int64_t r14_1 = i_2[5]
                    rdi.b = (i_2[6].d u>> 6).b & 1
                    (*(*i_2 + 0x70))(i_2, arg2)
                    rsi[0xb].d = sub_140ce9f20(i_2)
                    
                    if (rdi.b != ((i_2[6].d u>> 6).b & 1) || r14_1 != i_2[5])
                        r12_1 += 1
                        break
                    
                    int32_t rax_21 = (*(*i_2 + 0x108))(i_2)
                    
                    if (*(rsi + 0x5c) s>= rax_21)
                        rax_21 = *(rsi + 0x5c)
                    
                    *(rsi + 0x5c) = rax_21
                
                i_2 = i_2[4]
            while (i_2 != 0)
            
            rax_8 = var_148.d
        
        rax_8 += 1
        var_148.d = rax_8
    while (rax_8 s< r12_1)
    
    void* rbx_1 = rsi[2]
    void* rax_22
    int64_t r9_1
    rax_22, r9_1 = sub_140bdfe30()
    
    if (rax_22 != 0)
        int64_t rax_23 = sx.q(*(rax_22 + 0x38))
        
        if (rax_23.d s<= *(rbx_1 + 0x38) && *(*(rbx_1 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30)
            for (void* i_3 = rsi[0xa]; i_3 != 0; i_3 = *(i_3 + 0x20))
                if (((*(*(i_3 + 8) + 0x10) u>> 0x15).b & 1) != 0)
                    void* rdx_9 = *(i_3 + 0x78)
                    
                    if (rdx_9 != 0 && ((*(*(rdx_9 + 8) + 0x10) u>> 0x14).b & 1) != 0
                            && *(rdx_9 + 0x78) == rsi)
                        sub_140af98a0("Unknown", 0x33e, 
                            'Struct recursion via arrays is unsupported for properties.", r9_1)
                        r9_1 = sub_140afbb40()
            
            sub_140be3930(rsi)
            void* rcx_14 = rsi[0x17]
            
            if (rcx_14 != 0)
                *(rsi + 0x5c) = *(rcx_14 + 0xc)
                rsi[0xb].d = *(rcx_14 + 8)

void* rax_34 = sub_140d21d80(rsi)
int64_t rdx_12 = data_143de5770
int64_t rcx_20 = *(rax_34 + 0x18)
var_148 = rcx_20
int64_t* var_140
int64_t rax_35

if ((-0x8000000000000000 & rdx_12) == 0 || rcx_20 != 0)
    rax_35 = *sub_140b63580(&data_143de5770, &var_140)
    rax_35.b = var_148 == rax_35
else
    int64_t* rcx_21 = &var_148
    char* rdx_13 = rdx_12 & 0x7fffffffffffffff
    
    if (data_143de577c != 0)
        rax_35 = sub_140b5b9d0(rcx_21, rdx_13)
    else
        rax_35 = sub_140b5b8c0(rcx_21, rdx_13)

if (rax_35.b != 0)
    int64_t rbx_2 = rsi[3]
    rdi.b = (rbx_2 u>> 0x20).d == 0
    
    if ((rdi.b & sub_140b5b8a0(rbx_2.d, 0x40)) == 0 && (rdi.b & sub_140b5b8a0(rbx_2.d, 0x3f)) == 0
            && (rdi.b & sub_140b5b8a0(rbx_2.d, 0x39)) == 0
            && (rdi.b & sub_140b5b8a0(rbx_2.d, 0x45)) == 0
            && (rdi.b & sub_140b5b8a0(rbx_2.d, 0x44)) == 0)
        sub_140b5b8a0(rbx_2.d, 0x3e)

int64_t* i_8 = rsi[0xa]
void* r15_1 = &rsi[0xe]
void* r12_2 = &rsi[0x10]
int64_t var_f8 = 0
void* rdi_2 = &rsi[0xf]
int64_t var_f0 = 0
void* r14_2 = &rsi[0x11]
var_140 = rsi
int32_t var_130 = 0xffffffff
int16_t var_12c = 0x101
char var_12a = 0
sub_1406328d0(&var_140)
int64_t* i_4 = i_8

if (i_4 != 0)
    do
        char rax_45 = (*(*i_4 + 0x110))(i_4, &var_f8)
        char rax_47
        
        if (rax_45 == 0)
            rax_47 = (*(*i_4 + 0x118))(i_4)
        
        if (rax_45 != 0 || rax_47 != 0)
            *rdi_2 = i_4
            rdi_2 = &i_4[0xc]
        
        void* rax_48 = sub_140cbd010(i_4)
        void* rcx_32 = rax_48
        
        if (rax_48 == 0 || (*(rax_48 + 0xcc) & 0x10000080) == 0)
            rax_48.b = 0
        else
            rax_48.b = 1
        
        if ((i_4[8] & 0x1040000000) == 0 && rax_48.b == 0)
            *r12_2 = i_4
            r12_2 = &i_4[0xd]
        
        if (rcx_32 != 0)
            if (rax_48.b == 0)
                *r14_2 = i_4
                r14_2 = &i_4[0xe]
            else if (test_bit(zx.q(i_4[8].d), 0xe) && ((*(rcx_32 + 0xcc) u>> 0xa).b & 1) == 0)
                *r14_2 = i_4
                r14_2 = &i_4[0xe]
        
        *r15_1 = i_4
        int64_t* i_9 = i_4[4]
        r15_1 = &i_4[0xb]
        sub_1406328d0(&var_140)
        i_4 = i_9
    while (i_4 != 0)
    
    rsi = var_100

*r15_1 = 0
*r12_2 = 0
*rdi_2 = 0
*r14_2 = 0
void** var_b8
std::exception::exception(&var_b8)
int64_t* i_5 = rsi[0xa]
var_b8 = &data_142e89488
int32_t rax_52 = 0
int32_t var_64 = 0
int32_t rdx_16 = 0
int64_t* var_a0 = rsi
void* r11 = nullptr
uint64_t var_98 = 0
int32_t r9_2 = 0
int32_t var_90
__builtin_memset(&var_90, 0, 0x24)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int64_t var_58 = 0
int32_t var_50 = 0
void* var_78
int32_t var_70

if (i_5 != 0)
    do
        (*(*i_5 + 0x28))(i_5, &var_b8)
        i_5 = i_5[4]
    while (i_5 != 0)
    
    rax_52 = var_64
    r9_2 = var_70
    r11 = var_78
    rdx_16 = var_90

int32_t rdx_18 = rdx_16 - rax_52
var_140 = nullptr
int64_t var_138_2 = 0
int64_t* r14_3 = nullptr
int32_t rdi_3 = 0

if (rdx_18 s> 0)
    sub_1405c5570(&var_140, rdx_18)
    r9_2 = var_70
    r11 = var_78
    rdi_3 = var_138_2.d
    r14_3 = var_140

int32_t var_124 = 1
int64_t var_8c
void* var_120 = &var_8c:4
int32_t rax_54 = 0
int32_t var_114 = 0
int32_t rcx_37 = 0
int32_t var_128 = 0
int32_t r8_2 = 0
int32_t var_118 = 0xffffffff
int32_t var_110 = 0

if (r9_2 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9_2 - 1)
    void* r10_1 = &var_8c:4
    
    if (r11 != 0)
        r10_1 = r11
    
    int32_t rdx_21 = *r10_1
    
    if (rdx_21 != 0)
    label_140be27ec:
        int32_t rax_61 = ((rdx_21 - 1) & rdx_21) ^ rdx_21
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_61)
        int32_t var_124_1 = rax_61
        int32_t rax_62
        
        if (rax_61 == 0)
            rax_62 = 0x20
        else
            rax_62 = 0x1f - temp0_2
        
        rax_54 = r8_2 - rax_62 + 0x1f
        
        if (rax_54 s> r9_2)
            rax_54 = r9_2
    else
        while (true)
            int64_t rdx_22 = sx.q(rcx_37)
            r8_2 += 0x20
            rcx_37 += 1
            var_110 = r8_2
            var_128 = rcx_37
            
            if (rdx_22.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_54 = r9_2
                break
            
            rdx_21 = *(r10_1 + (rdx_22 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_140be27ec
    
    int32_t var_114_1 = rax_54

int128_t var_e0 = var_128.o
int128_t var_d0 = 0xffffffff
int64_t var_108 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_128.o = (&var_98).o
var_118.o = var_e0

if (rax_54 s< r9_2)
    int32_t i_7
    int32_t i_6 = i_7
    
    do
        int64_t rbx_3 = sx.q(rdi_3)
        int64_t r12_3 = *var_128.q
        rdi_3 = (rbx_3 + 1).d
        var_138_2.d = rdi_3
        
        if (rdi_3 s> var_138_2:4.d)
            sub_1405a4d70(&var_140)
            rdi_3 = var_138_2.d
            r14_3 = var_140
        
        r14_3[rbx_3] = *(r12_3 + sx.q(i_6) * 0x10)
        var_110 &= not.d(var_120:4.d)
        sub_14059bdd0(&var_120)
        i_6 = i_7
    while (i_6 s< *(var_118.q + 0x18))

if (rdi_3 != 0)
    int32_t rax_70 = rsi[0x13].d
    int32_t rdx_24 = rdi_3 + rax_70
    
    if (rdx_24 s> *(rsi + 0x9c))
        sub_1405c5570(&rsi[0x12], rdx_24)
        rax_70 = rsi[0x13].d
    
    memmove(rsi[0x12] + (sx.q(rax_70) << 3), r14_3, rdi_3 << 3)
    rsi[0x13].d += rdi_3

if (r14_3 != 0)
    sub_140a74f90(r14_3)

int32_t rdi_4 = rsi[0x13].d
int32_t rdi_5 = rdi_4 - 1

if (rdi_4 - 1 s>= 0)
    int64_t r12_4 = sx.q(rdi_5) << 3
    int64_t r14_4 = r12_4
    void* r15_3 = sx.q(rdi_5 + 1) << 3
    int32_t temp4_1
    
    do
        void** rcx_44 = rsi[0x12]
        void* rsi_1 = *(rcx_44 + r12_4)
        
        if (rsi_1 == 0)
            int32_t rdx_29 = rsi[0x13].d
            int32_t rax_78 = rdx_29 - rdi_5
            
            if (rax_78 != 1)
                memmove(rcx_44 + r14_4, r15_3 + rcx_44, (rax_78 - 1) << 3)
                rdx_29 = rsi[0x13].d
            
            rsi[0x13].d = rdx_29 - 1
            sub_1405c53d0(&rsi[0x12])
        else
            void* rax_74 = sub_140cddb10()
            void* rdx_27 = *(rsi_1 + 0x10)
            int64_t rax_75 = sx.q(*(rax_74 + 0x38))
            
            if (rax_75.d s<= *(rdx_27 + 0x38)
                    && *(*(rdx_27 + 0x30) + (rax_75 << 3)) == rax_74 + 0x30)
                var_100 = rsi[0x12] + r14_4
                sub_140812a70(rsi_1 + 0x348, &var_148, &var_100, nullptr)
            
            sub_140cddc80()
        
        r15_3 -= 8
        r14_4 -= 8
        r12_4 -= 8
        temp4_1 = rdi_5
        rdi_5 -= 1
    while (temp4_1 - 1 s>= 0)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int32_t var_90_1 = 0

if (var_8c.d != 0)
    sub_1405a5410(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
sub_14059a8e0(&var_8c:4, 0)

if (var_78 != 0)
    sub_140a74f90(var_78)

uint64_t rcx_55 = var_98

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

void** result = sub_140d16360(&var_b8)
int64_t rcx_57 = var_f8

if (rcx_57 != 0)
    result = sub_140a74f90(rcx_57)

__security_check_cookie(rax_1 ^ &var_168)
return result
