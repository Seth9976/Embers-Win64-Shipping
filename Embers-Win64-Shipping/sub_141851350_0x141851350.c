// 函数: sub_141851350
// 地址: 0x141851350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x28))
        break
    
    int64_t* rdi_1 = *(*(arg1 + 0x20) + sx.q(i) * 0x10)
    int64_t* rcx_2 = rdi_1[0xba]
    (*(*rcx_2 + 0x20))(rcx_2, &rdi_1[0xc1])
    
    if ((*(*rdi_1 + 0x10))(rdi_1) != 0)
        sub_141838020(rdi_1, arg2)
        arg2 = sub_140a18a40(arg1 + 0x20, i, 1, 1)
        i -= 1

int32_t rdx_3 = *(arg1 + 0x28)

if (rdx_3 == *(arg1 + 0x38))
    return 1

sub_14084ee30(arg1 + 0x30, rdx_3)
int64_t* rdi_2 = *(arg1 + 0x20)
void* r15_2 = &rdi_2[sx.q(*(arg1 + 0x28)) * 2]
int64_t* result

if (rdi_2 == r15_2)
    result.b = 1
else
    do
        int64_t* rbx = rdi_2[1]
        int64_t r14_1 = *rdi_2
        
        if (rbx != 0)
            rbx[1].d += 1
        
        int64_t rsi_1 = sx.q(*(arg1 + 0x38))
        int32_t rax_4 = (rsi_1 + 1).d
        *(arg1 + 0x38) = rax_4
        
        if (rax_4 s> *(arg1 + 0x3c))
            sub_1405a4f90(arg1 + 0x30)
        
        result = (rsi_1 << 4) + *(arg1 + 0x30)
        *result = r14_1
        result[1] = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_9 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_9 == 1 && rbx != 0)
                    (*(*rbx + 8))(rbx, 1)
        
        rdi_2 = &rdi_2[2]
    while (rdi_2 != r15_2)
    
    result.b = 1

return result
