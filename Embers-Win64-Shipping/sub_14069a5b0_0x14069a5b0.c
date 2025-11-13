// 函数: sub_14069a5b0
// 地址: 0x14069a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int64_t rdi = *arg2
int16_t* var_48 = nullptr
int32_t i = rbx.d
int32_t var_3c

if (rbx.d != 0)
    sub_1405a4c70(&var_48, rbx.d, 0)
    memcpy(var_48, rdi, rbx.d * 2)
else
    var_3c = 0

int64_t* rcx_2 = &var_48

if (iswalpha(0x5c) == 0)
    sub_140a30380(rcx_2, 0x5c, 0x2f)
else
    sub_140a303b0(rcx_2, 0x5c, 0x2f)

sub_140b25f50(&var_48)
int16_t* const rcx_4 = &data_142d40450

if (i != 0)
    rcx_4 = var_48

if (sub_140a54510(rcx_4, &data_142d5a024) != 0)
    while (sub_140b12f50(&var_48) == 0 || i s<= 1)
        int64_t var_38
        int16_t** rax_3 = sub_140b1a780(&var_38, &var_48)
        int16_t* rdx_3
        
        if (rax_3[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *rax_3
        
        int16_t* rcx_8 = &data_142d40450
        
        if (i != 0)
            rcx_8 = var_48
        
        int32_t rax_4 = sub_140a54510(rcx_8, rdx_3)
        int64_t rcx_9 = var_38
        rbx.b = rax_4 != 0
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rbx.b == 0)
            int16_t* rax_8 = sub_140b738f0()
            
            if (var_48 != rax_8)
                int32_t rbx_2
                
                if (rax_8 == 0 || *rax_8 == 0)
                    rbx_2 = 0
                else
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (rax_8[rbx_1] != 0)
                    
                    rbx_2 = rbx_1.d + 1
                
                int32_t rcx_14 = var_3c
                int32_t rdx_5 = 0
                int32_t var_40 = 0
                
                if (rcx_14 != rbx_2)
                    sub_1405947f0(&var_48, rbx_2)
                    rcx_14 = var_3c
                    rdx_5 = var_40
                
                int32_t i_1 = rdx_5 + rbx_2
                i = i_1
                
                if (i_1 s> rcx_14)
                    sub_140594770(&var_48)
                
                if (rbx_2 != 0)
                    memcpy(var_48, rax_8, rbx_2 * 2)
            
            break
        
        int64_t var_28
        int64_t rax_5 = sub_140b1a780(&var_28, &var_48)
        
        if (&var_48 != rax_5)
            int16_t* rcx_11 = var_48
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            var_48 = *rax_5
            *rax_5 = 0
            i = *(rax_5 + 8)
            var_3c = *(rax_5 + 0xc)
            *(rax_5 + 8) = 0
        
        int64_t rcx_13 = var_28
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    sub_140a2fa70(&var_48, &data_142d5a024, 1)
    *arg1 = var_48
    arg1[1].d = i
    *(arg1 + 0xc) = var_3c
    i.q = 0
    var_48 = nullptr
else
    int16_t* rcx_5 = var_48
    *arg1 = 0
    arg1[1] = 0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t rcx_19 = *arg2

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return arg1
