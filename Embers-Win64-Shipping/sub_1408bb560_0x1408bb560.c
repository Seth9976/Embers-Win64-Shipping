// 函数: sub_1408bb560
// 地址: 0x1408bb560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rbp_2 = &i[sx.q(arg1[1].d) * 2]; i != rbp_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    int64_t rsi_1 = *i
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rsi_1 != 0)
        void*** rax_1 = data_143ceb928
        
        if (rax_1 == 0)
            rax_1 = j_sub_140a82f30(zx.q((&rax_1[6]).d))
            
            if (rax_1 != 0)
                rax_1 = sub_1408b9380(rax_1)
            
            data_143ceb928 = rax_1
        
        sub_1408bc4b0(rax_1, rsi_1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_4 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_1408ba6e0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
