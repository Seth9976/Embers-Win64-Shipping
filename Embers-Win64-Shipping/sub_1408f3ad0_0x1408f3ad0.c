// 函数: sub_1408f3ad0
// 地址: 0x1408f3ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[4])

if (arg1[9] == 0)
    if (arg1 != -0x20)
        LeaveCriticalSection(&arg1[4])
    
    if (*arg3 != 0)
        void* rax = arg3[2]
        void* rcx_2 = &arg3[4]
        
        if (rax != 0)
            rcx_2 = rax
        
        (*(*rcx_2 + 0x10))(rcx_2)
    
    uint64_t result
    result.b = 0
    return result

void*** r15_1 = nullptr
int64_t var_60
sub_140b33500(&var_60, 0, 0, 0, int.d(arg2.q), 0)
int64_t* rcx_4 = arg1[9]
uint64_t rdi
rdi.b = 0
char var_77 = 0
int64_t rax_3 = *rcx_4
char var_78_1
char rax_5

if (arg1[0xa].b == 0)
    int32_t rax_6 = (*(rax_3 + 0x80))(rcx_4)
    void*** var_70
    
    if (rax_6 != 2)
        int64_t* rcx_9 = arg1[9]
        var_78_1 = 1
        rax_5 = (*(*rcx_9 + 0x78))(rcx_9, 1, var_60)
        var_77 = rax_5
    label_1408f3bfe:
        
        if (rax_5 != 0)
            int64_t* rdi_2
            
            if (arg1[0xa].b != 0)
                int64_t* rax_12 = sub_140fc6160(sub_140b58260(&var_70, u"WINDOWS", 1))
                int64_t r8_3 = *rax_12
                int64_t var_58
                (*(r8_3 + 0x90))(rax_12, &var_58, r8_3)
                var_70 = nullptr
                int32_t var_68_2 = 0
                sub_1405947f0(&var_70, 0x11)
                int32_t rax_13 = var_68_2 + 0x11
                var_68_2 = rax_13
                
                if (rax_13 s> 0)
                    sub_140594770(&var_70)
                
                UnDecorator::getReferenceType(var_70, u"RemoteConnection", 0x22)
                int64_t* rcx_17 = arg1[9]
                int64_t* rax_15
                int64_t rdx_6
                rax_15, rdx_6 = (*(*rcx_17 + 0x40))(rcx_17, var_58, &var_70)
                void*** rcx_18 = var_70
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                if (rax_15 != 0)
                    int64_t r8_5 = *rax_15
                    rdx_6.b = 1
                    (*(r8_5 + 0x98))(rax_15, rdx_6, r8_5)
                    sub_1408f3a10(arg1.b, rax_15, data_1439866e0, data_1439866e4)
                    void*** rax_16 = j_sub_140a82f30(0x58)
                    void*** r14_1
                    
                    if (rax_16 == 0)
                        r14_1 = nullptr
                    else
                        r14_1 = sub_1408f2c10(rax_16)
                    
                    void*** rax_18 = j_sub_140a82f30(0x18)
                    void*** rdi_3 = rax_18
                    
                    if (rax_18 == 0)
                        rdi_3 = nullptr
                    else
                        rax_18[1].d = 1
                        *(rax_18 + 0xc) = 1
                        *rdi_3 = &data_142e151a8
                        rdi_3[2] = r14_1
                    
                    void** rsi_1 = &r14_1[1]
                    
                    if (r14_1 == 0)
                        rsi_1 = nullptr
                    
                    if (rsi_1 != 0)
                        void* rax_19
                        
                        if (*rsi_1 != 0)
                            rax_19 = rsi_1[1]
                        
                        if (*rsi_1 == 0 || rax_19 == 0 || *(rax_19 + 8) s<= 0)
                            if (rdi_3 != 0)
                                rdi_3[1].d += 1
                            
                            *rsi_1 = r14_1
                            int64_t* rcx_22 = rsi_1[1]
                            
                            if (rdi_3 != rcx_22)
                                if (rdi_3 != 0)
                                    *(rdi_3 + 0xc) += 1
                                    rcx_22 = rsi_1[1]
                                
                                if (rcx_22 != 0)
                                    int32_t temp6_1 = *(rcx_22 + 0xc)
                                    *(rcx_22 + 0xc) -= 1
                                    
                                    if (temp6_1 == 1)
                                        (*(*rcx_22 + 8))(rcx_22, 1)
                                
                                rsi_1[1] = rdi_3
                            
                            if (rdi_3 != 0)
                                rdi_3[1].d -= 1
                                
                                if (rdi_3[1].d == 1)
                                    (**rdi_3)(rdi_3)
                                    int32_t temp5_1 = *(rdi_3 + 0xc)
                                    *(rdi_3 + 0xc) -= 1
                                    
                                    if (temp5_1 == 1)
                                        (*rdi_3)[1](rdi_3, 1)
                    
                    sub_1408f2e30(r14_1, rax_15)
                    var_70 = r14_1
                    void*** var_68_3 = rdi_3
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    if (sub_1408f2cd0(arg3, &var_70) == 0)
                        (*r14_1)[2](r14_1)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp3_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*rdi_3)[1](rdi_3, 1)
                
                int64_t* var_50
                rdi_2 = var_50
            else
                rdi_2 = arg1[2]
                
                if (rdi_2 != 0)
                    int32_t rax_10 = rdi_2[1].d
                    
                    if (rax_10 != 0)
                        rdi_2[1].d = rax_10 + 1
                        rax_10.b = 1
                    
                    if (rax_10.b == 0)
                        rdi_2 = nullptr
                    
                    if (rdi_2 != 0)
                        r15_1 = arg1[1]
                
                var_70 = r15_1
                int64_t* var_68_1 = rdi_2
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                sub_1408f2cd0(arg3, &var_70)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp1_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        rdi = zx.q(var_78_1)
    else
        sub_140fc89f0(sub_140fc6160(sub_140b58260(&var_70, u"WINDOWS", rax_6 - 1)), 0x38)
        sub_1408f2f00(arg1, u"Connection Check Failed", nullptr)
else
    char rax_4 = (*(rax_3 + 0x30))(rcx_4, &var_77, &var_60)
    var_78_1 = rax_4
    
    if (rax_4 != 0)
        rax_5 = var_77
        goto label_1408f3bfe
    
    rdi = zx.q(rax_4)
    sub_1408f2f00(arg1, u"Connection Check Failed", nullptr)

if (arg1 != -0x20)
    LeaveCriticalSection(&arg1[4])

if (*arg3 != 0)
    void* rax_29 = arg3[2]
    void* rcx_33 = &arg3[4]
    
    if (rax_29 != 0)
        rcx_33 = rax_29
    
    (*(*rcx_33 + 0x10))(rcx_33)

return zx.q(rdi.b)
