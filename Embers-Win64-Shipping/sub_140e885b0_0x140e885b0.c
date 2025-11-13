// 函数: sub_140e885b0
// 地址: 0x140e885b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = arg3
void* rax = *(arg2 + 0x128)
void* r9 = arg2 + 8

if (rax != 0)
    r9 = rax

int64_t r8 = sx.q(*(arg2 + 0x130)) * 9
int64_t var_38 = *(r9 + (r8 << 3) - 0x10)
int64_t* rdi = *(r9 + (r8 << 3) - 8)
int64_t* var_30 = rdi

if (rdi != 0)
    rdi[1].d += 1
    rdi = var_30

void** rbx = *(arg1 + 0x2b8)
void* rsi_2 = &rbx[sx.q(*(arg1 + 0x2c0)) * 2]
int64_t* var_28 = &var_38
void* var_20 = arg1
void* var_18 = arg2
char* var_10 = &result_1

if (rbx != rsi_2)
    do
        void* rdx = *rbx
        
        if (rdx != 0 && *(rdx + 0x20) != 0)
            arg4 = j_sub_140e55960(&var_28, rdx, arg4)
        
        rbx = &rbx[2]
    while (rbx != rsi_2)
    
    rdi = var_30

int64_t* rbx_1 = rdi
*(arg1 + 0x2d8) = var_38
int64_t* rcx_1 = *(arg1 + 0x2e0)

if (rdi != rcx_1)
    if (rbx_1 != 0)
        *(rdi + 0xc) += 1
        rcx_1 = *(arg1 + 0x2e0)
        rdi = var_30
    
    if (rcx_1 != 0)
        int32_t temp2_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)
        
        rdi = var_30
    
    *(arg1 + 0x2e0) = rbx_1

char result = result_1
*(arg1 + 0x2e8) = result

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
