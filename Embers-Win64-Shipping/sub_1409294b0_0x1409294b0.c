// 函数: sub_1409294b0
// 地址: 0x1409294b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x98)
uint64_t rsi
rsi.b = 0
int32_t rbx = arg3.d

if (rbp == 0)
    return 0

int64_t* rdi = *(arg2 + 0xa0)
void* const var_48 = rbp

if (rdi != 0)
    rdi[1].d += 1

int64_t r12
r12.b = arg3:4.d == 0

if ((r12.b & sub_140b5b8a0(rbx, 0x122)) == 0)
    if ((r12.b & sub_140b5b8a0(rbx, 0x121)) != 0)
        rsi.b = 0
        
        if (rbp != 0)
            int64_t* rcx_4 = *(rbp + 8)
            
            if (rcx_4 != 0)
                char rax_5
                int64_t r8_1
                rax_5, r8_1 = (*(*rcx_4 + 0x90))(rcx_4)
                
                if (rax_5 != 0)
                    int64_t* rcx_5 = *(rbp + 8)
                    r8_1.b = 1
                    int64_t var_38
                    int64_t* rax_7 = (*(*rcx_5 + 0x78))(rcx_5, &var_38, r8_1)
                    int16_t* const r8_2
                    
                    if (rax_7[1].d == 0)
                        r8_2 = &data_142d40450
                    else
                        r8_2 = *rax_7
                    
                    sub_140a2e390(&var_48, u"%s", r8_2)
                    
                    if (arg4 == &var_48)
                        void* const rcx_8 = var_48
                        
                        if (rcx_8 != 0)
                            sub_140a74f90(rcx_8)
                    else
                        int64_t rcx_7 = *arg4
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        *arg4 = var_48
                        arg4[1].d = rdi.d
                        *(arg4 + 0xc) = rdi:4.d
                        int64_t var_40_1 = 0
                        var_48 = nullptr
                    
                    int64_t rcx_9 = var_38
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    rsi.b = 1
else
    rsi = zx.q(sub_140928980(&var_48, arg4, sub_14093f8f0(arg2 + 0x28)))

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return zx.q(rsi.b)
