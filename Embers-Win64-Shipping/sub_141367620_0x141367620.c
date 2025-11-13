// 函数: sub_141367620
// 地址: 0x141367620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg2[8]
void* rbx = *arg2
int64_t rbp = *(rdx + 0x1a0)
int64_t arg_8 = rbp
sub_141080ac0(arg1, rdx, rbp, *(rbx + 0x10))
j_sub_14137eb70(arg1 + 0x118, arg2[8], rbp, arg2, data_14395f4d0, 0, nullptr)
void* rax_1 = *arg2
void* rcx_1 = arg2[8]
int128_t var_48 = data_142d3f660
var_48.d = *(rax_1 + 0x50c0)
var_48:4.d = (*(rax_1 + 0x50c4)).d
var_48:8.d = *(rax_1 + 0x50c8)
var_48:0xc.d = (*(rbx + 0x11d8)).d
sub_1405d0e10(rcx_1, &arg_8, arg1 + 0x210, &var_48, 0)
void* rax_2 = *arg2
void* rcx_2 = arg2[8]
float zmm5 = *(rax_2 + 0xff8)
float zmm1_1 = *(rax_2 + 0x1020) * zmm5 * 0.5f
float zmm3 = *(rax_2 + 0x1024) * zmm5 * 0.5f
float zmm4 = *(rax_2 + 0x1028) * zmm5 * 0.5f
float var_38 = zmm5 f* *(rax_2 + 0x101c) * 0.5f
float var_34 = zmm1_1
float var_30 = zmm3
float var_2c = zmm4
sub_1405d0e10(rcx_2, &arg_8, arg1 + 0x21c, &var_38, 0)
void* rax_3 = *arg2
void* rcx_3 = arg2[8]
float zmm2 = *(rax_3 + 0x10a8)
float var_34_1 = zmm2 f* *(rax_3 + 0x10b0)
float var_30_1 = zmm2 f* *(rax_3 + 0x10b4)
float var_2c_1 = zmm2 f* *(rax_3 + 0x10b8)
var_38 = zmm2 f* *(rax_3 + 0x10ac)
sub_1405d0e10(rcx_3, &arg_8, arg1 + 0x222, &var_38, 0)
void* rax_5 = *(*arg2 + 0x10a0)
void* rax_6

if (rax_5 == 0)
    rax_6 = data_143f10e68
else
    rax_6 = *(rax_5 + 0x78)

int64_t r15 = *(rax_6 + 0x10)
char result = rax_6.b + 0x10
int64_t* r14 = data_14395f4d0
void* rbx_1 = arg2[8]

if (*(arg1 + 0x22a) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x228))
    void*** rcx_6 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_6[5]
    
    if (rax_7 u> *(rbx_1 + 0x38))
        sub_140b0e3d0(rbx_1 + 0x30, 0x30)
        rcx_6 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_6[5]
    
    *(rbx_1 + 0x30) = rax_7
    void**** rax_8 = *(rbx_1 + 8)
    *(rbx_1 + 0x14) += 1
    *rax_8 = rcx_6
    *(rbx_1 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    result = 0x70
    rcx_6[3].d = r12_1
    *rcx_6 = &data_142d5a070
    rcx_6[2] = rbp
    rcx_6[4] = r15

if (*(arg1 + 0x22e) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x22c))
    result = (*(*r14 + 8))(r14)
    
    if (result == 0)
        void*** rcx_13 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_13[5]
        
        if (rax_11 u> *(rbx_1 + 0x38))
            sub_140b0e3d0(rbx_1 + 0x30, 0x30)
            rcx_13 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_13[5]
        
        *(rbx_1 + 0x30) = rax_11
        void**** rax_12 = *(rbx_1 + 8)
        *(rbx_1 + 0x14) += 1
        *rax_12 = rcx_13
        *(rbx_1 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        result = -0x80
        *rcx_13 = &data_142d5a080
        rcx_13[2] = rbp
        rcx_13[3].d = rsi_1
        rcx_13[4] = r14

return result
