// 函数: sub_141363ca0
// 地址: 0x141363ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141430270(*arg2)
void* rax = sub_14141f470(*arg2)
void* rax_1 = sub_14141f650(*arg2)
void* rsi = arg2[8]
int64_t rdx = *(rax_1 + 0x10)
int64_t* rbx_2 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_3 = &rbx_2[1]

if (rcx_3 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x10)
    rbx_2 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rcx_3 = &rbx_2[1]

*(rsi + 0x30) = rcx_3
*rbx_2 = rdx
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_7[6]

if (rax_2 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x38)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_7[6]

*(rsi + 0x30) = rax_2
void**** rax_3 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_3 = rcx_7
*(rsi + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142da7798
rcx_7[2].d = 1
rcx_7[3] = rbx_2
rcx_7[4] = 0
rcx_7[5] = 0
int64_t* rax_6 = (*(*arg1 + 0x10))(arg1, 0)
void* rbx_5 = data_143eba988

if (*rax_6 == 0)
    rbx_5 = data_143f11008

int64_t* rbx_7 = *(rbx_5 + 0x18)

if (rbx_7 != 0)
    rbx_7[1].d += 1

int128_t var_128
sub_1419a2ec0(arg2[0xc], &var_128, &data_143ebc640, 0)
int128_t zmm0 = var_128
void* rsi_1 = nullptr
void* rax_7 = zmm0.q
int128_t var_138 = zmm0

if (rax_7 != 0)
    int64_t rdx_2 = sx.q(*(rax_7 + 0x10c))
    int64_t rsi_2 = rdx_2 << 3
    int64_t* rdi_1 = *(var_128:8.q + 0x10)
    int64_t rax_9 = rdi_1[3]
    
    if (*(rsi_2 + rax_9) == 0)
        sub_1419ccf30(rdi_1, rdx_2.d)
        rax_9 = rdi_1[3]
    
    rsi_1 = *(rsi_2 + rax_9)

void* rbp = arg2[8]
*(rbp + 0x1b0) = rsi_1
sub_14198aa60(rsi_1)
void*** rcx_17 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_17[3]

if (rax_10 u> *(rbp + 0x38))
    sub_140b0e3d0(rbp + 0x30, 0x20)
    rcx_17 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_17[3]

*(rbp + 0x30) = rax_10
*(rbp + 0x14) += 1
**(rbp + 8) = rcx_17
*(rbp + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142dd5b40
rcx_17[2] = rsi_1
int64_t rdi_2 = *(rax + 0x10)
int64_t var_b8 = *(rax_1 + 8)
int32_t var_98[0x18]
int32_t* rax_14 = sub_1413138f0(&var_98, *arg2, 1)
void* rbp_1 = var_138.q
int64_t r8 = 0
int128_t var_118 = *rax_14
int128_t var_108 = *(rax_14 + 0x10)
int128_t var_f8 = *(rax_14 + 0x20)
int128_t var_e8 = *(rax_14 + 0x30)
int128_t var_d8 = *(rax_14 + 0x40)
int128_t var_c8 = *(rax_14 + 0x50)
int64_t* var_b0 = rbx_7
int64_t var_a8 = rdi_2

if (rbp_1 != 0)
    int64_t rdx_4 = sx.q(*(rbp_1 + 0x10c))
    int64_t* rdi_3 = *(var_138:8.q + 0x10)
    int64_t rsi_3 = rdx_4 << 3
    int64_t rax_16 = rdi_3[3]
    
    if (*(rsi_3 + rax_16) == 0)
        sub_1419ccf30(rdi_3, rdx_4.d)
        rax_16 = rdi_3[3]
    
    r8 = *(rsi_3 + rax_16)

sub_14133f4d0(arg2[8], &var_138, r8, &var_118)
sub_1419cd1c0(arg2[8], rbp_1, 1, 1, 1)
void* rcx_25 = arg2[8]
sub_14116d320(rcx_25, &var_138, *(rcx_25 + 0x1b0))
void* rbp_2 = arg2[8]
int64_t rax_17 = *(rax + 0x10)
int64_t* rdi_6 = (*(rbp_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_26 = &rdi_6[1]

if (rcx_26 u> *(rbp_2 + 0x38))
    sub_140b0e3d0(rbp_2 + 0x30, 0x10)
    rdi_6 = (*(rbp_2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_26 = &rdi_6[1]

*(rbp_2 + 0x30) = rcx_26
*rdi_6 = rax_17
void*** rcx_30 = (*(rbp_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_30[6]

if (rax_18 u> *(rbp_2 + 0x38))
    sub_140b0e3d0(rbp_2 + 0x30, 0x38)
    rcx_30 = (*(rbp_2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_30[6]

*(rbp_2 + 0x30) = rax_18
void**** rax_19 = *(rbp_2 + 8)
*(rbp_2 + 0x14) += 1
*rax_19 = rcx_30
*(rbp_2 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142da7798
rcx_30[2].d = 1
rcx_30[3] = rdi_6
rcx_30[4].d = 0
*(rcx_30 + 0x24) = 1
rcx_30[5] = 0
int32_t result = sub_1414297a0(*arg2)

if (rbx_7 != 0)
    result = rbx_7[1].d
    rbx_7[1].d -= 1
    
    if (result == 1)
        if (rbx_7[2].b != 0)
            return (**rbx_7)(rbx_7, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx_7)(rbx_7, 1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_7 + 0xc))
            *(rbx_7 + 0xc) = 1
            z_1 = true
        else
            result = *(rbx_7 + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx_7)

return result
