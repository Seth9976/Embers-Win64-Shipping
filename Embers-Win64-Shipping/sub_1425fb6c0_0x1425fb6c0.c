// 函数: sub_1425fb6c0
// 地址: 0x1425fb6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1

if (data_143f70d08 == 0)
    void*** rax_1 = j_sub_140a82f30(0x70)
    void*** rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = 1
        void* rcx = &rbx_1[4]
        *rbx_1 = &data_14344b868
        rbx_1[2] = 0
        rbx_1[3] = 0
        *(rcx + 0x10) = 0
        *(rcx + 0x18) = 0
        *(rcx + 0x1c) = 0x80
        void* rax_2 = *(rcx + 0x10)
        
        if (rax_2 != 0)
            rcx = rax_2
        
        *rcx = 0
        *(rcx + 8) = 0
        rbx_1[8].d = 0xffffffff
        *(rbx_1 + 0x44) = 0
        rbx_1[0xa] = 0
        rbx_1[0xb].d = 0
        rbx_1[0xc] = 0
        rbx_1[0xd].b = sub_140b65b00()
        
        if (CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, &rbx_1[0xc])
                == 0)
            int64_t* rcx_1 = rbx_1[0xc]
            (*(*rcx_1 + 0x30))(rcx_1, rbx_1)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *rax_6 = &data_14344c1b8
        *(rax_6 + 0xc) = 1
        rax_6[2] = rbx_1
    
    int64_t* rbx_2 = rax_6
    int64_t* rdi_2 = data_143f70d10
    data_143f70d08 = rbx_1
    int64_t var_28_2 = 0
    
    if (rbx_2 == rdi_2)
    label_1425fb82c:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        data_143f70d10 = rbx_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_2 = nullptr
            goto label_1425fb82c

if (rsi == 0x10)
    rsi = 0

int64_t* rcx_7 = data_143f70d08 + 0x10
int64_t arg_10 = rsi
void arg_8
return sub_1425f76c0(rcx_7, &arg_8, &arg_10, nullptr)
