// 函数: sub_14089dd50
// 地址: 0x14089dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* var_88 = arg1
int64_t* result

while (true)
    result = *arg1
    
    if (result[0xc0] == 0)
        break
    
    result = sub_1408a0040(**(result[0xbd] + (((result[0xbe] - 1) & result[0xbf]) << 3)), 0x100000)
    
    if (result.b == 0)
        break
    
    void* rdi_1 = *arg1
    int64_t* rbx_1 = *(*(*(rdi_1 + 0x5e8) + (((*(rdi_1 + 0x5f0) - 1) & *(rdi_1 + 0x5f8)) << 3)) + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_6 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*rbx_1 + 8))(rbx_1)
    
    int64_t temp1_1 = *(rdi_1 + 0x600)
    *(rdi_1 + 0x600) -= 1
    
    if (temp1_1 != 1)
        *(rdi_1 + 0x5f8) += 1
    else
        *(rdi_1 + 0x5f8) = 0

void* rcx_11 = *arg1

if (*(rcx_11 + 0xb8) != 0)
    void** const var_68 = &data_142dfbf30
    int64_t* var_60_1 = arg1
    void** const* var_30_1 = &var_68
    sub_140591950(rcx_11 + 0x330, &var_68)
    
    if (var_30_1 != 0)
        void** const* rdx_2
        rdx_2.b = var_30_1 != &var_68
        (*var_30_1)[4](var_30_1, rdx_2)
    
    int64_t* i_3 = *arg1 + 0x608
    int64_t* i_4 = i_3
    int64_t* i_5 = nullptr
    result = &i_5
    int64_t* result_1 = &i_5
    int64_t* i = *i_3
    
    while (i != 0)
        int64_t* rsi_1 = i[1]
        (*(*rsi_1 + 8))(rsi_1)
        result = (*(*rsi_1 + 0x10))(rsi_1)
        
        if (result.d == 1)
            i[2].d += 1
            
            if (i[2].d u> 0xa)
                int64_t** result_2 = *i_3
                i = *result_2
                *result_2 = nullptr
                *i_3 = i
                result = result_1
                *result = result_2
                result_1 = result_2
                continue
        
        i_3 = i
        i = *i
    
    int64_t* i_2 = i_5
    
    if (i_2 != 0)
        int64_t* i_1
        
        do
            i_1 = *i_2
            int64_t* rcx_16 = i_2[1]
            
            if (rcx_16 != 0)
                i_2[1] = 0
                (*(*rcx_16 + 0x10))(rcx_16)
            
            result = j_sub_140a74f90(i_2)
            i_2 = i_1
        while (i_1 != 0)

__security_check_cookie(rax_1 ^ &var_a8)
return result
