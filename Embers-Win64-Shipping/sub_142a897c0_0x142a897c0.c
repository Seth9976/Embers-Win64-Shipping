// 函数: sub_142a897c0
// 地址: 0x142a897c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t var_28[0x4]
var_28[0] = 0

if (*arg4 s> 0)
    return 

void arg_20
uint64_t rdi_1 = zx.q(sub_142a4cc70(arg1, &arg_20, 4, &var_28))
int32_t rax = var_28[0]

if (rax s> 0 || rax == 0xffffff84)
label_142a898d3:
    
    if (arg3 != 0)
        *arg4 = 1
else if (rdi_1.d s> 0)
    if (sub_142a8b980(&arg_20, rdi_1.d).b == 0)
        goto label_142a898d3
    
    (*(*arg2 + 8))(arg2, &data_143642120, 1)
    
    do
        void* rax_4 = &arg_20
        uint32_t j
        uint32_t rdx_2
        
        do
            rdx_2 = zx.d(*rax_4)
            j = zx.d(*(rax_4 + sx.q(i) * 3 + &data_1436419e0 - &arg_20))
            
            if (rdx_2 != j)
                break
            
            rax_4 += 1
        while (j != 0)
        
        if (rdx_2 - j == 0)
            void* rcx_4 = sx.q(i + 1) * 3 + &data_1436419e0
            char* rdx_4 = &arg_20 - rcx_4
            char j_1
            
            do
                j_1 = *rcx_4
                *(rdx_4 + rcx_4) = j_1
                rcx_4 += 1
            while (j_1 != 0)
            rdi_1 = -1
            
            do
                rdi_1 += 1
            while (*(&arg_20 + rdi_1) != 0)
            
            break
        
        i += 2
    while (i s< 0xc)
    
    (*(*arg2 + 8))(arg2, &arg_20, zx.q(rdi_1.d))
