// 函数: sub_140aadf50
// 地址: 0x140aadf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9e28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9e28)
    
    if (data_143db9e28 == 0xffffffff)
        sub_1405947f0(&data_143db9e18, 0xe)
        int32_t rax_25 = data_143db9e20 + 0xe
        bool cond:0_1 = rax_25 s<= data_143db9e24
        data_143db9e20 = rax_25
        
        if (not(cond:0_1))
            sub_140594770(&data_143db9e18)
        
        UnDecorator::getReferenceType(data_143db9e18, u"ETextGender::", 0x1c)
        atexit(sub_142cbdf00)
        _Init_thread_footer(&data_143db9e28)

int32_t rax_2 = data_143db9e20
int16_t* const rsi = &data_142d40450
uint64_t rbx = 0
int32_t rax_3
int16_t* rdx

if (rax_2 == 0)
    rax_3 = 0
    rdx = &data_142d40450
else
    rdx = data_143db9e18
    rax_3 = rax_2 - 1

if (sub_140a546e0(arg2, rdx, sx.q(rax_3)) != 0)
    goto label_140aae081

int32_t rax_5 = data_143db9e20
int32_t rax_6

if (rax_5 == 0)
    rax_6 = 0
else
    rax_6 = rax_5 - 1

uint64_t var_68 = 0
int32_t var_60_1 = 0
int16_t* rax_8 = sub_140ab99c0(&arg2[sx.q(rax_6)], &var_68)
uint64_t rdi_1 = var_68
int16_t* r14_1 = rax_8

if (rax_8 == 0)
label_140aae06e:
    
    if (rdi_1 == 0)
        goto label_140aae081
    
    sub_140a74f90(rdi_1)
label_140aae081:
    int16_t* rax_12 = sub_140abcf90(arg2, arg1)
    
    if (rax_12 != 0)
        return rax_12
    
    sub_1405d9400()
    int64_t var_58 = data_143cd6fd8
    int64_t* rcx_9 = data_143cd6fe0
    int64_t* var_50_1 = rcx_9
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    int32_t var_48_1 = 0
    
    if (*arg2 == 0)
        r14_1 = nullptr
    else
        wchar16* rax_13 = sub_140abc420(arg2, &var_58, 0, 0)
        r14_1 = rax_13
        
        if (rax_13 != 0)
        label_140aae17b:
            
            if (r14_1 == 0)
                r14_1 = nullptr
            else
                *arg1 = 4
                
                if (&var_58 != &arg1[4])
                    sub_1405d57e0(&arg1[4])
                    *(arg1 + 0x10) = var_58
                    *(arg1 + 0x18) = var_50_1
                    
                    if (var_50_1 != 0)
                        var_50_1[1].d += 1
                    
                    arg1[8] = var_48_1
                    arg1[0xa].b = 1
        else
            int64_t var_78 = 0
            int64_t var_70_1 = 0
            int32_t arg_10 = 0
            
            if (j_sub_140b08930(arg2, &var_78, &arg_10) != 0)
                void var_40
                int64_t* rax_15 = sub_140aae2f0(&var_40, &var_78)
                int64_t rdx_6 = var_58
                var_58 = *rax_15
                *rax_15 = rdx_6
                int64_t* rdx_7 = var_50_1
                var_50_1 = rax_15[1]
                rax_15[1] = rdx_7
                var_48_1 = rax_15[2].d
                int64_t* var_38
                
                if (var_38 != 0)
                    var_38[1].d -= 1
                    
                    if (var_38[1].d == 1)
                        (**var_38)(var_38)
                        int32_t rax_19 = *(var_38 + 0xc)
                        *(var_38 + 0xc) -= 1
                        
                        if (rax_19 == 1)
                            (*(*var_38 + 8))(var_38, 1)
                
                int64_t rcx_17 = var_78
                r14_1 = &arg2[sx.q(arg_10)]
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                goto label_140aae17b
            
            int64_t rcx_19 = var_78
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            r14_1 = nullptr
    
    if (var_50_1 != 0)
        var_50_1[1].d -= 1
        
        if (var_50_1[1].d == 1)
            (**var_50_1)(var_50_1)
            int32_t rsi_1 = *(var_50_1 + 0xc)
            *(var_50_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_5 = *var_50_1
                (*(r8_5 + 8))(var_50_1, zx.q(rsi_1), r8_5)
else
    if (var_60_1 != 0)
        rsi = rdi_1
    
    if (sub_140a54510(rsi, u"Masculine") == 0)
        goto label_140aae052
    
    int32_t rax_10 = sub_140a54510(rsi, u"Feminine")
    
    if (rax_10 != 0)
        int32_t rax_11 = sub_140a54510(rsi, u"Neuter")
        
        if (rax_11 != 0)
            goto label_140aae06e
        
        rbx = zx.q(rax_11 + 2)
        goto label_140aae052
    
    rbx = zx.q(rax_10 + 1)
label_140aae052:
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    *arg1 = 5
    *(arg1 + 8) = rbx

return r14_1
