// 函数: sub_142c43620
// 地址: 0x142c43620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg3 + 0x18) & 0x10) != 0)
    return 

int32_t r9_1 = *(arg3 + 0x60)
uint32_t rdi_1 = 0
int32_t r8 = 0

if (r9_1 == 0)
    return 

char* rcx_1 = *(arg3 + 0x70) + 0xf

while ((*rcx_1 & 0xf) != 2)
    r8 += 1
    rcx_1 = &rcx_1[0x14]
    
    if (r8 u>= r9_1)
        return 

void* r10_1 = *(arg2 + 0x40)
int64_t rdx = *(arg2 + 0x48)
int32_t arg_18 = 0

if ((*(r10_1 + 0x130))(arg2, rdx, 0x25cc, &arg_18, *(r10_1 + 0x20)) == 0)
    return 

int32_t var_38 = 0x25cc
int64_t var_34_1 = 0
int64_t var_2c_1 = 0
sub_142c438a0(&var_38)
var_38 = arg_18
sub_142bf4e80(arg3)
*(arg3 + 0x5c) = 0

if (*(arg3 + 0x60) u> 0)
    while (*(arg3 + 0x58) != 0)
        uint64_t rcx_5 = zx.q(*(arg3 + 0x5c))
        int64_t r8_1 = *(arg3 + 0x70)
        uint64_t rax_4 = rcx_5 * 5
        uint32_t rdx_1 = zx.d(*(r8_1 + (rax_4 << 2) + 0xf))
        void* r9_3 = r8_1 + (rax_4 << 2)
        
        if (rdi_1 != rdx_1 && (rdx_1.b & 0xf) == 2)
            rdi_1 = rdx_1
            int128_t var_20_1 = var_38.o
            var_20_1:0xf.b = rdx_1.b
            var_20_1:8.d = *(r9_3 + 8)
            var_20_1:4.d = *(r9_3 + 4)
            
            if (sub_142bf50b0(arg3, 0, 1) != 0)
                uint64_t rcx_7 = zx.q(*(arg3 + 0x64)) * 5
                int64_t rax_10 = *(arg3 + 0x78)
                *(rax_10 + (rcx_7 << 2)) = var_20_1
                *(rax_10 + (rcx_7 << 2) + 0x10) = var_2c_1:4.d
                *(arg3 + 0x64) += 1
        else if (*(arg3 + 0x59) == 0)
            *(arg3 + 0x5c) += 1
        else if (*(arg3 + 0x78) != r8_1 || *(arg3 + 0x64) != rcx_5.d)
            if (sub_142bf50b0(arg3, 1, 1) != 0)
                int64_t rdx_2 = *(arg3 + 0x70)
                uint64_t r9_4 = zx.q(*(arg3 + 0x5c)) * 5
                uint64_t rcx_9 = zx.q(*(arg3 + 0x64)) * 5
                int64_t rax_14 = *(arg3 + 0x78)
                *(rax_14 + (rcx_9 << 2)) = *(rdx_2 + (r9_4 << 2))
                *(rax_14 + (rcx_9 << 2) + 0x10) = *(rdx_2 + (r9_4 << 2) + 0x10)
                *(arg3 + 0x64) += 1
                *(arg3 + 0x5c) += 1
        else
            *(arg3 + 0x64) += 1
            *(arg3 + 0x5c) += 1
        
        if (*(arg3 + 0x5c) u>= *(arg3 + 0x60))
            break

sub_142bf5b20(arg3)
