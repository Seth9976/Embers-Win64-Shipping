// 函数: sub_140857cf0
// 地址: 0x140857cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x6bc)
sub_140b33630("Niagara")
int32_t rdx_1 = *(arg1 + 0x6b8) | 0x80
*(arg1 + 0x3c) = 0
*(arg1 + 0x6b8) = rdx_1
*(arg1 + 0x6c4) = 0
int32_t rax_1 = data_143dbb200
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
uint64_t var_3c = zmm0.q
int32_t var_40 = rax_1
int32_t var_34 = rax_1
zmm0.q = zmm0.q
*(arg1 + 0x6c8) = zmm0
*(arg1 + 0x6c0) = 0
*(arg1 + 0x6d8) = var_3c
*(arg1 + 0x6e0) = 1.d
void* rax_3 = *(arg1 + 0x28)
*(arg1 + 0x6b8) = rdx_1 & 0xfffffbff

if (rax_3 != 0)
    void* r13_1 = *(rax_3 + 0x408)
    
    if (r13_1 != 0)
        *(arg1 + 0x6e4) = 1
        *(arg1 + 0x6e8) = 1
        
        if (sub_140856da0(arg1) != 0)
            if (sub_140857090(r13_1) != 0)
                char rax_6
                int32_t rcx_4
                
                if ((*(arg1 + 0x6b8) & 2) == 0)
                    rax_6 = sub_14084dfc0(r13_1, *(arg1 + 0x28))
                    rcx_4 = 0
                
                if ((*(arg1 + 0x6b8) & 2) != 0 || rax_6 != 0)
                    rcx_4 = 1
                
                int32_t rax_9 = (*(arg1 + 0x6b8) & 0xfffffffe) | rcx_4
                *(arg1 + 0x6b8) = rax_9
                
                if ((rax_9.b & 1) == 0)
                    void* rax_20 = *(arg1 + 0x28)
                    int64_t rcx_15
                    
                    if (rax_20 == 0)
                        rcx_15 = 0
                    else
                        rcx_15 = *(rax_20 + 0xc0)
                    
                    *(arg1 + 0x30) = rcx_15
                    int32_t rax_21 = sub_14084aae0(arg1)
                    void var_58
                    int64_t* rax_23 = sub_140865fa0(sub_1408524d0(arg1), &var_58, rax_21, r13_1)
                    int64_t* rcx_19 = rax_23[1]
                    int64_t rdx_8 = *rax_23
                    int64_t var_78 = rdx_8
                    int64_t* var_70 = rcx_19
                    
                    if (rcx_19 != 0)
                        rcx_19[1].d += 1
                        rcx_19 = var_70
                    
                    if (arg1 + 0x18 != &var_78)
                        *(arg1 + 0x18) = rdx_8
                        var_78 = 0
                        sub_1405aeff0(arg1 + 0x20, &var_70)
                        rcx_19 = var_70
                    
                    if (rcx_19 != 0)
                        rcx_19[1].d -= 1
                        
                        if (rcx_19[1].d == 1)
                            int64_t* rbx_4 = var_70
                            (**rbx_4)(rbx_4)
                            int32_t rax_27 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (rax_27 == 1)
                                int64_t* rcx_22 = var_70
                                (*(*rcx_22 + 8))(rcx_22, 1)
                    
                    int64_t* var_50
                    
                    if (var_50 != 0)
                        var_50[1].d -= 1
                        
                        if (var_50[1].d == 1)
                            (**var_50)(var_50)
                            int32_t rax_31 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (rax_31 == 1)
                                (*(*var_50 + 8))(var_50, 1)
                else if (*(arg1 + 0x18) == 0)
                    int64_t* rax_10 = j_sub_140a82f30(0xe88)
                    int64_t* rsi_1 = rax_10
                    
                    if (rax_10 == 0)
                        rsi_1 = nullptr
                    else
                        rax_10[1].d = 1
                        *(rax_10 + 0xc) = 1
                        *rsi_1 = &data_142ddc048
                        sub_140844190(&rsi_1[2])
                    
                    int64_t* var_60_1 = rsi_1
                    void* var_68 = &rsi_1[2]
                    sub_140842040(&var_68, &rsi_1[2])
                    void* var_88 = &rsi_1[2]
                    int64_t* rcx_7 = rsi_1
                    int64_t* var_80 = rcx_7
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d += 1
                        rcx_7 = var_80
                    
                    if (arg1 + 0x18 != &var_88)
                        *(arg1 + 0x18) = &rsi_1[2]
                        var_88 = nullptr
                        sub_1405aeff0(arg1 + 0x20, &var_80)
                        rcx_7 = var_80
                    
                    if (rcx_7 != 0)
                        rcx_7[1].d -= 1
                        
                        if (rcx_7[1].d == 1)
                            int64_t* rbx_2 = var_80
                            (**rbx_2)(rbx_2)
                            int32_t rax_13 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (rax_13 == 1)
                                int64_t* rcx_10 = var_80
                                (*(*rcx_10 + 8))(rcx_10, 1)
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d == 1)
                            (**rsi_1)(rsi_1)
                            int32_t rax_17 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (rax_17 == 1)
                                (*(*rsi_1 + 8))(rsi_1, 1)
                    
                    void* rcx_13 = *(arg1 + 0x28)
                    void* rax_19 = *(rcx_13 + 0xa8)
                    
                    if (rax_19 == 0)
                        rax_19 = sub_141ee69e0(rcx_13)
                    
                    sub_140853350(*(arg1 + 0x18), r13_1, rax_19, 1, 8)
                
                if (*(arg1 + 0xac) s< 0)
                    sub_14084ee30(arg1 + 0xa0, 0)
                else
                    int32_t i_1 = *(arg1 + 0xa8)
                    
                    if (i_1 != 0)
                        int64_t* rsi_3 = *(arg1 + 0xa0) + 8
                        int32_t i
                        
                        do
                            int64_t* rbx_6 = *rsi_3
                            
                            if (rbx_6 != 0)
                                rbx_6[1].d -= 1
                                
                                if (rbx_6[1].d == 1)
                                    (**rbx_6)(rbx_6)
                                    int32_t rax_35 = *(rbx_6 + 0xc)
                                    *(rbx_6 + 0xc) -= 1
                                    
                                    if (rax_35 == 1)
                                        (*(*rbx_6 + 8))(rbx_6, 1)
                            
                            rsi_3 = &rsi_3[2]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    *(arg1 + 0xa8) = 0
                
                sub_140855bb0(arg1)
                sub_14081d9c0(arg1 + 0x150, r13_1 + 0xa8)
                sub_140835b50(arg1 + 0x150)
                sub_14085eb30(arg1, 0x3c23d70a)
                sub_14085e170(arg1)
                sub_141ee8490(*(arg1 + 0x28))
            else if (*(arg1 + 0x6e4) != 4)
                *(arg1 + 0x6e8) = 4
                sub_14084ae80(arg1)
                *(arg1 + 0x6e4) = 4

return sub_140b37f60("Niagara") __tailcall
