// 函数: sub_140f02050
// 地址: 0x140f02050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (*(arg1 - 0x50) != 0)
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140f02094
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140f02094:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            int128_t zmm6 = *(rdx + 0x3a8)
            
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
            
            result.o = zmm6
            return result

result.o = zx.o(0)
return result
