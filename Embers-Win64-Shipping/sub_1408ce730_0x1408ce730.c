// 函数: sub_1408ce730
// 地址: 0x1408ce730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rax_1 = *arg1
arg1[0x10] = arg1
sub_1423c6c10(&arg1[0xb], *((*(rax_1 + 0x150))() + 0x30))
int64_t rax_3 = *arg1
*(arg1 + 0x48) = *(arg2 + 0x38)
(*(rax_3 + 0x150))(arg1)
int64_t* i = *(arg2 + 0x28)

for (void* r12_2 = sx.q(*(arg2 + 0x30)) * 0x38 + i; i != r12_2; i = &i[7])
    int64_t rbp_1 = *i
    int64_t rax
    int64_t* rdi_1
    
    if (i[4] == 0)
        rdi_1 = nullptr
        rax = 0
    else
        void* rax_4 = sub_1408d3a80()
        
        if (rax_4 == 0)
            rdi_1 = nullptr
            rax = 0
        else
            void* rdx_1 = i[4]
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
                    || rdx_1 == 0)
                rdi_1 = nullptr
                rax = 0
            else
                void* rax_7 = sub_1408d3a80()
                int64_t rax_8
                int64_t* rbx_2
                
                if (rax_7 != 0)
                    rbx_2 = i[4]
                    rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_7 == 0 || rax_8.d s> rbx_2[7].d
                        || *(rbx_2[6] + (rax_8 << 3)) != rax_7 + 0x30)
                    rbx_2 = nullptr
                
                rdi_1 = rbx_2[0x23]
                
                if (rdi_1 != 0)
                    rax = sub_1408d4cd0(rdi_1)
                else
                    (*(*rbx_2 + 0x390))(rbx_2)
                    rdi_1 = rbx_2[0x23]
                    
                    if (rdi_1 == 0)
                        rax = 0
                    else
                        rax = sub_1408d4cd0(rdi_1)
    
    if (rbp_1 != 0 && rax != 0 && rdi_1 != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t* rax_12 = sub_140d2dfc0(sub_1408d3ef0(), arg1, 0, 0, 0, 0, 0, 0, 0)
        
        if (sub_1408cf5e0(rax_12, arg1, i, &arg1[9], arg1[6].d).b != 0)
            int64_t rdi_2 = sx.q(arg1[8].d)
            int32_t rax_13 = (rdi_2 + 1).d
            arg1[8].d = rax_13
            
            if (rax_13 s> *(arg1 + 0x44))
                sub_1405a4d70(&arg1[7])
            
            *(arg1[7] + (rdi_2 << 3)) = rax_12
            int64_t rdi_3 = sx.q(arg1[6].d)
            int32_t rax_15 = (rdi_3 + 1).d
            arg1[6].d = rax_15
            
            if (rax_15 s> *(arg1 + 0x34))
                sub_1405a4d70(&arg1[5])
            
            *(arg1[5] + (rdi_3 << 3)) = rbp_1
