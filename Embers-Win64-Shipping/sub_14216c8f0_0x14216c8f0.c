// 函数: sub_14216c8f0
// 地址: 0x14216c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t var_228
int64_t rbx = *sub_140b58260(&var_228, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_3
int64_t* rax_4 = (*(rdx_1 + 0x48))(rax_3, rdx_1)
uint64_t result

if (*(arg1 + 0x30) != 0)
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x3c)
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x2c)
    int32_t var_c4_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_74_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    int16_t var_58_1 = 0
    char var_56_1 = 0
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_100
    int64_t rdi_1 = sx.q(var_100)
    int64_t rbx_1 = *(sub_14247bd50() + 0x18)
    int32_t rax_6 = (rdi_1 + 1).d
    var_100 = rax_6
    int64_t var_108
    
    if (rax_6 s> 0)
        sub_1405a4d70(&var_108)
    
    *(var_108 + (rdi_1 << 3)) = rbx_1
    int64_t* rdi_2 = nullptr
    int32_t i = 0
    
    if (arg2[1].d s> 0)
        do
            int64_t rax_8 = *arg2
            int16_t* rdx_3
            
            if (*(rdi_2 + rax_8 + 8) == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *(rdi_2 + rax_8)
            
            int64_t* rax_9 = sub_140b58260(&var_228, rdx_3, 1)
            int64_t var_120_1
            int64_t rbx_2 = sx.q(var_120_1.d)
            int32_t rcx_4 = (rbx_2 + 1).d
            var_120_1.d = rcx_4
            int64_t var_128
            
            if (rcx_4 s> var_120_1:4.d)
                sub_1405a4d70(&var_128)
            
            i += 1
            rdi_2 = &rdi_2[2]
            *(var_128 + (rbx_2 << 3)) = *rax_9
        while (i s< arg2[1].d)
    
    var_58_1.b = *(arg1 + 0x71)
    char var_56_2 = *(arg1 + 0x70)
    sub_142165cf0(arg1 + 0x60, 0)
    (*(*rax_4 + 0x40))(rax_4, &var_138, arg1 + 0x60)
    void* rbx_3 = *(arg1 + 0x28)
    
    if (rbx_3 != 0)
        int64_t var_218_1 = 0
        uint64_t var_1d8 = 0
        int64_t var_1d0
        __builtin_memset(&var_1d0, 0, 0x24)
        int32_t var_1ac_1 = 0x80
        int32_t var_1a8_1 = 0xffffffff
        int32_t var_1a4_1 = 0
        void* var_198_1 = nullptr
        int32_t var_190_1 = 0
        int64_t* var_220 = nullptr
        int64_t rbx_4 = *(rbx_3 + 0x18)
        var_218_1.d = 1
        sub_1405a4d70(&var_220)
        int64_t* rax_14 = var_220
        uint64_t var_188 = 0
        int64_t var_180
        __builtin_memset(&var_180, 0, 0x24)
        *rax_14 = rbx_4
        int32_t var_15c_1 = 0x80
        int32_t var_158_1 = 0xffffffff
        int32_t var_154_1 = 0
        int64_t var_148_1 = 0
        int32_t var_140_1 = 0
        (*(*rax_4 + 0xb8))(rax_4, &var_220, &var_188, &var_1d8)
        int32_t var_140_2 = 0
        
        if (var_148_1 != 0)
            sub_140a74f90(var_148_1)
        
        var_180.d = 0
        
        if (var_180:4.d != 0)
            sub_1405a5410(&var_188, 0)
        
        int32_t var_158_2 = 0xffffffff
        int32_t var_154_2 = 0
        int64_t var_178
        sub_14059a8e0(&var_178, 0)
        int64_t var_168
        
        if (var_168 != 0)
            sub_140a74f90(var_168)
        
        uint64_t rcx_15 = var_188
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int32_t rsi_1 = *(arg1 + 0x68)
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t r14_2 = sx.q(rsi_2) * 0x50
            int32_t temp1_1
            
            do
                int64_t rdx_8 = data_143e1a360
                void* rcx_17 = *(arg1 + 0x60) + r14_2
                int64_t var_210 = 0
                int32_t var_208_1 = 0
                sub_1408301c0(rcx_17, rdx_8, &var_210)
                
                if (var_208_1 s<= 1)
                    sub_141caaa70(arg1 + 0x60, rsi_2, 1, 1)
                else
                    int64_t var_1f0
                    sub_140ba5860(&var_1f0, &var_210)
                    int16_t* var_200
                    sub_140baf740(&var_200, &var_1f0)
                    int16_t* const rdx_11 = &data_142d40450
                    int32_t var_1f8
                    
                    if (var_1f8 != 0)
                        rdx_11 = var_200
                    
                    void var_1e0
                    int64_t rdi_3 = *sub_140b58260(&var_1e0, rdx_11, 1)
                    int32_t rax_18 = var_1d0.d
                    var_228 = rdi_3
                    int32_t rbx_5
                    
                    if (rax_18 == var_1a4_1)
                    label_14216cd15:
                        rbx_5 = -1
                    else
                        int64_t rdx_13 =
                            sx.q(var_190_1 - 1) & sx.q(sub_140b5ead0(rdi_3.d) + var_228:4.d)
                        void var_1a0
                        void* rax_22 = &var_1a0
                        
                        if (var_198_1 != 0)
                            rax_22 = var_198_1
                        
                        rbx_5 = *(rax_22 + (rdx_13 << 2))
                        
                        if (rbx_5 == 0xffffffff)
                        label_14216cd15_1:
                            rbx_5 = -1
                        else
                            uint64_t rcx_25 = var_1d8
                            
                            while (true)
                                int64_t rax_24 = sx.q(rbx_5) * 2
                                
                                if (*(rcx_25 + (rax_24 << 3)) == rdi_3)
                                    break
                                
                                rbx_5 = *(rcx_25 + (rax_24 << 3) + 8)
                                
                                if (rbx_5 == 0xffffffff)
                                    goto label_14216cd15_1
                    
                    int16_t* rcx_26 = var_200
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    int64_t rcx_27 = var_1f0
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    if (rbx_5 == 0xffffffff)
                        sub_141caaa70(arg1 + 0x60, rsi_2, 1, 1)
                
                int64_t rcx_29 = var_210
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                r14_2 -= 0x50
                temp1_1 = rsi_2
                rsi_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        int64_t* rcx_30 = var_220
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int32_t var_190_2 = 0
        
        if (var_198_1 != 0)
            sub_140a74f90(var_198_1)
        
        var_1d0.d = 0
        
        if (var_1d0:4.d != 0)
            sub_1405a5410(&var_1d8, 0)
        
        int32_t var_1a8_2 = 0xffffffff
        int32_t var_1a4_2 = 0
        int64_t var_1c8
        sub_14059a8e0(&var_1c8, 0)
        int64_t var_1b8
        
        if (var_1b8 != 0)
            sub_140a74f90(var_1b8)
        
        uint64_t rcx_35 = var_1d8
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
    
    int32_t result_1 = *(arg1 + 0x68)
    sub_141c941c0(&var_138)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_248)
return result
