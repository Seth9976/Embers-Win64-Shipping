// 函数: sub_1420ae940
// 地址: 0x1420ae940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0)
    return 

uint64_t rax = (*(*rcx + 0x260))(rcx)
uint64_t rbx_1 = rax

if (rax == 0)
    return 

int32_t r8 = *(arg1 + 0x80)
void* r15_1 = *(*(arg3 + 0x20) + 0x20)
int32_t rdx_1 = *(r15_1 + 0x280)
int64_t r14

if ((rdx_1 & 3).b == 3 || (arg4 != 0 && (rdx_1.b & 1) == 0 && arg2.d f< *(arg3 + 0x2c)))
    r14.b = 1
else
    r14.b = 0

rax.b = 1

if (arg4 != 0)
    rax.b = ((r8 u>> 2).b & 1) != 0

int128_t zmm6 = *(arg3 + 0x2c)
int32_t rbp_1 = 0
int128_t zmm7

if (r14.b == 0)
    zmm7 = zmm6
    zmm6 = arg2
    
    if (not(arg2.d f!= *(*(*(arg1 + 0x20) + 0x20) + 0x28)))
        zmm6.d = zmm6.d f+ 9.99999975e-05f
    
    char rcx_5 = 0
    
    if ((r8.b & 1) != 0)
        rcx_5 = rax.b
    
    rax = zx.q(rcx_5)
    goto label_1420aea4f

zmm7 = arg2

if (not(arg2.d f!= 0f))
    zmm7.d = zmm7.d f- 9.99999975e-05f

if ((r8.b & 2) != 0)
label_1420aea4f:
    
    if (rax.b != 0)
        int32_t rcx_6 = *(arg1 + 0x78)
        
        if (rcx_6 s> 0)
            do
                rax = zx.q(rbp_1)
                
                if (r14.b != 0)
                    rax = zx.q(rcx_6 - rbp_1 - 1)
                
                int64_t rsi_1 = *(arg1 + 0x70)
                int64_t rdi_1 = sx.q(rax.d)
                int32_t zmm0 = *(rsi_1 + (rdi_1 << 3))
                
                if (r14.b != 0)
                    if (not(zmm0 f<= zmm7.d))
                    label_1420aea9e:
                        
                        if (not(zmm0 f> zmm6.d))
                            rax = zx.q(*(rsi_1 + (rdi_1 << 3) + 5))
                            
                            if (rax.b != 1)
                                if (rax.b != 2 || (*(r15_1 + 0x258) & 1) == 0)
                                label_1420aeac5:
                                    rax = zx.q(*(rsi_1 + (rdi_1 << 3) + 4))
                                    
                                    if (rax.b == 1)
                                        (*(*rbx_1 + 0x2f8))(rbx_1, r14.b)
                                    else if (rax.b == 0)
                                        (*(*rbx_1 + 0x2f8))(rbx_1, r14.b ^ 1)
                                    else if (rax.b == 2)
                                        (*(*rbx_1 + 0x2f8))(rbx_1, not.b(*(rbx_1 + 0x58) u>> 5) & 1)
                                    
                                    if ((*(r15_1 + 0x23c) & 0x20) == 0
                                            && *(rsi_1 + (rdi_1 << 3) + 5) == 0)
                                        (*(*rbx_1 + 0x5e0))(rbx_1)
                            else if ((*(r15_1 + 0x258) & rax.b) != 0)
                                goto label_1420aeac5
                else if (not(zmm0 f< zmm7.d))
                    goto label_1420aea9e
                
                rcx_6 = *(arg1 + 0x78)
                rbp_1 += 1
            while (rbp_1 s< rcx_6)

*(arg3 + 0x2c) = arg2.d
