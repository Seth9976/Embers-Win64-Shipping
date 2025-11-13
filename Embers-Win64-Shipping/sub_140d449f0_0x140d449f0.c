// 函数: sub_140d449f0
// 地址: 0x140d449f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143e20318

if (rax != 0)
    return rax

int64_t* rax_1 = j_sub_140a82f30(0xa0)
int64_t* rdi_1 = rax_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    *rax_1 = 0
    void* rcx_1 = &rax_1[2]
    rax_1[1] = 0
    *(rcx_1 + 0x10) = 0
    *(rcx_1 + 0x18) = 0
    *(rcx_1 + 0x1c) = 0x80
    void* rax_2 = *(rcx_1 + 0x10)
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    void* rcx_2 = &rdi_1[0xc]
    rdi_1[6].d = 0xffffffff
    *(rdi_1 + 0x34) = 0
    rdi_1[8] = 0
    rdi_1[9].d = 0
    rdi_1[0xa] = 0
    rdi_1[0xb] = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_3 = *(rcx_2 + 0x10)
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    __builtin_memset(rcx_2, 0, 0x1c)
    rdi_1[0x10].d = 0xffffffff
    *(rdi_1 + 0x84) = 0
    rdi_1[0x12] = 0
    rdi_1[0x13].d = 0
    sub_140d4a3c0(rdi_1)

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142ebdf80
    rbx_1[2] = rdi_1

void*** var_10_1 = rbx_1
int64_t* r14_1 = data_143e20320
data_143e20318 = rdi_1
int64_t var_18_1 = 0

if (rbx_1 == r14_1)
label_140d44b63:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
        
        return data_143e20318
else
    data_143e20320 = rbx_1
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp3_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
        
        rdi_1 = data_143e20318
        rbx_1 = nullptr
        goto label_140d44b63

return rdi_1
