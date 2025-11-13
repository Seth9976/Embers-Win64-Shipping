// 函数: sub_14090ec00
// 地址: 0x14090ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))

if (rax_1 == 0)
    return rax_1

int64_t* rcx_2 = data_143e2b898
int64_t* var_40
(*(*rcx_2 + 0x90))(rcx_2, &var_40)
int64_t* rcx_3 = var_40
(*(*rcx_3 + 0x18))(rcx_3, zx.q(*(arg1 + 4)))
int64_t* rcx_4 = var_40
(*(*rcx_4 + 0x28))(rcx_4, zx.q(*(arg1 + 8)))
int16_t* const r15 = &data_142d40450
int16_t* rsi

if (*(arg1 + 0x18) == 0)
    rsi = &data_142d40450
else
    rsi = *(arg1 + 0x10)

int32_t rdx_3 = 0
int64_t var_50 = 0
int32_t rcx_5 = 0
int64_t var_48 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_50, rbx_1.d + 1)
        rcx_5 = var_48:4.d
        rdx_3 = var_48.d
    
    int32_t rax_5 = rdx_3 + rbx_1.d + 1
    var_48.d = rax_5
    
    if (rax_5 s> rcx_5)
        sub_140594770(&var_50)
    
    UnDecorator::getReferenceType(var_50, rsi, (rbx_1.d + 1) * 2)

void arg_10
int32_t* rax_6 = sub_140b5e500(&arg_10, 0x119)
int64_t rbx_3 = *rax_1
int32_t arg_18 = *rax_6
int64_t* rcx_11 = var_40
int32_t arg_1c = 0
void var_58
int64_t* rax_9 = (*(rbx_3 + 0x18))(rax_1, &arg_18, &var_50, (*(*rcx_11 + 0xa0))(rcx_11, &var_58))
int64_t rcx_13 = var_50
int64_t* rbx_4 = rax_9

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

if (rbx_4 != 0)
    if ((*(*rbx_4 + 0xe8))(rbx_4, zx.q(*(arg1 + 0x34))) == 0)
    label_14090ee11:
        
        if (*(arg1 + 0x18) != 0)
            r15 = *(arg1 + 0x10)
        
        sub_140b19e60()
        sub_140b1f700(&data_1439a8bd0, 
            FTcpSocketBuilder: Failed to create the socket %s as configured", r15)
        (*(*rax_1 + 0x38))(rax_1, rbx_4)
        rbx_4 = nullptr
    else
        char rax_13
        int64_t rdx_10
        rax_13, rdx_10 = (*(*rbx_4 + 0xf0))(rbx_4, zx.q(*(arg1 + 0x20)), zx.q(*(arg1 + 0x24)))
        
        if (rax_13 == 0)
            goto label_14090ee11
        
        rdx_10.b = 1
        char rax_15
        int64_t rdx_11
        rax_15, rdx_11 = (*(*rbx_4 + 0xf8))(rbx_4, rdx_10)
        
        if (rax_15 == 0)
            goto label_14090ee11
        
        char rax_17
        
        if (*(arg1 + 1) != 0)
            rax_17, rdx_11 = (*(*rbx_4 + 0x18))(rbx_4, var_40)
        
        if (*(arg1 + 1) != 0 && rax_17 == 0)
            goto label_14090ee11
        
        char rax_19
        
        if (*(arg1 + 0x28) != 0)
            rax_19, rdx_11 = (*(*rbx_4 + 0x28))(rbx_4, zx.q(*(arg1 + 0x2c)))
        
        if (*(arg1 + 0x28) != 0 && rax_19 == 0)
            goto label_14090ee11
        
        rdx_11.b = *arg1 == 0
        
        if ((*(*rbx_4 + 0x98))(rbx_4, rdx_11) == 0)
            goto label_14090ee11
        
        int32_t rdx_14 = *(arg1 + 0x30)
        
        if (rdx_14 s> 0)
            (*(*rbx_4 + 0x108))(rbx_4, rdx_14, &arg_10)
        
        int32_t rdx_15 = *(arg1 + 0x38)
        
        if (rdx_15 s> 0)
            (*(*rbx_4 + 0x100))(rbx_4, rdx_15, &arg_10)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t temp1_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_38 + 8))(var_38, 1)

return rbx_4
