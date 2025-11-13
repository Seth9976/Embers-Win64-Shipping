// 函数: sub_140ec7190
// 地址: 0x140ec7190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
int32_t i_2 = 0
void* r15 = *arg1
int64_t* r14 = arg1
void* var_38 = nullptr
int32_t r8 = 0
int32_t var_30 = 0
int32_t i = 0
int32_t var_2c = 0

if (*(r15 + 0x80) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = *(r15 + 0x78) + r14_1
        int64_t rcx = *rdi_2
        
        if (rcx != 0)
            void* rax_1 = rdi_2[1]
            
            if (rax_1 != 0 && *(rax_1 + 8) s> 0)
                int64_t i_3 = sx.q(i_2)
                i_2 = (i_3 + 1).d
                
                if (i_2 s> r8)
                    sub_1405a4f90(&var_38)
                    rcx = *rdi_2
                    r8 = var_2c
                    rbp = var_38
                
                int64_t rax_3 = i_3 * 2
                *(rbp + (rax_3 << 3)) = rcx
                void* rdx_1 = rdi_2[1]
                *(rbp + (rax_3 << 3) + 8) = rdx_1
                
                if (rdx_1 != 0)
                    *(rdx_1 + 0xc) += 1
        
        i += 1
        r14_1 += 0x10
    while (i s< *(r15 + 0x80))
    
    r14 = arg1

sub_140e998a0(r15 + 0x78, &var_38)

if (i_2 != 0)
    int64_t* rdi_3 = rbp + 8
    int32_t i_1
    
    do
        int64_t* rcx_3 = *rdi_3
        
        if (rcx_3 != 0)
            int32_t temp1_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rbp != 0)
    sub_140a74f90(rbp)

void* rdi_4 = arg2[1]
int64_t rbp_1 = *arg2

if (rdi_4 != 0)
    *(rdi_4 + 0xc) += 1

void* rbx = *r14
int64_t rsi = sx.q(*(rbx + 0x80))
int32_t rax_5 = (rsi + 1).d
*(rbx + 0x80) = rax_5

if (rax_5 s> *(rbx + 0x84))
    sub_1405a4f90(rbx + 0x78)

int64_t* result = (rsi << 4) + *(rbx + 0x78)
*result = rbp_1
result[1] = rdi_4
return result
