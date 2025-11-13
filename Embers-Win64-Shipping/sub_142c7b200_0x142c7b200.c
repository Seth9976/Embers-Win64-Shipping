// 函数: sub_142c7b200
// 地址: 0x142c7b200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0

if (sub_142c8f410(&arg1[0xe4], arg1) == 0)
    arg1[0xe1].d = 0
    return 0

int32_t rax_5
int64_t entry_r8
int512_t entry_zmm2

if (((arg1[0xe8].d).b & (*(arg1 + 0x744)).b & 4) == 0)
    rax_5 = arg_8
label_142c7b29d:
    
    if (rax_5 == 0)
        char rax_8 = (arg1[0xe8].d).b & (*(arg1 + 0x744)).b
        
        if ((rax_8 & 2) != 0)
            return sub_142c7b0b0(arg1)
        
        if ((rax_8 & 1) != 0)
            return sub_142c7b460(arg1)
        
        sub_142c64850(*arg1, "No known authentication mechanisms supported!\n", entry_r8, 
            entry_zmm2)
        rdi = 0x43
else
    int32_t rax_4
    rax_4, entry_r8, entry_zmm2 = sub_142c8fa60(&arg1[0xe4], arg1, 0, &arg_8, entry_zmm2)
    rdi = rax_4
    
    if (rax_4 == 0)
        rax_5 = arg_8
        
        if (rax_5 != 1)
            goto label_142c7b29d
        
        arg1[0xe1].d = 5
return zx.q(rdi)
