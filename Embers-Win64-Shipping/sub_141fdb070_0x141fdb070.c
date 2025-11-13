// 函数: sub_141fdb070
// 地址: 0x141fdb070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3

if (arg2 u>= arg3)
    rax = arg2

bool cond:1 = rax - 1 == neg.d(*arg1)
uint32_t temp0 = divu.dp.d(0:(rax - 1 + *arg1), *arg1)
int32_t rdx = arg1[0x1c]
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(temp0)
int32_t rcx

rcx = cond:1 ? 0x20 : 0x1f - temp0_1

uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(temp0 - 1)
int32_t r8

if (temp0 == 1)
    r8 = 0x20
else
    r8 = 0x1f - temp0_2

void* rax_5 = *(arg1 + 0x68)
int32_t rbp_1 = rdx - ((0x20 - r8) & not.d(rcx << 0x1a s>> 0x1f))
void* rcx_4 = &arg1[0x12]

if (rax_5 != 0)
    rcx_4 = rax_5

int32_t i_2 = rbp_1 - 1
int32_t r9_2 = *(rcx_4 + (sx.q(rbp_1) << 2) - 4)
char rcx_5 = i_2.b
int32_t rdi = r9_2
int32_t r8_3 = (1 << rcx_5 << rcx_5) + r9_2
int32_t arg_20 = r9_2

if (r9_2 u< r8_3)
    void* rax_7 = *(arg1 + 0x38)
    int32_t rdx_1 = rol.d(1, r9_2.b)
    void* rcx_7 = &arg1[0xa]
    
    if (rax_7 != 0)
        rcx_7 = rax_7
    
    do
        int32_t rax_8 = rdi
        
        if (rdi s< 0)
            rax_8 = rdi + 0x1f
        
        if ((*(rcx_7 + (sx.q(rax_8 s>> 5) << 2)) & rdx_1) == 0)
            break
        
        rdi += 1
        rdx_1 = rol.d(rdx_1, 1)
    while (rdi u< r8_3)
    
    arg_20 = rdi

if (rdi == r8_3)
    return 0xffffffff

uint64_t rdx_3 = zx.q(rdi - r9_2)
int32_t var_78 = rdx_3.d
int32_t i = i_2
uint32_t r11 = rdx_3.d

if (i_2 != 0xffffffff)
    do
        void* rax_11 = *(arg1 + 0x68)
        void* rcx_8 = &arg1[0x12]
        void* r9_3 = &arg1[0xa]
        
        if (rax_11 != 0)
            rcx_8 = rax_11
        
        void* rax_13 = *(arg1 + 0x38)
        int32_t rdx_5 = *(rcx_8 + (sx.q(i) << 2)) + r11
        
        if (rax_13 != 0)
            r9_3 = rax_13
        
        int32_t rax_14 = rdx_5
        
        if (rdx_5 s< 0)
            rax_14 = rdx_5 + 0x1f
        
        int64_t rbx = sx.q(rax_14 s>> 5)
        int32_t r8_4 = 1 << (rdx_5.b & 0x1f)
        int32_t rax_16 = *(r9_3 + (rbx << 2))
        
        if ((r8_4 & rax_16) != 0)
            break
        
        r11 u>>= 2
        i -= 1
        *(r9_3 + (rbx << 2)) = rax_16 | r8_4
    while (i != 0xffffffff)
    
    rdx_3 = zx.q(var_78)

uint32_t r12 = (rdx_3 << 2).d
int32_t i_4 = 4

if (rbp_1 u< rdx)
    do
        void* rax_18 = *(arg1 + 0x68)
        void* rcx_10 = &arg1[0x12]
        
        if (rax_18 != 0)
            rcx_10 = rax_18
        
        int32_t r9_5 = *(rcx_10 + (sx.q(rbp_1) << 2)) + r12
        
        if (i_4 != 0)
            uint64_t i_3 = zx.q(i_4)
            uint64_t i_1
            
            do
                void* rax_20 = *(arg1 + 0x38)
                void* r10_2 = &arg1[0xa]
                
                if (rax_20 != 0)
                    r10_2 = rax_20
                
                int32_t rax_21 = r9_5
                
                if (r9_5 s< 0)
                    rax_21 = r9_5 + 0x1f
                
                char rcx_12 = r9_5.b & 0x1f
                int64_t r8_5 = sx.q(rax_21 s>> 5)
                r9_5 += 1
                *(r10_2 + (r8_5 << 2)) |= 1 << rcx_12
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        r12 <<= 2
        rbp_1 += 1
        i_4 <<= 2
    while (rbp_1 u< rdx)
    
    rdi = arg_20
    rdx_3 = zx.q(var_78)

