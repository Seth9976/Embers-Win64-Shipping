// 函数: sub_140ecbe10
// 地址: 0x140ecbe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_1439ae51c
*(arg1 + 0x1a8) = rax
int64_t* rsi = nullptr
*(arg1 + 0x1a9) = 1
char var_28 = rax
char var_27 = 1
int64_t var_20 = 0
int32_t var_18 = 0
sub_1407473e0(arg1 + 0x1b0, &var_20)
int32_t result = sub_140745b20(&var_20)
int64_t* rbx = *(arg1 + 0x398)
int64_t* rdi = rbx

if (rbx != 0)
    result = rbx[1].d
    
    if (result != 0)
        rbx[1].d = result + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr
        rdi = nullptr

if (rdi != 0)
    rsi = *(arg1 + 0x390)

if (rbx != 0)
    rbx[1].d += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

if (rsi != 0)
    result = (*(*rsi + 0x288))(rsi)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
