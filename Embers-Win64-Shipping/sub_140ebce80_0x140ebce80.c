// 函数: sub_140ebce80
// 地址: 0x140ebce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
int16_t* rdi = nullptr
int16_t* r14 = nullptr
int32_t rsi = 0
bool rdx = sub_140b5b8a0(arg2.d, 0) == 0
int16_t* var_58
int16_t* var_48

if ((arg_10:4.d != 0 | rdx) != 0)
    int64_t* rax_2 = sub_140b63b70(&arg_10, &var_48)
    int16_t* rcx_2 = *rax_2
    int32_t rdx_2 = rax_2[1].d
    int32_t rdx_3 = neg.d(rdx_2)
    *rax_2 = 0
    int32_t r8 = rax_2[1].d
    var_58 = rcx_2
    int32_t rcx_3 = *(rax_2 + 0xc)
    int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 2 + r8
    int32_t var_4c_1 = rcx_3
    rax_2[1] = 0
    
    if (rdx_6 s> rcx_3)
        sub_1405947f0(&var_58, rdx_6)
    
    sub_140a20ba0(&var_58, &data_142d404c4, 1)
    int16_t* rcx_6 = var_48
    r14 = var_58
    rsi = r8
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int32_t rcx_7
rcx_7.b = sub_140b5b8a0(arg_18.d, 0) == 0
int16_t* var_68
int32_t var_60
int16_t* rcx_36

if ((arg_18:4.d != 0 | rcx_7.b) != 0)
    int64_t* rax_4 = sub_140b63b70(&arg_18, &var_48)
    int32_t rax_5
    int16_t* rsi_1
    
    if (rsi s> 1)
        int32_t rax_6 = rax_4[1].d
        int32_t r15_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r15_1 = 0
        
        int32_t rax_7
        
        if (rsi == 0)
            rax_7 = rsi + 1
        
        if (rsi != 0 || r15_1 == 0)
            rax_7 = 0
        
        var_68 = nullptr
        int32_t rcx_9 = rax_7 + r15_1
        var_60 = rsi
        
        if (rsi != 0 || rcx_9 != 0)
            sub_1405a4c70(&var_68, rsi + rcx_9, 0)
            memcpy(var_68, r14, rsi * 2)
        else
            var_60 = 0
        
        sub_140a20ba0(&var_68, *rax_4, r15_1)
        rax_5 = var_60
        rsi_1 = var_68
        int64_t var_60_1 = 0
        var_68 = nullptr
    else
        rsi_1 = *rax_4
        *rax_4 = 0
        rax_5 = rax_4[1].d
        rax_4[1] = 0
    
    int16_t* const rdx_11 = &data_142d40450
    
    if (rax_5 != 0)
        rdx_11 = rsi_1
    
    sub_140b58260(arg1, rdx_11, 1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    rcx_36 = var_48
    goto label_140ebd23e

void* rbx_1 = *arg4
int32_t rcx_15

if (rbx_1 != 0)
    int64_t rbx_2 = *(rbx_1 + 0x74)
    rcx_15.b = sub_140b5b8a0(rbx_2.d, 0) == 0
    rcx_15.b |= (rbx_2 u>> 0x20).d != 0

if (rbx_1 == 0 || rcx_15.b == 0)
    sub_140a2e390(&var_68, u"MultiboxWidget%d", zx.q(arg5))
    int32_t rbx_5
    
    if (rsi s> 1)
        int32_t rbx_6 = var_60 - 1
        
        if (var_60 == 0)
            rbx_6 = 0
        
        int32_t rax_15
        
        if (rsi == 0)
            rax_15 = rsi + 1
        
        if (rsi != 0 || rbx_6 == 0)
            rax_15 = 0
        
        var_58 = nullptr
        int32_t rcx_30 = rbx_6 + rax_15
        
        if (rsi != 0 || rcx_30 != 0)
            sub_1405a4c70(&var_58, rsi + rcx_30, 0)
            memcpy(var_58, r14, rsi * 2)
        else
            int32_t var_4c_3 = 0
        
        sub_140a20ba0(&var_58, var_68, rbx_6)
        int16_t* rax_16 = var_58
        rbx_5 = rsi
        var_58 = nullptr
        int32_t var_50_3
        var_50_3.q = 0
        rdi = rax_16
    else
        rbx_5 = var_60
        int16_t* rsi_3 = var_68
        var_48 = nullptr
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_48, rbx_5, 0)
            rdi = var_48
            memcpy(rdi, rsi_3, rbx_5 * 2)
    
    int16_t* rdx_22 = &data_142d40450
    
    if (rbx_5 != 0)
        rdx_22 = rdi
    
    sub_140b58260(arg1, rdx_22, 1)
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    rcx_36 = var_68
label_140ebd23e:
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    int64_t* rbx_7 = arg4[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp2_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
else
    var_68 = *(*arg4 + 0x74)
    int64_t* rax_10 = sub_140b63b70(&var_68, &var_48)
    int32_t rax_11
    int16_t* rsi_2
    
    if (rsi s> 1)
        int32_t rax_12 = rax_10[1].d
        int32_t r15_2 = rax_12 - 1
        
        if (rax_12 == 0)
            r15_2 = 0
        
        int32_t rax_13
        
        if (rsi == 0)
            rax_13 = rsi + 1
        
        if (rsi != 0 || r15_2 == 0)
            rax_13 = 0
        
        var_58 = nullptr
        int32_t rcx_18 = rax_13 + r15_2
        
        if (rsi != 0 || rcx_18 != 0)
            sub_1405a4c70(&var_58, rsi + rcx_18, 0)
            memcpy(var_58, r14, rsi * 2)
        else
            int32_t var_4c_2 = 0
        
        sub_140a20ba0(&var_58, *rax_10, r15_2)
        rax_11 = rsi
        rsi_2 = var_58
        int32_t var_50_2
        var_50_2.q = 0
        var_58 = nullptr
    else
        rsi_2 = *rax_10
        *rax_10 = 0
        rax_11 = rax_10[1].d
        rax_10[1] = 0
    
    int16_t* rdx_16 = &data_142d40450
    
    if (rax_11 != 0)
        rdx_16 = rsi_2
    
    sub_140b58260(arg1, rdx_16, 1)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    int16_t* rcx_24 = var_48
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    sub_140597060(arg4)

return arg1
