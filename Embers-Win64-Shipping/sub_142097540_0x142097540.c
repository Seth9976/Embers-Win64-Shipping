// 函数: sub_142097540
// 地址: 0x142097540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (arg1[0x4d].d != 0)
    sub_1420a6540(arg1)

if (arg1[0x44] != 0)
    if (sub_140d3e110(data_143f5b298 + 0xe0) == 0)
        sub_140d3a3a0(data_143f5b298 + 0xe0, arg1)
    
    int32_t var_5c_1 = 0x80
    int32_t i = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    int64_t var_d8
    int64_t* var_d0
    int64_t* var_c8
    int32_t var_c0
    
    if (arg1[0x4a].d s> 0)
        var_c0 = &var_d0
        
        do
            int64_t* rax_4 = arg1[0x49] + sx.q(i) * 0x18
            var_d0 = rax_4
            var_c8 = rax_4
            sub_140a5c490(&var_88, &var_d8, &var_c8, nullptr)
            i += 1
        while (i s< arg1[0x4a].d)
    
    arg1[0x4b].d |= 1
    
    if ((*(*arg1 + 0x150))(arg1) != 0 && sub_142437e30((*(*arg1 + 0x150))(arg1), 0, 1) != 0)
        int64_t* rbx_1 = *((*(*arg1 + 0x150))(arg1) + 0x130)
        
        if (rbx_1 != 0)
            void* rax_12 = sub_1424bfe50()
            void* rcx_10 = rbx_1[2]
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s<= *(rcx_10 + 0x38)
                    && *(*(rcx_10 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                char rax_16 = (*(*rbx_1 + 0x6f8))(rbx_1, rax_13)
                arg1[0x4b].d &= 0xfffffffe
                arg1[0x4b].d |= zx.d(rax_16) & 1
    
    void* rax_19 = arg1[0x44]
    int32_t i_1 = 0
    int32_t i_3 = 0
    int64_t var_80
    
    if (*(rax_19 + 0x38) s> 0)
        int64_t* rcx_12 = nullptr
        int64_t* var_e0_1 = nullptr
        
        do
            void* r13_1 = *(rcx_12 + *(rax_19 + 0x30))
            
            if (r13_1 == 0)
                goto label_1420978d8
            
            void* rax_21 = sub_1424cd2f0()
            void* rdx_5 = *(r13_1 + 0x10)
            int64_t rax_22 = sx.q(*(rax_21 + 0x38))
            int64_t* rax_47
            int64_t* r8_8
            
            if (rax_22.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_22 << 3)) != rax_21 + 0x30)
                i_1 = i_3
                rcx_12 = var_e0_1
            label_1420978d8:
                
                if ((*(r13_1 + 0x4c) & 4) == 0)
                    int64_t rbx_2 = *(r13_1 + 0x18)
                    var_d8 = rbx_2
                    
                    if (var_80.d == var_54_1)
                    label_14209794d:
                        var_d0 = nullptr
                        
                        if ((sub_140b5b8a0(0, 0) & 1) != 0)
                            sub_140d19010(arg1, 
                                NewObject with empty name can't be used to create default subobjects "
                            "(inside of UObject derived class constructor) as it produces 
                                    incon")
                        
                        rax_47 = sub_1424cd3c0()
                        r8_8 = var_d0
                    label_1420979a0:
                        void* rax_48 = sub_140d2dfc0(rax_47, arg1, r8_8, 8, 0, 0, 0, 0, 0)
                        int64_t rsi_2 = sx.q(arg1[0x4d].d)
                        int32_t rcx_34 = (rsi_2 + 1).d
                        arg1[0x4d].d = rcx_34
                        
                        if (rcx_34 s> *(arg1 + 0x26c))
                            sub_1405a4d70(&arg1[0x4c])
                        
                        *(arg1[0x4c] + (rsi_2 << 3)) = rax_48
                        (*(*rax_48 + 0x280))(rax_48, r13_1, 0)
                        i_1 = i_3
                        rcx_12 = var_e0_1
                    else
                        void var_50
                        void* rcx_30 = &var_50
                        int64_t rdx_13 =
                            sx.q(var_40_1 - 1) & sx.q(sub_140b5ead0(rbx_2.d) + var_d8:4.d)
                        
                        if (var_48_1 != 0)
                            rcx_30 = var_48_1
                        
                        int32_t rax_45 = *(rcx_30 + (rdx_13 << 2))
                        
                        if (rax_45 == 0xffffffff)
                            goto label_14209794d
                        
                        int64_t r8_9 = var_88
                        int64_t rdx_14
                        
                        while (true)
                            rdx_14 = sx.q(rax_45)
                            int64_t rcx_31 = rdx_14 * 3
                            
                            if (*(r8_9 + (rcx_31 << 3)) == rbx_2)
                                break
                            
                            rax_45 = *(r8_9 + (rcx_31 << 3) + 0x10)
                            
                            if (rax_45 == 0xffffffff)
                                goto label_14209794d
                        
                        if (rax_45 == 0xffffffff)
                            goto label_14209794d
                        
                        void* r15_2 = r8_9 + rdx_14 * 0x18
                        
                        if (r15_2 == 0)
                            goto label_14209794d
                        
                        void* r15_3 = *(r15_2 + 8)
                        
                        if (r15_3 == 0 || *(r15_3 + 0x10) s<= 0)
                            goto label_14209794d
                        
                        int64_t r13_2 = 0
                        var_d8.d = 0
                        
                        do
                            int64_t rax_55 = *(*(r15_3 + 8) + r13_2)
                            
                            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                sub_140d19010(arg1, 
                                    NewObject with empty name can't be used to create default subobjects "
                                "(inside of UObject derived class constructor) as it produces 
                                        incon")
                            
                            void* rax_58 = sub_140d2dfc0(sub_1424cd3c0(), arg1, 0, 8, 0, 0, 0, 0, 0)
                            int64_t r14_3 = sx.q(arg1[0x4d].d)
                            int32_t rcx_51 = (r14_3 + 1).d
                            arg1[0x4d].d = rcx_51
                            
                            if (rcx_51 s> *(arg1 + 0x26c))
                                sub_1405a4d70(&arg1[0x4c])
                            
                            *(arg1[0x4c] + (r14_3 << 3)) = rax_58
                            (*(*rax_58 + 0x280))(rax_58, r13_1, rax_55)
                            r13_2 += 8
                            var_d8.d += 1
                        while (var_d8.d + 1 s< *(r15_3 + 0x10))
                        
                        i_1 = i_3
                        rcx_12 = var_e0_1
            else
                if (sub_14243ade0((*(*arg1 + 0x150))(arg1, rdx_5)) == 0)
                    int64_t* var_b0_1 = nullptr
                    
                    if ((sub_140b5b8a0(0, 0) & 1) != 0)
                        sub_140d19010(arg1, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    rax_47 = sub_1424cd650()
                    r8_8 = var_b0_1
                    goto label_1420979a0
                
                sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_c8)
                int32_t rax_29 = var_c0
                
                while (true)
                    int64_t* rdx_7 = var_c8
                    int64_t rcx_17
                    
                    if (rax_29 s< 0 || rax_29 s>= rdx_7[1].d)
                        rcx_17.b = 0
                    else
                        rcx_17.b = 1
                    
                    if (rcx_17.b == 0)
                        break
                    
                    void* rax_31
                    void* r8_5
                    rax_31, rcx_17, r8_5 = sub_140d3c6e0(*rdx_7 + (sx.q(rax_29) << 3))
                    
                    if (rax_31 != 0)
                        char rax_32
                        rax_32, rcx_17 = sub_142099630(arg1, rax_31, r8_5)
                        
                        if (rax_32 != 0)
                            uint64_t var_b8_1 = 0
                            
                            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                sub_140d19010(arg1, 
                                    NewObject with empty name can't be used to create default subobjects "
                                "(inside of UObject derived class constructor) as it produces 
                                        incon")
                            
                            void* rax_35 =
                                sub_140d2dfc0(sub_1424cd650(), arg1, var_b8_1, 8, 0, 0, 0, 0, 0)
                            int64_t r14_1 = sx.q(arg1[0x4d].d)
                            int32_t rcx_23 = (r14_1 + 1).d
                            arg1[0x4d].d = rcx_23
                            
                            if (rcx_23 s> *(arg1 + 0x26c))
                                sub_1405a4d70(&arg1[0x4c])
                            
                            *(arg1[0x4c] + (r14_1 << 3)) = rax_35
                            (*(*rax_35 + 0x280))(rax_35, r13_1, rax_31)
                    
                    rax_29 = var_c0 + 1
                    var_c0 = rax_29
                
                i_1 = i_3
                rcx_12 = var_e0_1
            rax_19 = arg1[0x44]
            i_1 += 1
            rcx_12 = &rcx_12[1]
            i_3 = i_1
            var_e0_1 = rcx_12
        while (i_1 s< *(rax_19 + 0x38))
    
    int32_t i_2 = 0
    
    if (arg1[0x4d].d s> 0)
        void** rsi_3 = nullptr
        
        do
            void* rcx_38 = *(*(rsi_3 + arg1[0x4c]) + 0x30)
            
            if (rcx_38 != 0)
                sub_141dba030(rcx_38, arg1)
            
            i_2 += 1
            rsi_3 = &rsi_3[1]
        while (i_2 s< arg1[0x4d].d)
    
    i_1.b = 1
    sub_142087f30(arg1, i_1.b)
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    bool cond:2_1 = var_80:4.d == 0
    var_80.d = 0
    
    if (not(cond:2_1))
        sub_1405a5130(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    int64_t var_78
    sub_14059a8e0(&var_78, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_44 = var_88
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)

sub_1420a3e80(arg1)
int64_t rdx_19
rdx_19.b = 1
int64_t result = (*(*arg1 + 0x660))(arg1, rdx_19)
__security_check_cookie(rax_1 ^ &var_138)
return result
