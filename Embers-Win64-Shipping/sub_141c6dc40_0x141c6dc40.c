// 函数: sub_141c6dc40
// 地址: 0x141c6dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x28)
void* rbp_2 = &i[sx.q(*(arg1 + 0x30)) * 2]
int64_t rdx
int64_t var_60 = rdx
int128_t var_30 = arg1.o
void** const var_38 = &data_142d42ed8

for (; i != rbp_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    
    if (rbx_1 != 0)
        int32_t rax_1 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_1 = rbx_1[1].d
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (rax_1 == rbx_1[1].d)
                    rbx_1[1].d = rax_1 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    void* rsi_1 = *i
                    
                    if (rsi_1 != 0)
                        void** const* rcx_1 = &var_38
                        sub_141c573a0((*rcx_1)[1](rcx_1), rsi_1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_7 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_7 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    break
                
                rax_1 = 0
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_1 = rbx_1[1].d
                    z_3 = false
            while (not(z_3))

void** const* rcx_5 = &var_38
return (*rcx_5)[2](rcx_5)
