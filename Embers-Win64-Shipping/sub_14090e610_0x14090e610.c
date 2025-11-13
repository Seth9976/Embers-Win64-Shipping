// 函数: sub_14090e610
// 地址: 0x14090e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = 0
int32_t var_80 = 0
sub_1405947f0(&var_88, 0x26)
int32_t rbx = var_80 + 0x26

if (rbx s> 0)
    sub_140594770(&var_88)

int64_t rdi = var_88
UnDecorator::getReferenceType(rdi, u"FTcpMessageTransport.RemoteConnection", 0x4c)
int32_t var_64 = data_143e2b8a0
int16_t var_68 = 0
int16_t var_60 = 0
uint64_t var_58 = 0
int32_t var_50 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, rdi, rbx * 2)
else
    int32_t var_4c_1 = 0

char var_48 = 0
int32_t var_44 = 0
char var_40 = 0
int32_t var_38 = 0
char var_34 = 0
int32_t var_30 = 0
int64_t* rax_1 = sub_14090ec00(&var_68)
uint64_t rcx_6 = var_58
int64_t* rsi = rax_1

if (rcx_6 != 0)
    rax_1 = sub_140a74f90(rcx_6)

if (rdi != 0)
    rax_1 = sub_140a74f90(rdi)

if (rsi != 0)
    int64_t* rcx_8 = data_143e2b898
    int64_t* var_78
    (*(*rcx_8 + 0x90))(rcx_8, &var_78)
    int64_t* rcx_9 = var_78
    (*(*rcx_9 + 0x18))(rcx_9, zx.q(*arg2))
    int64_t* rcx_10 = var_78
    (*(*rcx_10 + 0x28))(rcx_10, zx.q(arg2[1].w))
    rdi.b = (*(*rsi + 0x20))(rsi, var_78) == 0
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp2_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    if (rdi.b != 0)
        void arg_18
        int64_t* rax_10 = sub_140fc6160(sub_140b58260(&arg_18, u"WINDOWS", 1))
        int64_t r8_3 = *rax_10
        return (*(r8_3 + 0x38))(rax_10, rsi, r8_3)
    
    void*** rax_11 = j_sub_140a82f30(0xf0)
    void*** rsi_1
    
    if (rax_11 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_14090d8b0(rax_11, rsi, arg2, *(arg1 + 0x28))
    
    int64_t* rax_13 = j_sub_140a82f30(0x18)
    int64_t* rbx_2 = rax_13
    
    if (rax_13 == 0)
        rbx_2 = nullptr
    else
        rax_13[1].d = 1
        *(rax_13 + 0xc) = 1
        *rbx_2 = &data_142e1c960
        rbx_2[2] = rsi_1
    
    void**** rdi_1 = &rsi_1[1]
    
    if (rsi_1 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_14
        
        if (*rdi_1 != 0)
            rax_14 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            *rdi_1 = rsi_1
            int64_t* rcx_18 = rdi_1[1]
            
            if (rbx_2 != rcx_18)
                if (rbx_2 != 0)
                    *(rbx_2 + 0xc) += 1
                    rcx_18 = rdi_1[1]
                
                if (rcx_18 != 0)
                    int32_t temp7_1 = *(rcx_18 + 0xc)
                    *(rcx_18 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rcx_18 + 8))(rcx_18, 1)
                
                rdi_1[1] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp6_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    rax_1 = j_sub_140a82f30(0x18)
    
    if (rax_1 != 0)
        *rax_1 = 0
        rax_1[1] = rsi_1
        rax_1[2] = rbx_2
        int64_t** temp0_1 = *(arg1 + 0xb0)
        *(arg1 + 0xb0) = rax_1
        int64_t* temp0_2 = *temp0_1
        *temp0_1 = rax_1
        return temp0_2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            rax_1 = (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return rax_1
