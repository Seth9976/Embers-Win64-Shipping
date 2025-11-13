// 函数: sub_140972720
// 地址: 0x140972720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr

if (data_143ced2c8 == 0)
    void*** rax_1 = j_sub_140a82f30(0x98)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = 1
        void* rcx = &rdi_1[4]
        *rdi_1 = &data_142e32fb8
        rdi_1[2] = 0
        rdi_1[3] = 0
        *(rcx + 0x10) = 0
        *(rcx + 0x18) = 0
        *(rcx + 0x1c) = 0x80
        void* rax_2 = *(rcx + 0x10)
        
        if (rax_2 != 0)
            rcx = rax_2
        
        *rcx = 0
        *(rcx + 8) = 0
        rdi_1[8].d = 0xffffffff
        *(rdi_1 + 0x44) = 0
        rdi_1[0xa] = 0
        rdi_1[0xb].d = 0
        InitializeCriticalSection(&rdi_1[0xc])
        SetCriticalSectionSpinCount(&rdi_1[0xc], 0xfa0)
        rdi_1[0x11] = 0
        rdi_1[0x12].b = sub_140b65b00()
        
        if (CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, 
                &rdi_1[0x11]) == 0)
            int64_t* rcx_3 = rdi_1[0x11]
            (*(*rcx_3 + 0x30))(rcx_3, rdi_1)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *rax_6 = &data_142e348b8
        *(rax_6 + 0xc) = 1
        rax_6[2] = rdi_1
    
    int64_t* rbx_2 = rax_6
    int64_t* rdi_2 = data_143ced2d0
    data_143ced2c8 = rdi_1
    int64_t var_28_2 = 0
    
    if (rbx_2 == rdi_2)
    label_1409728a8:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        data_143ced2d0 = rbx_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_2 = nullptr
            goto label_1409728a8

if (arg1 != 0)
    rsi = arg1 + 0x10

void* rdi_3 = data_143ced2c8
void* arg_10 = rsi
EnterCriticalSection(rdi_3 + 0x60)
void arg_8
int32_t* result = sub_140946410(rdi_3 + 0x10, &arg_8, &arg_10, nullptr)

if (rdi_3 != -0x60)
    result = LeaveCriticalSection(rdi_3 + 0x60)

*(arg1 + 0x300) = 1
return result
