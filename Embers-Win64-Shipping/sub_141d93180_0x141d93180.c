// 函数: sub_141d93180
// 地址: 0x141d93180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rsi = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rsi = *(arg1 + 8)

void*** rax_2 = j_sub_140a82f30(0x180)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_143239980
    int64_t var_48 = rsi
    int64_t* var_40_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_141d944d0(&rdi[2], &var_48, arg2, arg3, arg4)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

void*** var_30 = rdi
void* var_38 = &rdi[2]
sub_141c813a0(&var_38, &rdi[2])

if (rdi != 0)
    rdi[1].d += 1

int64_t r14_1 = sx.q(*(arg1 + 0x188))
int32_t rax_5 = (r14_1 + 1).d
*(arg1 + 0x188) = rax_5

if (rax_5 s> *(arg1 + 0x18c))
    sub_1405a4f90(arg1 + 0x180)

uint64_t result = (r14_1 << 4) + *(arg1 + 0x180)
*result = &rdi[2]
*(result + 8) = rdi

if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi)(rdi)
        int32_t rsi_2 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_2 == 1)
            result = (*rdi)[1](rdi, zx.q(rsi_2))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
