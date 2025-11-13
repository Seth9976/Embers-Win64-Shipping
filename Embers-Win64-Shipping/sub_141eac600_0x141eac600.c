// 函数: sub_141eac600
// 地址: 0x141eac600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* lpCriticalSection = &arg1[0x60]
int64_t* rsi = arg2
EnterCriticalSection(lpCriticalSection)
void* r15 = *(*arg3 + 8)
sub_140ca4ce0(arg1, rsi, arg3)
int64_t var_218

if ((*(r15 + 0x28) & 1) != 0 && (*(r15 + 0x2a) & 0x20) == 0 && rsi == arg1[0x23])
    sub_141eaf730(arg1)
    var_218 = arg1[3]
    int64_t var_1f0
    sub_140b63b70(&var_218, &var_1f0)
    int64_t rsi_1 = var_1f0
    uint64_t var_210 = 0
    int32_t var_1e8
    int32_t var_208_1 = var_1e8
    
    if (var_1e8 != 0)
        sub_1405a4c70(&var_210, var_1e8, 0)
        memcpy(var_210, rsi_1, var_1e8 * 2)
    
    void* r13_1 = arg1[0x50]
    char r12_1 = *(arg1 + 0x234)
    void var_1e0
    
    if (r13_1 != 0 && ((r12_1 & 2) != 0 || (r12_1 & 1) != 0))
        for (int32_t i = 0; i s>= 0; i += 1)
            if (i s>= *(r13_1 + 0x30))
                break
            
            void* rcx_6 = *(r13_1 + 0x28)
            int64_t rdx_4 = sx.q(i) * 0x78
            var_218 = *(rcx_6 + rdx_4 + 0x18)
            int64_t* rax_6 = sub_140b63b70(&var_218, &var_1e0)
            sub_141e916b0(&var_210, rcx_6 + rdx_4 + 0x30, *(rcx_6 + rdx_4 + 8), rax_6)
    
    if ((r12_1 & 2) != 0)
        void* rax_7 = arg1[0x4f]
        
        if (rax_7 != 0)
            int64_t* rsi_3 = *(rax_7 + 0x38)
            int64_t r15_1 = 0
            uint64_t r12_3 = sx.q(*(rax_7 + 0x40)) << 3 u>> 3
            
            if (rsi_3 u> &rsi_3[sx.q(*(rax_7 + 0x40))])
                r12_3 = 0
            
            if (r12_3 != 0)
                do
                    void* rbx_3 = *rsi_3
                    var_218 = *(rbx_3 + 0xd0)
                    int64_t* rax_11 = sub_140b63b70(&var_218, &var_1e0)
                    sub_141e916b0(&var_210, rbx_3 + 0x38, *(rbx_3 + 0x30), rax_11)
                    r15_1 += 1
                    rsi_3 = &rsi_3[1]
                while (r15_1 != r12_3)
        
        if (arg1[0x55].d - *(arg1 + 0x2d4) s> 0)
            int64_t* r15_2 = arg1[0x49]
            int64_t r12_4 = 0
            uint64_t r13_3 = sx.q(arg1[0x4a].d) << 3 u>> 3
            
            if (r15_2 u> &r15_2[arg1[0x4a]])
                r13_3 = 0
            
            if (r13_3 != 0)
                do
                    int64_t* rsi_4 = *r15_2
                    
                    if (rsi_4 != 0)
                        int64_t rbx_4 = rsi_4[3]
                        int32_t rax_16 = arg1[0x55].d
                        var_218 = rbx_4
                        int64_t* rcx_15
                        
                        if (rax_16 == *(arg1 + 0x2d4))
                        label_141eac8bf:
                            rcx_15 = nullptr
                        else
                            int32_t rax_18 = sub_140b5ead0(rbx_4.d) + var_218:4.d
                            void* r8_5 = &arg1[0x5b]
                            void* rcx_12 = *(r8_5 + 8)
                            
                            if (rcx_12 != 0)
                                r8_5 = rcx_12
                            
                            int32_t rax_20 =
                                *(r8_5 + (((sx.q(arg1[0x5d].d) - 1) & sx.q(rax_18)) << 2))
                            
                            if (rax_20 == 0xffffffff)
                            label_141eac8bf_1:
                                rcx_15 = nullptr
                            else
                                while (true)
                                    rcx_15 = sx.q(rax_20) * 0x58 + arg1[0x54]
                                    
                                    if (*rcx_15 == rbx_4)
                                        break
                                    
                                    rax_20 = rcx_15[0xa].d
                                    
                                    if (rax_20 == 0xffffffff)
                                        goto label_141eac8bf_2
                                
                                if (rax_20 == 0xffffffff)
                                label_141eac8bf_2:
                                    rcx_15 = nullptr
                        
                        int64_t* rbx_5 = &rcx_15[1]
                        
                        if (rcx_15 == 0)
                            rbx_5 = nullptr
                        
                        if (rbx_5 != 0)
                            var_218 = rsi_4[3]
                            sub_140b63b70(&var_218, &var_1e0)
                            sub_141e916b0(&var_210, rbx_5, rsi_4, &var_1e0)
                    
                    r15_2 = &r15_2[1]
                    r12_4 += 1
                while (r12_4 != r13_3)
                
                lpCriticalSection = &arg1[0x60]
    
    if ((*(arg1 + 0x234) & 1) != 0)
        sub_141e97540(arg1[0x23])
    
    uint64_t rax_22 = var_210
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)
    
    int64_t rcx_20 = var_1f0
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    rsi = arg2

int64_t result = (*(*rsi + 0x148))(rsi)

if (result != 0)
    void** var_1d0
    sub_140ca6bb0(arg1, *SymBuffer::end(sub_140b4cb20(&var_1d0, r15), &var_218))
    result = sub_140b4cbb0(&var_1d0)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_238)
return result
