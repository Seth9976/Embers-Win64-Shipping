// 函数: sub_141c3a5c0
// 地址: 0x141c3a5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = arg2
uint64_t i_12 = zx.q(arg3)
*(arg1 + 0xdc) = i_12.d
int32_t rax = *(arg1 + 0x74)
void*** rdi = *(arg1 + 0x68)
int32_t i_9 = *(arg1 + 0x70)
int32_t rdi_1

if (rax s< 0)
    if (i_9 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = rdi[1]
            *rdi = &data_143205000
            
            if (rcx_1 != 0)
                j_sub_140a74f90(rcx_1)
                rdi[1] = 0
            
            rdi = &rdi[9]
            i = i_9
            i_9 -= 1
        while (i != 1)
        rax = *(arg1 + 0x74)
    
    *(arg1 + 0x70) = 0
    rdi_1 = 0
    
    if (rax != 0)
        sub_140775c70(arg1 + 0x68, 0)
        rdi_1 = *(arg1 + 0x70)
else
    if (i_9 != 0)
        int32_t i_1
        
        do
            int64_t rcx = rdi[1]
            *rdi = &data_143205000
            
            if (rcx != 0)
                j_sub_140a74f90(rcx)
                rdi[1] = 0
            
            rdi = &rdi[9]
            i_1 = i_9
            i_9 -= 1
        while (i_1 != 1)
    
    rdi_1 = 0

int32_t rax_1 = rdi_1 + i_12.d
*(arg1 + 0x70) = rax_1

if (rax_1 s> *(arg1 + 0x74))
    sub_140775520(arg1 + 0x68)

int32_t i_11 = i_12.d
void*** rsi = *(arg1 + 0x68) + sx.q(rdi_1) * 0x48

if (i_12.d != 0)
    void* rdi_2 = rsi + 0x2c
    int32_t i_2
    
    do
        *rsi = &data_143205000
        __builtin_memset(rdi_2 - 0x24, 0, 0x20)
        *(rdi_2 - 4) = 0x38d1b717
        *(rdi_2 + 4) = 0x38d1b717
        *(rdi_2 + 8) = 0x3f7ff972
        *(rdi_2 + 0x10) = 0x3f800000
        sub_141c45160(rsi)
        rsi = &rsi[9]
        rdi_2 += 0x48
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)

int32_t rdx_2 = *(arg1 + 0x84)
void*** rax_4 = *(arg1 + 0x78)
int32_t i_8 = *(arg1 + 0x80)
int32_t r12

if (rdx_2 s< 0)
    if (i_8 != 0)
        int32_t i_3
        
        do
            *rax_4 = &data_1432050e8
            rax_4 = &rax_4[5]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
        rdx_2 = *(arg1 + 0x84)
    
    *(arg1 + 0x80) = 0
    r12 = 0
    
    if (rdx_2 != 0)
        sub_1405c5660(arg1 + 0x78, 0)
        r12 = *(arg1 + 0x80)
else
    if (i_8 != 0)
        int32_t i_4
        
        do
            *rax_4 = &data_1432050e8
            rax_4 = &rax_4[5]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
    
    r12 = 0

int32_t rax_5 = r12 + i_12.d
*(arg1 + 0x80) = rax_5

if (rax_5 s> *(arg1 + 0x84))
    sub_1405c4ec0(arg1 + 0x78)

int32_t i_10 = i_12.d
void*** rdx_4 = *(arg1 + 0x78) + sx.q(r12) * 0x28

if (i_12.d != 0)
    int32_t i_5
    
    do
        *rdx_4 = &data_1432050e8
        rdx_4[1].d = 2
        *(rdx_4 + 0xc) = 0x472c4400
        *(rdx_4 + 0x14) = 0
        *(rdx_4 + 0x1c) = 0
        *(rdx_4 + 0x24) = 1
        rdx_4 = &rdx_4[5]
        i_5 = i_10
        i_10 -= 1
    while (i_5 != 1)
    
    if (i_12.d s> 0)
        uint64_t i_7 = i_12
        int64_t r12_1 = 0
        int64_t arg_8 = 0
        int64_t r15 = 0
        int32_t rbp_1 = 1 - int.d(zmm9.d * -0.100000001f)
        uint64_t i_6
        
        do
            int32_t rax_9 = rbp_1
            void* rdi_4 = *(arg1 + 0x68) + r12_1
            int64_t rcx_9 = *(rdi_4 + 8)
            *(rdi_4 + 0x1c) = zmm9.d
            *(rdi_4 + 0x10) = rbp_1
            
            if (rcx_9 != 0)
                j_sub_140a74f90(rcx_9)
                rax_9 = *(rdi_4 + 0x10)
            
            int64_t rdx_5 = sx.q(rax_9)
            int64_t rax_10 = 4 * rdx_5
            
            if (mulu.dp.q(4, rdx_5) u>> 0x40 != zx.o(0))
                rax_10 = -1
            
            *(rdi_4 + 8) = j_sub_140a82f30(rax_10)
            sub_141c45160(rdi_4)
            sub_141c46000(*(arg1 + 0x68) + arg_8, *(arg1 + 0xb8))
            zmm9 = sub_141c3ad50(*(arg1 + 0x78) + r15, zmm9, *(arg1 + 0xbc), *(arg1 + 0xc0), 1, 
                *(arg1 + 0xe1))
            r15 += 0x28
            r12_1 += 0x48
            arg_8 += 0x48
            i_6 = i_7
            i_7 -= 1
        while (i_6 != 1)
        i_12 = zx.q(arg3)

float zmm6
float zmm7
float zmm8
float zmm9_1
zmm6, zmm7, zmm8, zmm9_1 = sub_141c3a470(arg1, zmm9.d, i_12.d, 5, 20000f, 2f, 0f)
int512_t zmm6_1
int512_t zmm7_1
zmm6_1, zmm7_1 = sub_141c3a470(arg1 + 0x30, zmm9_1, i_12.d, 6, zmm6, zmm7, zmm8)
int32_t rax_13 = *(arg1 + 0xa4)
*(arg1 + 0xa0) = 0
zmm7_1.o = arg5
zmm6_1.o = arg4

if (rax_13 s< 0 && rax_13 != 0)
    sub_1405dadb0(arg1 + 0x98, 0)

int64_t r14 = sx.q(*(arg1 + 0xa0))
int32_t rax_14 = (r14 + i_12).d
*(arg1 + 0xa0) = rax_14

if (rax_14 s> *(arg1 + 0xa4))
    sub_1406105e0(arg1 + 0x98)

int64_t count = sx.q(i_12.d) << 2
memset(*(arg1 + 0x98) + (r14 << 2), 0, count)
int32_t rax_16 = *(arg1 + 0xb4)
*(arg1 + 0xb0) = 0

if (rax_16 s< 0 && rax_16 != 0)
    sub_1405dadb0(arg1 + 0xa8, 0)

int64_t rbx = sx.q(*(arg1 + 0xb0))
int32_t rax_17 = (rbx + i_12).d
*(arg1 + 0xb0) = rax_17

if (rax_17 s> *(arg1 + 0xb4))
    sub_1406105e0(arg1 + 0xa8)

return memset(*(arg1 + 0xa8) + (rbx << 2), 0, count) __tailcall
