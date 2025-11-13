// 函数: sub_141f58a30
// 地址: 0x141f58a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xa0)

if (rbx == 0)
    rbx = arg1

int32_t result_1
sub_140865c40(&data_143a2d830, &result_1, rbx)
int64_t result = sx.q(result_1)
int64_t r14

if (result.d == 0xffffffff)
    r14 = 0
else
    int64_t rdx_1 = result * 3
    result = data_143a2d830
    r14 = result + (rdx_1 << 3)

void* r14_1 = *(r14 + 8)
int64_t rcx = sx.q(*(r14_1 + 0x98))

if (rcx.d != 0)
    result = *(r14_1 + 0x90)
    int32_t rdi_1 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = *result != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx)
            int64_t* rcx_1 = *(r14_1 + 0x90) + (rbx_1 << 3)
            
            do
                result.b = *rcx_1 != arg1
                
                if (zx.d(r12.b) != result.d)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_1 = &rcx_1[1]
            while (rbx_1 s< rcx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r12.b != 0)
            if (r13_1 != r9_1.d)
                int64_t rcx_2 = *(r14_1 + 0x90)
                result = memmove(rcx_2 + (sx.q(r13_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
            
            r13_1 += rbp_2
        
        r12.b ^= 1
    while (rbx_1 s< rcx)
    
    *(r14_1 + 0x98) = r13_1

if (*(r14_1 + 0x98) != 0)
    return result

sub_140868c90(&data_143a2d830, rbx)
int64_t rcx_4 = *(r14_1 + 0x90)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1405ae180(r14_1 + 0x30)
int64_t rcx_6 = *(r14_1 + 0x20)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return j_sub_140a74f90(r14_1)
