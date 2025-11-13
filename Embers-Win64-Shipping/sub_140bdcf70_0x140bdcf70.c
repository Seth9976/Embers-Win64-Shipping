// 函数: sub_140bdcf70
// 地址: 0x140bdcf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
int32_t i_3
int64_t rdx_1 = sub_140bdc520(arg1 + 8, &i_3, arg_20)
int64_t i_4 = sx.q(i_3)

if (i_4.d != 0xffffffff)
    rdx_1 = *(arg1 + 8)
    void* rax_1 = rdx_1 + i_4 * 0x18
    
    if (rax_1 != 0)
        int32_t* rax_2 = *(rax_1 + 8)
        
        if (rax_2 != 0)
            return rax_2

sub_140ca8370(arg2, rdx_1.b)
void* rax_3 = j_sub_140a82f30(0xd0)
void* const rdi_1 = rax_3
int64_t rsi_1

if (rax_3 == 0)
    rsi_1 = 0
    rdi_1 = nullptr
else
    sub_140d3a3a0(rax_3 + 0x10, arg2)
    rsi_1 = 0
    int64_t* rcx_4 = rdi_1 + 0x40
    __builtin_memset(rdi_1 + 0x20, 0, 0x20)
    rcx_4[2] = 0
    rcx_4[3].d = 0
    *(rcx_4 + 0x1c) = 0x80
    int64_t* rax_4 = rcx_4[2]
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    *rcx_4 = 0
    rcx_4[1] = 0
    void* rcx_5 = rdi_1 + 0x90
    *(rdi_1 + 0x60) = 0xffffffff
    *(rdi_1 + 0x64) = 0
    *(rdi_1 + 0x70) = 0
    *(rdi_1 + 0x78) = 0
    *(rdi_1 + 0x80) = 0
    *(rdi_1 + 0x88) = 0
    *(rcx_5 + 0x10) = 0
    *(rcx_5 + 0x18) = 0
    *(rcx_5 + 0x1c) = 0x80
    void* rax_5 = *(rcx_5 + 0x10)
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    *rcx_5 = 0
    *(rcx_5 + 8) = 0
    *(rdi_1 + 0xb0) = 0xffffffff
    *(rdi_1 + 0xb4) = 0
    *(rdi_1 + 0xc0) = 0
    *(rdi_1 + 0xc8) = 0

i_3.q = rdi_1
void var_88
sub_140d3a3a0(&var_88, arg2)
int32_t* r15_1 = *sub_140bd2840(arg1 + 8, &var_88, &i_3)
*(r15_1 + 8) = 0
*r15_1 = 0
r15_1[6] = 0
int64_t rdx_5 = *(arg2 + 0x40)

if (rdx_5 != 0)
    void* rax_7 = sub_140bdcf70(arg1, rdx_5)
    *(r15_1 + 8) = rax_7
    *r15_1 = *(rax_7 + 0x28) + *rax_7
    r15_1[6] = *(rax_7 + 0x18)

int32_t rdx_8 = *(arg2 + 0x108)
r15_1[0xa] = 0

if (r15_1[0xb] != rdx_8)
    sub_1405a51b0(&r15_1[8], rdx_8)

uint64_t rax_9 = zx.q(*(arg2 + 0xf8))
int32_t rdx_9 = rax_9.d
int32_t i = *(arg2 + 0x110)
int64_t** var_c8 = nullptr
int64_t var_c0_1 = 0

if (rdx_9 != i)
    sub_1405c5570(&var_c8, rdx_9 - i)
    rax_9 = zx.q(*(arg2 + 0xf8))
    i = *(arg2 + 0x110)

int64_t* var_b8

if (i s< rax_9.d)
    int32_t rsi_2 = var_c0_1.d
    
    do
        int64_t r13_1 = sx.q(rsi_2)
        rsi_2 = (r13_1 + 1).d
        var_c0_1.d = rsi_2
        int64_t* r12_1 = *(*(arg2 + 0xf0) + sx.q(i) * 0x10)
        
        if (rsi_2 s> var_c0_1:4.d)
            sub_1405a4d70(&var_c8)
            rsi_2 = var_c0_1.d
        
        var_c8[r13_1] = r12_1
        int32_t rax_12 = sub_140be0680(arg1, r12_1, 0, 0)
        int64_t r13_2 = sx.q(r15_1[0xa])
        int32_t r8_3 = r15_1[0xa] + *r15_1
        int32_t var_4c_1 = rax_12
        int32_t rax_13 = (r13_2 + 1).d
        char var_b0_1 = 0
        var_b8 = r12_1
        char var_48_1 = 0
        r15_1[0xa] = rax_13
        
        if (rax_13 s> r15_1[0xb])
            sub_1405c4e40(&r15_1[8])
        
        int64_t rcx_16 = *(r15_1 + 0x20)
        rax_9 = r13_2 << 5
        *(rax_9 + rcx_16) = var_b8.o
        *(rax_9 + rcx_16 + 0x10) = r8_3.o
        i += r12_1[7].d
    while (i s< *(arg2 + 0xf8))
    
    rsi_1 = 0

bool cond:0_1 = *(arg2 + 0x108) s<= 0
i_3 = 0
int64_t* var_98
char var_90

