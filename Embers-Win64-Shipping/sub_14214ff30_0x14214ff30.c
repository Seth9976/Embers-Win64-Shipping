// 函数: sub_14214ff30
// 地址: 0x14214ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x58)
*(arg1 + 0x1304) = arg2
*(arg1 + 0x204) = _mm_cvtpd_ps(zx.o(*(rax + 0x218))).d
uint64_t result = *(rax + 0x218)
*(arg1 + 0x210) = result
*(arg1 + 0x19f4) += 1
int32_t result_1 = *(arg1 + 0x1a04)

if (result_1 != 0)
    int32_t rax_1 = data_143a2e99c
    
    if (rax_1 s> 0)
        char rcx = *(arg1 + 0x19f0)
        rax_1.b = result_1 u>= rax_1
        rax_1.b |= rcx
        rax_1.b ^= rcx
        rax_1.b &= 1
        rax_1.b ^= rcx
        *(arg1 + 0x19f0) = rax_1.b
    
    result = zx.q(*(arg1 + 0x1a08))
    *(arg1 + 0x1a04) = 0
    
    if (result_1 u>= result.d)
        result = zx.q(result_1)
    
    *(arg1 + 0x1a08) = result.d

int64_t* rcx_1 = *(arg1 + 0x68)

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x290))(rcx_1)

int32_t rcx_2 = *(arg1 + 0x1710)
int32_t r8 = -1
int32_t rdx = *(arg1 + 0x1714)

if (rcx_2 != rdx)
    int32_t i = rdx + 1
    *(arg1 + 0x1714) = i
    
    if (rcx_2 != i)
        do
            result = *(arg1 + 0x1720)
            int32_t rbp_1 = *(result + ((zx.q(*(arg1 + 0x1718)) & zx.q(i)) << 2))
            
            if (rbp_1 s< 0)
                break
            
            i += 1
            uint64_t rbp_2 = zx.q(rbp_1) & 0x7fffffff
            *(arg1 + 0x1714) = i
            
            if (rbp_2.d != r8)
                result = *(arg1 + 0x1310)
                int64_t* rbx_1 = *(result + (rbp_2 << 3))
                
                if (rbx_1 != 0)
                    if (*(rbx_1 + 0x3c) == arg2)
                        rbx_1[6].d |= 1
                    
                    for (void* j = rbx_1[0xc]; j != 0; j = *(j + 0xc0))
                        if ((*(j + 0xf0) & 2) != 0)
                            rbx_1[6].d &= 0xfffffffe
                        
                        if (*(j + 0xec) == arg2)
                            *(j + 0xf0) |= 1
                    
                    (*(*rbx_1 + 0x298))(rbx_1, zx.q(arg2))
                    result = sub_141f94020(rbx_1)
                    i = *(arg1 + 0x1714)
                
                r8 = rbp_2.d
        while (*(arg1 + 0x1710) != i)

return result
