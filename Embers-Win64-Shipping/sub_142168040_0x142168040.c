// 函数: sub_142168040
// 地址: 0x142168040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_10 = 0
int64_t r9 = sx.q(*arg2)
int32_t r12 = 0

if (r9.d == 0)
    return 

int32_t* rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_1421680ce:
    rcx_3 = nullptr
else
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_2 = *(r8 + (((sx.q(arg1[9].d) - 1) & r9) << 2))
    
    if (rax_2 == 0xffffffff)
    label_1421680ce_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_2) * 0x38 + *arg1
            
            if (*rcx_3 == r9.d)
                break
            
            rax_2 = rcx_3[0xc]
            
            if (rax_2 == 0xffffffff)
                goto label_1421680ce_2
        
        if (rax_2 == 0xffffffff)
        label_1421680ce_2:
            rcx_3 = nullptr

void* rbx_1 = &rcx_3[2]

if (rcx_3 == 0)
    rbx_1 = nullptr

int16_t* var_58
int32_t var_50
int16_t* var_48
int32_t var_40

if (rbx_1 == 0)
    sub_140a2e390(&var_48, u"%d", zx.q(r9.d))
    int16_t* const r8_3 = &data_142d40450
    
    if (var_40 != 0)
        r8_3 = var_48
    
    sub_140a2e390(&var_58, u"[%s]NOT_IN_CACHE", r8_3)
    
    if (var_50 != 0)
        rsi = var_50 - 1
    
    sub_140a20ba0(arg3, var_58, rsi)
    int16_t* rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    return 

sub_142168040(arg1, rbx_1 + 8, arg3)

if (arg3[1].d s> 1)
    sub_140a20ba0(arg3, &data_142d404c4, 1)

char rax_4 = sub_140d3e110(rbx_1)
int32_t rcx_12 = *(rbx_1 + 0xc)
int16_t* rcx_38
int16_t* var_38

if (rax_4 == 0)
    int32_t rbx_3 = *(rbx_1 + 0x10)
    char rax_10 = sub_140b5b8a0(rcx_12, 0)
    rcx_12.b = rbx_3 == 0
    int32_t var_30
    
    if ((rcx_12.b & rax_10) == 0)
        int64_t* rax_12 = sub_140b63b70(rbx_1 + 0xc, &var_58)
        int16_t* rdi_2 = &data_142d40450
        
        if (rax_12[1].d != 0)
            *rax_12
        
        sub_140a2e390(&var_48, u"%d", zx.q(*arg2))
        
        if (var_40 != 0)
            rdi_2 = var_48
        
        sub_140a2e390(&var_38, u"[%s]%s", rdi_2)
        
        if (var_30 != 0)
            rsi = var_30 - 1
        
        sub_140a20ba0(arg3, var_38, rsi)
        int16_t* rcx_36 = var_38
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        int16_t* rcx_37 = var_48
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        rcx_38 = var_58
    else
        sub_140a2e390(&var_48, u"%d", zx.q(*arg2))
        int16_t* r8_10 = &data_142d40450
        
        if (var_40 != 0)
            r8_10 = var_48
        
        sub_140a2e390(&var_38, u"[%s]EMPTY", r8_10)
        
        if (var_30 != 0)
            rsi = var_30 - 1
        
        sub_140a20ba0(arg3, var_38, rsi)
        int16_t* rcx_31 = var_38
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        rcx_38 = var_48
else
    int16_t* rdi_1 = &data_142d40450
    rcx_12.b = sub_140b5b8a0(rcx_12, 0) == 0
    
    if ((*(rbx_1 + 0x10) != 0 | rcx_12.b) != 0)
        arg_10.q = *(sub_140d3c6e0(rbx_1) + 0x18)
        sub_140b63b70(&arg_10, &var_48)
        int64_t* rax_7 = sub_140b63b70(rbx_1 + 0xc, &var_38)
        int16_t* rdx_7
        
        if (rax_7[1].d == 0)
            rdx_7 = &data_142d40450
        else
            rdx_7 = *rax_7
        
        int16_t* rcx_17 = &data_142d40450
        
        if (var_40 != 0)
            rcx_17 = var_48
        
        sub_140a54510(rcx_17, rdx_7)
        r12 = 3
    
    if ((r12.b & 2) != 0)
        int16_t* rcx_18 = var_48
        r12 &= 0xfffffffd
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    if ((r12.b & 1) != 0)
        int16_t* rcx_19 = var_38
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
    
    arg_10.q = *(sub_140d3c6e0(rbx_1) + 0x18)
    sub_140b63b70(&arg_10, &var_38)
    sub_140a2e390(&var_58, u"%d", zx.q(*arg2))
    
    if (var_50 != 0)
        rdi_1 = var_58
    
    sub_140a2e390(&var_48, u"[%s]%s", rdi_1)
    
    if (var_40 != 0)
        rsi = var_40 - 1
    
    sub_140a20ba0(arg3, var_48, rsi)
    int16_t* rcx_26 = var_48
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int16_t* rcx_27 = var_58
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    rcx_38 = var_38

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)
