// 函数: sub_140801270
// 地址: 0x140801270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x38)
int128_t zmm6 = zx.o(0)
int512_t result

if (rax == 0 || *(rax + 8) == 0)
    result.o = zx.o(0)
    return result

int32_t rdx = *(rax + 0x120)
arg2[1].d = 0

if (*(arg2 + 0xc) != rdx)
    sub_1405dadb0(arg2, rdx)

void* rcx_1 = *(arg1 + 0x38)
int128_t zmm7
int128_t var_38 = zmm7

if ((*(*(rcx_1 + 8) + 0x94) & 8) == 0 || *(*(arg1 + 0x30) + 0x2b0) s<= 0)
    int32_t i = 0
    
    if (*(rcx_1 + 0x120) s> 0)
        do
            int64_t rdi_2 = sx.q(arg2[1].d)
            int32_t rax_10 = (rdi_2 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            zmm6.d = zmm6.d f+ 1f
            i += 1
            *(*arg2 + (rdi_2 << 2)) = 0x3f800000
        while (i s< *(*(arg1 + 0x38) + 0x120))
else
    int32_t i_1 = 0
    
    if (*(rcx_1 + 0x120) s> 0)
        void* r14_1 = nullptr
        
        do
            int64_t* rax_5 = *(arg1 + 0x30) + 0x2a8
            void* rcx_2 = *rax_5
            
            if ((rcx_2.b & 1) != 0)
                rcx_2 = (rcx_2 s>> 1) + rax_5
            
            int64_t rdi_1 = sx.q(arg2[1].d)
            zmm7 = *((sx.q(*(r14_1 + *(rcx_1 + 0x118))) << 6) + rcx_2 + 0x28)
            int32_t rax_8 = (rdi_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            zmm6.d = zmm6.d f+ zmm7.d
            i_1 += 1
            r14_1 += 4
            *(*arg2 + (rdi_1 << 2)) = zmm7.d
            rcx_1 = *(arg1 + 0x38)
        while (i_1 s< *(rcx_1 + 0x120))

int64_t* rcx_6 = *(arg1 + 0x30)
*(arg1 + 0x30) = 0

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**rcx_6)(rcx_6, 1)

result.o = zmm6
return result
