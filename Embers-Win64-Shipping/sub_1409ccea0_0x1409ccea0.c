// 函数: sub_1409ccea0
// 地址: 0x1409ccea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* r15 = arg1
int64_t* rbx_1 = *(arg2 + 0x28) + 0x308
void* var_100
sub_14099b070(rbx_1, &var_100, data_143f36150)
int64_t* var_108
sub_14099b070(rbx_1, &var_108, data_143cede10)
void* var_f0
sub_14099b130(rbx_1, &var_f0, data_143f36158)
int64_t* var_e8
sub_14099b130(rbx_1, &var_e8, data_143f36160)
int32_t* rcx_4 = *arg3
int32_t* var_e0 = rcx_4
void* result = &rcx_4[sx.q(arg3[1].d)]
void* result_1 = result

if (rcx_4 != result)
    int64_t* rdx_4 = var_108
    void* rdi_1 = var_f0
    int64_t* rsi_1 = var_e8
    void* r12_1 = var_100
    void* var_c0_1 = r12_1
    int64_t* var_c8_1 = rdx_4
    var_108 = r15 + 0x78
    
    do
        int64_t rbx_2 = sx.q(*rcx_4)
        int64_t var_b8
        int64_t* rax_5 = sub_140b63b70(*rdx_4[3] + (rbx_2 << 3), &var_b8)
        int16_t* r14_1
        
        if (rax_5[1].d == 0)
            r14_1 = &data_142d40450
        else
            r14_1 = *rax_5
        
        void* rax_7 = sub_140d2f6f0(sub_142543940(), 0, r14_1, 0, 0, 0, 1, 0)
        int64_t rcx_8 = var_b8
        var_f0 = rax_7
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        void* r14_2 = *(r15 + 0x28)
        int64_t r12_2 = sx.q(*(r14_2 + 0x70))
        var_e8 = **(r12_1 + 0x18)
        int32_t rax_9 = (r12_2 + 1).d
        *(r14_2 + 0x70) = rax_9
        
        if (rax_9 s> *(r14_2 + 0x74))
            sub_1405c4f50(r14_2 + 0x68)
        
        void* rcx_11 = var_f0
        void** r15_3 = r12_2 * 0x30 + *(r14_2 + 0x68)
        r15_3[1] = var_e8[rbx_2]
        *r15_3 = rcx_11
        __builtin_memset(&r15_3[2], 0, 0x1c)
        
        if (*r15_3 != 0)
            int32_t rcx_12
            rcx_12.b = *(r15_3 + 0xc) == 0
            
            if ((rcx_12.b & sub_140b5b8a0(r15_3[1].d, 0)) != 0)
                r15_3[1] = *(*r15_3 + 0x18)
        
        int64_t r13_2 = 0
        
        if (*(arg2 + 0x520) s<= 0)
            void* r9_1 = arg1
            void* r14_5 = *(**(*(r9_1 + 0x28) + 0x50) + (sx.q(*(r9_1 + 0x38)) << 3)) + 0x10
            r13_2 = sx.q(*(r14_5 + 0x20))
            int32_t rax_17 = (r13_2 + 1).d
            *(r14_5 + 0x20) = rax_17
            
            if (rax_17 s> *(r14_5 + 0x24))
                sub_1409da440(r14_5, r13_2.d)
                r9_1 = arg1
            
            void* rdx_8 = *(r14_5 + 0x18)
            int64_t rcx_18 = r13_2 * 3
            void* rax_18 = r14_5
            
            if (rdx_8 != 0)
                rax_18 = rdx_8
            
            *(rax_18 + (rcx_18 << 3)) = 0
            *(rax_18 + (rcx_18 << 3) + 8) = 0
            *(rax_18 + (rcx_18 << 3) + 0x10) = 0
            *(rax_18 + (rcx_18 << 3) + 0x14) = 0x100
            *(rax_18 + (rcx_18 << 3) + 0x16) = 0
            void* rax_19 = *(r14_5 + 0x18)
            
            if (rax_19 != 0)
                r14_5 = rax_19
            
            int32_t* r15_4 = r14_5 + (rcx_18 << 3)
            int32_t rax_20
            
            if (r13_2.d != 0)
                sub_1409c42a0(r9_1, &var_100, (r13_2 - 1).d)
                rax_20 =
                    *(*var_108 + sx.q(var_100.d) * 0x48 + 8) * 3 + *(r14_5 + r13_2 * 0x18 - 0x14)
            else
                rax_20 = 0
            
            r15_4[1] = rax_20
            *(r15_4 + 8) = 0
            r15_4[4] = 0
            r15_4[5].b = *(rbx_2 + **(rdi_1 + 0x18))
            *(r15_4 + 0x15) = *(rbx_2 + *rsi_1[3])
            *r15_4 = r12_2.d
        
        int64_t* r15_5 = var_108
        int64_t var_98_1 = 0
        int32_t r14_7 = 0
        int32_t var_90_1 = 0
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_54_1 = 0
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_a8[0x4]
        int32_t* rcx_26 = *(sub_1409ca850(r15_5, &var_a8, rbx_2.d) + 8)
        int64_t var_80_1
        
        if (rcx_26 != 0)
            *rcx_26 = var_98_1.d
            rcx_26[1] = var_98_1:4.d
            rcx_26[2] = var_90_1
            sub_1409a9d30(&rcx_26[4], &var_88)
            r14_7 = var_80_1:4.d
        
        var_80_1.d = 0
        
        if (r14_7 != 0)
            sub_1405a5410(&var_88, 0)
        
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        int64_t var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_31 = var_88
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = *r15_5
        int64_t rcx_32 = rbx_2 * 9
        r15 = arg1
        rdx_4 = var_c8_1
        *(result + (rcx_32 << 3) + 4) = r12_2.d
        r12_1 = var_c0_1
        *(result + (rcx_32 << 3)) = r13_2.d
        *(result + (rcx_32 << 3) + 8) = 0
        rcx_4 = &var_e0[1]
        var_e0 = rcx_4
    while (rcx_4 != result_1)

__security_check_cookie(rax_1 ^ &var_148)
return result
