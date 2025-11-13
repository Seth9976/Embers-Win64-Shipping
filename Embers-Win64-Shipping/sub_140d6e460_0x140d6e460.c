// 函数: sub_140d6e460
// 地址: 0x140d6e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0xc)
int64_t* rbx = arg3
char rax = sub_140b5b8a0(*(arg2 + 8), 1)
arg3.b = rdi == 0
char rax_1

if ((arg3.b & rax) != 0)
    rax_1 = sub_140b5b9d0(arg2 + 0x24, u"EKeys")

int32_t rax_4

if ((arg3.b & rax) == 0 || rax_1 == 0)
    int32_t rcx_16
    rcx_16.b = *(arg2 + 0xc) == 0
    
    if ((rcx_16.b & sub_140b5b8a0(*(arg2 + 8), 6).b) != 0)
        int64_t* rcx_17 = *(*rbx + 8)
        (*(*rcx_17 + 0x140))(rcx_17, arg1)
else
    int64_t* rcx_2 = *(*rbx + 8)
    (*(*rcx_2 + 0x140))(rcx_2, arg1)
    int16_t* var_28
    sub_140b63b70(arg1, &var_28)
    int64_t rbx_1 = -1
    rax_4 = sub_140a23cf0(&var_28, u"EKeys::", 1, 0, 0xffffffff)
    
    if (rax_4 != 0xffffffff)
        int16_t* rdi_1 = nullptr
        int16_t* const r14 = &data_142d40450
        int32_t var_20
        int32_t rcx_6
        int16_t* const r8
        
        if (var_20 == 0)
            rcx_6 = 0
            r8 = &data_142d40450
        else
            r8 = var_28
            rcx_6 = var_20 - 1
        
        int32_t rax_6 = rcx_6 - rax_4
        int32_t rdx_3
        
        if (rax_6 - 7 s>= 0)
            rdx_3 = rcx_6
            
            if (rax_6 - 7 s< rcx_6)
                rdx_3 = rax_6 - 7
        else
            rdx_3 = 0
        
        int32_t rdx_4 = 0
        int16_t* var_38 = nullptr
        int32_t rax_9 = 0
        int32_t var_30 = 0
        int32_t var_2c = 0
        int16_t* rsi_1 = &r8[sx.q(rcx_6) - sx.q(rdx_3)]
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            do
                rbx_1 += 1
            while (rsi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rbx_1.d + 1)
                rax_9 = var_2c
                rdx_4 = var_30
                rdi_1 = var_38
            
            int32_t rbp_1 = rbx_1.d + 1 + rdx_4
            
            if (rbp_1 s> rax_9)
                sub_140594770(&var_38)
                rdi_1 = var_38
            
            UnDecorator::getReferenceType(rdi_1, rsi_1, (rbx_1.d + 1) * 2)
            
            if (rbp_1 != 0)
                r14 = rdi_1
        
        int64_t arg_10
        sub_140b58260(&arg_10, r14, 1)
        *arg1 = arg_10
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        int16_t* rcx_14 = var_28
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rax_10
        rax_10.b = 1
        return rax_10
    
    int16_t* rcx_15 = var_28
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

rax_4.b = 0
return rax_4
