// 函数: sub_141bb3860
// 地址: 0x141bb3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t arg_8 = 0
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x26].d, 0) == 0
int64_t* rax_16
int64_t* rbx_3
int64_t* rsi_1
int32_t r14
void** (* r15_1)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
void** (* var_48)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
void** (* var_38)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
int64_t* var_30
int64_t* rbx_2

if ((*(arg1 + 0x134) != 0 | rcx.b) == 0)
label_141bb393f:
    
    if (arg1[0x24] != 0)
        void* rax_5 = sub_141c122a0()
        
        if (rax_5 == 0)
            goto label_141bb3a77
        
        void* rdx_4 = arg1[0x24]
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30
                || rdx_4 == 0)
            goto label_141bb3a77
        
        void* rax_8 = sub_141c122a0()
        int64_t rax_9
        void* const rdx_5
        
        if (rax_8 != 0)
            rdx_5 = arg1[0x24]
            rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_8 == 0 || rax_9.d s> *(rdx_5 + 0x38)
                || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
            rdx_5 = nullptr
        
        if ((*(rdx_5 + 0xcc) & 1) != 0)
            goto label_141bb3a77
        
        void* rax_12 = (*(*arg1 + 0x150))(arg1, rdx_5)
        
        if (rax_12 == 0)
            goto label_141bb3a77
        
        arg_8.q = 0
        int64_t* rax_13 = sub_141b70820(rax_12, arg1[0x24], 0)
        
        if (rax_13 == 0)
            goto label_141bb3a77
        
        arg_8.b = 0
        var_30 = &arg_8
        var_38 = sub_141b970e0
        sub_141befea0(rax_13, &var_48, &var_38)
        int64_t* var_40
        rbx_2 = var_40
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        r15_1 = var_48
        goto label_141bb3a31
    
label_141bb3a77:
    rbx_3 = data_143e244b8
    r15_1 = data_143e244b0
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    rsi_1 = var_30
    r14 = 2
    rax_16 = rbx_3
else
    void* rax_1 = sub_140d3c6e0(&arg1[0x25])
    
    if (rax_1 == 0)
        goto label_141bb393f
    
    if (sub_140d1fd20(rax_1, arg1[0x26]) == 0)
        goto label_141bb393f
    
    int64_t* arg_10 = nullptr
    int64_t* rax_3 = sub_140d3c6e0(&arg1[0x25])
    int64_t rax_4 = sub_140d1fd30(rax_3, arg1[0x26])
    int64_t r9_1 = *rax_3
    (*(r9_1 + 0x210))(rax_3, rax_4, &arg_10, r9_1)
    int64_t* rcx_6 = arg_10
    
    if (rcx_6 == 0)
        goto label_141bb3a77
    
    arg_8.b = 0
    int32_t* var_40_1 = &arg_8
    var_48 = sub_141b970e0
    sub_141befea0(rcx_6, &var_38, &var_48)
    rbx_2 = var_30
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    r15_1 = var_38
label_141bb3a31:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        rdi = rbx_2
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r15_1 == 0)
        goto label_141bb3a77
    
    rsi_1 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rbx_3 = var_30
    r14 = 1
    rax_16 = rdi
*arg2 = r15_1
arg2[1] = rax_16

if (rax_16 != 0)
    rax_16[1].d += 1

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

if ((r14.b & 1) != 0 && rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp7_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp6_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
