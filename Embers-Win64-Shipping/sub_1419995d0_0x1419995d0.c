// 函数: sub_1419995d0
// 地址: 0x1419995d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t rdi = 0
int32_t rbp = *(rax + 8)

if (rbp s<= 0)
    *(rax + 0x10) = 0
    arg1[1] = 0
    return rax

int64_t* rsi = nullptr

do
    int64_t* rbx_2 = *(rsi + **arg1)
    
    if (rbx_2[3] != 0)
        int64_t* rcx = data_143f0f180
        (*(*rcx + 0x138))(rcx, &data_143f02b98, rbx_2[2])
        rbx_2[3] = 0
        *(rbx_2 + 0x24) = 0
    else if (data_1439c85b0 != 0 && *(rbx_2 + 0x24) == 0)
        rbx_2[5].d += 1
        
        if (rbx_2[5].d s>= data_1439c85b0)
            (*(*rbx_2 + 0x30))(rbx_2)
            int64_t* rbx_3 = *arg1
            int64_t r15_1 = sx.q(rdi) << 3
            int64_t* rcx_2 = *(r15_1 + *rbx_3)
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            int32_t rcx_5 = rbx_3[1].d
            int32_t rax_10 = rcx_5 - rdi - 1
            
            if (rax_10 s>= 1)
                rax_10 = 1
            
            if (rax_10 != 0)
                int64_t r9_1 = *rbx_3
                memcpy(r9_1 + r15_1, r9_1 + (sx.q(rcx_5 - rax_10) << 3), rax_10 << 3)
                rcx_5 = rbx_3[1].d
            
            rbx_3[1].d = rcx_5 - 1
            sub_1405c53d0(rbx_3)
            rdi -= 1
            rsi -= 8
            rbp -= 1
    
    rdi += 1
    rsi = &rsi[1]
while (rdi s< rbp)

void* rax_13 = *arg1
*(rax_13 + 0x10) = 0
arg1[1] = 0
return rax_13
