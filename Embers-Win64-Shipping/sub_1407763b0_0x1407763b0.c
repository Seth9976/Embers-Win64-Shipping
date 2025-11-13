// 函数: sub_1407763b0
// 地址: 0x1407763b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rsi = arg1
sub_140b33630("Niagara")
sub_141ef3910(rsi)
void* rax_2 = *(rsi + 0x528)

if (rax_2 != 0)
    void* rbx_1 = *(rsi + 0x3e8)
    void* var_178_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t i_1 = 0
        void* var_a0_1 = nullptr
        int32_t var_98_1 = 0
        int32_t var_94_1 = 8
        int32_t rdx_1 = *(rbx_1 + 0x180)
        void var_e0
        
        if (rdx_1 s> 8)
            sub_140775b80(&var_e0, rdx_1)
            rax_2 = *(rsi + 0x528)
        
        int32_t i = 0
        int32_t i_2 = 0
        
        if (*(rax_2 + 0xa8) s> 0)
            int64_t* rcx_2 = nullptr
            int64_t r12_1 = 0
            int64_t* var_180_1 = nullptr
            
            do
                void* r13_1 = *(rcx_2 + *(rax_2 + 0xa0))
                void* rcx_3 = *(r13_1 + 0x788)
                
                if (rcx_3 != 0)
                    int64_t* var_168
                    sub_1407efa00(rcx_3, &var_168)
                    int32_t r15_1 = 0
                    int32_t var_160
                    
                    if (var_160 s> 0)
                        int64_t rsi_1 = 0
                        
                        do
                            int64_t r14_1 = 0
                            int64_t* rcx_4 = *(*(rbx_1 + 0x178) + (r12_1 << 3))
                            
                            if (rcx_4 != 0 && *(r13_1 + 0x24) - 3 u> 1
                                    && *(*(arg1 + 0x528) + 0x6e8) - 3 u> 1)
                                r14_1 = (*(*rcx_4 + 0x30))(rcx_4, rbx_1, *(var_168 + rsi_1), r13_1, 
                                    i_2, var_180_1, var_178_1, arg1)
                            
                            int64_t rbx_2 = sx.q(var_98_1)
                            int32_t rcx_5 = (rbx_2 + 1).d
                            var_98_1 = rcx_5
                            
                            if (rcx_5 s> var_94_1)
                                sub_1407752f0(&var_e0, rbx_2.d)
                            
                            void* rcx_7 = &var_e0
                            
                            if (var_a0_1 != 0)
                                rcx_7 = var_a0_1
                            
                            r15_1 += 1
                            rsi_1 += 8
                            r12_1 += 1
                            *(rcx_7 + (rbx_2 << 3)) = r14_1
                            rbx_1 = var_178_1
                        while (r15_1 s< var_160)
                        
                        rsi = arg1
                        i = i_2
                    
                    int64_t* rcx_8 = var_168
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                
                i += 1
                rax_2 = *(rsi + 0x528)
                rcx_2 = &var_180_1[2]
                i_2 = i
                var_180_1 = rcx_2
            while (i s< *(rax_2 + 0xa8))
        
        int64_t rsi_2 = *(rsi + 0x408)
        int64_t var_f8_1 = 0
        void var_138
        
        if (var_a0_1 == 0)
            memmove(&var_138, &var_e0, 0x40)
            
            if (var_f8_1 != 0)
                sub_140a74f90(var_f8_1)
        
        void* var_f8_2 = var_a0_1
        int32_t var_94_2 = 8
        int64_t var_a0_2 = 0
        int32_t var_98_2 = 0
        
        if (sub_140a80f40() == 0)
            uint32_t rax_19
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_19.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_19.b == 0))
                void var_158
                void** rax_24 = sub_140751220(&var_158, nullptr, 0xff)
                void* rsi_4 = *rax_24
                *(rsi_4 + 0x10) = rbx_1
                *(rsi_4 + 0x58) = 0
                
                if (var_f8_2 == 0)
                    memmove(rsi_4 + 0x18, &var_138, 0x40)
                
                int64_t rcx_20 = *(rsi_4 + 0x58)
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                *(rsi_4 + 0x58) = var_f8_2
                var_f8_2 = nullptr
                *(rsi_4 + 0x60) = var_98_1
                *(rsi_4 + 0x64) = var_94_1
                int32_t var_f0_3 = 0
                int32_t var_ec_3 = 8
                *(rsi_4 + 0x68) = rsi_2
                void* rcx_21 = *rax_24
                int32_t r8_3 = rax_24[2].d
                int64_t* rdx_13 = rax_24[1]
                int64_t* rbx_5 = *(rcx_21 + 0x78)
                int64_t* var_180_2 = rbx_5
                int32_t* rdi_1 = &rbx_5[9]
                
                if (rbx_5 != 0)
                    *rdi_1 += 1
                    rbx_5 = var_180_2
                
                sub_140778260(rcx_21, rdx_13, r8_3, 1)
                
                if (rbx_5 != 0)
                    int32_t rax_29 = *rdi_1
                    *rdi_1 -= 1
                    
                    if (rax_29 == 1)
                        sub_140a2f6e0(var_180_2)
            else
                void* rbx_4 = var_f8_2
                void* var_90 = rbx_1
                int64_t var_48_1 = 0
                
                if (rbx_4 == 0)
                    void var_88
                    memmove(&var_88, &var_138, (rbx_4 + 0x40).d)
                    
                    if (var_48_1 != 0)
                        sub_140a74f90(var_48_1)
                        rbx_4 = var_f8_2
                
                int32_t var_40_1 = var_98_1
                int32_t var_3c_1 = var_94_1
                int64_t var_38_1 = rsi_2
                var_f8_2 = nullptr
                int32_t var_f0_2 = 0
                int32_t var_ec_2 = 8
                sub_1407479f0(&var_90)
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
        else if (*(rbx_1 + 0x180) s> 0)
            int64_t* rbx_3 = nullptr
            
            do
                void* rcx_12 = *(rbx_3 + *(rbx_1 + 0x178))
                
                if (rcx_12 != 0)
                    void* rdx_8 = &var_138
                    
                    if (var_f8_2 != 0)
                        rdx_8 = var_f8_2
                    
                    sub_14083c9e0(rcx_12, *(rdx_8 + rbx_3))
                
                i_1 += 1
                rbx_3 = &rbx_3[1]
            while (i_1 s< *(rbx_1 + 0x180))
        
        if (var_f8_2 != 0)
            sub_140a74f90(var_f8_2)
        
        if (var_a0_2 != 0)
            sub_140a74f90(var_a0_2)

int64_t result = sub_140b37f60("Niagara")
__security_check_cookie(rax_1 ^ &var_1a8)
return result
