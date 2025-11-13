// 函数: sub_141fdd750
// 地址: 0x141fdd750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int16_t* const r15 = &data_142d40450
int16_t* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

void* rax_2 = sub_140cde0b0()
int64_t* result = sub_140d2ee50(sub_14249a9d0(), rax_2, rdi, 0)

if (result == 0)
    void var_198
    sub_140ae6a10(&var_198)
    int64_t* rax_4 = sub_140aefb30(data_143ddb400, &data_143de5870, 0)
    int32_t rbx_1 = arg4[1].d
    void* rsi_1 = nullptr
    int64_t rdi_1 = *arg4
    uint64_t var_1f8 = 0
    int32_t var_1f0_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_1f8, rbx_1, 0)
        memcpy(var_1f8, rdi_1, rbx_1 * 2)
        rbx_1 = var_1f0_1
    else
        int32_t var_1ec_1 = 0
    
    int64_t var_1e8
    
    if (rbx_1 == 0 || rbx_1 == 1)
        var_1e8 = *(sub_14249a9d0() + 0x18)
        int64_t var_1c0
        sub_140b63b70(&var_1e8, &var_1c0)
        int16_t* const r8_3
        
        if (arg2[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *arg2
        
        int16_t* var_1b0
        sub_140a2e390(&var_1b0, u"%s %s", r8_3)
        int64_t rcx_8 = var_1c0
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t* rdx_4 = &data_142d40450
        int32_t var_1a8
        
        if (var_1a8 != 0)
            rdx_4 = var_1b0
        
        sub_140af5d90(rax_4, rdx_4, u"BaseProfileName", &var_1f8)
        int16_t* rcx_10 = var_1b0
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_1 = var_1f0_1
    
    int64_t r13_1 = 0
    
    if (rbx_1 != 0 && rbx_1 - 1 s> 0)
        int16_t* rdx_5
        
        if (arg2[1].d == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *arg2
        
        if (sub_140a54510(var_1f8, rdx_5) != 0)
            uint64_t rdi_2 = &data_142d40450
            
            if (var_1f0_1 != 0)
                rdi_2 = var_1f8
            
            void* rax_9 = sub_140cde0b0()
            int64_t rax_11 = sub_140d2ee50(sub_14249a9d0(), rax_9, rdi_2, 0)
            r13_1 = rax_11
            
            if (rax_11 == 0)
                sub_141fedf40(arg2, &var_1f8, rax_4)
                var_1e8 = 0
                int64_t var_1e0_1 = 0
                int32_t var_228
                var_228.q = arg5
                int64_t rax_12 = sub_141fdd750(arg1, &var_1f8, arg3, &var_1e8, var_228)
                int64_t rcx_15 = var_1e8
                r13_1 = rax_12
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
    
    if (arg2[1].d != 0)
        r15 = *arg2
    
    uint64_t rbx_3 = *sub_140b58260(&var_1e8, r15, 1)
    void* rax_14 = sub_140cde0b0()
    uint32_t rcx_19
    rcx_19.b = (rbx_3 u>> 0x20).d == 0
    
    if ((rcx_19.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
        sub_140d19010(rax_14, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int64_t* result_1 = sub_140d2dfc0(sub_14249a9d0(), rax_14, rbx_3, 0, 0, 0, 0, 0, 0)
    
    if (arg5 != 0)
        if (result_1[0xd] != arg5)
            int32_t rbx_5
            
            if (*arg5 == 0)
                rbx_5 = 0
            else
                int64_t rbx_4 = -1
                
                do
                    rbx_4 += 1
                while (arg5[rbx_4] != 0)
                
                rbx_5 = rbx_4.d + 1
            
            int32_t rdx_11 = 0
            result_1[0xe].d = 0
            
            if (*(result_1 + 0x74) != rbx_5)
                sub_1405947f0(&result_1[0xd], rbx_5)
                rdx_11 = result_1[0xe].d
            
            int32_t rax_17 = rbx_5 + rdx_11
            result_1[0xe].d = rax_17
            
            if (rax_17 s> *(result_1 + 0x74))
                sub_140594770(&result_1[0xd])
            
            if (rbx_5 != 0)
                memcpy(result_1[0xd], arg5, rbx_5 * 2)
        
        int32_t var_228_1
        var_228_1.q = 0
        sub_140ce1310(result_1, nullptr, nullptr, 0, var_228_1)
        sub_141ff0550(result_1)
    
    if (result_1[8].d s<= 1)
        sub_140597df0(&result_1[7], arg3)
    
    int32_t rax_18 = result_1[0xa].d
    uint64_t* rdx_15
    
    if (rax_18 != 0)
        rdx_15 = &result_1[9]
    
    if (rax_18 == 0 || rax_18 - 1 s<= 0)
        rdx_15 = &var_1f8
    
    sub_140597df0(&result_1[9], rdx_15)
    int32_t rax_20 = *(result_1 + 0xc)
    result_1[0xb] = r13_1
    
    if (rax_20 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_20)
        uint32_t rdx_17 = zx.d(temp0_1)
        int32_t rax_22 = temp1_1 + rdx_17
        rsi_1 =
            *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(zx.d(rax_22.w) - rdx_17) * 0x18
    
    *(rsi_1 + 8) |= 0x40000000
    int64_t rsi_2 = sx.q(*(arg1 + 0x30))
    int32_t rax_27 = (rsi_2 + 1).d
    *(arg1 + 0x30) = rax_27
    
    if (rax_27 s> *(arg1 + 0x34))
        sub_1405a4d70(arg1 + 0x28)
    
    *(*(arg1 + 0x28) + (rsi_2 << 3)) = result_1
    sub_140599090(arg1 + 0x38)
    uint64_t rcx_35 = var_1f8
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    sub_140ae7280(&var_198)
    result = result_1

__security_check_cookie(rax_1 ^ &var_248)
return result
