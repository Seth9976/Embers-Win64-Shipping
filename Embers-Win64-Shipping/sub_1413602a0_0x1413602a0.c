// 函数: sub_1413602a0
// 地址: 0x1413602a0
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
void* rbx_5 = data_143eba888

if (*rax_6 == 0)
    rbx_5 = data_143f11008

int64_t* rbx_7 = *(rbx_5 + 0x18)

if (rbx_7 != 0)
    rbx_7[1].d += 1

int128_t var_148
sub_1419a2ec0(arg2[0xc], &var_148, &data_143ebc420, 0)
int128_t zmm0 = var_148
void* rsi_1 = nullptr
void* rax_7 = zmm0.q
int128_t var_158 = zmm0

if (rax_7 != 0)
    int64_t rdx_2 = sx.q(*(rax_7 + 0x10c))
    int64_t rsi_2 = rdx_2 << 3
    int64_t* rdi_1 = *(var_148:8.q + 0x10)
    int64_t rax_9 = rdi_1[3]
    
    if (*(rsi_2 + rax_9) == 0)
        sub_1419ccf30(rdi_1, rdx_2.d)
        rax_9 = rdi_1[3]
    
    rsi_1 = *(rsi_2 + rax_9)

void* r14_1 = arg2[8]
*(r14_1 + 0x1b0) = rsi_1
sub_14198aa60(rsi_1)
void*** rcx_17 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_17[3]

if (rax_10 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x20)
    rcx_17 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_17[3]

*(r14_1 + 0x30) = rax_10
*(r14_1 + 0x14) += 1
void**** rax_11 = *(r14_1 + 8)
int64_t* var_c8 = nullptr
*rax_11 = rcx_17
*(r14_1 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142dd5b40
rcx_17[2] = rsi_1
int64_t rsi_3 = *(rax + 0x10)
int64_t r12_1 = *(rax_1 + 8)
int32_t var_a8[0x8]
int32_t* rax_13 = sub_1413138f0(&var_a8, *arg2, 1)
int64_t* rdi_2 = var_c8
int128_t var_128 = *rax_13
int128_t var_118 = *(rax_13 + 0x10)
int128_t var_108 = *(rax_13 + 0x20)
int128_t var_f8 = *(rax_13 + 0x30)
int128_t var_e8 = *(rax_13 + 0x40)
int128_t var_d8 = *(rax_13 + 0x50)
int64_t* rcx_22 = *(*arg2 + 0x10)
var_c8 = rcx_22

if (rcx_22 != 0)
    rcx_22[1].d += 1

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        char rax_16
        
        if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_16 = sub_1405949a0()
        
        if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_16 != 0))
            (**rdi_2)(rdi_2, 1)
        else
            bool z_1
            
            if (0 == *(rdi_2 + 0xc))
                *(rdi_2 + 0xc) = 1
                z_1 = true
            else
                *(rdi_2 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi_2)

int64_t var_b8 = rsi_3
int64_t r8 = 0
void* rsi_4 = var_158.q
int64_t var_138 = r12_1
int64_t* var_c0 = rbx_7

if (rsi_4 != 0)
    int64_t rdx_5 = sx.q(*(rsi_4 + 0x10c))
    int64_t* rdi_3 = *(var_158:8.q + 0x10)
    int64_t r12_2 = rdx_5 << 3
    int64_t rax_20 = rdi_3[3]
    
    if (*(r12_2 + rax_20) == 0)
        sub_1419ccf30(rdi_3, rdx_5.d)
        rax_20 = rdi_3[3]
    
    r8 = *(r12_2 + rax_20)

sub_14133e390(arg2[8], &var_158, r8, &var_138)
sub_1405d1550(&var_c8)
sub_1419cd1c0(arg2[8], rsi_4, 1, 1, 1)
void* rcx_28 = arg2[8]
sub_14116d320(rcx_28, &var_158, *(rcx_28 + 0x1b0))
void* r13_1 = arg2[8]
int64_t rax_22 = *(rax + 0x10)
int64_t* rdi_6 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_29 = &rdi_6[1]

if (rcx_29 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x10)
    rdi_6 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_29 = &rdi_6[1]

*(r13_1 + 0x30) = rcx_29
*rdi_6 = rax_22
void*** rcx_33 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_33[6]

if (rax_23 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x38)
    rcx_33 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_33[6]

*(r13_1 + 0x30) = rax_23
void**** rax_24 = *(r13_1 + 8)
*(r13_1 + 0x14) += 1
*rax_24 = rcx_33
*(r13_1 + 8) = &rcx_33[1]
rcx_33[1] = 0
*rcx_33 = &data_142da7798
rcx_33[2].d = 1
rcx_33[3] = rdi_6
rcx_33[4].d = 0
*(rcx_33 + 0x24) = 1
rcx_33[5] = 0
uint64_t result = sub_1414297a0(*arg2)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        if (rbx_7[2].b != 0)
            return (**rbx_7)(rbx_7, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx_7)(rbx_7, 1)
        
        result = 0
        bool z_2
        
        if (0 == *(rbx_7 + 0xc))
            *(rbx_7 + 0xc) = 1
            z_2 = true
        else
            result = zx.q(*(rbx_7 + 0xc))
            z_2 = false
        
        if (z_2)
            return sub_1405dcc10(&data_143f02390, rbx_7)

return result
