// 函数: sub_140ba7920
// 地址: 0x140ba7920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r15 = arg2

if (arg3[1].d s<= 1)
    *arg2 = 0
    arg2[1] = 0
    return arg2

int64_t* rbx = *(arg1 + 0x40)
void* rdi_2 = &rbx[sx.q(*(arg1 + 0x48)) * 4]

if (rbx == rdi_2)
label_140ba79c0:
    void*** rax_3 = j_sub_140a82f30(0x100)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142e85888
        sub_140b960a0(&rbx_1[2], arg1, arg3)
    
    void* var_48 = &rbx_1[2]
    void* r13_1 = var_48
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    
    var_48 = nullptr
    int64_t var_40_2 = 0
    sub_140bb3810(&var_48)
    void* r12_1 = var_48
    int64_t rdi_3 = sx.q(var_40_2.d)
    void* rbx_3 = r12_1
    void* rbp_3 = (rdi_3 << 4) + r12_1
    
    if (r12_1 != rbp_3)
        do
            sub_140b9b470(r13_1, rbx_3)
            rbx_3 += 0x10
        while (rbx_3 != rbp_3)
    
    sub_140596d10(&var_48, arg3)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t rbx_4 = sx.q(*(arg1 + 0x48))
    int32_t rax_8 = (rbx_4 + 1).d
    *(arg1 + 0x48) = rax_8
    
    if (rax_8 s> *(arg1 + 0x4c))
        sub_1405c4e40(arg1 + 0x40)
    
    void* rbx_5 = r12_1
    void** rcx_10 = (rbx_4 << 5) + *(arg1 + 0x40)
    *rcx_10 = var_48
    rcx_10[1].d = var_40_2.d
    *(rcx_10 + 0xc) = var_40_2:4.d
    rcx_10[2] = r13_1
    rcx_10[3] = rbx_1
    *r15 = r13_1
    r15[1] = rbx_1
    
    if (rdi_3.d != 0)
        int32_t i
        
        do
            int64_t rcx_11 = *rbx_5
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rbx_5 += 0x10
            i = rdi_3.d
            rdi_3 = zx.q(rdi_3.d - 1)
        while (i != 1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
else
    while (true)
        int16_t* rdx
        
        if (arg3[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg3
        
        int16_t* const rcx
        
        if (rbx[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rbx
        
        if (sub_140a54510(rcx, rdx) == 0)
            *r15 = rbx[2]
            void* rax_5 = rbx[3]
            r15[1] = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            break
        
        rbx = &rbx[4]
        
        if (rbx == rdi_2)
            goto label_140ba79c0

return r15
