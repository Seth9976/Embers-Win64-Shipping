// 函数: sub_1423dee50
// 地址: 0x1423dee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x478))(arg1, arg3)
int64_t* i

for (i = arg1[0x187]; i != &i[sx.q(arg1[0x188].d)]; i = &i[1])
    void* rbx_1 = *i
    
    if (*(rbx_1 + 0x278) == arg2)
        sub_14241df00(rbx_1 + 0xd0, u"Listen", nullptr, &data_143de5830)
        sub_14241df00(rbx_1 + 0xd0, &data_1432ddb18, nullptr, &data_143de5830)
        void** rax_2 = arg1[0x187]
        void* rcx_5 = &rax_2[sx.q(arg1[0x188].d)]
        char* rbx_2
        
        if (rax_2 == rcx_5)
        label_1423def53:
            rbx_2 = sub_1423d6f90(data_143f5b298, 0)
        else
            while (true)
                rbx_2 = *rax_2
                
                if (*(rbx_2 + 0x278) == arg2)
                    break
                
                rax_2 = &rax_2[1]
                
                if (rax_2 == rcx_5)
                    goto label_1423def53
        
        if (*(rbx_2 + 0xb8) != u"?closed")
            int32_t rdi_1 = 0
            bool cond:0_1 = *(rbx_2 + 0xc4) == 8
            *(rbx_2 + 0xc0) = 0
            
            if (not(cond:0_1))
                sub_1405947f0(&rbx_2[0xb8], 8)
                rdi_1 = *(rbx_2 + 0xc0)
            
            *(rbx_2 + 0xc0) = rdi_1 + 8
            
            if (rdi_1 + 8 s> *(rbx_2 + 0xc4))
                sub_140594770(&rbx_2[0xb8])
            
            **(rbx_2 + 0xb8) = *u"?closed"
        
        rbx_2[0xc8] = 0
        i = sub_1424130d0(&rbx_2[0xd0], u"Listen")
        
        if (i.b != 0)
            return sub_14241df00(&rbx_2[0xd0], u"Listen", nullptr, &data_143de5830) __tailcall
        
        goto label_1423df259

if (arg3 != 0)
    if (arg2 != 0)
        return sub_1423d84f0(arg1, arg2, arg3[0x32]) __tailcall
    
    (*(*arg3 + 0x2b0))(arg3)
    (*(*arg3 + 0x2b8))(arg3)
    int64_t* rbx_3 = arg1[0x187]
    int64_t r12_1 = 0
    i = &rbx_3[arg1[0x188]]
    uint64_t r14_2 = sx.q(arg1[0x188].d) << 3 u>> 3
    
    if (rbx_3 u> i)
        r14_2 = 0
    
    uint64_t arg_8 = r14_2
    
    if (r14_2 != 0)
        do
            char* r13_1 = *rbx_3
            
            if (*r13_1 == 1)
                void var_108
                sub_1423fd810(&var_108, nullptr)
                sub_1424171b0(&var_108, u"DefaultPlayer", &data_143de5830)
                int64_t* rax_10 = sub_141520bd0()
                void* r15_1 = rax_10[0x23]
                
                if (r15_1 != 0)
                label_1423df0c7:
                    int64_t var_118
                    int64_t* rax_11 = sub_14151ffb0(&var_118)
                    int32_t rsi_3 = *(r15_1 + 0x30)
                    int32_t rax_12 = rax_11[1].d
                    int16_t* r14_3
                    
                    if (rax_12 s> 1)
                        int32_t r14_4 = rsi_3 - 1
                        
                        if (rsi_3 == 0)
                            r14_4 = 0
                        
                        int32_t r8_5
                        
                        if (rax_12 == 0)
                            r8_5 = rax_12 + 1
                        
                        if (rax_12 != 0 || r14_4 == 0)
                            r8_5 = 0
                        
                        int16_t* rax_13 = *rax_11
                        *rax_11 = 0
                        int32_t rcx_20 = rax_11[1].d
                        int16_t* var_148 = rax_13
                        int32_t rax_14 = *(rax_11 + 0xc)
                        rax_11[1] = 0
                        int32_t rdx_10 = r8_5 + r14_4 + rcx_20
                        
                        if (rdx_10 s> rax_14)
                            sub_1405947f0(&var_148, rdx_10)
                        
                        sub_140a20ba0(&var_148, *(r15_1 + 0x28), r14_4)
                        r14_3 = var_148
                        rsi_3 = rcx_20
                        int32_t var_12c_2 = rax_14
                        int32_t var_140_1
                        var_140_1.q = 0
                        var_148 = nullptr
                    else
                        int64_t r15_2 = *(r15_1 + 0x28)
                        r14_3 = nullptr
                        uint64_t var_138 = 0
                        
                        if (rsi_3 != 0)
                            sub_1405a4c70(&var_138, rsi_3, 0)
                            r14_3 = var_138
                            memcpy(r14_3, r15_2, rsi_3 * 2)
                        else
                            int32_t var_12c_1 = 0
                    
                    int16_t* const r8_7 = &data_142d40450
                    
                    if (rsi_3 != 0)
                        r8_7 = r14_3
                    
                    int64_t var_128
                    void var_98
                    sub_140597da0(&r13_1[0xb8], 
                        sub_142423a30(sub_1423fb9e0(&var_98, &var_108, r8_7, 1), &var_128, 0))
                    int64_t rcx_26 = var_128
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    sub_14094c030(&var_98)
                    
                    if (r14_3 != 0)
                        sub_140a74f90(r14_3)
                    
                    int64_t rcx_29 = var_118
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    r14_2 = arg_8
                    r13_1[0xc8] = 1
                else
                    int64_t rdx_5 = *rax_10
                    (*(rdx_5 + 0x390))(rax_10, rdx_5)
                    r15_1 = rax_10[0x23]
                    
                    if (r15_1 != 0)
                        goto label_1423df0c7
                
                i = sub_14094c030(&var_108)
            
            rbx_3 = &rbx_3[1]
            r12_1 += 1
        while (r12_1 != r14_2)

label_1423df259:
return i
