// 函数: sub_142403670
// 地址: 0x142403670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xb0))
void* r14 = *(arg1 + 0xa8)
void* rbp = r14 + rdi * 0x18

if (r14 != rbp)
    do
        int64_t rdi_1 = 0
        int64_t* rbx_1 = *(r14 + 8)
        uint64_t rsi_2 = sx.q(*(r14 + 0x10)) << 3 u>> 3
        
        if (rbx_1 u> &rbx_1[sx.q(*(r14 + 0x10))])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx = *rbx_1
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
                
                rbx_1 = &rbx_1[1]
                rdi_1 += 1
            while (rdi_1 != rsi_2)
        
        r14 += 0x18
    while (r14 != rbp)
    
    rdi = zx.q(*(arg1 + 0xb0))

if (rdi.d != 0)
    int64_t* rbx_3 = *(arg1 + 0xa8) + 8
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_3
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_3 = &rbx_3[3]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

bool cond:0 = *(arg1 + 0xb4) == 0
*(arg1 + 0xb0) = 0

if (not(cond:0))
    sub_1405a5130(arg1 + 0xa8, 0)

void* result = sub_140a42ca0(arg1 + 0xb8, 0)
*(arg1 + 0x108) = 0xffffffff
return result
