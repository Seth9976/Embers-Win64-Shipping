// 函数: sub_1405e0080
// 地址: 0x1405e0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d5a4c0
int32_t rbx = 0
arg1[7] = &data_142d5a4d0
int32_t rax = data_143cd9408

if (rax s> 0)
    int64_t r9_1 = data_143cd9400
    int64_t* rdi_1 = nullptr
    
    do
        if (*(rdi_1 + r9_1) == arg1)
            int32_t rcx_2 = rax - rbx - 1
            
            if (rcx_2 s>= 1)
                rcx_2 = 1
            
            if (rcx_2 != 0)
                memcpy(r9_1 + (sx.q(rbx) << 3), r9_1 + (sx.q(rax - rcx_2) << 3), rcx_2 << 3)
                rax = data_143cd9408
            
            data_143cd9408 = rax - 1
            sub_1405c53d0(&data_143cd9400)
            rax = data_143cd9408
            rbx -= 1
            r9_1 = data_143cd9400
            rdi_1 -= 8
        
        rbx += 1
        rdi_1 = &rdi_1[1]
    while (rbx s< rax)

arg1[7] = &data_142d5a090
sub_1419c33a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
