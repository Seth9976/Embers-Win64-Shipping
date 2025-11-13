// 函数: sub_140d84e20
// 地址: 0x140d84e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int64_t rax_1 = __security_cookie ^ &var_888
int64_t var_848 = *arg3
int64_t* rax_3 = arg3[1]

if (rax_3 != 0)
    *(rax_3 + 0xc) += 1

int64_t* var_850 = &var_848
int32_t var_858
sub_140d6f360(arg1 + 0x60, &var_858, &var_850, nullptr)
void* rsi_1 = sx.q(var_858) * 0x38 + *(arg1 + 0x60)

if (rax_3 != 0)
    int32_t temp0_1 = *(rax_3 + 0xc)
    *(rax_3 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rax_3 + 8))(rax_3, 1)

void*** rax_6 = j_sub_140a82f30(0x80)
void*** r14 = rax_6

if (rax_6 == 0)
    r14 = nullptr
else
    r14[2].d = 1
    *r14 = &data_142ebfdf0
    r14[1] = &data_142ebfee0
    r14[3] = *arg3
    void* rax_8 = arg3[1]
    r14[4] = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    __builtin_memset(&r14[5], 0, 0x15)
    __builtin_memset(&r14[8], 0, 0x14)
    __builtin_memset(&r14[0xb], 0, 0x24)

int64_t* rcx_2 = *(rsi_1 + 0x18)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

*(rsi_1 + 0x18) = r14
int64_t* rcx_3 = *(arg1 + 0x20)
enum WIN32_ERROR rax_11 = (*(*rcx_3 + 0x28))(rcx_3, &r14[0xc])
void var_838

if (rax_11 s< NO_ERROR)
label_140d850cc:
    sub_140b6cae0(&var_838, 0x400, rax_11)
label_140d850d1:
    int64_t* rcx_17 = *(rsi_1 + 0x18)
    
    if (rcx_17 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        (*(*rcx_17 + 0x10))(rcx_17)
    label_140d850e0:
        *(rsi_1 + 0x18) = 0
        *arg2 = 0
        arg2[1] = 0
else
    void* r9_1 = *(rsi_1 + 0x18)
    int64_t* rcx_4 = *(r9_1 + 0x60)
    
    if (rcx_4 == 0)
        goto label_140d850cc
    
    void* var_860_1 = r9_1 + 0x78
    void* var_868_1 = r9_1 + 0x68
    rax_11 = (*(*rcx_4 + 0x18))(rcx_4, zx.q(*(arg1 + 0x28)), 0)
    
    if (rax_11 s< NO_ERROR)
        goto label_140d850cc
    
    void* rcx_5 = *(rsi_1 + 0x18)
    int64_t rdx_3 = *(rcx_5 + 0x68)
    
    if (rdx_3 == 0)
        goto label_140d850cc
    
    int64_t* rcx_6 = *(rcx_5 + 0x60)
    enum WIN32_ERROR rax_14 = (*(*rcx_6 + 0x20))(rcx_6, rdx_3)
    
    if (rax_14 s>= NO_ERROR)
        void* rax_15 = *(rsi_1 + 0x18)
        int64_t* rcx_9 = *(rax_15 + 0x70)
        int64_t* r15_1 = *(rax_15 + 0x68)
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x10))(rcx_9)
            *(rax_15 + 0x70) = 0
        
        enum WIN32_ERROR rax_18 = (**r15_1)(r15_1, &data_1434cb2f0, rax_15 + 0x70)
        
        if (rax_18 s< NO_ERROR || *(*(rsi_1 + 0x18) + 0x70) == 0)
            sub_140b6cae0(&var_838, 0x400, rax_18)
            int64_t* rcx_15 = *(*(rsi_1 + 0x18) + 0x60)
            rax_11 = (*(*rcx_15 + 0x28))(rcx_15, 1)
            
            if (rax_11 s>= NO_ERROR)
                goto label_140d850d1
            
            goto label_140d850cc
        
        void*** rax_19 = j_sub_140a82f30(0x10)
        void*** r14_2 = rax_19
        
        if (rax_19 == 0)
            r14_2 = nullptr
        else
            *r14_2 = &data_142ec15d0
            int64_t* rcx_12 = *(rsi_1 + 0x18)
            r14_2[1] = rcx_12
            
            if (rcx_12 != 0)
                (*(*rcx_12 + 8))()
        
        void*** rax_21 = j_sub_140a82f30(0x18)
        
        if (rax_21 == 0)
            rax_21 = nullptr
        else
            rax_21[1].d = 1
            *rax_21 = &data_142ec1808
            *(rax_21 + 0xc) = 1
            rax_21[2] = r14_2
        
        *arg2 = r14_2
        arg2[1] = rax_21
    else
        sub_140b6cae0(&var_838, 0x400, rax_14)
        int64_t* rcx_8 = *(rsi_1 + 0x18)
        
        if (rcx_8 != 0)
            int64_t rdx_4 = *rcx_8
            (*(rdx_4 + 0x10))(rcx_8, rdx_4)
            goto label_140d850e0
        
        *arg2 = 0
        arg2[1] = 0
__security_check_cookie(rax_1 ^ &var_888)
return arg2
