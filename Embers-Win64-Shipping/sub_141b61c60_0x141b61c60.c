// 函数: sub_141b61c60
// 地址: 0x141b61c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* rdi

if (*(arg1 + 0x1f0) s<= 0)
    int64_t** rax_3 = j_sub_140a82f30(0x10)
    int64_t** rsi_2
    
    if (rax_3 == 0)
        rsi_2 = nullptr
    else
        rsi_2 = sub_141b49780(rax_3, nullptr)
    
    int64_t* rax_5 = j_sub_140a82f30(0x18)
    rdi = rax_5
    
    if (rax_5 == 0)
        rdi = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *rdi = &data_14306d0b8
        rdi[2] = rsi_2
    
    int64_t** var_c8 = rsi_2
    int64_t* var_c0_1 = rdi
    
    if (arg2 == &var_c8)
        goto label_141b61de1
    
    *arg2 = rsi_2
    int64_t* rsi_3 = arg2[1]
    var_c8 = nullptr
    
    if (rdi == rsi_3)
        goto label_141b61de1
    
    int64_t* var_c0_2 = nullptr
    arg2[1] = rdi
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp6_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
        
        rdi = var_c0_2
        goto label_141b61de1
else
    int64_t rax = *(arg1 + 0x1e8)
    int64_t r8_1 = sx.q(*(arg1 + 0x1f0)) * 2
    int64_t rsi = *(rax + (r8_1 << 3) - 0x10)
    rdi = *(rax + (r8_1 << 3) - 8)
    *(rax + (r8_1 << 3) - 8) = 0
    *(rax + (r8_1 << 3) - 0x10) = 0
    sub_140dbae50(arg1 + 0x1e8, *(arg1 + 0x1f0) - 1, 1, 0)
    void var_78
    
    if (arg2 == &var_78)
    label_141b61de1:
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
    else
        *arg2 = rsi
        int64_t* rsi_1 = arg2[1]
        
        if (rdi == rsi_1)
            goto label_141b61de1
        
        arg2[1] = rdi
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp4_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
void* rax_9 = *arg4
int32_t r8_2 = *(rax_9 + 0x14)
void* rcx_7 = **arg2
*(rcx_7 + 0x18) = *(rax_9 + 0x10)
*(rcx_7 + 0x1c) = r8_2
int64_t* rdi_1 = arg4[1]
void* r13 = *arg2
int64_t rsi_4 = *arg4

if (rdi_1 != 0)
    rdi_1[1].d += 1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1

if (sub_140a80f40() == 0)
    uint32_t rax_17
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_17.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_17.b == 0))
        void var_68
        void** rax_23 = sub_141b52d70(&var_68, nullptr, 0xff)
        void* rcx_19 = *rax_23
        *(rcx_19 + 0x10) = r13
        *(rcx_19 + 0x18) = rsi_4
        *(rcx_19 + 0x20) = rdi_1
        void* rcx_20 = *rax_23
        int64_t* r13_1 = *(rcx_20 + 0x30)
        
        if (r13_1 != 0)
            r13_1[9].d += 1
        
        sub_140778000(rcx_20, rax_23[1], rax_23[2].d, 1)
        
        if (r13_1 != 0)
            r13_1[9].d -= 1
            
            if (r13_1[9].d == 1)
                sub_140a2f6e0(r13_1)
    else
        if (rsi_4 != 0)
            int64_t var_98 = rsi_4
            int64_t* var_90_1 = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            sub_142377120(*(r13 + 8), &var_98, 2, 0x10)
        
        int64_t* rcx_15 = *(r13 + 8) + 0x20
        (*(*rcx_15 + 0x28))(rcx_15)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_21 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
else
    if (rsi_4 != 0)
        int64_t var_a8 = rsi_4
        int64_t* var_a0_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        sub_142377120(*(r13 + 8), &var_a8, 2, 0x10)
    
    int64_t* rcx_10 = *(r13 + 8) + 0x20
    (*(*rcx_10 + 0x28))(rcx_10)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_15 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rsi_5 = arg2[1]
int64_t rax_25 = *arg2

if (rsi_5 != 0)
    rsi_5[1].d += 1

int64_t arg_10 = arg3
int64_t var_b8 = rax_25

if (rsi_5 != 0)
    rsi_5[1].d += 1

int64_t* var_88 = &arg_10
int64_t* var_80 = &var_b8
void arg_18
sub_141b48980(arg1 + 0x98, &arg_18, &var_88, nullptr)

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t temp9_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t temp10_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_32 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rbx_3 = arg4[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t r12_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (r12_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(r12_1))

return arg2
