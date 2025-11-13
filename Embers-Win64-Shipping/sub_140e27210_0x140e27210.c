// 函数: sub_140e27210
// 地址: 0x140e27210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t* r15 = arg4

if (arg1[0x37].d != 0)
    int64_t* rcx = arg1[0x36]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x37].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x36]
        
        char arg_10
        (*(*rcx_1 + 0x48))(rcx_1, &arg_10)
        arg1[0x35].b = arg_10

char rbx = arg1[0x35].b
char rbp

if (arg2 == 0 || (rbx & 0x19) == 0)
    rbp = 0
else
    rbp = 1

*(arg1 + 0x29) &= 0xfe
*(arg1 + 0x29) |= rbp ^ 1

if (sub_140db3510(&arg1[3]) == 0)
    sub_140db3510(&arg1[3])
else
    r15 = *(arg1[3] + 0x370)
    int64_t* rax_8 = sub_140da9130(&arg1[3])
    *(rax_8 + 0x1a) = rbx
    *(rax_8 + 0x1b) ^= (*(arg1 + 0x29) << 2 ^ *(rax_8 + 0x1b)) & 4
    
    if (arg3 != 0)
        sub_140dbb630(arg1[3], rax_8)

int64_t var_38
int64_t* var_30

if (r15 != 0)
    int64_t* rbx_1 = arg1[2]
    int64_t rcx_5 = 0
    
    if (rbx_1 != 0)
        int32_t rax_9 = rbx_1[1].d
        
        if (rax_9 != 0)
            rbx_1[1].d = rax_9 + 1
            rax_9.b = 1
        
        if (rax_9.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_5 = arg1[1]
    
    var_38 = rcx_5
    var_30 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_10 = rbx_1[1].d
        rbx_1[1].d = rax_10
        
        if (rax_10 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140dbb440(r15, &var_38)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

sub_140d9b720(&arg1[0x27])
int64_t* rax_16 = (*(*arg1 + 0x190))(arg1)
int64_t rdx_4 = *rax_16
int32_t result = (*rdx_4)(rax_16, rdx_4)
int32_t result_1 = result

if (result s> 0)
    do
        int64_t r9 = *rax_16
        (*(r9 + 0x10))(rax_16, &var_38, zx.q(rdi), r9)
        result = sub_140e27210(var_38, zx.q(rbp), zx.q(arg3), r15)
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                result = (**var_30)(var_30)
                int32_t temp3_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*var_30 + 8))(var_30, 1)
        
        rdi += 1
    while (rdi s< result_1)

return result
