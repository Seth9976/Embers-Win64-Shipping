// 函数: sub_141930d20
// 地址: 0x141930d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdx = data_1439c7520
int32_t rcx_1 = data_1439c7528 + 1
data_1439c7528 = rcx_1

if (rdx s<= 0)
    return 

int32_t rsi_1 = 1
int64_t* rdi_1 = nullptr

do
    int64_t* r14_1 = *(rdi_1 + data_1439c7518)
    
    if (r14_1[2].d u<= rcx_1 - 5)
        int64_t rcx_2 = *r14_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        j_sub_140a74f90(r14_1)
        int32_t rax_2 = data_1439c7520
        int32_t rcx_5 = rax_2 - rbx
        
        if (rcx_5 != 1)
            int64_t rcx_7 = data_1439c7518
            memmove(rcx_7 + (sx.q(rbx) << 3), rcx_7 + (sx.q(rsi_1) << 3), (rcx_5 - 1) << 3)
            rax_2 = data_1439c7520
        
        data_1439c7520 = rax_2 - 1
        sub_1405c53d0(&data_1439c7518)
        rcx_1 = data_1439c7528
        rbx -= 1
        rdx = data_1439c7520
        rsi_1 -= 1
        rdi_1 -= 8
    
    rbx += 1
    rsi_1 += 1
    rdi_1 = &rdi_1[1]
while (rbx s< rdx)
