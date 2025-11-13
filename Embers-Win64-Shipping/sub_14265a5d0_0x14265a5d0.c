// 函数: sub_14265a5d0
// 地址: 0x14265a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0)
    int64_t* rdi_1 = *(rax + 0x120)
    
    if (rdi_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = rdi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rbx_1 = arg5
            
            if (rbx_1 != 0)
            label_14265a683:
                void var_28
                int64_t* rax_5 = sub_14265ad90(&var_28, rbx_1, arg1, arg6)
                int64_t var_38 = *rax_5
                void* rcx_5 = rax_5[1]
                void* var_30_1 = rcx_5
                
                if (rcx_5 != 0)
                    *(rcx_5 + 8) += 1
                
                int32_t rax_6 = (*(*rbx_1 + 0x718))(rbx_1, arg2, arg3, arg4, &var_38, 0)
                int64_t* rbx_2 = rax_5[1]
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rdi_3 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rdi_3 == 1)
                            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_3))
                
                return zx.q(rax_6)
            
            void* rax_4 = sub_142657070(rdi_1, 0)
            rbx_1 = rax_4
            
            if (rax_4 != 0)
                goto label_14265a683

return 1
