// 函数: sub_140d25500
// 地址: 0x140d25500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = arg1
uint64_t rax_1

if (((*(arg1 + 8) u>> 6).b & 1) == 0)
    void* i
    
    for (i = *(arg1 + 0x20); i != 0; i = *(i + 0x20))
        i_1 = i
    
    if (data_143de5426 == 0)
        i.b = 0
        return i
    
    char r14_1 = *(i_1 + 0x28) & 1
    
    if (r14_1 == 0)
        sub_140ce9db0(i_1, 1)
    
    int64_t rbp
    rbp.b = 0
    int32_t rdx_1 = data_1439a9f68
    int32_t rcx_2 = data_1439a9f74 + 1
    data_1439a9f74 = rcx_2
    rax_1 = zx.q(rdx_1 - 1)
    int64_t rbx_1 = sx.q(rax_1.d)
    
    if (rax_1.d s>= 0)
        int64_t rdi_2 = rbx_1 << 4
        int64_t temp0_1
        
        do
            rax_1 = data_1439a9f60
            
            if (*(rdi_2 + rax_1 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_3 = *(rdi_2 + rax_1)
                
                if (rcx_3 == 0)
                    rbp.b = 1
                else if ((*(*rcx_3 + 0x50))(rcx_3, i_1, zx.q(r14_1)).b == 0)
                    rbp.b = 1
            
            rdi_2 -= 0x10
            temp0_1 = rbx_1
            rbx_1 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_2 = data_1439a9f74
        rdx_1 = data_1439a9f68
    
    data_1439a9f74 = rcx_2 - 1
    
    if (rbp.b != 0 && rcx_2 - 1 s<= 0)
        int32_t rbx_2 = 0
        int32_t rsi = rdx_1
        
        if (rdx_1 s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t rax_3 = data_1439a9f60
                
                if (*(rdi_3 + rax_3 + 8) == 0)
                    sub_1405a4880(&data_1439a9f60, rbx_2, 1, 1)
                else
                    int64_t* rcx_5 = *(rdi_3 + rax_3)
                    
                    if (rcx_5 == 0)
                        sub_1405a4880(&data_1439a9f60, rbx_2, 1, 1)
                    else if ((*(*rcx_5 + 0x20))(rcx_5) != 0)
                        sub_1405a4880(&data_1439a9f60, rbx_2, 1, 1)
                    else
                        rbx_2 += 1
                        rdi_3 = &rdi_3[2]
                
                rdx_1 = data_1439a9f68
            while (rbx_2 s< rdx_1)
        
        rax_1 = zx.q(rdx_1 * 2)
        
        if (rax_1.d s<= 2)
            rax_1 = 2
        
        data_1439a9f70 = rax_1.d
        
        if (rsi s> rax_1.d && data_1439a9f6c != rdx_1)
            sub_1405a5410(&data_1439a9f60, rdx_1)

rax_1.b = 1
return rax_1
