// 函数: agsDeInit
// 地址: 0x142c4c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

int32_t i = 0

if (arg1[0x7f].d s> 0)
    int64_t rbp_1 = 0
    
    do
        void* rdi_2 = arg1[0x7e] + 0x50
        int64_t* rdi_3 = rdi_2 + rbp_1
        
        if (rdi_2 != neg.q(rbp_1))
            int64_t rcx = *rdi_3
            
            if (rcx != 0)
                int64_t rax_2 = data_14401af28
                
                if (rax_2 == 0)
                    free(rcx)
                else
                    rax_2(rcx)
                
                *rdi_3 = 0
        
        i += 1
        rbp_1 += 0x78
    while (i s< arg1[0x7f].d)

if (arg1 != -0x400)
    int64_t rcx_1 = arg1[0x80]
    
    if (rcx_1 != 0)
        int64_t rax_3 = data_14401af28
        
        if (rax_3 == 0)
            free(rcx_1)
        else
            rax_3(rcx_1)
        
        arg1[0x80] = 0

if (arg1 != -0x3f0)
    int64_t rcx_2 = arg1[0x7e]
    
    if (rcx_2 != 0)
        int64_t rax_4 = data_14401af28
        
        if (rax_4 == 0)
            free(rcx_2)
        else
            rax_4(rcx_2)
        
        arg1[0x7e] = 0

int64_t rax_5 = arg1[3]

if (rax_5 != 0)
    int64_t rcx_3 = arg1[1]
    
    if (rcx_3 != 0)
        rax_5(rcx_3)
        arg1[1] = 0

HMODULE hLibModule = *arg1

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *arg1 = 0

int64_t rax_6 = data_14401af28

if (rax_6 == 0)
    free(arg1)
    return 0

rax_6(arg1)
return 0
