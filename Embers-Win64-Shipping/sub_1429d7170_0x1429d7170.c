// 函数: sub_1429d7170
// 地址: 0x1429d7170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 8)
int32_t i = 0

if (*r8 s<= 0)
    return 

int64_t rbp_1 = 0
int32_t* rdi_1 = nullptr

do
    int32_t* rdx_1 = *(r8 + 0x18)
    int32_t j_2 = *(rdx_1 + rbp_1)
    int32_t* rax = *(r8 + 0x48) + (sx.q(*(rdx_1 + rbp_1 + 4)) << 2)
    
    if (j_2 s> 0)
        int32_t* rbx_2 = *(arg1 + 0x90) + (sx.q(*(*(arg1 + 0x68) + rbp_1 + 4)) << 2) - rax
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            int32_t rcx_3 = *(rbx_2 + rax)
            
            if (rcx_3 != 0xffffffff)
                int32_t* r9_1 = *(*(arg1 + 0x10) + 0x78) + (sx.q(rcx_3 * 2) << 2)
                *r9_1 = *(rdi_1 + *(arg1 + 0xa8))
                r9_1[1] = *(*(arg1 + 0xd8) + (sx.q(*rax) << 2))
            
            rax = &rax[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    r8 = *(arg1 + 8)
    i += 1
    rbp_1 += 8
    rdi_1 = &rdi_1[1]
while (i s< *r8)
