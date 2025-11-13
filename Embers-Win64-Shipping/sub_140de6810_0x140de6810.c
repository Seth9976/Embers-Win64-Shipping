// 函数: sub_140de6810
// 地址: 0x140de6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int64_t* rdi = *(rcx + 0x9f8)
int64_t* rax = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
        rax = nullptr
    else
        rdi[1].d = rax_1 + 1
        rax = rdi

int32_t entry_r9

if (rax != 0)
    void* rcx_1 = *(rcx + 0x9f0)
    
    if (rcx_1 != 0)
        entry_r9 = sub_140e211b0(rcx_1, arg2)

int64_t* rbx = *(arg1 + 0x10)
int64_t rbp = 0

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    
    if (rax_3 != 0)
        rbx[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_4 = rbx[1].d
        rbp = *(arg1 + 8)
        rbx[1].d = rax_4
        
        if (rax_4 == 0)
            entry_r9 = (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                entry_r9 = (*(*rbx + 8))(rbx, 1)

void* rsi = *arg2
*(rsi + 0x9f0) = rbp
int64_t* rcx_4 = *(rsi + 0x9f8)

if (rbx != rcx_4)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx_4 = *(rsi + 0x9f8)
    
    if (rcx_4 != 0)
        int32_t temp2_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            entry_r9 = (*(*rcx_4 + 8))(rcx_4, 1)
    
    *(rsi + 0x9f8) = rbx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        entry_r9 = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            entry_r9 = (*(*rbx + 8))(rbx, 1)

void* rcx_7 = *arg2
int64_t rax_11 = *(arg1 + 0x898) + 0xfd0
int64_t* rdx = *(rcx_7 + 0x8a8)
*(rcx_7 + 0x8a0) = rax_11

if (rdx != 0)
    int64_t var_38 = rax_11
    char var_30_1 = 1
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_140e245f0(&rdx[0x55], rdx, &var_38, entry_r9)
    sub_140745b20(&var_28)

int64_t* rcx_10 = data_143e20d08
int64_t result = (*(*rcx_10 + 0x18))(rcx_10, arg1 + 0xa00, arg2)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
