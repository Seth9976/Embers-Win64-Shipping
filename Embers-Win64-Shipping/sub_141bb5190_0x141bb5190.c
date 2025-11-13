// 函数: sub_141bb5190
// 地址: 0x141bb5190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t* rcx = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t result = (*(*rcx + 0x80))(rcx)
int64_t result_1 = result

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        result = (*rdx)(rbx, rdx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (result_1 == 0)
    return result

sub_141bd9010(arg1 + 0x140, result_1, 0)
int64_t result_2
sub_140d3a3a0(&result_2, result_1)
int32_t rdi_1 = *(arg1 + 0x1d0)

if (rdi_1 != 0)
    int32_t i = 0
    int32_t r15_1 = 0
    int64_t r14
    r14.b = sub_14077a170(*(arg1 + 0x1c8), &result_2) == 0
    
    do
        int64_t i_1 = sx.q(i)
        
        for (i += 1; i s< rdi_1; i += 1)
            int32_t rcx_8
            rcx_8.b = sub_14077a170(*(arg1 + 0x1c8) + (sx.q(i) << 3), &result_2) == 0
            
            if (zx.d(r14.b) != rcx_8)
                break
        
        int32_t rsi_3 = i - i_1.d
        
        if (r14.b != 0)
            if (r15_1 != i_1.d)
                int64_t rcx_9 = *(arg1 + 0x1c8)
                memmove(rcx_9 + (sx.q(r15_1) << 3), rcx_9 + (i_1 << 3), rsi_3 << 3)
            
            r15_1 += rsi_3
        
        r14.b ^= 1
    while (i s< rdi_1)
    
    *(arg1 + 0x1d0) = r15_1

sub_140920c10(arg1 + 0x1f0, result_1)
result_2 = result_1
return sub_1405a9f90(arg1 + 0x130, &result_2)
