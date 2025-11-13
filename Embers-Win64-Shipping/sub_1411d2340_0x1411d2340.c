// 函数: sub_1411d2340
// 地址: 0x1411d2340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t result = arg4
bool cond:0 = *(arg6 + 0x38) == 0
int32_t* var_168 = arg1

if (not(cond:0) && arg3 s>= 0)
    if (result == 0)
    label_1411d23bd:
        
        if (arg3 s< *(arg6 + 0x20))
            goto label_1411d23c7
    else if (result != 1)
    label_1411d23c7:
        int64_t* rdx = *(arg1 + 8)
        int64_t rax_2 = sx.q(arg3)
        int64_t r12_1 = sx.q(arg5[1].d)
        void* var_108 = rax_2 * 0x58 + *(arg6 + 0x18)
        int32_t* rax_5
        int128_t zmm6_1
        rax_5, zmm6_1 = sub_14081d830(0x9b0, rdx, 1, 0)
        int32_t* var_140_1 = rax_5
        int32_t* rbx_1 = rax_5
        
        if (rax_5 == 0)
            rbx_1 = nullptr
            var_140_1 = nullptr
        else
            __builtin_memset(&rax_5[0x234], 0, 0xe0)
        
        memset(rbx_1, 0, 0x9b0)
        int64_t r13_1 = 0
        *rbx_1 = *(arg6 + 0x38)
        int32_t i = 0
        rbx_1[1] = r12_1.d
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x2c)
        int32_t var_8c_1 = 0x80
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        int32_t* var_128 = rbx_1
        int64_t var_148_1 = r12_1
        
        if (r12_1.d s> 0)
            void* r12_2 = &rbx_1[4]
            int64_t r15_1 = 0
            
            while (true)
                void* r14_2 = *arg5 + r15_1
                int32_t i_1 = i
                int32_t var_184
                sub_1411e0e60(&var_b8, &var_184, *(r14_2 + 0x30))
                int64_t rax_7 = sx.q(var_184)
                void* const rax_10
                
                if (rax_7.d == 0xffffffff)
                    rax_10 = nullptr
                else
                    rax_10 = rax_7 * 0x30 + r13_1
                
                int32_t* rcx_2 = rax_10 + 8
                
                if (rax_10 == 0)
                    rcx_2 = nullptr
                
                int32_t i_2
                
                if (rcx_2 == 0)
                    sub_1411cbe10(&var_128, i, r14_2)
                    void* var_120 = r14_2 + 0x30
                    int32_t var_180
                    sub_1411b87c0(&var_b8, &var_180, &var_120, nullptr)
                    void* rdx_6 = sx.q(var_180) * 0x30 + var_b8
                    *(rdx_6 + 8) = i
                    i += 1
                    *(rdx_6 + 0x10) = *(r14_2 + 0x30)
                    *(rdx_6 + 0x18) = *(r14_2 + 0x40)
                    *(rdx_6 + 0x20) = *(r14_2 + 0x38)
                    i_2 = i_1
                else
                    i_2 = *rcx_2
                
                *(r12_2 + 0x780) = i_2
                r15_1 += 0x70
                *r12_2 = *(r14_2 + 0x64)
                *(r12_2 + 0x140) = *(r14_2 + 0x60)
                *(r12_2 + 0x280) = *(r14_2 + 0x5c)
                *(r12_2 + 0x3c0) = *(r14_2 + 0x58)
                *(r12_2 + 0x500) = *(r14_2 + 0x4c)
                *(r12_2 + 0x640) = *(r14_2 + 0x48)
                r12_2 += 0x10
                int64_t temp2_1 = var_148_1
                var_148_1 -= 1
                
                if (temp2_1 == 1)
                    break
                
                r13_1 = var_b8
            
            rbx_1 = var_140_1
        
        if (arg5[1].d s> 0 && i u< 8)
            do
                void* rdx_7 = *arg5
                
                switch (i)
                    case 0
                        *(rbx_1 + 0x8d0) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x910) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x950) = *(rdx_7 + 0x38)
                    case 1
                        *(rbx_1 + 0x8d8) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x918) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x958) = *(rdx_7 + 0x38)
                    case 2
                        *(rbx_1 + 0x8e0) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x920) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x960) = *(rdx_7 + 0x38)
                    case 3
                        *(rbx_1 + 0x8e8) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x928) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x968) = *(rdx_7 + 0x38)
                    case 4
                        *(rbx_1 + 0x8f0) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x930) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x970) = *(rdx_7 + 0x38)
                    case 5
                        *(rbx_1 + 0x8f8) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x938) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x978) = *(rdx_7 + 0x38)
                    case 6
                        *(rbx_1 + 0x900) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x940) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x980) = *(rdx_7 + 0x38)
                    case 7
                        *(rbx_1 + 0x908) = *(rdx_7 + 0x30)
                        *(rbx_1 + 0x948) = *(rdx_7 + 0x40)
                        *(rbx_1 + 0x988) = *(rdx_7 + 0x38)
                
                i += 1
            while (i u< 8)
        
        void* r13_3 = var_108
        *(rbx_1 + 0x990) = *(*(r13_3 + 0x10) + 0x10)
        int64_t rsi_3
        void* r13_4
        int64_t r14_5
        
        if (result == 0)
            *(rbx_1 + 0x998) = *(*(r13_3 + 0x20) + 8)
            *(rbx_1 + 0x9a0) = *(*(r13_3 + 0x28) + 8)
            *(rbx_1 + 0x9a8) = *(*(r13_3 + 0x30) + 8)
            int64_t rsi_1 = sx.q(arg7[1].d)
            int64_t r14_3 = *(*(r13_3 + 0x20) + 8)
            int32_t rax_52 = (rsi_1 + 1).d
            arg7[1].d = rax_52
            
            if (rax_52 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            *(*arg7 + (rsi_1 << 3)) = r14_3
            int64_t rsi_2 = sx.q(arg7[1].d)
            int64_t r14_4 = *(*(r13_3 + 0x28) + 8)
            int32_t rax_55 = (rsi_2 + 1).d
            arg7[1].d = rax_55
            
            if (rax_55 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            *(*arg7 + (rsi_2 << 3)) = r14_4
            rsi_3 = sx.q(arg7[1].d)
            r14_5 = *(*(r13_3 + 0x30) + 8)
            int32_t rax_58 = (rsi_3 + 1).d
            arg7[1].d = rax_58
            
            if (rax_58 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            r13_4 = arg6
        label_1411d29b3:
            *(*arg7 + (rsi_3 << 3)) = r14_5
            int64_t var_158_1
            var_158_1:4.d = 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(*(r13_4 + 0x38) + 0x7f)
            var_158_1.d = (temp1_1 + (temp0_1 & 0x7f)) s>> 7
            char rcx_21 = sub_1419a2ec0(arg2, &var_108, &data_143e75e90, 1)
            int128_t zmm7 = var_108.o
            int64_t* var_f8
            var_f8.o = sub_1411e2e40(rcx_21)
            sub_141998c50(zmm7.q, &data_143e7aa20, rbx_1)
            int32_t* r14_8 = var_168
            int32_t var_c8_1 = 1
            int64_t var_d0_1 = var_158_1
            void*** rax_77
            char rcx_23
            int512_t zmm6_3
            rax_77, rcx_23, zmm6_3 = sub_14081d830(0x60, *(r14_8 + 8), 1, 0)
            void*** rsi_6 = rax_77
            zmm6_3.o = zmm6_1
            
            if (rax_77 == 0)
                rsi_6 = nullptr
            else
                var_168 = rbx_1
                sub_1411e2e40(rcx_23)
                void* var_160_1 = &data_143e7aa50
                var_168.o = var_168.o
                void var_188
                sub_141992bd0(rsi_6, &var_188, &var_168, 2)
                *rsi_6 = &data_142f389b8
                *(rsi_6 + 0x38) = rbx_1.o
                *(rsi_6 + 0x48) = zmm7
                rsi_6[0xb] = var_c8_1.q
            
            sub_1419968d0(r14_8, rsi_6)
        else if (result == 1)
            r13_4 = arg6
            void* rsi_5 = rax_2 * 0x38 + *(r13_4 + 0x28)
            *(rbx_1 + 0x998) = *(*(rsi_5 + 0x10) + 8)
            *(rbx_1 + 0x9a0) = *(*(rsi_5 + 0x18) + 8)
            *(rbx_1 + 0x9a8) = *(*(rsi_5 + 0x20) + 8)
            **(rsi_5 + 8) = 2
            int64_t r14_6 = sx.q(arg7[1].d)
            int64_t r12_3 = *(*(rsi_5 + 0x10) + 8)
            int32_t rax_64 = (r14_6 + 1).d
            arg7[1].d = rax_64
            
            if (rax_64 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            *(*arg7 + (r14_6 << 3)) = r12_3
            int64_t r14_7 = sx.q(arg7[1].d)
            int64_t r12_4 = *(*(rsi_5 + 0x18) + 8)
            int32_t rax_67 = (r14_7 + 1).d
            arg7[1].d = rax_67
            
            if (rax_67 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            *(*arg7 + (r14_7 << 3)) = r12_4
            rsi_3 = sx.q(arg7[1].d)
            r14_5 = *(*(rsi_5 + 0x20) + 8)
            int32_t rax_70 = (rsi_3 + 1).d
            arg7[1].d = rax_70
            
            if (rax_70 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            goto label_1411d29b3
        int32_t var_70_2 = 0
        
        if (var_78_1 != 0)
            sub_140a74f90(var_78_1)
        
        int64_t var_b0
        bool cond:2_1 = var_b0:4.d == 0
        var_b0.d = 0
        
        if (not(cond:2_1))
            sub_1405a5220(&var_b8, 0)
        
        int32_t var_88_2 = 0xffffffff
        int32_t var_84_2 = 0
        int64_t var_a8
        result = sub_14059a8e0(&var_a8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            result = sub_140a74f90(var_98)
        
        int64_t rcx_30 = var_b8
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)
    else if (arg3 s< *(arg6 + 0x30))
        goto label_1411d23bd

__security_check_cookie(rax_1 ^ &var_1a8)
return result
