// 函数: sub_142436e50
// 地址: 0x142436e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
char* r8 = nullptr
arg1[1] = 0
void* rcx = data_143f5b298
int64_t var_18

if (rcx == 0)
label_142436eed:
    
    if (sub_140d31640() != 0)
        sub_140af2b60()
        int64_t* rax_4 = sub_1423f5b20(&var_18)
        
        if (arg1 != rax_4)
            int64_t rcx_6 = *arg1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *arg1 = *rax_4
            *rax_4 = 0
            arg1[1].d = rax_4[1].d
            *(arg1 + 0xc) = *(rax_4 + 0xc)
            rax_4[1] = 0
        
        goto label_142436f40
else
    int64_t* rax_1 = *(rcx + 0xc38)
    void* rcx_2 = &rax_1[sx.q(*(rcx + 0xc40))]
    
    if (rax_1 == rcx_2)
        goto label_142436eed
    
    do
        char* r9_1 = *rax_1
        char rdx_1 = *r9_1
        
        if (rdx_1 == 1)
            r8 = r9_1
            break
        
        if (rdx_1 != 3)
            if (rdx_1 == 2 && r8 == 0)
                r8 = r9_1
        else if (r8 == 0 || *r8 != rdx_1)
            r8 = r9_1
        
        rax_1 = &rax_1[1]
    while (rax_1 != rcx_2)
    
    if (r8 == 0)
        goto label_142436eed
    
    sub_140597df0(arg1, sub_142436cb0(*(r8 + 0x278), &var_18))
label_142436f40:
    int64_t rcx_8 = var_18
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
return arg1
