// 函数: sub_140d99e70
// 地址: 0x140d99e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x1d])
int128_t zmm0 = sub_140d8ff90(&arg1[2])
(*(*arg1 + 0x50))(arg1)
void* i = arg1[2]
uint64_t rbp
rbp.b = 0

for (void* rsi_2 = (sx.q(arg1[3].d) << 4) + i; i != rsi_2; i += 0x10)
    int64_t* rdi_1 = *(i + 8)
    void* rcx_3 = nullptr
    int32_t rax_1
    
    if (rdi_1 != 0)
        rax_1 = rdi_1[1].d
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            rdi_1[1].d = rax_1 + 1
            rcx_3 = *i
    
    if (*(rcx_3 + 0x20) == 0)
        rbp = zx.q(rbp.b)
        rax_1.b = zmm0.q f>= *(rcx_3 + 0x18)
        *(rcx_3 + 0x20) = rax_1.b
        
        if (rax_1.b != 0)
            rbp = 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_1 = *rdi_1
                    (*(r8_1 + 8))(rdi_1, 1, r8_1)
    else if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (arg1 != -0xe8)
    LeaveCriticalSection(&arg1[0x1d])

return zx.q(rbp.b)
