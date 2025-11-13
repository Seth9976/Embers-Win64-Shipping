// 函数: sub_140ac9b80
// 地址: 0x140ac9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_18 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x20)
uint64_t result = *arg3
int64_t* var_80
int64_t var_68
int64_t* rbx
int64_t r15

if (result == 0)
    rbx = var_80
    r15.b = 0
else
    rbx = arg3[1]
    uint64_t result_1 = result
    var_80 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
        rbx = var_80
    
    rsi = 1
    
    if (sub_140aab2a0(sub_140aae970(), &result_1, &var_68, &var_78).b == 0)
        r15.b = 0
    else
        r15 = 1

if ((rsi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**var_80)(var_80)
        int32_t rax_3 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*var_80 + 8))(var_80, 1)

if (r15.b == 0)
    int64_t rcx_23 = var_78
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_68
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t* rbx_3 = arg3[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rdi_2 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_2))
    
    result.b = 0
else
    sub_140a20ba0(arg2, u"NSLOCTEXT("", 0xb)
    int64_t var_58
    int64_t* rax_5 = sub_140a30480(&var_68, &var_58, nullptr)
    int32_t rcx_5 = rax_5[1].d
    int32_t r8_1 = rcx_5 - 1
    
    if (rcx_5 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_5, r8_1)
    int64_t rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140a20ba0(arg2, u"", "", 4)
    int64_t var_48
    int64_t* rax_6 = sub_140a30480(&var_78, &var_48, nullptr)
    int32_t rcx_10 = rax_6[1].d
    int32_t r8_2 = rcx_10 - 1
    
    if (rcx_10 == 0)
        r8_2 = 0
    
    sub_140a20ba0(arg2, *rax_6, r8_2)
    int64_t rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140a20ba0(arg2, u"", "", 4)
    int64_t var_38
    int64_t* rax_7 = sub_140a30480(arg1 + 0x10, &var_38, nullptr)
    int32_t rcx_15 = rax_7[1].d
    int32_t r8_3 = rcx_15 - 1
    
    if (rcx_15 == 0)
        r8_3 = 0
    
    sub_140a20ba0(arg2, *rax_7, r8_3)
    int64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    sub_140a20ba0(arg2, &data_142e6463c, 2)
    int64_t rcx_19 = var_78
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_68
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t* rbx_2 = arg3[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
    
    result.b = 1

return result
