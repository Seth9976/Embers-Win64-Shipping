// 函数: sub_141295c90
// 地址: 0x141295c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_50
void* var_48
void* var_40
void* var_38

switch (arg4)
    case 0
        void* r12_1 = arg5
        sub_1419a2ec0(*(r12_1 + 0x5150), &var_50, &data_143e8ee80, 0)
        void* r13_1 = var_50
        sub_1419a2ec0(*(r12_1 + 0x5150), &var_40, &data_143ea8f40, 0)
        int64_t rbx_1 = 0
        *arg3 = data_1439c9210
        int64_t rax_3 = 0
        
        if (r13_1 != 0)
            int64_t* r14_2 = *(var_48 + 0x10)
            int64_t rdx_2 = sx.q(*(r13_1 + 0x10c))
            int64_t* rax_4 = r14_2[3]
            
            if (rax_4[rdx_2] == 0)
                sub_1419ccf30(r14_2, rdx_2.d)
                rax_4 = r14_2[3]
            
            rax_3 = rax_4[rdx_2]
        
        void* r15_2 = var_40
        arg3[1] = rax_3
        
        if (r15_2 != 0)
            int64_t rdx_3 = sx.q(*(r15_2 + 0x10c))
            int64_t* r14_3 = *(var_38 + 0x10)
            int64_t* rbx_2 = r14_3[3]
            
            if (rbx_2[rdx_3] == 0)
                sub_1419ccf30(r14_3, rdx_3.d)
                rbx_2 = r14_3[3]
            
            rbx_1 = rbx_2[rdx_3]
            r12_1 = arg5
        
        arg3[4] = rbx_1
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_1, arg2, r12_1, arg6)
        sub_141296ac0(r15_2, arg2, r12_1, data_14395fa10, arg7)
        arg1[1] = var_48
        *arg1 = r13_1
    case 1
        void* r12_7 = arg5
        sub_1419a2ec0(*(r12_7 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_4 = var_40
        sub_1419a2ec0(*(r12_7 + 0x5150), &var_50, &data_143ea9360, 0)
        int64_t rbx_10 = 0
        *arg3 = data_1439c9210
        int64_t rax_21 = 0
        
        if (r13_4 != 0)
            int64_t* r14_11 = *(var_38 + 0x10)
            int64_t rdx_23 = sx.q(*(r13_4 + 0x10c))
            int64_t rax_22 = r14_11[3]
            int64_t r15_7 = rdx_23 << 3
            
            if (*(r15_7 + rax_22) == 0)
                sub_1419ccf30(r14_11, rdx_23.d)
                rax_22 = r14_11[3]
            
            rax_21 = *(r15_7 + rax_22)
        
        void* r15_8 = var_50
        arg3[1] = rax_21
        
        if (r15_8 != 0)
            int64_t rdx_24 = sx.q(*(r15_8 + 0x10c))
            int64_t* r14_12 = *(var_48 + 0x10)
            int64_t r12_8 = rdx_24 << 3
            int64_t rbx_11 = r14_12[3]
            
            if (*(r12_8 + rbx_11) == 0)
                sub_1419ccf30(r14_12, rdx_24.d)
                rbx_11 = r14_12[3]
            
            rbx_10 = *(r12_8 + rbx_11)
            r12_7 = arg5
        
        arg3[4] = rbx_10
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_4, arg2, r12_7, arg6)
        sub_141296ac0(r15_8, arg2, r12_7, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_4
    case 2
        void* r12_3 = arg5
        sub_1419a2ec0(*(r12_3 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_2 = var_40
        sub_1419a2ec0(*(r12_3 + 0x5150), &var_50, &data_143ea90a0, 0)
        int64_t rbx_4 = 0
        *arg3 = data_1439c9210
        int64_t rax_9 = 0
        
        if (r13_2 != 0)
            int64_t* r14_5 = *(var_38 + 0x10)
            int64_t rdx_9 = sx.q(*(r13_2 + 0x10c))
            int64_t* rax_10 = r14_5[3]
            
            if (rax_10[rdx_9] == 0)
                sub_1419ccf30(r14_5, rdx_9.d)
                rax_10 = r14_5[3]
            
            rax_9 = rax_10[rdx_9]
        
        void* r15_4 = var_50
        arg3[1] = rax_9
        
        if (r15_4 != 0)
            int64_t rdx_10 = sx.q(*(r15_4 + 0x10c))
            int64_t* r14_6 = *(var_48 + 0x10)
            int64_t* rbx_5 = r14_6[3]
            
            if (rbx_5[rdx_10] == 0)
                sub_1419ccf30(r14_6, rdx_10.d)
                rbx_5 = r14_6[3]
            
            rbx_4 = rbx_5[rdx_10]
            r12_3 = arg5
        
        arg3[4] = rbx_4
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_2, arg2, r12_3, arg6)
        sub_141296ac0(r15_4, arg2, r12_3, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_2
    case 3
        void* r12_9 = arg5
        sub_1419a2ec0(*(r12_9 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_5 = var_40
        sub_1419a2ec0(*(r12_9 + 0x5150), &var_50, &data_143ea94c0, 0)
        int64_t rbx_13 = 0
        *arg3 = data_1439c9210
        int64_t rax_27 = 0
        
        if (r13_5 != 0)
            int64_t* r14_14 = *(var_38 + 0x10)
            int64_t rdx_30 = sx.q(*(r13_5 + 0x10c))
            int64_t rax_28 = r14_14[3]
            int64_t r15_9 = rdx_30 << 3
            
            if (*(r15_9 + rax_28) == 0)
                sub_1419ccf30(r14_14, rdx_30.d)
                rax_28 = r14_14[3]
            
            rax_27 = *(r15_9 + rax_28)
        
        void* r15_10 = var_50
        arg3[1] = rax_27
        
        if (r15_10 != 0)
            int64_t rdx_31 = sx.q(*(r15_10 + 0x10c))
            int64_t* r14_15 = *(var_48 + 0x10)
            int64_t r12_10 = rdx_31 << 3
            int64_t rbx_14 = r14_15[3]
            
            if (*(r12_10 + rbx_14) == 0)
                sub_1419ccf30(r14_15, rdx_31.d)
                rbx_14 = r14_15[3]
            
            rbx_13 = *(r12_10 + rbx_14)
            r12_9 = arg5
        
        arg3[4] = rbx_13
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_5, arg2, r12_9, arg6)
        sub_141296ac0(r15_10, arg2, r12_9, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_5
    case 4
        void* r12_11 = arg5
        sub_1419a2ec0(*(r12_11 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_6 = var_40
        sub_1419a2ec0(*(r12_11 + 0x5150), &var_50, &data_143ea9620, 0)
        int64_t rbx_16 = 0
        *arg3 = data_1439c9210
        int64_t rax_33 = 0
        
        if (r13_6 != 0)
            int64_t* r14_17 = *(var_38 + 0x10)
            int64_t rdx_37 = sx.q(*(r13_6 + 0x10c))
            int64_t* rax_34 = r14_17[3]
            
            if (rax_34[rdx_37] == 0)
                sub_1419ccf30(r14_17, rdx_37.d)
                rax_34 = r14_17[3]
            
            rax_33 = rax_34[rdx_37]
        
        void* r15_12 = var_50
        arg3[1] = rax_33
        
        if (r15_12 != 0)
            int64_t rdx_38 = sx.q(*(r15_12 + 0x10c))
            int64_t* r14_18 = *(var_48 + 0x10)
            int64_t* rbx_17 = r14_18[3]
            
            if (rbx_17[rdx_38] == 0)
                sub_1419ccf30(r14_18, rdx_38.d)
                rbx_17 = r14_18[3]
            
            rbx_16 = rbx_17[rdx_38]
            r12_11 = arg5
        
        arg3[4] = rbx_16
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_6, arg2, r12_11, arg6)
        sub_141296ac0(r15_12, arg2, r12_11, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_6
    case 5
        void* r12_13 = arg5
        sub_1419a2ec0(*(r12_13 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_7 = var_40
        sub_1419a2ec0(*(r12_13 + 0x5150), &var_50, &data_143ea9780, 0)
        int64_t rbx_19 = 0
        *arg3 = data_1439c9210
        int64_t rax_39 = 0
        
        if (r13_7 != 0)
            int64_t* r14_20 = *(var_38 + 0x10)
            int64_t rdx_44 = sx.q(*(r13_7 + 0x10c))
            int64_t* rax_40 = r14_20[3]
            
            if (rax_40[rdx_44] == 0)
                sub_1419ccf30(r14_20, rdx_44.d)
                rax_40 = r14_20[3]
            
            rax_39 = rax_40[rdx_44]
        
        void* r15_14 = var_50
        arg3[1] = rax_39
        
        if (r15_14 != 0)
            int64_t rdx_45 = sx.q(*(r15_14 + 0x10c))
            int64_t* r14_21 = *(var_48 + 0x10)
            int64_t* rbx_20 = r14_21[3]
            
            if (rbx_20[rdx_45] == 0)
                sub_1419ccf30(r14_21, rdx_45.d)
                rbx_20 = r14_21[3]
            
            rbx_19 = rbx_20[rdx_45]
            r12_13 = arg5
        
        arg3[4] = rbx_19
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_7, arg2, r12_13, arg6)
        sub_141296ac0(r15_14, arg2, r12_13, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_7
    case 8
        void* r12_5 = arg5
        sub_1419a2ec0(*(r12_5 + 0x5150), &var_40, &data_143e8ee80, 0)
        void* r13_3 = var_40
        sub_1419a2ec0(*(r12_5 + 0x5150), &var_50, &data_143ea9200, 0)
        int64_t rbx_7 = 0
        *arg3 = data_1439c9210
        int64_t rax_15 = 0
        
        if (r13_3 != 0)
            int64_t* r14_8 = *(var_38 + 0x10)
            int64_t rdx_16 = sx.q(*(r13_3 + 0x10c))
            int64_t rax_16 = r14_8[3]
            int64_t r15_5 = rdx_16 << 3
            
            if (*(r15_5 + rax_16) == 0)
                sub_1419ccf30(r14_8, rdx_16.d)
                rax_16 = r14_8[3]
            
            rax_15 = *(r15_5 + rax_16)
        
        void* r15_6 = var_50
        arg3[1] = rax_15
        
        if (r15_6 != 0)
            int64_t rdx_17 = sx.q(*(r15_6 + 0x10c))
            int64_t* r14_9 = *(var_48 + 0x10)
            int64_t r12_6 = rdx_17 << 3
            int64_t rbx_8 = r14_9[3]
            
            if (*(r12_6 + rbx_8) == 0)
                sub_1419ccf30(r14_9, rdx_17.d)
                rbx_8 = r14_9[3]
            
            rbx_7 = *(r12_6 + rbx_8)
            r12_5 = arg5
        
        arg3[4] = rbx_7
        sub_1419870b0(arg2, arg3, 2)
        sub_1412974a0(r13_3, arg2, r12_5, arg6)
        sub_141296ac0(r15_6, arg2, r12_5, data_14395fa10, arg7)
        arg1[1] = var_38
        *arg1 = r13_3
    default
        *arg1 = nullptr
        arg1[1] = 0

return arg1
