// 函数: sub_14234e6b0
// 地址: 0x14234e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x28)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x30)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    
    if (rbx_1 != 0)
        int32_t rax = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax = rbx_1[1].d
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (rax == rbx_1[1].d)
                    rbx_1[1].d = rax + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    int64_t rsi_1 = *i
                    
                    if (rsi_1 != 0)
                        void* rax_2 = *(arg2 + 0x10)
                        void* rcx_1 = arg2 + 0x20
                        
                        if (rax_2 != 0)
                            rcx_1 = rax_2
                        
                        (*arg2)((*(*rcx_1 + 8))(rcx_1), rsi_1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        rax = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    break
                
                rax = 0
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax = rbx_1[1].d
                    z_3 = false
            while (not(z_3))

if (*arg2 == 0)
    return 

void* rax_7 = *(arg2 + 0x10)
void* rcx_5 = arg2 + 0x20

if (rax_7 != 0)
    rcx_5 = rax_7

jump(*(*rcx_5 + 0x10))
