// 函数: sub_1429aa9d0
// 地址: 0x1429aa9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t var_38 = -2
sub_14297d930(*(arg1 + 8) + 0x50, arg2)
*(*(arg1 + 8) + 0x80) = *sub_1429812f0(*(arg1 + 8) + 0x50)
int32_t* rax_2 = sub_142980a30(*(arg1 + 8) + 0x50)
*(*(arg1 + 8) + 0x84) = *rax_2
*(*(arg1 + 8) + 0x88) = rax_2[2]
*(*(arg1 + 8) + 0x8c) = rax_2[1]
*(*(arg1 + 8) + 0x90) = rax_2[3]
void* rcx_11 = *(arg1 + 8)
int64_t rax_3 = sub_1429a3ac0(rcx_11 + 0x50, rcx_11 + 0xb8)
int64_t i = 0
int64_t r14 = 0
int64_t* rdx_5

while (true)
    void* rcx_13 = *(arg1 + 8)
    rdx_5 = *(rcx_13 + 0x100)
    
    if (r14 u>= (*(rcx_13 + 0x108) - rdx_5) s>> 3)
        break
    
    void* rax_7 = j_sub_140a82f30(0x68)
    void* const rbx_1 = rax_7
    void* arg_18 = rax_7
    
    if (rax_7 == 0)
        rbx_1 = nullptr
    else
        struct Imf_2_3::Compressor::Imf_2_3::RleCompressor::VTable** rax_9 =
            sub_14298bdf0(*sub_14297ea20(*(arg1 + 8) + 0x50), rax_3, *(arg1 + 8) + 0x50)
        __builtin_memset(rbx_1, 0, 0x14)
        *(rbx_1 + 0x20) = rax_9
        *(rbx_1 + 0x28) = sub_1429a5f90(rax_9)
        *(rbx_1 + 0x2c) = 0xffffffff
        *(rbx_1 + 0x30) = 0
        *(rbx_1 + 0x48) = 0
        *(rbx_1 + 0x50) = 0xf
        *(rbx_1 + 0x38) = 0
        sub_1429c3140(rbx_1 + 0x58, 1)
    
    *(*(*(arg1 + 8) + 0x100) + (r14 << 3)) = rbx_1
    r14 += 1

*(*(arg1 + 8) + 0x118) = sub_1429a63b0(*(*rdx_5 + 0x20))
void* rcx_23 = *(arg1 + 8)
*(rcx_23 + 0x120) = sx.q(*(rcx_23 + 0x118)) * rax_3
int64_t* rcx_24 = *(*(arg1 + 0x10) + 0x50)

if ((*(*rcx_24 + 8))(rcx_24) == 0)
    void* rax_18 = *(arg1 + 8)
    
    if ((*(rax_18 + 0x108) - *(rax_18 + 0x100)) s>> 3 != 0)
        void* rax_21
        
        do
            *(*(*(*(arg1 + 8) + 0x100) + (i << 3)) + 8) =
                _aligned_malloc(*(*(arg1 + 8) + 0x120), 0x10)
            i += 1
            rax_21 = *(arg1 + 8)
        while (i u< (*(rax_21 + 0x108) - *(rax_21 + 0x100)) s>> 3)

void* rcx_34 = *(arg1 + 8)
*(rcx_34 + 0xb4) = *(rcx_34 + 0x8c) - 1
void* rax_24 = *(arg1 + 8)
sub_1429a6450(rax_24 + 0xb8, *(rax_24 + 0x118), rax_24 + 0xd0)
void* r8_4 = *(arg1 + 8)
int32_t rcx_36 = *(r8_4 + 0x118)
return sub_142985580(r8_4 + 0x98, sx.q(divs.dp.d(sx.q(rax_2[3] - rax_2[1] + rcx_36), rcx_36)))
