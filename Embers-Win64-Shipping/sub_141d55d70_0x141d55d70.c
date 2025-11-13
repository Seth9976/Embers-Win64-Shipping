// 函数: sub_141d55d70
// 地址: 0x141d55d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r14 = arg1
int64_t* rcx = *arg2
int64_t* rax_1 = (*(*rcx + 0x30))(rcx)
int64_t* rax_2

if (rax_1 != 0)
    rax_2 = (*(*rax_1 + 8))(rax_1)

int64_t* result
int64_t var_98
int64_t arg_10

if (rax_1 == 0 || rax_2 == 0)
    int64_t* rbx_13 = *arg2
    int32_t rax_48 = sub_141d58640(arg2)
    int64_t r8_2 = *rbx_13
    sub_141d56270(r14, (*(r8_2 + 8))(rbx_13, &arg_8, r8_2), rax_48, arg4, arg5, arg6, arg3, arg7)
    int64_t rax_51
    
    if (*(r14 + 0xa8) != 0 && *(r14 + 0x58) != 0)
        int64_t* rcx_30 = *arg2
        rax_51 = (**rcx_30)(rcx_30)
    
    if (*(r14 + 0xa8) == 0 || *(r14 + 0x58) == 0 || rax_51 != 0)
        int64_t* rbx_14 = *arg2
        int32_t rdi_3 = *((*(*rbx_14 + 8))(rbx_14, &arg_8) + 4)
        int32_t* rax_55 = (*(*rbx_14 + 8))(rbx_14, &arg_10)
        int64_t rsi_2 = *(r14 + 8)
        int32_t var_84_1 = rdi_3
        int64_t* rdi_4 = *arg2
        int32_t var_88_1 = *rax_55
        var_98 = 0
        int64_t var_90_1 = 0
        int64_t rax_57 = (**rdi_4)(rdi_4)
        int64_t rdx_10 = *rdi_4
        int32_t rax_58 = (*(rdx_10 + 0x28))(rdi_4, rdx_10)
        int64_t* rcx_37 = data_143f0f180
        char var_f0_2
        var_f0_2.d = rax_58
        result = (*(*rcx_37 + 0x520))(rcx_37, &data_143f02b98, rsi_2, 0, &var_98, var_f0_2, rax_57)
        *(r14 + 0x59) = 0
    else
        result = sub_141d552f0(r14, arg2, arg8)
        *(r14 + 0x59) = 0
