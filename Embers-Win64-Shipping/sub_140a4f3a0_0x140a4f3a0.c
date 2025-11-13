// 函数: sub_140a4f3a0
// 地址: 0x140a4f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rbp = arg2[1].d
int16_t* rdx

if (rbp == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void* r12 = &arg1[7]
void* rbx = *(r12 + 8)
int32_t rcx = rbp - 1
int32_t r15 = 0
int64_t r13 = sx.q(arg1[9].d - 1)

if (rbp == 0)
    rcx = 0

void* rax_4 = r12
int64_t rcx_2 = sx.q(sub_1405969c0(rcx, rdx)) & r13

if (rbx != 0)
    rax_4 = rbx

void* rbx_1 = rax_4 + (rcx_2 << 2)
int32_t i = *(rax_4 + (rcx_2 << 2))

if (i != 0xffffffff)
    void* rdi_1 = *arg1
    
    do
        int64_t r10_2 = sx.q(i) << 5
        int16_t* r8_1
        
        if (rbp == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *arg2
        
        int16_t* const r11_1
        
        if (*(r10_2 + rdi_1 + 8) == 0)
            r11_1 = &data_142d40450
        else
            r11_1 = *(r10_2 + rdi_1)
        
        int16_t* r11_2 = r11_1 - r8_1
        uint32_t rax_10
        
        while (true)
            int16_t rax_5 = *(r11_2 + r8_1)
            int16_t r9_1 = *r8_1
            r8_1 = &r8_1[1]
            
            if (rax_5 != r9_1)
                if (((zx.d(rax_5) | zx.d(r9_1)) & 0xffffff80) != 0)
                    rax_10 = zx.d(rax_5) - zx.d(r9_1)
                    break
                
                uint32_t rdx_5 = zx.d(*(zx.q(r9_1) + &data_142e5e8a0))
                uint32_t rax_9 = zx.d(*(zx.q(rax_5) + &data_142e5e8a0))
                rax_10 = rax_9 - rdx_5
                
                if (rax_9 != rdx_5)
                    break
            else
                if (rax_5 == 0)
                    goto label_140a4f478
        
        if (rax_10 == 0)
        label_140a4f478:
            void* rax_6 = *(r12 + 8)
            int64_t rbx_2 = sx.q(*rbx_1)
            int64_t r9_3 = rbx_2 << 5
            int64_t rcx_4 = sx.q(*(r9_3 + rdi_1 + 0x1c)) & r13
            
            if (rax_6 != 0)
                r12 = rax_6
            
            int32_t j = *(r12 + (rcx_4 << 2))
            void* rdx_1 = r12 + (rcx_4 << 2)
            
            for (; j != 0xffffffff; j = *rdx_1)
                if (j == rbx_2.d)
                    *rdx_1 = *(r9_3 + rdi_1 + 0x18)
                    break
                
                rdx_1 = rdi_1 + 0x18 + (sx.q(j) << 5)
            
            int64_t rcx_9 = *((rbx_2 << 5) + *arg1)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            r15 = 1
            sub_1405c36f0(arg1, rbx_2.d, 1)
            break
        
        rbx_1 = rdi_1 + 0x18 + r10_2
        i = *rbx_1
    while (i != 0xffffffff)

return zx.q(r15)
