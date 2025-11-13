// 函数: sub_142384460
// 地址: 0x142384460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t rcx = 0
    
    do
        rcx += 0x10
        i += 1
        void* rdx = *(rcx + *(arg1 + 0x10) - 0x10)
        *(rdx + 0x5c) -= 1
    while (i s< *(arg1 + 0x18))

sub_14095cd40(arg1 + 0x10, 0)
int32_t i_1 = 0

if (*(arg1 + 0x28) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_1 = *(arg1 + 0x20)
        int64_t* rbx_1 = *(rdi_1 + r14_1 + 8)
        
        if (rbx_1 != 0)
            int32_t rax_2 = rbx_1[1].d
            
            if (rax_2 != 0)
                rbx_1[1].d = rax_2 + 1
                
                if (rbx_1 != 0)
                    void* rdi_2 = *(rdi_1 + r14_1)
                    
                    if (rdi_2 != 0 && *(rdi_2 + 0x12) == 0)
                        *(rdi_2 + 0x12) = 1
                        *(rdi_2 + 0x98) = 0
                        
                        if (*(rdi_2 + 0x11) == 0)
                            rbx_1[1].d += 1
                            int64_t var_48 = 0
                            int32_t var_40_1 = 0
                            void* var_38 = rdi_2
                            int64_t* var_30_1 = rbx_1
                            sub_14238bbe0(rdi_2 + 0x28, &var_38, &var_48)
                            sub_14239b010(rdi_2)
                        
                        sub_142392400(rdi_2)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        i_1 += 1
        r14_1 += 0x10
    while (i_1 s< *(arg1 + 0x28))

sub_14238b300(arg1 + 0x20, 0)
sub_140d94cb0(arg1 + 0x20)
sub_140596d80(arg1 + 0x10)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
