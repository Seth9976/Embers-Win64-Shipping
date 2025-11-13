// 函数: sub_1408c0700
// 地址: 0x1408c0700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x2b0)

if (rax == 0)
    return zx.q(arg6)

int64_t* rdi = *rax
void* rbp_2 = &rdi[sx.q(rax[1].d) * 2]

if (rdi == rbp_2)
    return zx.q(arg6)

do
    int64_t* rbx_1 = rdi[1]
    void* rsi_1 = *rdi
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rsi_1 != 0)
        void*** rax_1 = data_143ceb928
        
        if (rax_1 == 0)
            rax_1 = j_sub_140a82f30(zx.q((&rax_1[6]).d))
            
            if (rax_1 != 0)
                rax_1 = sub_1408b9380(rax_1)
            
            data_143ceb928 = rax_1
        
        sub_1408c0ed0(rax_1, rsi_1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rcx_7 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rcx_7 == 1)
                int64_t r8_1 = *rbx_1
                (*(r8_1 + 8))(rbx_1, zx.q(rcx_7), r8_1)
    
    rdi = &rdi[2]
while (rdi != rbp_2)

return zx.q(arg6)
