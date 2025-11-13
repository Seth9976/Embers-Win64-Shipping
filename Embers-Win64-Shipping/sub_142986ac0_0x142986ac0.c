// 函数: sub_142986ac0
// 地址: 0x142986ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
sub_14297d930(*(arg1 + 8), arg2)

if (Concurrency::details::UMSSchedulingContext::OnPrimary(*(arg1 + 8)) != 0)
    sub_142983430(*(arg1 + 8), &data_143b86988)

int32_t* rax_1 = sub_142980a30(arg2)
int32_t rcx_5

if (*sub_1429812f0(arg2) != 0)
    rcx_5 = rax_1[3]
else
    rcx_5 = rax_1[1]

*(*(arg1 + 8) + 0x38) = rcx_5
*(*(arg1 + 8) + 0x3c) = rax_1[3] - rax_1[1] + 1
*(*(arg1 + 8) + 0x40) = *sub_1429812f0(arg2)
*(*(arg1 + 8) + 0x44) = *rax_1
*(*(arg1 + 8) + 0x48) = rax_1[2]
*(*(arg1 + 8) + 0x4c) = rax_1[1]
*(*(arg1 + 8) + 0x50) = rax_1[3]
int64_t* rcx_15 = *(arg1 + 8)
int64_t rax_11 = sub_1429a3ac0(rcx_15, &rcx_15[0xe])
int64_t i_1 = 0
int64_t i = 0
void* rdx_1 = *(arg1 + 8)

if ((*(rdx_1 + 0xd0) - *(rdx_1 + 0xc8)) s>> 3 != 0)
    do
        int32_t* rax_12 = j_sub_140a82f30(0x78)
        int32_t* rbx_1 = rax_12
        int32_t* arg_8 = rax_12
        
        if (rax_12 == 0)
            rbx_1 = nullptr
        else
            int64_t* rdi_1 = *(arg1 + 8)
            struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable** rax_14 =
                sub_14298bdf0(*sub_14297ea20(rdi_1), rax_11, rdi_1)
            __builtin_memset(&rbx_1[2], 0, 0x14)
            *rbx_1 = 0
            *(rbx_1 + 0x38) = rax_14
            rbx_1[0x10].w = 0
            *(rbx_1 + 0x58) = 0
            *(rbx_1 + 0x60) = 0xf
            rbx_1[0x12].b = 0
            sub_1429c3140(&rbx_1[0x1a], 1)
        
        *(*(*(arg1 + 8) + 0xc8) + (i << 3)) = rbx_1
        i += 1
        rdx_1 = *(arg1 + 8)
    while (i u< (*(rdx_1 + 0xd0) - *(rdx_1 + 0xc8)) s>> 3)

void* rbx_2 = **(rdx_1 + 0xc8)
*(*(arg1 + 8) + 0xa0) = sub_1429a5f90(*(rbx_2 + 0x38))
*(*(arg1 + 8) + 0xe0) = sub_1429a63b0(*(rbx_2 + 0x38))
void* rcx_27 = *(arg1 + 8)
*(rcx_27 + 0xe8) = sx.q(*(rcx_27 + 0xe0)) * rax_11
void* rdx_3 = *(arg1 + 8)

if ((*(rdx_3 + 0xd0) - *(rdx_3 + 0xc8)) s>> 3 != 0)
    do
        void* rax_27 = *(arg1 + 8)
        int64_t rsi = sx.q(*(rax_27 + 0xe8))
        int32_t* rdi_2 = *(*(rax_27 + 0xc8) + (i_1 << 3))
        int64_t rax_29 = j_sub_140a82f30(rsi)
        j_sub_140a74f90(*(rdi_2 + 8))
        *rdi_2 = rsi.d
        *(rdi_2 + 8) = rax_29
        i_1 += 1
        rdx_3 = *(arg1 + 8)
    while (i_1 u< (*(rdx_3 + 0xd0) - *(rdx_3 + 0xc8)) s>> 3)

int32_t r8_2 = *(rdx_3 + 0xe0)
sub_142985580(rdx_3 + 0x58, sx.q(divs.dp.d(sx.q(r8_2 - rax_1[1] + rax_1[3]), r8_2)))
void* rax_38 = *(arg1 + 8)
return sub_1429a6450(rax_38 + 0x70, *(rax_38 + 0xe0), rax_38 + 0x88) __tailcall
