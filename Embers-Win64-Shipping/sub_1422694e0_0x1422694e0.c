// 函数: sub_1422694e0
// 地址: 0x1422694e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_8 = arg1
void* rdi = *(arg3 + 0x1f8)
char rax_3

if (rdi != 0)
    int16_t* arg_18 = arg1
    arg3.b = 1
    char rax_1
    int64_t r8
    rax_1, r8 = sub_140b0f6c0(&arg_18, u"PXVIS")
    char rax_2
    
    if (rax_1 == 0)
        r8.b = 1
        rax_2, arg3 = sub_140b0f6c0(&arg_18, u"APEXVIS")
    
    if (rax_1 != 0 || rax_2 != 0)
        rax_3, arg3 = sub_142269800(rdi, arg_18, arg2)
        
        if (rax_3 != 0)
            return 1

if (data_143de5426 == 0 && data_143ef8520 != 0)
    arg3.b = 1
    rax_3, arg3 = sub_140b0f6c0(&arg_8, &data_142fcab00)
    
    if (rax_3 != 0)
        if (data_143ef8550 != 0)
            arg3.b = 1
            char rax_4
            int64_t r8_2
            rax_4, r8_2 = sub_140b0f6c0(&arg_8, u"CONNECT")
            int64_t* rcx_5 = &arg_8
            r8_2.b = 1
            
            if (rax_4 == 0)
                if (sub_140b0f6c0(rcx_5, u"DISCONNECT") != 0)
                    int64_t* rcx_16 = data_143ef8550
                    (*(*rcx_16 + 0x20))(rcx_16)
            else
                int64_t r13
                r13.b = sub_140b0f6c0(rcx_5, u"NODEBUG") == 0
                int64_t var_48 = 0
                int64_t var_40_1 = 0
                sub_1405947f0(&var_48, 0xa)
                int32_t r12_1 = var_40_1:4.d
                int32_t rdi_1 = var_40_1.d + 0xa
                var_40_1.d = rdi_1
                
                if (rdi_1 s> r12_1)
                    sub_140594770(&var_48)
                    r12_1 = var_40_1:4.d
                    rdi_1 = var_40_1.d
                
                int64_t rsi_1 = var_48
                UnDecorator::getReferenceType(rsi_1, u"localhost", 0x14)
                int16_t* r14_1 = arg_8
                
                if (*r14_1 != 0 && rsi_1 != r14_1)
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (r14_1[rbx_1] != 0)
                    
                    int32_t rdx_2 = 0
                    var_40_1.d = 0
                    
                    if (r12_1 != rbx_1.d + 1)
                        sub_1405947f0(&var_48, rbx_1.d + 1)
                        rdx_2 = var_40_1.d
                        r12_1 = var_40_1:4.d
                        rsi_1 = var_48
                    
                    rdi_1 = rbx_1.d + 1 + rdx_2
                    var_40_1.d = rdi_1
                    
                    if (rdi_1 s> r12_1)
                        sub_140594770(&var_48)
                        rdi_1 = var_40_1.d
                        rsi_1 = var_48
                    
                    if (rbx_1.d != 0xffffffff)
                        memcpy(rsi_1, r14_1, (rbx_1.d + 1) * 2)
                
                var_48 = 0
                var_40_1.d = rdi_1
                
                if (rdi_1 != 0)
                    sub_1405a4c70(&var_48, rdi_1, 0)
                    memcpy(var_48, rsi_1, rdi_1 * 2)
                else
                    var_40_1:4.d = 0
                
                sub_1417cbca0(&var_48, r13.b)
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
                    int64_t rax_6
                    rax_6.b = 1
                    return rax_6
        
        return 1

arg3.b = 1
char rax_8
int64_t r8_7
rax_8, r8_7 = sub_140b0f6c0(&arg_8, u"PHYSXSHARED")

if (rax_8 != 0)
    sub_1417c81e0(data_143ef85a8, arg2)
    void* rax_9
    rax_9.b = 1
    return rax_9

r8_7.b = 1

if (sub_140b0f6c0(&arg_8, u"PHYSXINFO") == 0)
    return 0

sub_140b1f640(arg2, u"PhysX Info:")
int32_t var_58 = 0
sub_140b1f700(arg2, u"  Version: %d.%d.%d", 3)
sub_140b1f640(arg2, u"  Configuration: RELEASE")
wchar16 const* const rdx_9 = u"  Cooking Module: TRUE"

if (sub_1417c9c70(1) == 0)
    rdx_9 = u"  Cooking Module: FALSE"

sub_140b1f640(arg2, rdx_9)
int64_t rax_12
rax_12.b = 1
return rax_12
