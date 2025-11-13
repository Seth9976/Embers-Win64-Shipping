// 函数: sub_14209e8d0
// 地址: 0x14209e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x4e8)

if (rcx == 0)
    return 

sub_142087ec0(rcx, 0)
int64_t* rax_1 = j_sub_140a82f30(0x10)
int64_t* rsi_1 = rax_1

if (rax_1 == 0)
    rsi_1 = nullptr
else
    *rsi_1 = *(arg1 + 0x4e8)
    void* rax_3 = *(arg1 + 0x4f0)
    rsi_1[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1

int64_t* var_30 = nullptr
int64_t var_38

if (arg1 + 0x4e8 != &var_38)
    *(arg1 + 0x4e8) = 0
    var_38 = 0
    sub_1405aeff0(arg1 + 0x4f0, &var_30)
    int64_t* rcx_2 = var_30
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_30
            (**rbx_1)(rbx_1)
            int32_t rax_6 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_4 = var_30
                (*(*rcx_4 + 8))(rcx_4, 1)

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        uint32_t rax_13
        
        if (data_143de5480 != 0)
            rax_13.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_13.b != 0)
            int64_t* arg_8 = rsi_1
            sub_14207a0d0(&arg_8)
            return 
    
    void var_28
    void** rax_15 = sub_142085440(&var_28, nullptr, 0xff)
    *(*rax_15 + 0x10) = rsi_1
    void* rcx_12 = *rax_15
    int32_t r8_2 = rax_15[2].d
    int64_t* rdx_6 = rax_15[1]
    int64_t* rbx_3 = *(rcx_12 + 0x20)
    int64_t* arg_10 = rbx_3
    int32_t* rsi_2 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *rsi_2 += 1
        rbx_3 = arg_10
    
    sub_1405a5630(rcx_12, rdx_6, r8_2, 1)
    
    if (rbx_3 != 0)
        int32_t rdi_2 = *rsi_2
        *rsi_2 -= 1
        
        if (rdi_2 == 1)
            sub_140a2f6e0(arg_10)
else if (rsi_1 != 0)
    int64_t* rbx_2 = rsi_1[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
    
    return j_sub_140a74f90(rsi_1) __tailcall
