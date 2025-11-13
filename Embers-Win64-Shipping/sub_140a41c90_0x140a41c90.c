// 函数: sub_140a41c90
// 地址: 0x140a41c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = nullptr
*arg1 = 0
arg1[1] = 0
int64_t rsi = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    int32_t rdx = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rdx = arg1[1].d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    memcpy(*arg1, arg2, (rbx_1.d + 1) * 2)

sub_140b21570(arg1)
int16_t* rax_2 = sub_140a4fcd0()
int64_t var_38 = 0
int32_t rdx_3 = 0
int32_t var_30 = 0
int32_t rcx_3 = 0
int32_t var_2c = 0

if (rax_2 != 0 && *rax_2 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rax_2[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_3.d + 1)
        rcx_3 = var_2c
        rdx_3 = var_30
    
    int32_t rax_3 = rdx_3 + rbx_3.d + 1
    var_30 = rax_3
    
    if (rax_3 s> rcx_3)
        sub_140594770(&var_38)
    
    memcpy(var_38, rax_2, (rbx_3.d + 1) * 2)

sub_140b21570(&var_38)
int32_t i_2 = sub_140a23cf0(&var_38, &data_142d5a024, 0, 1, 0xffffffff)
int32_t i_1 = i_2

if (i_2 != 0xffffffff)
    int32_t i
    
    do
        if (sub_140a32a50(arg1, &var_38, 1) != 0)
            sub_140b65060()
            int16_t* var_28 = nullptr
            int32_t rax_10 = 0
            int32_t rdx_9 = 0
            int32_t var_1c_1 = 0
            int32_t var_20_1 = 0
            int16_t* rdx_11
            int32_t r15_2
            
            if (data_143e189c0 != 0)
                do
                    rsi += 1
                while ((&data_143e189c0)[rsi] != 0)
                
                if (rsi.d + 1 s> 0)
                    sub_1405947f0(&var_28, rsi.d + 1)
                    rax_10 = var_1c_1
                    rdx_9 = var_20_1
                    rdi = var_28
                
                r15_2 = rsi.d + 1 + rdx_9
                
                if (r15_2 s> rax_10)
                    sub_140594770(&var_28)
                    rdi = var_28
                
                memcpy(rdi, &data_143e189c0, (rsi.d + 1) * 2)
                rdx_11 = rdi
            
            if (data_143e189c0 == 0 || r15_2 == 0)
                rdx_11 = &data_142d40450
            
            sub_140b20770(arg1, rdx_11)
            
            if (rdi != 0)
                sub_140a74f90(rdi)
            
            break
        
        int32_t rax_5 = sub_140a23cf0(&var_38, &data_142d5a024, 0, 1, i_1)
        
        if (rax_5 == 0xffffffff)
            var_30 = 0
            
            if (var_2c != 0)
                sub_1405947f0(&var_38, 0)
        else
            int32_t rax_6 = var_30
            int32_t rcx_11 = rax_6 - 1
            
            if (rax_6 == 0)
                rcx_11 = 0
            
            int32_t r10_1
            
            if (rax_5 + 1 s>= 0)
                r10_1 = rcx_11
                
                if (rax_5 + 1 s< rcx_11)
                    r10_1 = rax_5 + 1
            else
                r10_1 = 0
            
            int32_t rcx_12 = rcx_11 - r10_1
            int32_t rbx_5 = rax_6 - 1
            
            if (rax_6 == 0)
                rbx_5 = 0
            
            int32_t rbx_6 = rbx_5 - r10_1
            
            if (rcx_12 s>= 0)
                if (rcx_12 s< rbx_6)
                    rbx_6 = rcx_12
                
                if (rbx_6 != 0)
                    int32_t rcx_14 = rax_6 - rbx_6
                    
                    if (rcx_14 != r10_1)
                        int64_t r9_1 = var_38
                        memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rbx_6 + r10_1) << 1), 
                            (rcx_14 - r10_1) * 2)
                        rax_6 = var_30
                    
                    var_30 = rax_6 - rbx_6
        
        i = sub_140a23cf0(&var_38, &data_142d5a024, 0, 1, 0xffffffff)
        i_1 = i
    while (i != 0xffffffff)

int64_t rcx_25 = var_38

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg1
