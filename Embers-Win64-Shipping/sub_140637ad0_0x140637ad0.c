// 函数: sub_140637ad0
// 地址: 0x140637ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = arg2[1].d
int16_t* rdx

if (rax_1 == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void* rbx = arg1[8]
void* r15 = &arg1[7]
int32_t rbp = 0
int32_t rcx = rax_1 - 1

if (rax_1 == 0)
    rcx = 0

int64_t rcx_2 = sx.q(sub_1405969c0(rcx, rdx)) & sx.q(arg1[9].d - 1)
void* rax_6 = r15

if (rbx != 0)
    rax_6 = rbx

void* r14 = rax_6 + (rcx_2 << 2)
int32_t i = *(rax_6 + (rcx_2 << 2))

while (i != 0xffffffff)
    int64_t* rbx_3 = (sx.q(i) << 5) + *arg1
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    int16_t* const rcx_3
    
    if (rbx_3[1].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = *rbx_3
    
    if (sub_140a54510(rcx_3, rdx_1) == 0)
        int64_t rbx_4 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_2 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_4 << 5
            int64_t rcx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x1c))
            
            if (rdx_2 != 0)
                r15 = rdx_2
            
            int32_t j = *(r15 + (rcx_5 << 2))
            void* rdx_3 = r15 + (rcx_5 << 2)
            
            for (; j != 0xffffffff; j = *rdx_3)
                if (j == rbx_4.d)
                    *rdx_3 = *(r9_2 + r8_1 + 0x18)
                    break
                
                rdx_3 = r8_1 + 0x18 + (sx.q(j) << 5)
        
        int64_t rcx_6 = *((rbx_4 << 5) + *arg1)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbp = 1
        sub_1406383b0(arg1, rbx_4.d, 1)
        break
    
    i = rbx_3[3].d
    r14 = &rbx_3[3]

return zx.q(rbp)
