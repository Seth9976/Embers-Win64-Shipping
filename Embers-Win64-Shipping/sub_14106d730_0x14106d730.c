// 函数: sub_14106d730
// 地址: 0x14106d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14106d8a0(arg1)
int64_t rdi = data_143e2c9e8
int64_t rdx

if (data_143de5480 == 0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

int32_t rax_6 = *(rdi + (rdx << 2))

if (rax_6 == 0xffffffff)
    int64_t* rcx = arg1[9]
    
    if (rcx != 0)
        int32_t rax_4 = (*(*rcx + 0x20))(rcx) << 2
        int32_t temp0 = *(arg1 + 0xc)
        *(arg1 + 0xc) = rax_4
        return zx.q(temp0)
    
    rax_6 = 0x10

int32_t temp0_1 = *(arg1 + 0xc)
*(arg1 + 0xc) = rax_6
return zx.q(temp0_1)
