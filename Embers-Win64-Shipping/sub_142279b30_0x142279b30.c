// 函数: sub_142279b30
// 地址: 0x142279b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0

if (sub_141dcdc50(arg1) != 3)
    int64_t* rdi_1 = *((*(*arg1 + 0x150))(arg1) + 0x128)
    
    if (rdi_1 != 0)
        int64_t rcx_2 = *(sub_141dcc7c0(arg1) + 0x370)
        
        if (arg2 == 0)
            if (rcx_2 != 0)
                rbp = zx.q((*(*rdi_1 + 0x6c8))(rdi_1))
        else if (rcx_2 == 0)
            int64_t var_28 = 0
            int32_t var_20_1 = 0
            sub_140692f90(&var_28, arg3)
            rbp = zx.q((*(*rdi_1 + 0x6c0))(rdi_1, arg1, &var_28))
            int64_t* rax_6 = sub_141dcc7c0(arg1)
            
            if (rax_6 != 0 && sub_141dcdc50(arg1) != 3)
                int64_t* rbx_1 = arg1[0x53]
                
                if (rbx_1 != 0)
                    void* rax_8 = sub_14254f450()
                    void* rdx_2 = rbx_1[2]
                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                    
                    if (rax_9.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                        if ((*(*rbx_1 + 0x268))(rbx_1, rdx_2) != 0)
                            rbx_1 = rbx_1[0x346]
                        
                        int64_t arg_20
                        sub_140d3a3a0(&arg_20, rax_6)
                        
                        if (rbx_1[0x26f].d != *(rbx_1 + 0x13a4))
                            int64_t rdx_4 = arg_20
                            void* r9_1 = &rbx_1[0x275]
                            void* r8_2 = *(r9_1 + 8)
                            uint32_t r11_2 = (rdx_4 u>> 0x20).d
                            
                            if (r8_2 != 0)
                                r9_1 = r8_2
                            
                            int32_t i = *(r9_1 +
                                (((sx.q(r11_2) ^ sx.q(rdx_4.d)) & (sx.q(rbx_1[0x277].d) - 1)) << 2))
                            
                            if (i != 0xffffffff)
                                int64_t r10_1 = rbx_1[0x26e]
                                
                                do
                                    int64_t i_1 = sx.q(i)
                                    int64_t rax_17 = i_1 * 3
                                    uint64_t rax_18 = *(r10_1 + (rax_17 << 3))
                                    
                                    if (rax_18.d != rdx_4.d || (rax_18 u>> 0x20).d != r11_2)
                                        rax_18.b = 0
                                    else
                                        rax_18.b = 1
                                    
                                    if (rax_18.b != 0)
                                        if (i != 0xffffffff)
                                            void* rcx_13 = r10_1 + i_1 * 0x18
                                            
                                            if (rcx_13 != 0 && *(rcx_13 + 8) != 0)
                                                void* rax_20 = sub_141dc3780(rax_6)
                                                
                                                if (rax_20 != 0)
                                                    *(rax_20 + 0xd0) |= 1
                                        
                                        break
                                    
                                    i = *(r10_1 + (rax_17 << 3) + 0x10)
                                while (i != 0xffffffff)

sub_140745b20(arg3)
return zx.q(rbp.b)
