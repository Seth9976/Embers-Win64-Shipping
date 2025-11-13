// 函数: sub_140f04f10
// 地址: 0x140f04f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) == 0)
    sub_140a31300(arg2, (zx.o(0)).q, 1)
else
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 == 0)
        sub_140a31300(arg2, (zx.o(0)).q, 1)
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            sub_140a31300(arg2, (zx.o(0)).q, 1)
        else
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140f04f5a
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140f04f5a:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            sub_140a31300(arg2, fconvert.d(sub_140f488d0(rdx, arg3)), 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