float zmm4 = arg1[8]
uint64_t r8_6 = zx.q(arg1[3])
int32_t rax_24 = rdx_3.d & 0x55555555
int32_t rcx_16 = (rax_24 u>> 1 ^ rax_24) & 0x33333333
int32_t var_64 = rdi
int32_t rdx_9 = rdx_3.d u>> 1 & 0x55555555
int32_t rax_28 = (rcx_16 u>> 2 ^ rcx_16) & 0xf0f0f0f
int32_t rcx_20 = (rax_28 u>> 4 ^ rax_28) & 0xff00ff
int32_t rax_35 = (rdx_9 u>> 1 ^ rdx_9) & 0x33333333
int32_t rcx_24 = (rax_35 u>> 2 ^ rax_35) & 0xf0f0f0f
int32_t rdx_13 = (rcx_24 u>> 4 ^ rcx_24) & 0xff00ff
uint32_t r9_7 = r8_6.d u>> i_2.b
int128_t zmm0
zmm0.d = float.s(zx.q(arg2))
int128_t zmm1
zmm1.d = float.s(zx.q(arg3))
zmm0.d = zmm0.d f* zmm4
zmm1.d = zmm1.d f* zmm4
int32_t var_58 = zmm0.d
zmm0.d = float.s(r8_6)
int32_t r8_7 = arg1[0x2b]
int32_t var_54 = zmm1.d
float zmm3 = 1f f/ zmm0.d
int32_t zmm2 = float.s(zx.q(arg1[1])) f* zmm4
zmm0.d = float.s(zx.q(r9_7 * (zx.d((rcx_20 u>> 8).w) ^ zx.d(rcx_20.w))))
zmm1.d = float.s(zx.q(r9_7 * (zx.d((rdx_13 u>> 8).w) ^ zx.d(rdx_13.w))))
zmm0.d = zmm0.d f* zmm3
zmm1.d = zmm1.d f* zmm3
zmm0.d = zmm0.d f+ zmm2
zmm1.d = zmm1.d f+ zmm2
int32_t var_50 = zmm0.d
int32_t var_4c = zmm1.d
int64_t rbp_2

if (r8_7 == 0)
    rbp_2 = zx.q(arg1[0x20])
    int32_t rax_50 = (rbp_2 + 1).d
    arg1[0x20] = rax_50
    
    if (rax_50 s> arg1[0x21])
        sub_1405c4e40(&arg1[0x1e])
    
    void* rdi_2 = &arg1[0x22]
    int32_t rbx_1 = *(rdi_2 + 0x18)
    sub_1405a4980(rdi_2, rbx_1 + 1)
    *(rdi_2 + 0x18) += 1
    void* rax_51 = *(rdi_2 + 0x10)
    
    if (rax_51 != 0)
        rdi_2 = rax_51
    
    int32_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(rbx_1)
    int64_t rdx_20 = sx.q((temp11_1 + (temp10_1 & 0x1f)) s>> 5)
    *(rdi_2 + (rdx_20 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp_2 = sx.q(arg1[0x2a])
    int64_t rdx_15 = *(arg1 + 0x78)
    int64_t rcx_28 = sx.q(*((rbp_2 << 5) + rdx_15 + 4))
    arg1[0x2a] = rcx_28.d
    arg1[0x2b] = r8_7 - 1
    
    if (r8_7 != 1)
        *((rcx_28 << 5) + rdx_15) = 0xffffffff

void* r8_8 = &arg1[0x22]
void* rax_58 = *(r8_8 + 0x10)

if (rax_58 != 0)
    r8_8 = rax_58

int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(rbp_2.d)
int64_t rdx_23 = sx.q((temp13 + (temp12 & 0x1f)) s>> 5)
*(r8_8 + (rdx_23 << 2)) |= 1 << (rbp_2.b & 0x1f)
int128_t* rcx_36 = (sx.q(rbp_2.d) << 5) + *(arg1 + 0x78)
*rcx_36 = i_2.o
rcx_36[1] = var_58.o
return zx.q(rbp_2.d)
