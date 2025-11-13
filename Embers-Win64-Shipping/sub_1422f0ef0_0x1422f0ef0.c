// 函数: sub_1422f0ef0
// 地址: 0x1422f0ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298

if (rbx == 0)
    return 

int64_t* rbx_1 = *(rbx + 0xb18)
int32_t i = 0

if (rbx_1[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rax_1 = *rbx_1
        
        if (*(rsi_1 + rax_1) == 0)
            sub_141c8bf50(rbx_1, i, 1, 1)
        else
            void* rcx = *(rsi_1 + rax_1 + 8)
            
            if (rcx == 0)
                sub_141c8bf50(rbx_1, i, 1, 1)
            else
                int32_t rax_2 = 0
                
                if (0 == *(rcx + 8))
                    *(rcx + 8) = 0
                else
                    rax_2 = *(rcx + 8)
                
                if (rax_2 s<= 0)
                    sub_141c8bf50(rbx_1, i, 1, 1)
                else
                    i += 1
                    rsi_1 = &rsi_1[2]
    while (i s< rbx_1[1].d)

int64_t* rdi_1 = arg1[1]
int64_t rbp_1 = *arg1
int64_t var_18 = rbp_1
int64_t* var_10_1 = rdi_1

if (rdi_1 != 0)
    *(rdi_1 + 0xc) += 1
    rbp_1 = var_18

uint64_t rax

if (sub_140901d20(rbx_1, &var_18).d == 0xffffffff)
    int64_t rsi_2 = sx.q(rbx_1[1].d)
    int32_t rax_3 = (rsi_2 + 1).d
    rbx_1[1].d = rax_3
    
    if (rax_3 s> *(rbx_1 + 0xc))
        sub_1405a4f90(rbx_1)
    
    rax = (rsi_2 << 4) + *rbx_1
    *rax = rbp_1
    *(rax + 8) = rdi_1
else if (rdi_1 != 0)
    rax = zx.q(*(rdi_1 + 0xc))
    *(rdi_1 + 0xc) -= 1
    
    if (rax.d == 1)
        (*(*rdi_1 + 8))(rdi_1, 1)
