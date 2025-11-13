// 函数: sub_140b45b50
// 地址: 0x140b45b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg2
int64_t rbp = sx.q(arg3)

if (arg1[4].d == 0)
    jump(*(**arg1 + 0x150))

if (arg3 == 0)
    return 

do
    int64_t rdx = sx.q(*(arg1 + 0x14))
    int32_t rdi_1 = rbp.d
    int32_t rax = arg1[4].d - rdx.d
    
    if (rax s<= rbp.d)
        rdi_1 = rax
    
    if (rdi_1 != 0)
        int64_t rbx_3 = sx.q(rdi_1)
        memcpy(rdx + arg1[3], r15, rbx_3.d)
        *(arg1 + 0x14) += rdi_1
        r15 += rbx_3
        rbp = zx.q(rbp.d - rdi_1)
    else if (rdx.d s> 0)
        int32_t rax_3 = arg1[6].d
        int64_t rdx_6
        int64_t r8_3
        
        if (rax_3 s<= 0)
            r8_3 = rdx
            rdx_6 = arg1[3]
        else
            void* rbx_1 = arg1[3]
            char* rdi_2 = arg1[5]
            int32_t arg_8 = rax_3
            int32_t var_48_1 = 0
            int32_t var_34_1 = 0
            void arg_20
            
            if (sub_140aecc20((*sub_140b5e500(&arg_20, 0x102)).q, rdi_2, &arg_8, rbx_1, 
                    *(arg1 + 0x14), 0x20).b == 0)
                do
                    int32_t rcx_4 = arg_8
                    
                    if (rcx_4 s<= arg1[6].d)
                        goto label_140b45d0d
                    
                    int32_t rax_6 = arg1[6].d
                    
                    if (rcx_4 s> rax_6)
                        arg1[6].d = rcx_4
                        
                        if (rcx_4 s> *(arg1 + 0x34))
                            sub_1405daba0(&arg1[5])
                    else if (rcx_4 s< rax_6 && rax_6 != rcx_4)
                        arg1[6].d = rcx_4
                        sub_1405dac10(&arg1[5])
                    
                    void* rbx_2 = arg1[3]
                    char* rdi_3 = arg1[5]
                    arg_8 = arg1[6].d
                    int32_t var_48_2 = 0
                    int32_t var_34_2 = 0
                    rax = sub_140aecc20((*sub_140b5e500(&arg_20, 0x102)).q, rdi_3, &arg_8, rbx_2, 
                        *(arg1 + 0x14), 0x20)
                while (rax.b == 0)
            
            r8_3 = sx.q(arg_8)
            rdx_6 = arg1[5]
        
        int64_t* rcx_10 = *arg1
        (*(*rcx_10 + 0x150))(rcx_10, rdx_6, r8_3)
    label_140b45d0d:
        *(arg1 + 0x14) = 0
while (rbp.d != 0)
