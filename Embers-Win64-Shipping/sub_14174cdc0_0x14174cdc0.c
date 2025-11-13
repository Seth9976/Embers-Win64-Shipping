// 函数: sub_14174cdc0
// 地址: 0x14174cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r13_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t rcx = r13_1 * 0x18
void* rbp_2 = *arg1 + rcx
int32_t i

do
    void* rcx_6 = *(rbp_2 + 8)
    void* rdi_1 = rbp_2
    int32_t j_1 = *(rbp_2 + 0x10)
    
    if (rcx_6 != 0)
        rdi_1 = rcx_6
    
    if (j_1 != 0)
        int32_t j
        
        do
            void* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                int64_t rcx_1 = *(rbx_1 + 0x78)
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                int64_t rcx_2 = *(rbx_1 + 0x68)
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                int64_t rcx_3 = *(rbx_1 + 0x58)
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                int64_t rcx_4 = *(rbx_1 + 0x48)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                j_sub_140a74f90(rbx_1)
            
            rdi_1 += 8
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_6 = *(rbp_2 + 8)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rbp_2 += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_8 = rax_1 - r13_1.d

if (rcx_8 != arg3)
    int64_t r9 = *arg1
    memmove(rcx + r9, r9 + sx.q(arg3 + r13_1.d) * 0x18, (rcx_8 - arg3) * 0x18)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405fde90(arg1)
