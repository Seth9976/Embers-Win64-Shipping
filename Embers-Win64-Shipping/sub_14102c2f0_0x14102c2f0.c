// 函数: sub_14102c2f0
// 地址: 0x14102c2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t r14_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    int64_t* rbx_1 = *(arg1 + (zx.q(r14_1) << 3) + 0x140)
    
    if (*(rbx_1 + 0x11c) != 0)
        if (rbx_1[0x76f].b != 0)
            void* r8_1 = rbx_1[0x76e]
            
            if (r8_1 != 0 && data_1439c7a34 u> 1)
                while (*(r8_1 + 0x18) != rbx_1[0x27])
                    r8_1 = *(r8_1 + 0x20)
                    
                    if (r8_1 == 0)
                        break
            
            sub_14101efc0(rbx_1[0x27] + 0x520, rbx_1, r8_1)
            rbx_1[0x76f].b = 0
        
        sub_14101f080(rbx_1[0x27] + 0x520, rbx_1)
    
    int64_t j = 0
    void* rdi_1 = &rbx_1[2]
    
    do
        int64_t rdx_3 = *(rdi_1 - 8)
        
        if (rdx_3 == 0)
            break
        
        int64_t r8_2 = *rdi_1
        
        if (r8_2 != 0)
            (*(*rbx_1 + 0x118))(rbx_1, rdx_3, r8_2, &rbx_1[0x1c])
        
        j += 1
        rdi_1 += 0x18
    while (j s< 8)
    
    int64_t rdx_4 = rbx_1[0x19]
    
    if (rdx_4 != 0)
        int64_t r8_3 = rbx_1[0x1a]
        
        if (r8_3 != 0)
            (*(*rbx_1 + 0x118))(rbx_1, rdx_4, r8_3, &rbx_1[0x1c])
    
    int32_t rax_4 = 1 << r14_1.b
    r14_1 = 0x20
    i = not.d(rax_4) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        r14_1 = temp0_2
while (i != 0)
