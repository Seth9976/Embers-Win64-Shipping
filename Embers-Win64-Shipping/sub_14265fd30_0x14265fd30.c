// 函数: sub_14265fd30
// 地址: 0x14265fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rsi = arg2[0x23]
int32_t result
int64_t* rbx_1

if (rsi != 0)
label_14265fd79:
    result = (*(*rsi + 0x268))(rsi)
    rbx_1 = arg_10
    
    if (result.b == 0)
        result.b = 0
    else
        result.b = 1
else
    (*(*arg2 + 0x390))(arg2)
    rsi = arg2[0x23]
    rbx_1 = arg_10
    
    if (rsi != 0)
        goto label_14265fd79
    
    result.b = 0

if (rsi != 0 && result.b == 0)
    bool rcx_2 = false
    
    if (arg3 u<= 0xf)
        result = *(rsi + 0x3c)
        rcx_2 = test_bit(result, arg3)
    
    if (rcx_2 != 0)
        int64_t arg_20 = rbx_1[3]
        int16_t* var_68
        sub_140b63b70(&arg_20, &var_68)
        int32_t rbx_2 = 0
        int32_t var_60
        int64_t** var_58
        
        if (arg1[0x74].d s<= 0)
        label_14265fe3c:
            result = (*(*arg1 + 0x750))(arg1)
            
            if (arg1[0x74].d s< result)
                int128_t* var_48 = nullptr
                int32_t var_3c_1 = 0
                int32_t var_38 = 0xffffffff
                int64_t var_30_1 = 0
                int32_t var_40_1 = 0
                sub_1405947f0(&var_48, 8)
                int32_t var_40_2 = var_40_1 + 8
                
                if (var_40_1 + 8 s> var_3c_1)
                    sub_140594770(&var_48)
                
                *var_48 = *u"Invalid"
                int64_t* rdx_3 = arg_10
                int16_t* rsi_2 = var_68
                int64_t* var_30_2 = rdx_3
                int32_t var_40_3 = var_60
                
                if (var_60 != 0 || var_3c_1 != 0)
                    sub_1405a4c70(&var_48, var_60, var_3c_1)
                    memcpy(var_48, rsi_2, var_60 * 2)
                    rdx_3 = arg_10
                else
                    int32_t var_3c_2 = 0
                
                int32_t rax_11 = (*(*arg1 + 0x768))(arg1, rdx_3)
                int64_t rbx_4 = sx.q(arg1[0x74].d)
                var_38 = rax_11
                int32_t rax_12 = (rbx_4 + 1).d
                arg1[0x74].d = rax_12
                
                if (rax_12 s> *(arg1 + 0x3a4))
                    sub_1405c4e40(&arg1[0x73])
                
                int64_t* rbx_6 = (rbx_4 << 5) + arg1[0x73]
                sub_140596d10(rbx_6, &var_48)
                rbx_6[2].d = var_38
                rbx_6[3] = var_30_2
                var_58 = &arg_10
                int32_t* var_50_2 = &var_38
                result = sub_140b2c6c0(&arg1[0x75], &arg_20, &var_58, nullptr)
                int128_t* rcx_19 = var_48
                
                if (rcx_19 != 0)
                    result = sub_140a74f90(rcx_19)
        else
            int64_t* rsi_1 = nullptr
            
            while (true)
                int16_t* const rdx_1 = &data_142d40450
                int64_t rax_4 = arg1[0x73]
                
                if (var_60 != 0)
                    rdx_1 = var_68
                
                int16_t* const rcx_4
                
                if (*(rsi_1 + rax_4 + 8) == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *(rsi_1 + rax_4)
                
                if (sub_140a54510(rcx_4, rdx_1) == 0)
                    int64_t rdx_5 = sx.q(rbx_2) << 5
                    *(rdx_5 + arg1[0x73] + 0x18) = arg_10
                    int64_t rcx_10 = arg1[0x73] + 0x10
                    var_58 = &arg_10
                    int64_t var_50_1 = rcx_10 + rdx_5
                    result = sub_140b2c6c0(&arg1[0x75], &arg_20, &var_58, nullptr)
                    break
                
                rbx_2 += 1
                rsi_1 = &rsi_1[4]
                
                if (rbx_2 s>= arg1[0x74].d)
                    goto label_14265fe3c
        int16_t* rcx_20 = var_68
        
        if (rcx_20 != 0)
            return sub_140a74f90(rcx_20)

return result
