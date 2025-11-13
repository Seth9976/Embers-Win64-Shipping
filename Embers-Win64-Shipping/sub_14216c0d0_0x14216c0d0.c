// 函数: sub_14216c0d0
// 地址: 0x14216c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rsi = arg1
int32_t result_1 = 0
uint64_t result

if (*(arg1 + 0x59) == 0)
    int32_t rax_2 = arg1[0xd].d
    int32_t rdi_1 = 0
    int32_t r13_1 = 0
    int64_t* r14_1 = nullptr
    *(arg1 + 0x59) = 1
    void** var_198 = nullptr
    int64_t var_190_1 = 0
    
    if (rax_2 s> 0)
        sub_1405a5130(&var_198, rax_2)
        rax_2 = rsi[0xd].d
        r13_1 = var_190_1:4.d
        rdi_1 = var_190_1.d
        r14_1 = var_198
    
    int32_t i = 0
    int64_t var_180
    
    if (rax_2 s> 0)
        int64_t r12_1 = 0
        
        do
            int64_t rax_3 = rsi[0xc]
            __builtin_memset(&var_180, 0, 0x18)
            sub_140d2c570(&var_180, *(r12_1 + rax_3 + 8))
            int64_t* rbx_1 = r14_1
            void* rsi_1 = &r14_1[sx.q(rdi_1) * 3]
            int64_t rdx_5
            
            if (r14_1 != rsi_1)
                while (sub_140d16af0(rbx_1, &var_180) == 0)
                    rbx_1 = &rbx_1[3]
                    
                    if (rbx_1 == rsi_1)
                        goto label_14216c1ff
                
                int64_t rax_6
                int64_t rdx_4
                rdx_4:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_1 - r14_1)
                rdx_5 = rdx_4 s>> 2
            
            int64_t var_178_1
            
            if (r14_1 == rsi_1 || rdx_5.d + (rdx_5 u>> 0x3f).d == 0xffffffff)
            label_14216c1ff:
                int64_t rbx_3 = sx.q(rdi_1)
                rdi_1 = (rbx_3 + 1).d
                var_190_1.d = rdi_1
                
                if (rdi_1 s> r13_1)
                    sub_1405a4df0(&var_198)
                    r13_1 = var_190_1:4.d
                    rdi_1 = var_190_1.d
                    r14_1 = var_198
                
                int64_t rcx_5 = rbx_3 * 3
                r14_1[rcx_5] = var_180
                r14_1[rcx_5 + 1] = 0
                r14_1[rcx_5 + 1] = var_178_1
                var_178_1 = 0
                int64_t var_170_1
                r14_1[rcx_5 + 2].d = var_170_1.d
                *(&r14_1[rcx_5] + 0x14) = var_170_1:4.d
                int64_t var_170_2 = 0
            
            if (var_178_1 != 0)
                sub_140a74f90(var_178_1)
            
            rsi = arg1
            i += 1
            r12_1 += 0x50
        while (i s< rsi[0xd].d)
    
    int64_t* var_160
    int64_t* var_150
    
    if (rdi_1 != 0)
        void** var_128
        sub_142380ac0(&var_128)
        var_198 = nullptr
        int32_t var_190_2 = 0
        sub_1405947f0(&var_198, 0x16)
        int32_t rax_13 = var_190_2 + 0x16
        var_190_2 = rax_13
        
        if (rax_13 s> 0)
            sub_140594770(&var_198)
        
        UnDecorator::getReferenceType(var_198, u"RequestSyncLoad Array", 0x2c)
        var_160 = r14_1
        int32_t var_158_1 = rdi_1
        int32_t var_154_1 = r13_1
        r14_1 = nullptr
        sub_142396730(&var_128, &var_150, &var_160, 0, &var_198)
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                (**var_148)(var_148)
                int32_t temp1_1 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_148 + 8))(var_148, 1)
        
        sub_142381c50(&var_128)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int32_t i_1 = 0
    
    if (rsi[0xd].d s> 0)
        int64_t r12_2 = 0
        
        do
            int32_t* rbx_7 = rsi[0xc] + r12_2
            void* const r14_2 = nullptr
            int64_t* var_1b8
            
            if (rsi[6].b != 0)
                int32_t rcx_24
                rcx_24.b = rbx_7[3] == 0
                
                if ((rcx_24.b & sub_140b5b8a0(rbx_7[2], 0)) == 0)
                    int64_t var_140
                    int64_t* rax_24 = sub_140b63b70(&rbx_7[2], &var_140)
                    int16_t* rdx_13
                    
                    if (rax_24[1].d == 0)
                        rdx_13 = &data_142d40450
                    else
                        rdx_13 = *rax_24
                    
                    uint64_t rax_25
                    int32_t rdx_14
                    rax_25, rdx_14 = sub_140d1fe00(nullptr, rdx_13)
                    int64_t rcx_26 = var_140
                    uint64_t rbx_10 = rax_25
                    
                    if (rcx_26 != 0)
                        rdx_14 = sub_140a74f90(rcx_26)
                    
                    if (rbx_10 == 0)
                        int64_t* rax_26 = sub_140b63b70(&rbx_7[2], &var_180)
                        int16_t* rdx_16
                        
                        if (rax_26[1].d == 0)
                            rdx_16 = &data_142d40450
                        else
                            rdx_16 = *rax_26
                        
                        uint64_t rax_27 = sub_140d23fd0(nullptr, rdx_16, 0, nullptr, nullptr)
                        int64_t rcx_29 = var_180
                        rbx_10 = rax_27
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                    else
                        sub_140cdbab0(rbx_10, rdx_14)
                    
                    if (rbx_10 != 0)
                        var_198 = nullptr
                        int32_t var_190_3 = 0
                        var_1b8.d = 0
                        sub_140d3ccc0(rbx_10, &var_198, 1, 0, var_1b8.d)
                        void** rbx_11 = var_198
                        void* rsi_2 = &rbx_11[sx.q(var_190_3)]
                        
                        if (rbx_11 != rsi_2)
                            do
                                void* rdi_5 = *rbx_11
                                
                                if (rdi_5 != 0)
                                    void* rax_29 = sub_14247bf70()
                                    void* rdx_18 = *(rdi_5 + 0x10)
                                    int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                                    
                                    if (rax_30.d s<= *(rdx_18 + 0x38)
                                            && *(*(rdx_18 + 0x30) + (rax_30 << 3))
                                            == rax_29 + 0x30)
                                        r14_2 = rdi_5
                                        break
                                
                                rbx_11 = &rbx_11[1]
                            while (rbx_11 != rsi_2)
                            
                            rbx_11 = var_198
                        
                        if (rbx_11 != 0)
                            sub_140a74f90(rbx_11)
                        
                        rsi = arg1
                    label_14216c5a3:
                        
                        if (r14_2 != 0)
                            goto label_14216c5a8
            else
                int32_t rcx_17
                rcx_17.b = sub_140b5b8a0(*rbx_7, 0) == 0
                
                if ((rbx_7[1] != 0 | rcx_17.b) != 0)
                    int64_t* rax_17 = sub_140b63b70(rbx_7, &var_150)
                    int16_t* rdi_3
                    
                    if (rax_17[1].d == 0)
                        rdi_3 = &data_142d40450
                    else
                        rdi_3 = *rax_17
                    
                    void* rax_19 = sub_140d2ee50(sub_140d41340(), nullptr, rdi_3, 0)
                    int64_t* rcx_20 = var_150
                    r14_2 = rax_19
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    if (r14_2 == 0)
                        int64_t* rax_20 = sub_140b63b70(rbx_7, &var_160)
                        int16_t* rbx_8
                        
                        if (rax_20[1].d == 0)
                            rbx_8 = &data_142d40450
                        else
                            rbx_8 = *rax_20
                        
                        var_1b8.d = 0
                        void* rax_22 =
                            sub_140d2f6f0(sub_140d41340(), 0, rbx_8, 0, var_1b8.d, 0, 1, 0)
                        int64_t* rcx_23 = var_160
                        r14_2 = rax_22
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                        
                        goto label_14216c5a3
                    
                label_14216c5a8:
                    int64_t r8_6 = *rsi
                    (*(r8_6 + 0x268))(rsi, r14_2, r8_6)
                    result_1 += 1
            i_1 += 1
            r12_2 += 0x50
        while (i_1 s< rsi[0xd].d)
    
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_1d8)
return result
