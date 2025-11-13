// 函数: sub_14244a610
// 地址: 0x14244a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x1b0)

if (rcx == 0)
    return 

int32_t i = 0
int64_t var_28 = 0
int64_t var_20_1 = 0

if (*(arg1 + 0x198) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rbx_1 = *(r14_1 + *(arg1 + 0x190))
        
        if (arg2 != 0)
            sub_142158140(rbx_1, arg3)
        
        int64_t rbp_1 = *(rbx_1 + 0xe0)
        int64_t rbx_2 = sx.q(var_20_1.d)
        int32_t rax_2 = (rbx_2 + 1).d
        var_20_1.d = rax_2
        
        if (rax_2 s> var_20_1:4.d)
            sub_1405a4d70(&var_28)
        
        i += 1
        r14_1 = &r14_1[1]
        *(var_28 + (rbx_2 << 3)) = rbp_1
    while (i s< *(arg1 + 0x198))
    
    rcx = *(arg1 + 0x1b0)

(*(*rcx + 0x280))(rcx, &var_28)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
