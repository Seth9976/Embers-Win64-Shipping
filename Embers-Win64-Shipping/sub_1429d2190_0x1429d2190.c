// 函数: sub_1429d2190
// 地址: 0x1429d2190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t var_1d8 = arg4
int64_t r12 = sx.q(arg2)
int64_t* rsi = arg1
void var_148
void* r10 = &var_148
void* var_158 = &var_148
uint32_t r14 = 0
int32_t var_150 = 0
int32_t var_14c = 0x10
void* var_108 = nullptr
void* r8 = arg1[1]
int32_t rcx = (r12 * 2).d
int64_t rdx = *(r8 + 0x150)
int64_t rbx = sx.q(*(rdx + (sx.q(rcx) << 2)))
int32_t var_1b8 = rbx.d
int64_t r15 = sx.q(rcx + 1)
int64_t rdi = *(r8 + 0x168) + (sx.q(*(rdx + (r15 << 2))) << 2)
void* r9 = rsi[3]
int32_t* var_1c8

if (((*(r9 + 0x170) - *(r9 + 0x168)) s>> 2).d == 0)
    if (rbx.d == 0)
        j_sub_140a74f90(0)
        r10 = &var_148
        var_158 = &var_148
        int32_t var_14c_1 = 0x10
    else if (rbx.d u> 0x10)
        j_sub_140a74f90(0)
        void* var_158_1 = &var_148
        int32_t var_14c_2 = 0x10
        void* rax_11 = j_sub_140a82f30(zx.q(rbx.d) << 2)
        r10 = rax_11
        var_108 = rax_11
        var_158 = rax_11
        int32_t var_14c_3 = rbx.d
    
    int32_t var_150_1 = rbx.d
    void* r8_2 = rsi[1]
    int16_t* r9_1 = *(r8_2 + 0x180) + (sx.q(*(*(r8_2 + 0x150) + (r15 << 2))) << 1)
    
    if (rbx.d s> 0)
        int32_t* r8_3 = nullptr
        uint64_t i_9 = zx.q(rbx.d)
        uint64_t i
        
        do
            *(r8_3 + r10) = *(*(*rsi + 0xc0) + (sx.q(*(r8_3 + rdi) * 2) << 2) + (zx.q(*r9_1) << 2))
            r9_1 = &r9_1[1]
            r8_3 = &r8_3[1]
            i = i_9
            i_9 -= 1
            r10 = var_158
        while (i != 1)
    
    var_1c8 = r10
    int32_t var_1c0_1 = rbx.d
else
    int32_t rcx_2 = arg4 * 2
    int64_t rdx_1 = *(r9 + 0x150)
    var_1c8 = *(r9 + 0x168) + (sx.q(*(rdx_1 + (sx.q(rcx_2 + 1) << 2))) << 2)
    int32_t var_1c0 = *(rdx_1 + (sx.q(rcx_2) << 2))

var_1c8.o = var_1c8.o
int32_t r15_1 = (rbx * 2).d
void var_e8
void* r11_1 = &var_e8
void* var_1a0 = &var_e8
void* var_f8 = &var_e8
int32_t var_f0 = r15_1
int32_t var_ec = 0x20
void* var_68 = nullptr

if (r15_1 u> 0x20)
    void* rax_16 = j_sub_140a82f30(zx.q(r15_1) << 2)
    r11_1 = rax_16
    var_1a0 = rax_16
    var_68 = rax_16
    void* var_f8_1 = rax_16
    int32_t var_ec_1 = r15_1

void* r10_4 = r11_1 + (rbx << 2)
void* var_1d0 = r10_4
void* rdx_6 = rsi[2]
int32_t rax_20 =
    *(*(rdx_6 + 0xc0) + (sx.q(*(*(rdx_6 + 0x60) + (r12 << 2))) << 2) + (zx.q(arg3) << 2))
uint16_t rdx_9 = (rax_20 u>> 0x10).w

if (rax_20.w u< rdx_9)
    uint64_t r12_2 = zx.q(zx.d(rax_20.w) + 1)
    uint32_t r9_2 = zx.d(rdx_9)
    
    if (r12_2.d u<= r9_2)
        int64_t rbx_1 = *(rsi[1] + 0xd8)
        int64_t r15_2 = *(rsi[3] + 0xd8)
        void* r8_4 = r11_1
        int32_t* rdx_10 = &var_1c8[r12_2]
        uint64_t i_6 = zx.q(r9_2 - r12_2.d + 1)
        r14 = i_6.d
        uint64_t i_1
        
        do
            *r8_4 = *(rbx_1 + (sx.q(*(rdi - var_1c8 + rdx_10)) << 2))
            *(r10_4 - (r12_2 << 2) - var_1c8 + rdx_10) = *(r15_2 + (sx.q(*rdx_10) << 2))
            r8_4 += 4
            rdx_10 = &rdx_10[1]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        r10_4 = var_1d0
