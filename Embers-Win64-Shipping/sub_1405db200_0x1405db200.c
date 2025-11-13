// 函数: sub_1405db200
// 地址: 0x1405db200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg2

if ((*(*arg1 + 0x260))() != 3 && (*(*arg1 + 0x260))(arg1) != 1)
    rdi = 0

uint64_t result = (*(*arg1 + 0x260))(arg1)

if (rdi == 0)
    if (result.b != 4)
        sub_1405daf00(arg1, 4)
        sub_1405a46b0(&data_14399fd90, arg1)
        
        while (true)
            int32_t rax_6 = 0
            
            if (0 == *(arg1 + 0xfc))
                *(arg1 + 0xfc) = 0
            else
                rax_6 = *(arg1 + 0xfc)
            
            if (rax_6 s<= 0)
                bool z_1
                
                if (0 == *(arg1 + 0xfa))
                    *(arg1 + 0xfa) = 0
                    z_1 = true
                else
                    int64_t rax_7
                    rax_7.b = *(arg1 + 0xfa)
                    z_1 = false
                
                if (not(z_1))
                    break
            
            sub_1419a21e0(0)
        
        (*(*arg1 + 0x298))(arg1, 0)
        int64_t* rdi_1 = arg1[0x11]
        
        if (rdi_1 != 0)
            int32_t rax_9 = rdi_1[1].d
            
            if (rax_9 == 0)
                rdi_1 = nullptr
            else
                rdi_1[1].d = rax_9 + 1
        
        int64_t* rcx_6 = nullptr
        
        if (rdi_1 != 0)
            rcx_6 = arg1[0x10]
        
        if (*(arg1 + 0xf9) != 0 && rcx_6 != 0)
            sub_1423465b0(rcx_6, 0, 0)
            *(arg1 + 0xf9) = 0
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        arg1[0xf] = 0
        void var_28
        
        if (&arg1[0x10] != &var_28)
            arg1[0x10] = 0
            int64_t* rcx_9 = arg1[0x11]
            arg1[0x11] = 0
            
            if (rcx_9 != 0)
                int32_t temp3_1 = *(rcx_9 + 0xc)
                *(rcx_9 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_9 + 8))(rcx_9, 1)
        
        int32_t rax_22 = *(arg1 + 0x64)
        void* rsi_2 = arg1[0xb]
        int32_t i_2 = arg1[0xc].d
        
        if (rax_22 s< 0)
            if (i_2 != 0)
                int32_t i
                
                do
                    int64_t* rdi_3 = *(rsi_2 + 0x38)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t rax_20 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rax_20 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                    
                    sub_1405d1550(rsi_2)
                    rsi_2 += 0x40
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                rax_22 = *(arg1 + 0x64)
            
            arg1[0xc].d = 0
            
            if (rax_22 != 0)
                sub_1405a52a0(&arg1[0xb], 0)
        else
            if (i_2 != 0)
                int32_t i_1
                
                do
                    int64_t* rdi_2 = *(rsi_2 + 0x38)
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t rax_16 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (rax_16 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    sub_1405d1550(rsi_2)
                    rsi_2 += 0x40
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            arg1[0xc].d = 0
        
        __builtin_memcpy(&arg1[0x17], 
            "\x00\x05\x00\x00\xd0\x02\x00\x00\x12\x00\x00\x00\x00\x05\x00\x00\xd0\x02\x00\x00\x12\x00\x"
        "00\x00\x00", 
            0x19)
        int64_t rax_23 = data_143dbb180
        *(arg1 + 0xd4) = rax_23.d
        arg1[0x1b].d = (rax_23 u>> 0x20).d
        *(arg1 + 0xdc) = 0x100
        arg1[0x1c].b = 0
        int32_t rax_25 = *(arg1 + 0xf4)
        arg1[0x1e].d = 0
        
        if (rax_25 s< 0 && rax_25 != 0)
            sub_1405947f0(&arg1[0x1d], 0)
        
        result = arg1[0x1d]
        
        if (result != 0)
            *result = 0
else if (result.b != 4)
    result = (*(*arg1 + 0x260))(arg1)
    
    if (result.b != 3)
        sub_1405daf00(arg1, 3)
        
        while (true)
            result = 0
            
            if (0 == *(arg1 + 0xfc))
                *(arg1 + 0xfc) = 0
            else
                result = zx.q(*(arg1 + 0xfc))
            
            if (result.d s<= 0)
                break
            
            sub_1419a21e0(0)

return result
