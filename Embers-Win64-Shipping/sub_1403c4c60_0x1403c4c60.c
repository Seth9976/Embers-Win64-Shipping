// 函数: sub_1403c4c60
// 地址: 0x1403c4c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168

if (arg2 != 0)
    sub_1403be900(arg1, arg2)

if (arg3 != 0)
    sub_1403be900(arg1, arg3)

png_free(arg1, *(arg1 + 0x1b8))
png_free(arg1, *(arg1 + 0x438))
png_free(arg1, *(arg1 + 0x1f8))
png_free(arg1, *(arg1 + 0x4a0))
png_free(arg1, *(arg1 + 0x398))
png_free(arg1, *(arg1 + 0x3a0))
png_free(arg1, *(arg1 + 0x2a8))
png_free(arg1, *(arg1 + 0x2b0))
png_free(arg1, *(arg1 + 0x2b8))
int32_t rcx_11 = *(arg1 + 0x3e8)

if ((rcx_11 & 0x1000) != 0)
    j_png_free(arg1, *(arg1 + 0x248))
    rcx_11 = *(arg1 + 0x3e8)

int32_t rax_3 = rcx_11 & 0xffffefff
*(arg1 + 0x3e8) = rax_3

if ((rcx_11 & 0x2000) != 0)
    png_free(arg1, *(arg1 + 0x2e8))
    rax_3 = *(arg1 + 0x3e8)

int32_t rcx_15 = rax_3 & 0xffffdfff
*(arg1 + 0x3e8) = rcx_15

if ((rax_3.b & 8) != 0)
    png_free(arg1, *(arg1 + 0x3a8))
    rcx_15 = *(arg1 + 0x3e8)

*(arg1 + 0x3e8) = rcx_15 & 0xfffffff7
int64_t rdx_13 = *(arg1 + 0x2c0)

if (rdx_13 != 0)
    int32_t rcx_18 = 8 - *(arg1 + 0x298)
    
    if (rcx_18 != 0x1f)
        int64_t i = 0
        
        do
            png_free(arg1, *(rdx_13 + (i << 3)))
            i += 1
            rdx_13 = *(arg1 + 0x2c0)
        while (i s< sx.q(1 << rcx_18.b))
    
    png_free(arg1, rdx_13)

int64_t rdx_16 = *(arg1 + 0x2c8)

if (rdx_16 != 0)
    int32_t rcx_21 = 8 - *(arg1 + 0x298)
    
    if (rcx_21 != 0x1f)
        int64_t i_1 = 0
        
        do
            png_free(arg1, *(rdx_16 + (i_1 << 3)))
            i_1 += 1
            rdx_16 = *(arg1 + 0x2c8)
        while (i_1 s< sx.q(1 << rcx_21.b))
    
    png_free(arg1, rdx_16)

int64_t rdx_18 = *(arg1 + 0x2d0)

if (rdx_18 != 0)
    int32_t rcx_24 = 8 - *(arg1 + 0x298)
    
    if (rcx_24 != 0x1f)
        int64_t i_2 = 0
        
        do
            png_free(arg1, *(rdx_18 + (i_2 << 3)))
            i_2 += 1
            rdx_18 = *(arg1 + 0x2d0)
        while (i_2 s< sx.q(1 << rcx_24.b))
    
    png_free(arg1, rdx_18)

png_free(arg1, *(arg1 + 0x3e0))
sub_140374100(arg1 + 0x160)
png_free(arg1, *(arg1 + 0x330))
png_free(arg1, *(arg1 + 0x388))
void var_148
memcpy(&var_148, arg1, 0x100)
int128_t zmm6 = *(arg1 + 0x108)
int64_t rbx_1 = *(arg1 + 0x118)
int64_t rdi_4 = *(arg1 + 0x430)
memset(arg1 + 0x100, 0, 0x3b0)
*(arg1 + 0x108) = zmm6
*(arg1 + 0x118) = rbx_1
*(arg1 + 0x430) = rdi_4
int64_t result = memcpy(arg1, &var_148, 0x100)
__security_check_cookie(rax_1 ^ &var_168)
return result