if (not(cond:0_1))
    int64_t r12_2 = 0
    arg_20 = 0
    int32_t i_1
    
    do
        int64_t* r14_1 = *(*(arg2 + 0x100) + r12_2)
        void* rax_16
        int64_t rax_17
        void* rdx_14
        
        if (r14_1 != 0)
            rax_16 = sub_140bdfab0()
            rdx_14 = r14_1[2]
            rax_17 = sx.q(*(rax_16 + 0x38))
        
        int32_t r13_4
        
        if (r14_1 == 0 || rax_17.d s> *(rdx_14 + 0x38)
                || *(*(rdx_14 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
            r13_4 = 0
        else
            var_b8 = r14_1[3]
            int64_t var_80
            sub_140b63b70(&var_b8, &var_80)
            int64_t var_60
            int64_t* rax_20 = sub_140a35790(&var_80, &var_60)
            int16_t* rcx_20
            
            if (rax_20[1].d == 0)
                rcx_20 = &data_142d40450
            else
                rcx_20 = *rax_20
            
            int32_t rax_21 = sub_140a5ff80(rcx_20, 0)
            int64_t rcx_21 = var_60
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            int64_t rcx_22 = var_80
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int16_t* var_70
            sub_140a2e390(&var_70, u"%u", zx.q(r14_1[0x16].d))
            int16_t* const rcx_24 = &data_142d40450
            int16_t* r12_3 = var_70
            int32_t var_68
            
            if (var_68 != 0)
                rcx_24 = r12_3
            
            r13_4 = sub_140a5ff80(rcx_24, rax_21)
            
            if (r12_3 != 0)
                sub_140a74f90(r12_3)
            
            r12_2 = arg_20
        
        int32_t rax_24 = r15_1[0xa] + *r15_1
        var_98 = r14_1
        int64_t r14_2 = sx.q(r15_1[0xa])
        var_90 = 1
        int32_t var_a4_1 = r13_4
        int32_t rax_25 = (r14_2 + 1).d
        char var_a0_1 = 0
        r15_1[0xa] = rax_25
        
        if (rax_25 s> r15_1[0xb])
            sub_1405c4e40(&r15_1[8])
        
        rax_9 = *(r15_1 + 0x20)
        r12_2 += 8
        int128_t zmm0_1 = var_98.o
        arg_20 = r12_2
        int64_t rcx_28 = r14_2 << 5
        *(rcx_28 + rax_9) = zmm0_1
        *(rcx_28 + rax_9 + 0x10) = rax_24.o
        i_1 = i_3 + 1
        i_3 = i_1
    while (i_1 s< *(arg2 + 0x108))

int32_t rdx_19 = r15_1[0xa]

if (r15_1[0xb] != rdx_19)
    sub_1405a51b0(&r15_1[8], rdx_19)

int32_t r14_3 = 0

while (true)
    if (r14_3 s< 0 || r14_3 s>= r15_1[0xa])
        rax_9.b = 0
    else
        rax_9.b = 1
    
    if (rax_9.b == 0)
        break
    
    int64_t rbx_2 = sx.q(r14_3) << 5
    int64_t* rax_27 = *(r15_1 + 0x20) + rbx_2
    var_b8 = rax_27
    arg_20 = *rax_27
    var_98 = &arg_20
    var_90.q = &var_b8
    sub_140bd29a0(&r15_1[0xc], &i_3, &var_98, nullptr)
    int64_t* r11_2 = *(r15_1 + 0x20) + rbx_2
    int64_t r9_1 = sx.q(*(r11_2 + 0x14))
    r15_1[0x2d]
    
    if (r15_1[0x22] != r15_1[0x2d])
        void* rcx_32 = *(r15_1 + 0xc0)
        void* r8_7 = &r15_1[0x2e]
        
        if (rcx_32 != 0)
            r8_7 = rcx_32
        
        int32_t i_2 = *(r8_7 + (((sx.q(r15_1[0x32]) - 1) & r9_1) << 2))
        
        if (i_2 != 0xffffffff)
            int64_t r8_8 = *(r15_1 + 0x80)
            
            do
                int64_t rax_31 = sx.q(i_2) * 3
                
                if (*(r8_8 + (rax_31 << 3)) == r9_1.d)
                    break
                
                i_2 = *(r8_8 + (rax_31 << 3) + 0x10)
            while (i_2 != 0xffffffff)
    
    var_b8 = r11_2
    sub_140bd26e0(&r15_1[0x20], r11_2 + 0x14, &var_b8)
    r14_3 += 1

int64_t rbx_3 = sx.q(var_c0_1.d)
int64_t** r14_4 = var_c8
sub_140bd47e0(r14_4, rbx_3.d, arg1.b)
void* rcx_36 = &r14_4[rbx_3]
int64_t** rbx_4 = r14_4
uint64_t rdi_5 = (rcx_36 - r14_4 + 7) u>> 3

if (r14_4 u> rcx_36)
    rdi_5 = 0

if (rdi_5 != 0)
    do
        rsi_1 += 1
        r15_1[6] = sub_140be0680(arg1, *rbx_4, r15_1[6], 1)
        rbx_4 = &rbx_4[1]
    while (rsi_1 != rdi_5)
    
    r14_4 = var_c8

if (r14_4 != 0)
    sub_140a74f90(r14_4)

return r15_1
