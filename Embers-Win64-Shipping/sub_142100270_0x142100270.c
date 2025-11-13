// 函数: sub_142100270
// 地址: 0x142100270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rax_2 = sub_141baa510(arg1)
void* rsi = nullptr
int64_t* r14 = *rax_2
void* r15 = &r14[sx.q(rax_2[1].d)]

if (r14 != r15)
    do
        void* rbx_1 = *r14
        sub_1420eb5d0(rbx_1)
        sub_1420e5fa0(rbx_1)
        int64_t* rdi_1 = *(rbx_1 + 0xc8)
        int64_t rbx_2 = 0
        uint64_t rsi_2 = sx.q(*(rbx_1 + 0xd0)) << 3 u>> 3
        
        if (rdi_1 u> &rdi_1[sx.q(*(rbx_1 + 0xd0))])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_2 = *rdi_1
                (*(*rcx_2 + 0x510))(rcx_2)
                rbx_2 += 1
                rdi_1 = &rdi_1[1]
            while (rbx_2 != rsi_2)
        
        r14 = &r14[1]
    while (r14 != r15)
    
    rsi = nullptr

void* rax_7 = sub_142452380()
int32_t var_168 = 5
char var_110 = 0
void* var_160
sub_1405ab0f0(&var_160, arg1, rax_7)
char var_110_1 = 1
sub_1405b0c60(&var_168)
void** var_158
char var_144
int64_t var_130

if (var_144 == 0)
    void* var_138
    void* const rdi_2 = var_138
    uint32_t rax_15
    
    do
        void* var_48_1 = nullptr
        int32_t var_3c_1 = 0x18
        int32_t var_40_1 = 0
        void* rax_8 = sub_1425881f0()
        
        if (rax_8 != 0)
            void* rax_9 = sub_142459c10()
            
            if (rax_9 != 0)
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s<= *(rax_8 + 0x38)
                        && *(*(rax_8 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                    rsi = rax_8
        
        void var_108
        void* r8_1 = &var_108
        
        if (rsi != sub_142459c10())
            sub_1419f71f0(rdi_2, rax_8, r8_1)
        else
            sub_1419f6fe0(rdi_2, rax_8, r8_1)
        
        rsi = nullptr
        int32_t rbx_4 = 0
        
        if (var_40_1 s> 0)
            int64_t rdi_3 = 0
            
            do
                void* rcx_7 = &var_108
                
                if (var_48_1 != 0)
                    rcx_7 = var_48_1
                
                int64_t* rcx_8 = *(rcx_7 + rdi_3)
                (*(*rcx_8 + 0x510))(rcx_8)
                rbx_4 += 1
                rdi_3 += 8
            while (rbx_4 s< var_40_1)
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        int32_t var_128
        int32_t r8_2 = var_128
        int32_t var_150
        int32_t rdx_3 = var_150
        void* r13_1 = var_160
        int32_t var_148
        int32_t r14_2 = var_148 + 1
        
        if (r14_2 s>= r8_2 + rdx_3)
        label_1421005e1:
            rax_15.b = 1
            int64_t var_138_1 = 0
            var_144 = 1
            rdi_2 = nullptr
        else
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_3)
                    rdi_2 = *(var_130 + (sx.q(r14_2 - rdx_3) << 3))
                else
                    rdi_2 = *(var_158 + r12_1)
                
                int32_t var_140 = var_140 + 1
                
                if (rdi_2 != 0)
                    void* rax_21 = sub_141dc9840(rdi_2)
                    
                    if (rax_21 != 0)
                        void* const rax_28
                        
                        if ((var_168.b & 1) != 0)
                            int32_t rax_22 = *(rdi_2 + 0xc)
                            
                            if (rax_22 s>= data_143e1d9b4)
                                rax_28 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_22)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_24 = temp1_1 + rdx_5
                                rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_24.w) - rdx_5) * 0x18
                        
                        if ((var_168.b & 1) == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_17 = var_168
                            
                            if (((rcx_17 u>> 1).b & 1) == 0)
                                goto label_142100505
                            
                            uint64_t rax_32 = sub_1405949a0()
                            
                            if (rax_32.b != 0)
                                rcx_17 = var_168
                            label_142100505:
                                
                                if (((rcx_17 u>> 2).b & 1) == 0)
                                    goto label_142100583
                                
                                if ((*(rax_21 + 0x1f4) & 0x20) == 0 || (*(rax_21 + 0x1f6) & 8) != 0)
                                    rax_32 = zx.q(*(rax_21 + 0x1f5))
                                
                                if (((*(rax_21 + 0x1f4) & 0x20) != 0
                                        && (*(rax_21 + 0x1f6) & 8) == 0) || (rax_32.b & 0x40) != 0
                                        || rax_32.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_19 = *(rax_21 + 0xb8)
                                char* rsi_3 = *(rax_21 + 0x248)
                                
                                if (rcx_19 != 0)
                                    rax_32 = sub_1424359b0(rcx_19)
                                
                                if (rcx_19 == 0 || rax_32 == 0 || rsi_3 == rax_32)
                                    rcx_19.b = 1
                                else
                                    rcx_19.b = 0
                                
                                if (rsi_3 == 0 || *rsi_3 == 2)
                                    rax_32.b = 1
                                else
                                    rax_32.b = 0
                                
                                if (rcx_19.b != 0 || rax_32.b != 0)
                                    rax_32.b = 1
                                
                                if (r15.b != 0 && rax_32.b != 0)
                                    rsi = nullptr
                                label_142100583:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_21) == r13_1)
                                        void* rax_34
                                        int64_t rax_35
                                        void* rdx_7
                                        
                                        if (rax_21 != *(r13_1 + 0x30))
                                            rax_34 = sub_1425bd0d0()
                                            rdx_7 = *(rdi_2 + 0x10)
                                            rax_35 = sx.q(*(rax_34 + 0x38))
                                        
                                        if (rax_21 == *(r13_1 + 0x30) || rax_35.d s> *(rdx_7 + 0x38)
                                                || *(*(rdx_7 + 0x30) + (rax_35 << 3))
                                                != rax_34 + 0x30)
                                            rax_15 = zx.d(var_144)
                                            void* const var_138_2 = rdi_2
                                            var_148 = r14_2
                                            break
                    
                    r8_2 = var_128
                    rsi = nullptr
                    rdx_3 = var_150
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= r8_2 + rdx_3)
                    goto label_1421005e1
    while (rax_15.b == 0)

if (var_110_1 != 0)
    char var_110_2 = 0
    int64_t var_118
    sub_142441560(var_160, var_118)
    
    if (var_130 != 0)
        sub_140a74f90(var_130)
    
    if (var_158 != 0)
        sub_140a74f90(var_158)

void*** rax_37 = sub_141f88540()
void** rdx_9 = *rax_37
int64_t result = rdx_9[0x12](rax_37, rdx_9)
__security_check_cookie(rax_1 ^ &var_188)
return result
