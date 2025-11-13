// 函数: sub_1419aad20
// 地址: 0x1419aad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
int64_t* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_8
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_8 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_2 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_10 = sub_140a20af0()
                            uint64_t rdx_1 = zx.q(rax_10)
                            void* const rax_11
                            
                            if (rax_10 != 0)
                                rax_11 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                            else
                                rax_11 = nullptr
                            
                            *(rax_11 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_1.d)
            
            rdi = &rdi[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405c5570(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rdi
            
            if (rbx_1 != 0)
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    char rax
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax != 0))
                        result = (**rbx_1)(rbx_1, 1)
                    else
                        result = 0
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            result = *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_1 = sub_140a20af0()
                            uint64_t rdx = zx.q(rax_1)
                            void* const rax_2
                            
                            if (rax_1 != 0)
                                rax_2 = *((rdx u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx.d) & 0x3fff) * 0x18
                            else
                                rax_2 = nullptr
                            
                            *(rax_2 + 8) = rbx_1
                            result = sub_1405a42f0(&data_143f02390, rdx.d)
            
            rdi = &rdi[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
