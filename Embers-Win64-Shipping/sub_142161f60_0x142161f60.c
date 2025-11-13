// 函数: sub_142161f60
// 地址: 0x142161f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x28]

if (rcx == 0)
    return 

int64_t* var_18
sub_142436b20(rcx, &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rax = var_18
    
    if (i s>= rax[1].d)
        break
    
    void* rdi_1 = (*rax)[sx.q(i)]
    
    if (rdi_1 != 0)
        void* rdx_2 = *(rdi_1 + 0xe8)
        
        if (rdx_2 != 0)
            if (arg1[0x11] != 0)
                (*(*arg1 + 0x348))(arg1, rdx_2)
                rdx_2 = *(rdi_1 + 0xe8)
            
            sub_142174bc0(arg1, *(rdx_2 + 0x10))
            sub_142173c60(&arg1[0x8e], *(rdi_1 + 0xe8))
        
        rdx_2.b = 1
        
        if (sub_1420e4e60(rdi_1) != 0)
            rdx_2.b = 1
            (*(*arg1 + 0x348))(arg1, sub_1420e4e60(rdi_1))
        
        i = i_1
    
    i += 1
    i_1 = i
