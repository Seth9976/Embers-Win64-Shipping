// 函数: sub_140abbd90
// 地址: 0x140abbd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (wcsncmp(arg2, u"LOCTABLE", 8) == 0)
    int16_t i = arg2[8]
    void* rdx = &arg2[8]
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rdx + 2)
            rdx += 2
            
            if (i == 0)
                break
    
    void* rax_1 = nullptr
    
    if (*rdx == 0x28)
        rax_1 = rdx
    
    void* rcx_1 = rax_1 + 2
    
    if (rax_1 == 0)
        rcx_1 = rax_1
    
    if (rcx_1 != 0)
        int16_t i_1 = *rcx_1
        int16_t* var_50 = nullptr
        int32_t var_48 = 0
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = *(rcx_1 + 2)
                rcx_1 += 2
                
                if (i_1 == 0)
                    break
        
        void* rax_2 = sub_140abd7c0(rcx_1, &var_50)
        int64_t var_78
        int16_t* rax_3
        int16_t* rcx_4
        
        if (rax_2 != 0)
            int16_t* const rdx_2 = &data_142d40450
            
            if (var_48 != 0)
                rdx_2 = var_50
            
            sub_140b58260(&var_78, rdx_2, 1)
            rax_3 = sub_140ac5870(rax_2, 0x2c)
            rcx_4 = rax_3
        
        int16_t* result
        
        if (rax_2 == 0 || rax_3 == 0)
            result = nullptr
        else
            uint64_t var_70 = 0
            int64_t var_68_1 = 0
            int16_t i_2 = *rax_3
            
            if (i_2 != 0)
                while (i_2 == 9 || i_2 == 0x20)
                    i_2 = rcx_4[1]
                    rcx_4 = &rcx_4[1]
                    
                    if (i_2 == 0)
                        break
            
            void* rax_4 = sub_140abd7c0(rcx_4, &var_70)
            int16_t* result_1
            
            if (rax_4 != 0)
                result_1 = sub_140ac5870(rax_4, 0x29)
                result = result_1
            
            if (rax_4 == 0 || result_1 == 0)
                result = nullptr
            else
                void*** rax_5 = sub_140a941e0()
                void*** var_38_1 = rax_5
                void* var_40 = &rax_5[2]
                sub_1408ff2f0(&var_40, &rax_5[2])
                void* var_60 = &rax_5[2]
                void*** rcx_7 = rax_5
                void*** var_58 = rcx_7
                
                if (rax_5 != 0)
                    rax_5[1].d += 1
                    rcx_7 = var_58
                
                if (arg1 + 0x10 != &var_60)
                    *(arg1 + 0x10) = &rax_5[2]
                    var_60 = nullptr
                    sub_1405aeff0(arg1 + 0x18, &var_58)
                    rcx_7 = var_58
                
                if (rcx_7 != 0)
                    rcx_7[1].d -= 1
                    
                    if (rcx_7[1].d == 1)
                        void*** rbx_3 = var_58
                        (**rbx_3)(rbx_3)
                        int32_t rax_8 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_8 == 1)
                            void*** rcx_10 = var_58
                            (*rcx_10)[1](rcx_10, 1)
                
                if (rax_5 != 0)
                    rax_5[1].d -= 1
                    
                    if (rax_5[1].d == 1)
                        (**rax_5)(rax_5)
                        int32_t rsi_1 = *(rax_5 + 0xc)
                        *(rax_5 + 0xc) -= 1
                        
                        if (rsi_1 == 1)
                            (*rax_5)[1](rax_5, zx.q(rsi_1))
                
                void* rdi_2 = *(arg1 + 0x10)
                *(rdi_2 + 0x18) = var_78
                *(rdi_2 + 0x10) = arg1 + 8
                
                if (rdi_2 + 0x20 != &var_70)
                    uint64_t rcx_13 = *(rdi_2 + 0x20)
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    *(rdi_2 + 0x20) = var_70
                    var_70 = 0
                    *(rdi_2 + 0x28) = var_68_1.d
                    *(rdi_2 + 0x2c) = var_68_1:4.d
                    int64_t var_68_2 = 0
                
                sub_140a84cd0(rdi_2 + 0x18, rdi_2 + 0x20)
                *(rdi_2 + 0x30) = 0
                sub_140aa4650(rdi_2)
                *(arg1 + 8) = 0
            
            uint64_t rcx_16 = var_70
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        
        int16_t* rcx_17 = var_50
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        return result

return 0
