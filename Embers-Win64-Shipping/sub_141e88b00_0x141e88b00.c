// 函数: sub_141e88b00
// 地址: 0x141e88b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t* result = __security_cookie ^ &var_98
int64_t* result_1 = result

if (data_143f39be1 != 0 || data_143f39bf0 != 0)
    int64_t* rcx_1 = data_143db18d0
    
    if (rcx_1 == 0)
        sub_140a53c40()
        rcx_1 = data_143db18d0
    
    (*(*rcx_1 + 0xf0))(rcx_1, 0, 0)
    int128_t var_68 = zx.o(0)
    sub_141e75650(&var_68)
    sub_141e8d480(&var_68)
    void var_58
    int64_t* rax_2 = sub_14059a440(&var_58, nullptr, 2)
    *(*rax_2 + 0x10) = 1
    void* rcx_6 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx_2 = rax_2[1]
    int64_t* rbx_1 = *(rcx_6 + 0x18)
    int64_t* var_70_1 = rbx_1
    int32_t* r14_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *r14_1 += 1
        rbx_1 = var_70_1
    
    sub_1405a5db0(rcx_6, rdx_2, r8_1, 1)
    int64_t* rax_3 = sub_140a242a0()
    void** var_20_1 = nullptr
    int32_t var_14_1 = 4
    int32_t i_2 = 1
    int64_t* var_40 = rbx_1
    
    if (rbx_1 != 0)
        *r14_1 += 1
        rbx_1 = var_70_1
    
    int64_t r9_2 = *rax_3
    (*(r9_2 + 0x48))(rax_3, &var_40, 0x102, r9_2)
    void** rcx_8 = var_20_1
    void** rdi_1 = &var_40
    int32_t i_1 = i_2
    
    if (rcx_8 != 0)
        rdi_1 = rcx_8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_9 = *rdi_1
            
            if (rcx_9 != 0)
                rcx_9[9].d -= 1
                
                if (rcx_9[9].d == 1)
                    sub_140a2f6e0(rcx_9)
            
            rdi_1 = &rdi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_70_1
        rcx_8 = var_20_1
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t* rcx_10 = data_143db7aa0
    (*(*rcx_10 + 0x18))(rcx_10)
    int64_t* rcx_11 = data_143db7aa0
    data_143f39be1 = 0
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x20))(rcx_11, 1)
    
    int64_t* rcx_12 = data_143f39be8
    data_143db7aa0 = 0
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x28))(rcx_12, 1)
    
    data_143f39be8 = 0
    
    if (rbx_1 != 0)
        int32_t rax_8 = *r14_1
        *r14_1 -= 1
        
        if (rax_8 == 1)
            sub_140a2f6e0(var_70_1)
    
    int64_t* rbx_2 = var_68:8.q
    
    if (rbx_2 != 0)
        (*(*rbx_2 + 0x20))(rbx_2, 0xffffffff, 0)
        sub_140a4fc50(rbx_2)
    
    result = var_68.q
    
    if (result != 0)
        result[9].d -= 1
        
        if (result[9].d == 1)
            result = sub_140a2f6e0(var_68.q)

__security_check_cookie(result_1 ^ &var_98)
return result
