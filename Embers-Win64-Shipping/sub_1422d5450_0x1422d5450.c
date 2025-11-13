// 函数: sub_1422d5450
// 地址: 0x1422d5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
float zmm6[0x4] = sub_1422e4820()
void* r8 = *arg1

while (true)
    void* rcx
    
    if (rdi != 0)
        rcx = zx.q(*(rdi + 0x10)) + 0x14 + rdi + zx.q(*(rdi + 0xc))
    else
        rcx = r8
    
    rdi = nullptr
    
    if (rcx != sx.q(arg1[1].d) + r8)
        rdi = rcx
    
    if (rdi == 0)
        break
    
    if (*(rdi + 4) == data_143e3a998)
        void* rax_2 = zx.q(*(rdi + 0x10)) + 0x14
        
        if (rax_2 != neg.q(rdi))
            return rax_2 + rdi
        
        break

float var_28_1[0x4] = zmm6
int128_t var_80
__builtin_memcpy(&var_80, 
    "\xa6\x9b\xc4\x3e\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x41\x00\x00\x80\x3f\x00\x00\xe0\x40\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
zmm6 = 0.o
int64_t var_60_1 = 0
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_2[0] = 0x3f800000
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x87)
temp0_3[0] = 0x45a60000
int128_t zmm8 = var_80
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_4[0] = 0x3f23d70a
_mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
int128_t zmm6_1 = sub_1422e4820()
int64_t rcx_4 = sx.q(arg1[1].d)
int64_t rbx_1 = data_143e3a998
int32_t rax_7
int32_t rdx_2
rdx_2:rax_7 = sx.o(*arg1 + 0x14 + rcx_4)
int32_t rdx_3 = rdx_2 & 3
uint64_t rbp_1 = zx.q(4 - (((rax_7 + rdx_3) & 3) - rdx_3))

if (rbp_1.d == 4)
    rbp_1 = 0

int32_t rax_12 = (rcx_4 + 0x54).d + rbp_1.d
arg1[1].d = rax_12

if (rax_12 s> *(arg1 + 0xc))
    sub_1405daba0(arg1)

int32_t* rcx_7 = *arg1 + rcx_4
*rcx_7 = 0x3f800000
*(rcx_7 + 4) = rbx_1
rcx_7[3] = 0x40
rcx_7[4] = rbp_1.d
*(rbp_1 + rcx_7 + 0x14) = zmm6_1
*(rbp_1 + rcx_7 + 0x24) = 0.o
*(rbp_1 + rcx_7 + 0x34) = zmm8
int128_t var_70
*(rbp_1 + rcx_7 + 0x44) = var_70
sub_1422e4820()
void* r8_1 = *arg1
int512_t zmm6_2
zmm6_2.o = var_28_1

do
    void* rcx_8
    
    if (rdi != 0)
        rcx_8 = zx.q(*(rdi + 0x10)) + 0x14 + rdi + zx.q(*(rdi + 0xc))
    else
        rcx_8 = r8_1
    
    rdi = nullptr
    
    if (rcx_8 != sx.q(arg1[1].d) + r8_1)
        rdi = rcx_8
    
    if (rdi == 0)
        return nullptr
while (*(rdi + 4) != data_143e3a998)

return zx.q(*(rdi + 0x10)) + 0x14 + rdi
