// 函数: sub_141f80da0
// 地址: 0x141f80da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x190) != 0)
    return 

void* rax_1 = *(arg1 + 0x28)

if (*(rax_1 + 0x1508) == 0 && *(arg1 + 0x178) s> 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0x178))
    void* r14_2 = *(rax_1 + 0x68) + 0x320
    
    if (rbp_1.d != 0)
        int32_t rax_2 = *(r14_2 + 8)
        int32_t rdx = rax_2 + rbp_1.d
        
        if (rdx s> *(r14_2 + 0xc))
            sub_1405dadb0(r14_2, rdx)
            rax_2 = *(r14_2 + 8)
        
        memcpy(*r14_2 + (sx.q(rax_2) << 2), *(arg1 + 0x170), (rbp_1 << 2).d)
        *(r14_2 + 8) += rbp_1.d
    
    bool cond:2_1 = *(arg1 + 0x17c) == 0
    *(arg1 + 0x178) = 0
    
    if (not(cond:2_1))
        sub_1405dadb0(arg1 + 0x170, 0)

int64_t* rdi_2 = (*(arg1 + 0x28))[0xd] + 0x320

if (rdi_2[1].d s<= 0)
    return 

void** var_138
int512_t zmm1_1 = sub_141f79b40(&var_138, arg2)
(*(*arg2 + 0x98))(arg2)
int64_t* rcx_5 = arg2[1]
int16_t arg_8 = rdi_2[1].w
int16_t* rdx_4 = *rcx_5

if (&rdx_4[1] u> rcx_5[1])
    int16_t* rdx_5 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54000(arg2, rdx_5, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_5, 2)
else
    arg_8 = *rdx_4
    *rcx_5 += 2

int32_t i = 0

if (rdi_2[1].d s> 0)
    do
        int64_t r8_3 = *arg2
        (*(r8_3 + 0x168))(arg2, *rdi_2 + (sx.q(i) << 2), r8_3)
        i += 1
    while (i s< rdi_2[1].d)

int64_t var_a8
int64_t var_98
(*(*arg2 + 0x158))(arg2, var_a8, var_98)
*(arg2 + 0xf1) |= 4
rdi_2[1].d = 0

if (*(rdi_2 + 0xc) != 0)
    sub_1405dadb0(rdi_2, 0)

var_138 = &data_143286b38
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140b4cb40(&var_138)
