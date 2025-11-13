// 函数: sub_142a1db20
// 地址: 0x142a1db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0xbf8)
int32_t (* rcx)[0x4] = *(arg1 + 0xb98)
int32_t* rbx = arg2
int64_t temp0 = _mm_cvtepi32_pd(zx.q(arg4))
int32_t rax_1 = *(arg1 + 0xbb8) << 4
void* r12_1 = sx.q(rax_1) + rcx
int32_t (* arg_8)[0x4] = rcx
int32_t r15 = int.d(temp0 * 6.0000000000000002e-05 f* temp0 f* temp0 f- temp0
    f* 0.0067000000000000002 f* temp0 f+ temp0 f* 0.30599999999999999 + 0.0064999999999999997 + 0.5)

if (r15 s<= 0)
    return sub_142a216f0(rbx, arg3)

int32_t i_1 = 0

if (*(arg1 + 0xbb4) s<= 0)
    return rax_1

int64_t rax_25
int32_t i

do
    int32_t j = 0
    int32_t (* rbp_1)[0x4] = rcx
    void* rdi_1 = r12_1
    
    if (*(arg1 + 0xbb8) s> 0)
        do
            uint8_t c_1 = r15.b
            
            if (*(rsi + 9) != 0)
                c_1 u>>= 1
            
            uint32_t c = zx.d(c_1)
            memset(rbp_1, c, 0x10)
            *rdi_1 = c.b
            rbp_1 = &rbp_1[1]
            *(rdi_1 + 1) = c.b
            rsi += 0x4c
            *(rdi_1 + 2) = c.b
            j += 1
            *(rdi_1 + 3) = c.b
            *(rdi_1 + 4) = c.b
            *(rdi_1 + 5) = c.b
            *(rdi_1 + 6) = c.b
            *(rdi_1 + 7) = c.b
            rdi_1 += 8
        while (j s< *(arg1 + 0xbb8))
        
        rbx = arg2
    
    rsi += 0x4c
    int32_t r8 = rbx[4]
    int32_t r9 = *(arg3 + 0x10)
    sub_1403ba3a0(sx.q((r8 * i_1) << 4) + *(rbx + 0x38), sx.q((r9 * i_1) << 4) + *(arg3 + 0x38), 
        r8, r9, *rbx, arg_8, 0x10)
    int32_t r9_1 = *(arg3 + 0x24)
    int32_t r8_1 = rbx[9]
    sub_1403ba3a0(sx.q((r8_1 * i_1) << 3) + *(rbx + 0x40), 
        sx.q((r9_1 * i_1) << 3) + *(arg3 + 0x40), r8_1, r9_1, rbx[5], r12_1, 8)
    int32_t r9_2 = *(arg3 + 0x24)
    int32_t r8_2 = rbx[9]
    rax_25 = sub_1403ba3a0(sx.q((r8_2 * i_1) << 3) + *(rbx + 0x48), 
        sx.q((r9_2 * i_1) << 3) + *(arg3 + 0x48), r8_2, r9_2, rbx[5], r12_1, 8)
    rcx = arg_8
    i = i_1 + 1
    i_1 = i
while (i s< *(arg1 + 0xbb4))
return rax_25
