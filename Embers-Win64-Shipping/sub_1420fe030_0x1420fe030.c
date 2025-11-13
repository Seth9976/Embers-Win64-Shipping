// 函数: sub_1420fe030
// 地址: 0x1420fe030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int32_t var_c8 = 0xffffffff
sub_140d3cc80(sub_142591550(), &var_d8, 1, 0x10, 0)
int32_t r8_1 = var_d0
int32_t i = var_c8 + 1
int64_t rdx_1 = var_d8
int32_t i_2 = i

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_4 = i + 1
        i_2 = i_4
        i = i_4
        
        if (i_4 s>= r8_1)
            break

void* var_c0

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    void* rcx_2 = *(rdx_1 + (sx.q(i) << 3))
    var_c0 = rcx_2
    int64_t var_a8 = *(rcx_2 + 0x430)
    
    if (sub_140d23dc0(rcx_2, 0x30) == 0)
        int64_t* var_a0 = &var_a8
        void** var_98_1 = &var_c0
        int32_t var_b0
        sub_1420f29b0(&var_88, &var_b0, &var_a0, nullptr)
    
    r8_1 = var_d0
    i = i_2 + 1
    rdx_1 = var_d8
    i_2 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_5 = i + 1
            i_2 = i_5
            i = i_5
            
            if (i_5 s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

var_d8 = 0
int32_t var_d0_1 = 0
int32_t var_c8_1 = 0xffffffff
sub_140d3cc80(sub_14258cb80(), &var_d8, 1, 0x10, 0)
int32_t r8_4 = var_d0_1
int64_t rdx_4 = var_d8
int32_t i_1 = var_c8_1 + 1
int32_t i_3 = i_1

if (i_1 s< r8_4)
    while (*(rdx_4 + (sx.q(i_1) << 3)) == 0)
        int32_t i_6 = i_1 + 1
        i_3 = i_6
        i_1 = i_6
        
        if (i_6 s>= r8_4)
            break

int64_t var_80

while (i_1 s>= 0)
    if (i_1 s>= r8_4)
        break
    
    void* r12_1 = nullptr
    int32_t r13_1 = 0
    var_c0 = nullptr
    int32_t var_b4_1 = 0
    int32_t j_4 = 0
    int64_t r14_1 = *(rdx_4 + (sx.q(i_1) << 3))
    sub_1405b6470(&var_88, var_80.d - var_54, 0)
    int64_t r9_1 = sx.q(var_40)
    
    if (r9_1.d != 0)
        uint32_t r8_6 = (r14_1 u>> 4).d
        int32_t rdx_8 = (0x9e3779b9 - r8_6) ^ r8_6 << 8
        int32_t rcx_10 = neg.d(rdx_8 + r8_6) ^ rdx_8 u>> 0xd
        int32_t r8_9 = (r8_6 - rdx_8 - rcx_10) ^ rcx_10 u>> 0xc
        int32_t rdx_11 = (rdx_8 - r8_9 - rcx_10) ^ r8_9 << 0x10
        int32_t rcx_13 = (rcx_10 - rdx_11 - r8_9) ^ rdx_11 u>> 5
        int32_t r8_12 = (r8_9 - rdx_11 - rcx_13) ^ rcx_13 u>> 3
        int32_t rdx_14 = (rdx_11 - r8_12 - rcx_13) ^ r8_12 << 0xa
        void var_50
        void* rax_29 = &var_50
        
        if (var_48 != 0)
            rax_29 = var_48
        
        int64_t rdx_16 = var_88
        int32_t j =
            *(rax_29 + (((sx.q(rcx_13 - rdx_14 - r8_12) ^ zx.q(rdx_14) u>> 0xf) & (r9_1 - 1)) << 2))
        int32_t j_1 = j
        
        while (j != 0xffffffff)
            int64_t rcx_19 = sx.q(j_1) * 3
            j = *(rdx_16 + (rcx_19 << 3) + 0x10)
            
            if (*(rdx_16 + (rcx_19 << 3)) == r14_1)
                break
            
            j_1 = j
        
        while (j_1 != 0xffffffff)
            int64_t j_5 = sx.q(j_4)
            j_4 = (j_5 + 1).d
            
            if (j_4 s> r13_1)
                sub_1405a4d70(&var_c0)
                rdx_16 = var_88
                r13_1 = var_b4_1
                r12_1 = var_c0
            
            void* r8_13 = r12_1 + (j_5 << 3)
            
            if (r8_13 != 0)
                *r8_13 = *(rdx_16 + sx.q(j_1) * 0x18 + 8)
                rdx_16 = var_88
            
            j_1 = j
            
            if (j == 0xffffffff)
                break
            
            do
                int64_t rcx_22 = sx.q(j_1) * 3
                j = *(rdx_16 + (rcx_22 << 3) + 0x10)
                
                if (*(rdx_16 + (rcx_22 << 3)) == r14_1)
                    break
                
                j_1 = j
            while (j != 0xffffffff)
    
    if (r14_1 != 0 && j_4 s>= 1)
        void* rbx_1 = r12_1
        uint64_t j_3 = zx.q(j_4)
        uint64_t j_2
        
        do
            void* rcx_23 = *rbx_1
            
            if (*(rcx_23 + 0xa8) == 0)
                sub_141ee69e0(rcx_23)
            
            rbx_1 += 8
            j_2 = j_3
            j_3 -= 1
        while (j_2 != 1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    r8_4 = var_d0_1
    rdx_4 = var_d8
    i_1 = i_3 + 1
    i_3 = i_1
    
    if (i_1 s< r8_4)
        while (*(rdx_4 + (sx.q(i_1) << 3)) == 0)
            int32_t i_7 = i_1 + 1
            i_3 = i_7
            i_1 = i_7
            
            if (i_7 s>= r8_4)
                break

if (rdx_4 != 0)
    sub_140a74f90(rdx_4)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

bool cond:0 = var_80:4.d == 0
var_80.d = 0

if (not(cond:0))
    sub_1405a5130(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_30 = var_88

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_108)
return result
