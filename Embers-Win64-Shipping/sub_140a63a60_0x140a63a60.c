// 函数: sub_140a63a60
// 地址: 0x140a63a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = data_143db7a50

if (r14 != 0)
    int64_t* rdi_1 = arg1[9]
    int64_t var_18 = 0
    int64_t* rax_1 = rdi_1
    int64_t* var_10_1 = rdi_1
    
    if (rdi_1 != 0)
        int32_t rax_2 = rdi_1[1].d
        
        if (rax_2 == 0)
            rdi_1 = nullptr
            int64_t var_10_2 = 0
            rax_1 = nullptr
        else
            rdi_1[1].d = rax_2 + 1
            rax_1 = rdi_1
    
    if (rax_1 != 0)
        int64_t rax_4 = arg1[8]
        var_18 = rax_4
        
        if (rax_4 != 0)
            EnterCriticalSection(r14 + 0x78)
            sub_140a87520(r14 + 0xa0, &var_18)
            
            if (r14 != -0x78)
                LeaveCriticalSection(r14 + 0x78)
    
    if (&arg1[8] != &var_18)
        arg1[8] = 0
        int64_t* rcx_3 = arg1[9]
        arg1[9] = 0
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t rbx_2 = arg1[0xa]

if (rbx_2 != 0)
    int64_t* rcx_6 = data_143ddb3f0
    
    if (rcx_6 == 0)
        sub_140a750a0()
        rcx_6 = data_143ddb3f0
    
    (*(*rcx_6 + 0x30))(rcx_6, rbx_2)

int64_t* rcx_7 = arg1[9]

if (rcx_7 != 0)
    int32_t temp0_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

return sub_142a47ff0(arg1) __tailcall
