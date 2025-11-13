// 函数: sub_141bf3e50
// 地址: 0x141bf3e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x46c) != 0 && *(arg1 + 0x520) == 0)
    void* var_48
    sub_140f75630(*arg2, &var_48)
    void* rbp_1 = var_48
    int64_t* var_40
    
    if (rbp_1 != 0)
        if (var_40 != 0)
            var_40[1].d += 1
        
        void arg_8
        sub_140d3a3a0(&arg_8, arg1)
        int32_t* r12_1 = *(rbp_1 + 8)
        int32_t* rbx_1 = r12_1
        void* rsi_1 = &r12_1[sx.q(*(rbp_1 + 0x10)) * 2]
        
        if (r12_1 != rsi_1)
            do
                if (sub_14077a170(rbx_1, &arg_8).b != 0)
                    int32_t rbx_3 = ((rbx_1 - r12_1) s>> 3).d
                    
                    if (rbx_3 != 0xffffffff)
                        int32_t rcx_3 = *(rbp_1 + 0x10)
                        int32_t rax_3 = rcx_3 - rbx_3 - 1
                        
                        if (rax_3 s>= 1)
                            rax_3 = 1
                        
                        if (rax_3 != 0)
                            int64_t r9_1 = *(rbp_1 + 8)
                            memcpy(r9_1 + (sx.q(rbx_3) << 3), r9_1 + (sx.q(rcx_3 - rax_3) << 3), 
                                rax_3 << 3)
                            rcx_3 = *(rbp_1 + 0x10)
                        
                        *(rbp_1 + 0x10) = rcx_3 - 1
                        sub_1405c53d0(rbp_1 + 8)
                    
                    break
                
                rbx_1 = &rbx_1[2]
            while (rbx_1 != rsi_1)
        
        if (*(rbp_1 + 0x10) == 0)
            void* rcx_7 = *arg2
            int128_t var_38 = zx.o(0)
            sub_140f8b110(rcx_7, &var_38)
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp5_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp3_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

int64_t* rbx_5 = arg2[1]

if (rbx_5 == 0)
    return 

rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return 

(**rbx_5)(rbx_5)
int32_t temp1_1 = *(rbx_5 + 0xc)
*(rbx_5 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_5 + 8))(rbx_5, 1)