else if (*(r14 + 0x20) == rax_2)
    int64_t* rbx_2 = *arg2
    int32_t rax_6 = sub_141d58640(arg2)
    int64_t r8 = *rbx_2
    sub_141d56270(r14, (*(r8 + 0x20))(rbx_2, &arg_10, r8), rax_6, arg4, arg5, arg6, arg3, arg7)
    uint128_t zmm0_1 = zx.o(data_143dbb188.q)
    bool cond:0_1 = data_143f0f19d == 0
    int32_t rax_8 = data_143dbb190
    int64_t r15_1 = *(r14 + 0x88)
    uint64_t var_d8_1 = zmm0_1.q
    uint64_t var_cc_1 = zmm0_1.q
    uint64_t var_c0_1 = zmm0_1.q
    int32_t var_d0_1 = rax_8
    int32_t var_c4_1 = rax_8
    int64_t var_b4_1 = 0
    int64_t var_ac_1 = 1
    int32_t var_a4_1 = 0
    arg_10 = r15_1
    
    if (cond:0_1)
        int64_t r14_1 = arg_10
        int32_t i = 0
        int32_t var_48_1 = 1
        uint128_t var_80_1 = var_d8_1.o
        uint128_t var_70_1 = var_cc_1:4.o
        uint128_t var_60_1 = rax_8.o
        uint64_t var_50_1 = var_ac_1
        
        do
            void*** rbx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_23 = &rbx_10[0xc]
            
            if (rax_23 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x68)
                rbx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_23 = &rbx_10[0xc]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_23
            *data_143f02ba0 = rbx_10
            data_143f02ba0 = &rbx_10[1]
            rbx_10[1] = 0
            *rbx_10 = &data_142da7788
            *(rbx_10 + 0x10) = var_80_1
            *(rbx_10 + 0x20) = var_70_1
            *(rbx_10 + 0x30) = var_60_1
            rbx_10[8] = var_50_1
            rbx_10[9].d = var_48_1
            rbx_10[0xa] = rax_2
            rbx_10[0xb] = r14_1
            
            if ((*(*rax_2 + 8))(rax_2) == 0)
                int64_t* rcx_19 = rbx_10[0xa]
                
                if ((*(*rcx_19 + 0x10))(rcx_19) == 0)
                    int64_t* rcx_20 = rbx_10[0xa]
                    
                    if ((*(*rcx_20 + 0x18))(rcx_20) == 0)
                        int64_t* rcx_21 = rbx_10[0xa]
                        (*(*rcx_21 + 0x20))(rcx_21)
            
            int64_t* rcx_22 = rbx_10[0xb]
            
            if ((*(*rcx_22 + 8))(rcx_22) == 0)
                int64_t* rcx_23 = rbx_10[0xb]
                
                if ((*(*rcx_23 + 0x10))(rcx_23) == 0)
                    int64_t* rcx_24 = rbx_10[0xb]
                    
                    if ((*(*rcx_24 + 0x18))(rcx_24) == 0)
                        int64_t* rcx_25 = rbx_10[0xb]
                        (*(*rcx_25 + 0x20))(rcx_25)
            
            var_50_1.d += 1
            int32_t var_4c = var_4c + 1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_80_1.d)
            int32_t rax_44 = (temp3_1 - temp2_1) s>> 1
            
            if (rax_44 s<= 1)
                rax_44 = 1
            
            var_80_1.d = rax_44
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_80_1:4.d)
            result = zx.q((temp5_1 - temp4_1) s>> 1)
            
            if (result.d s<= 1)
                result = 1
            
            i += 1
            var_80_1:4.d = result.d
        while (i u< 1)
        
        r14 = arg_8
    else
        void*** rbx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_9 = &rbx_5[0xc]
        
        if (rax_9 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x68)
            rbx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_9 = &rbx_5[0xc]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_9
        *data_143f02ba0 = rbx_5
        data_143f02ba0 = &rbx_5[1]
        rbx_5[1] = 0
        *rbx_5 = &data_142da7788
        *(rbx_5 + 0x10) = var_d8_1.o
        *(rbx_5 + 0x20) = var_cc_1:4.o
        *(rbx_5 + 0x30) = rax_8.o
        rbx_5[8] = var_ac_1
        rbx_5[9].d = 1
        rbx_5[0xa] = rax_2
        rbx_5[0xb] = r15_1
        
        if ((*(*rax_2 + 8))(rax_2) == 0)
            int64_t* rcx_11 = rbx_5[0xa]
            
            if ((*(*rcx_11 + 0x10))(rcx_11) == 0)
                int64_t* rcx_12 = rbx_5[0xa]
                
                if ((*(*rcx_12 + 0x18))(rcx_12) == 0)
                    int64_t* rcx_13 = rbx_5[0xa]
                    (*(*rcx_13 + 0x20))(rcx_13)
        
        int64_t* rcx_14 = rbx_5[0xb]
        result = (*(*rcx_14 + 8))(rcx_14)
        
        if (result == 0)
            int64_t* rcx_15 = rbx_5[0xb]
            result = (*(*rcx_15 + 0x10))(rcx_15)
            
            if (result == 0)
                int64_t* rcx_16 = rbx_5[0xb]
                result = (*(*rcx_16 + 0x18))(rcx_16)
                
                if (result == 0)
                    int64_t* rcx_17 = rbx_5[0xb]
                    result = (*(*rcx_17 + 0x20))(rcx_17)
    
    *(r14 + 0x59) = 0
else
    sub_141d5dba0(r14, rax_2, arg5, arg6)
    
    if (r14 + 0xc8 != &var_98)
        *(r14 + 0xc8) = 0
        int64_t* rbx_1 = *(r14 + 0xd0)
        
        if (rbx_1 != 0)
            *(r14 + 0xd0) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_1405d16e0(r14 + 0x88, nullptr)
    *(r14 + 0x59) = 0
return result