else if (rax_20.w u> rdx_9)
    uint64_t r13_2 = zx.q(zx.d(rax_20.w) + 1)
    int32_t* r8_5 = var_1c8
    
    if (r13_2.d s< rbx.d)
        uint64_t rdx_11 = 0
        
        if (rbx.d - r13_2.d s>= 4)
            void* rcx_17 = rsi[1]
            int64_t rax_28 = *(rcx_17 + 0xd8)
            int64_t r9_4 = *(rsi[3] + 0xd8)
            int64_t rcx_18 = *(rcx_17 + 0xd8)
            void* r10_3 = r11_1 + 8
            void* r9_6 = &r8_5[1 + r13_2]
            void* r15_4 = rdi - r8_5
            void* r12_5 = var_1d0 - (r13_2 << 2) - r8_5
            void* rax_34 = ((2 - zx.q(r13_2.d)) << 2) - r8_5 + var_1d0
            uint64_t rax_39 = zx.q(((rbx.d - r13_2.d - 4) u>> 2) + 1)
            uint64_t i_5 = zx.q(rax_39.d)
            uint32_t rax_40 = (rax_39 << 2).d
            r14 = rax_40
            r13_2 = zx.q(r13_2.d + rax_40)
            uint64_t rax_41 = i_5 << 2
            uint64_t i_2
            
            do
                *(r10_3 - 8) = *(rax_28 + (sx.q(*(r15_4 + r9_6 - 4)) << 2))
                *(r12_5 + r9_6 - 4) = *(r9_4 + (sx.q(*(r9_6 - 4)) << 2))
                *(r10_3 - 4) = *(rax_28 + (sx.q(*(r15_4 + r9_6)) << 2))
                *(r12_5 + r9_6) = *(r9_4 + (sx.q(*r9_6) << 2))
                *r10_3 = *(rax_28 + (sx.q(*(r15_4 + r9_6 + 4)) << 2))
                *(r12_5 + r9_6 + 4) = *(r9_4 + (sx.q(*(r9_6 + 4)) << 2))
                *(r10_3 + 4) = *(rcx_18 + (sx.q(*(r15_4 + r9_6 + 8)) << 2))
                *(rax_34 + r9_6) = *(r9_4 + (sx.q(*(r9_6 + 8)) << 2))
                r10_3 += 0x10
                r9_6 += 0x10
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            r8_5 = var_1c8
            rbx = zx.q(var_1b8)
            rsi = arg1
            r11_1 = var_1a0
            r10_4 = var_1d0
            rdx_11 = rax_41
        
        if (r13_2.d s< rbx.d)
            int64_t rax_51 = *(rsi[1] + 0xd8)
            int64_t rax_53 = *(rsi[3] + 0xd8)
            void* rdx_14 = r10_4 + (rdx_11 << 2)
            int32_t* r9_7 = &r8_5[sx.q(r13_2.d)]
            int64_t i_8 = sx.q(rbx.d - r13_2.d)
            r14 += i_8.d
            int64_t i_3
            
            do
                *(r11_1 - r10_4 + rdx_14) = *(rax_51 + (sx.q(*(rdi - r8_5 + r9_7)) << 2))
                *rdx_14 = *(rax_53 + (sx.q(*r9_7) << 2))
                r9_7 = &r9_7[1]
                rdx_14 += 4
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
    
    int64_t rbx_5 = *(rsi[1] + 0xd8)
    int64_t r15_7 = *(rsi[3] + 0xd8)
    void* rdx_15 = var_1d0 + (sx.q(r14) << 2)
    void* rdi_2 = rdi - r8_5
    uint64_t i_7 = zx.q(zx.d(rdx_9) + 1)
    r14 += zx.d(rdx_9) + 1
    uint64_t i_4
    
    do
        *(rdx_15 + r11_1 - var_1d0) = *(rbx_5 + (sx.q(*(rdi_2 + r8_5)) << 2))
        *rdx_15 = *(r15_7 + (sx.q(*r8_5) << 2))
        r8_5 = &r8_5[1]
        rdx_15 += 4
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)
    r10_4 = var_1d0

int32_t zmm2 = *(*(rsi[3] + 0x198) + (sx.q(var_1d8) << 2))
uint128_t zmm1 = *(*(rsi[1] + 0x198) + (r12 << 2))
var_1d8 = *(*rsi + 0x18)
int128_t zmm0_1 = sub_1429c8b20(&var_1d8, zmm1, zmm2, r14, r11_1, r10_4)
j_sub_140a74f90(var_68)
void* var_f8_2 = &var_e8
int32_t var_ec_2 = 0x20
j_sub_140a74f90(var_108)
int512_t result
result.o = zmm0_1
__security_check_cookie(rax_1 ^ &var_208)
return result
