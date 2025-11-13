// 函数: sub_1419f0380
// 地址: 0x1419f0380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
int64_t* result
int512_t zmm1
result, zmm1 = sub_141f23e50(arg1, arg2)
int32_t r13 = 1

if ((arg2[5].b & 1) != 0)
    result, zmm1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result.d s< 9)
        int64_t rax_5 = j_sub_140a82f30(0x38)
        int64_t* rbx_1
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_1420f37f0(rax_5)
        
        void* var_90 = *rbx_1
        sub_1420d96c0(arg2, &var_90, zmm1)
        
        if ((arg2[5].b & 1) != 0)
            void* rax_8 = var_90
            int64_t* rcx_7 = *rbx_1
            *rbx_1 = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 0x1c) += 1
            
            if (rcx_7 != 0)
                int32_t temp1_1 = *(rcx_7 + 0x1c)
                *(rcx_7 + 0x1c) -= 1
                
                if (temp1_1 == 1)
                    (*(*rcx_7 + 0x40))()
        
        void* var_88 = rbx_1[1]
        sub_142307be0(arg2, &var_88, zmm1)
        
        if ((arg2[5].b & 1) != 0)
            void* rax_11 = var_88
            int64_t* rcx_9 = rbx_1[1]
            rbx_1[1] = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 0x18) += 1
            
            if (rcx_9 != 0)
                rcx_9[3].d -= 1
                
                if (rcx_9[3].d == 1)
                    (*(*rcx_9 + 0x38))()
        
        if (&rbx_1[2] != arg1 + 0x530)
            int32_t r8_1 = *(rbx_1 + 0x1c)
            int64_t r12_1 = *(arg1 + 0x530)
            int64_t r15_1 = sx.q(*(arg1 + 0x538))
            rbx_1[3].d = r15_1.d
            
            if (r15_1.d != 0 || r8_1 != 0)
                sub_1405a4be0(&rbx_1[2], r15_1.d, r8_1)
                memcpy(rbx_1[2], r12_1, (r15_1 << 4).d)
            else
                *(rbx_1 + 0x1c) = r15_1.d
        
        int128_t* var_a0 = nullptr
        int64_t var_98_1 = 1
        sub_1405a4df0(&var_a0)
        int128_t* r14_2 = var_a0
        *r14_2 = *(arg1 + 0x520)
        r14_2[1].q = rbx_1
        EnterCriticalSection(&data_143a2e558)
        int64_t rcx_13 = data_143a2e580:8
        data_143a2e580.q = arg1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int32_t rcx_14 = var_98_1.d
        data_143a2e580:8 = r14_2
        data_143a2e590.d = rcx_14
        data_143a2e590:4.d = var_98_1:4.d
        
        if (rcx_14 != 0)
            if (data_143a2e510 == data_143a2e53c)
                sub_140d186f0(&data_143e1d990, &data_143a2e500)
            
            int128_t* var_60 = &data_143a2e580
            int128_t* var_58_1 = &data_143a2e580:8
            int32_t var_80
            zmm1 = sub_1419ea1b0(&data_143a2e508, &var_80, &var_60, nullptr)
        else
            zmm1 = sub_1419f0110(&data_143a2e500, arg1)
        
        result = LeaveCriticalSection(&data_143a2e558)
    
    if ((arg2[5].b & 1) != 0)
        result, zmm1 = sub_140b4e7c0(arg2, &data_1439a94d8)
        
        if (result.d s< 0xf && *(arg1 + 0x590) != 0)
            result = sub_1405a7050(arg1 + 0x598, arg1 + 0x590)

