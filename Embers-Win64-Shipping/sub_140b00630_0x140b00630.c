// 函数: sub_140b00630
// 地址: 0x140b00630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = *arg2
int64_t* rax_1 = arg2[1]
char var_88 = (arg4 ^ 1) + 2

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t var_70 = arg2[2].d
int64_t var_68 = *arg3
int64_t* rax_4 = arg3[1]

if (rax_4 != 0)
    rax_4[1].d += 1

int32_t var_58 = arg3[2].d
void var_50
sub_140a96170(&var_50)
void var_38
sub_140a96170(&var_38)
int64_t* var_20 = nullptr
int32_t var_18 = 0
sub_14065da90(&var_50, &arg1[8])
sub_14065da90(&var_38, &arg1[0xd])

if (&arg1[0xb] != &var_20)
    int64_t* rcx_5
    
    if (arg1[0xc].d != 0)
        rcx_5 = arg1[0xb]
    
    if (arg1[0xc].d != 0 && rcx_5 != 0)
        (*(*rcx_5 + 0x40))(rcx_5, &var_20)
    else if (var_18 != 0)
        int64_t* rcx_6 = var_20
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t* rcx_7 = var_20
            
            if (rcx_7 != 0)
                var_20 = sub_140a84c80(rcx_7, 0, 0)
            
            int32_t var_18_1 = 0

(*(*arg1 + 0x40))(arg1, &var_88)
int32_t result = sub_140745b20(&var_20)
int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        (**var_30)(var_30)
        result = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_30 + 8))(var_30, 1)

int64_t* var_48

if (var_48 != 0)
    result = var_48[1].d
    var_48[1].d -= 1
    
    if (result == 1)
        (**var_48)(var_48)
        result = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_48 + 8))(var_48, 1)

if (rax_4 != 0)
    result = rax_4[1].d
    rax_4[1].d -= 1
    
    if (result == 1)
        (**rax_4)(rax_4)
        result = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rax_4 + 8))(rax_4, 1)

if (rax_1 != 0)
    result = rax_1[1].d
    rax_1[1].d -= 1
    
    if (result == 1)
        result = (**rax_1)(rax_1)
        int32_t rbx_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rbx_1 == 1)
            return (*(*rax_1 + 8))(rax_1, zx.q(rbx_1))

return result
