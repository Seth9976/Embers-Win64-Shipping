// 函数: sub_140b75490
// 地址: 0x140b75490
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
    int64_t* rbx_1 = *arg1 + sx.q(i) * 0x28
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    int16_t* const rcx_4
    
    if (rbx_1[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *rbx_1
    
    if (sub_140a54510(rcx_4, rdx_1) == 0)
        int64_t rbx_2 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_2 = *(r15 + 8)
            int64_t r8_1 = *arg1
            void* r9_1 = r8_1 + rbx_2 * 0x28
            int64_t rcx_7 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + 0x24))
            
            if (rdx_2 != 0)
                r15 = rdx_2
            
            int32_t j = *(r15 + (rcx_7 << 2))
            void* rdx_3 = r15 + (rcx_7 << 2)
            
            while (j != 0xffffffff)
                if (j == rbx_2.d)
                    *rdx_3 = *(r9_1 + 0x20)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rdx_5 = j_1 + ((j_1 + 1) << 2)
                j = *(r8_1 + (rdx_5 << 3))
                rdx_3 = r8_1 + (rdx_5 << 3)
        
        int64_t rax_15 = *arg1
        int64_t rcx_8 = rbx_2 * 5
        int64_t* rdi_1 = *(rax_15 + (rcx_8 << 3) + 0x18)
        rbp = 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t rcx_11 = *(rax_15 + (rcx_8 << 3))
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        sub_1405c3590(arg1, rbx_2.d, 1)
        break
    
    i = rbx_1[4].d
    r14 = &rbx_1[4]

return zx.q(rbp)