if (arg2[8].d s>= 0x1b3)
    if ((arg2[6].d & 0x400000) == 0)
        result, zmm1 = sub_1419fe4b0(arg2, *(arg1 + 0x5d8), zmm1)
    else
        int64_t* rcx_17 = arg2[1]
        
        if ((arg2[5].b & 2) == 0)
            int64_t** rdx_11 = *rcx_17
            int64_t* var_a8
            
            if (&rdx_11[1] u> rcx_17[1])
                int64_t** rdx_12 = &var_a8
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg2, rdx_12, zmm1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_12, 8)
            else
                var_a8 = *rdx_11
                *rcx_17 += 8
            
            int64_t* rcx_20 = var_a8
            int64_t* rdx_13 = rcx_20[1]
            int64_t var_c0 = *rcx_20
            int64_t* var_b8_1 = rdx_13
            
            if (rdx_13 != 0)
                rdx_13[1].d += 1
                rdx_13 = var_b8_1
            
            result = &var_c0
            
            if (&var_c0 != arg1 + 0x5d8)
                zmm1.o = var_c0.o
                int128_t var_50_1 = zmm1.o
                var_c0.o = *(arg1 + 0x5d8)
                rdx_13 = var_b8_1
                *(arg1 + 0x5d8) = zmm1.o
            
            if (rdx_13 != 0)
                result = zx.q(rdx_13[1].d)
                rdx_13[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_b8_1)(var_b8_1, rdx_13)
                    int32_t r14_3 = *(var_b8_1 + 0xc)
                    *(var_b8_1 + 0xc) -= 1
                    
                    if (r14_3 == 1)
                        result = (*(*var_b8_1 + 8))(var_b8_1, 1)
        else
            void* result_1 = arg1 + 0x5d8
            int64_t** rdx_9 = *rcx_17
            
            if (&rdx_9[1] u> rcx_17[1])
                void** rdx_10 = &result_1
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    result = sub_140b540d0(arg2, rdx_10, zmm1)
                else
                    result = (*(*arg2 + 0x150))(arg2, rdx_10, 8)
            else
                result = *rdx_9
                result_1 = result
                *rcx_17 += 8

if (arg2[8].d s< 0x123)
label_1419f086b:
    
    if ((arg2[5].b & 1) != 0)
        int64_t var_7c = *(arg1 + 0x18)
        int16_t* var_70
        sub_140b63b70(&var_7c, &var_70)
        int16_t* const r9_1 = &data_142d40450
        int32_t var_68
        
        if (var_68 != 0)
            r9_1 = var_70
        
        sub_140af98a0("Unknown", 0x1fe, 
            This platform requires cooked packages, and this landscape does not contain cooked data %s.", 
            r9_1)
        int16_t* rcx_31 = var_70
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = sub_140afbb40()
else
    result = zx.q(*(arg1 + 8) u>> 4)
    
    if ((1 & result.b) != 0)
        goto label_1419f086b
    
    int32_t r8_6
    
    if (arg2[0xe] != 0 || (arg2[5].b & 2) != 0)
        r8_6 = 1
    else
        r8_6 = 0
    
    int64_t** rdx_15 = arg2[1]
    int64_t* rcx_24 = *rdx_15
    bool cond:5_1
    
    if (rcx_24 + 4 u> rdx_15[1])
        int64_t rax_27 = *arg2
        int32_t var_c8 = r8_6
        result, r8_6 = (*(rax_27 + 0x150))(arg2, &var_c8, 4)
        cond:5_1 = var_c8 != 0
    else
        cond:5_1 = *rcx_24 != 0
        result = rcx_24 + 4
        *rdx_15 = result
    
    r8_6.b = cond:5_1
    
    if (r8_6.b == 0)
        goto label_1419f086b
    
    int64_t* rcx_26 = arg2[0xe]
    char rax_29
    
    if (rcx_26 != 0)
        rax_29, r8_6 = (*(*rcx_26 + 0xd8))(rcx_26, 0xd, r8_6)
    
    if (rcx_26 == 0 || rax_29 == 0)
        r13 = 0
    
    int64_t** rdx_17 = arg2[1]
    int64_t* rcx_27 = *rdx_17
    bool cond:6_1
    
    if (rcx_27 + 4 u> rdx_17[1])
        int64_t rax_31 = *arg2
        int32_t var_c4 = r13
        result, r8_6 = (*(rax_31 + 0x150))(arg2, &var_c4, 4)
        cond:6_1 = var_c4 != 0
    else
        cond:6_1 = *rcx_27 != 0
        result = rcx_27 + 4
        *rdx_17 = result
    
    r8_6.b = cond:6_1
    
    if (r8_6.b != 0)
        result = sub_1407e5270(arg2, arg1 + 0x5b8, zmm1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
