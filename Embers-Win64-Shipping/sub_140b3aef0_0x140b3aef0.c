// 函数: sub_140b3aef0
// 地址: 0x140b3aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x14))

if (rdx.d s<= 0)
    return 

int32_t rax = arg1[6].d
int64_t* rcx_9
int64_t rdx_6
int64_t r8_3

if (rax s<= 0)
    rcx_9 = *arg1
    r8_3 = rdx
    rdx_6 = arg1[3]
else
    void* rbx_1 = arg1[3]
    char* rdi_1 = arg1[5]
    int32_t arg_8 = rax
    int32_t var_38_1 = 0
    int32_t arg_1c = 0
    void arg_10
    
    if (sub_140aecc20((*sub_140b5e500(&arg_10, 0x102)).q, rdi_1, &arg_8, rbx_1, *(arg1 + 0x14), 
            0x20) == 0)
        char i
        
        do
            int32_t rcx_3 = arg_8
            
            if (rcx_3 s<= arg1[6].d)
                goto label_140b3b067
            
            int32_t rax_3 = arg1[6].d
            
            if (rcx_3 s> rax_3)
                arg1[6].d = rcx_3
                
                if (rcx_3 s> *(arg1 + 0x34))
                    sub_1405daba0(&arg1[5])
            else if (rcx_3 s< rax_3 && rax_3 != rcx_3)
                arg1[6].d = rcx_3
                sub_1405dac10(&arg1[5])
            
            void* rbx_2 = arg1[3]
            char* rdi_2 = arg1[5]
            arg_8 = arg1[6].d
            int32_t var_38_2 = 0
            arg_1c = 0
            i = sub_140aecc20((*sub_140b5e500(&arg_10, 0x102)).q, rdi_2, &arg_8, rbx_2, 
                *(arg1 + 0x14), 0x20)
        while (i == 0)
    
    rcx_9 = *arg1
    r8_3 = sx.q(arg_8)
    rdx_6 = arg1[5]

(*(*rcx_9 + 0x150))(rcx_9, rdx_6, r8_3)
label_140b3b067:
*(arg1 + 0x14) = 0
