// 函数: sub_1419c3a20
// 地址: 0x1419c3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ce800()
sub_1419d6840(&data_1439c94f0, arg1 + 0x10)
void* rcx = *(arg1 + 0x80)

if (rcx != 0)
    *(rcx + 8) = *(arg1 + 0x88)

int64_t* rcx_1 = *(arg1 + 0x88)

if (rcx_1 != 0)
    *rcx_1 = *(arg1 + 0x80)

int32_t rbx = 0
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
void* rax_4 = sub_1419cf370(*(*(arg1 + 0x30) + 8))
int32_t i_2 = *(rax_4 + 8)
int32_t i = i_2
int64_t r10 = *rax_4

if (i_2 s> 0)
    do
        int32_t rcx_4 = i & 0x80000001
        
        if (rcx_4 s< 0)
            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        int32_t rax_8 = i_1 + rbx
        
        if (*(*(r10 + (sx.q(rax_8) << 3)) + 0x10) u< *(arg1 + 0x10))
            rbx = rax_8 + rcx_4
    while (i s> 0)

if (rbx s>= i_2 || *(arg1 + 0x10) u< *(*(r10 + (sx.q(rbx) << 3)) + 0x10))
    rbx = -1

int32_t rax_13 = i_2 - rbx

if (rax_13 != 1)
    memmove(r10 + (sx.q(rbx) << 3), r10 + (sx.q(rbx + 1) << 3), (rax_13 - 1) << 3)
    i_2 = *(rax_4 + 8)

*(rax_4 + 8) = i_2 - 1
int64_t result = sub_1405c53d0(rax_4)
int64_t rcx_11 = *(arg1 + 0x20)

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
