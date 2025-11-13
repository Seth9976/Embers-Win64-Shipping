// 函数: sub_14193c1f0
// 地址: 0x14193c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0xffffffff
int64_t var_38 = 0
int32_t var_2c = 0
void* rsi = nullptr
int32_t r14 = 0
data_143effdd8(arg1, 0x8741, &arg_18)
int32_t rdx = arg_18
int32_t* result

if (rdx s<= 0)
    result.b = 0
else
    int32_t var_30_1
    
    if (rdx + 4 s> 0)
        var_30_1 = rdx + 4
        sub_1405daba0(&var_38)
    label_14193c285:
        rdx = arg_18
        rsi = var_38
        r14 = var_30_1
    else if (rdx + 4 s< 0)
        int32_t rbx_2 = neg.d(rdx + 4)
        
        if (rbx_2 != 0)
            int32_t count = neg.d(rbx_2 + rdx + 4)
            
            if (count != 0)
                memmove(sx.q(rdx + 4), nullptr, count)
            
            var_30_1 = neg.d(rbx_2)
            sub_1405dac10(&var_38)
            goto label_14193c285
    data_143f004d0(zx.q(arg1), rdx, &arg_18, rsi, rsi + 4)
    void arg_20
    int32_t* rax_2 = sub_140b5e500(&arg_20, 0x101)
    var_38:4.d = 0
    var_38.d = *rax_2
    int32_t rax_3 = sub_140aecee0(var_38, r14, 0, 0)
    int32_t rdx_3 = arg2[1].d
    arg_18 = rax_3
    int32_t rax_5 = rax_3 + 4 + rdx_3
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    void* rbx_4 = *arg2
    int32_t* rax_6 = sub_140b5e500(&arg_20, 0x101)
    int32_t var_48_1 = 0
    var_38:4.d = 0
    var_38.d = *rax_6
    void* var_58_1
    var_58_1.d = r14
    sub_140aecc20(var_38, rbx_4 + 4, &arg_18, rsi, var_58_1.d, 0)
    int64_t rbx_5 = sx.q(arg2[1].d)
    int32_t rax_8 = arg_18 + 4
    
    if (rax_8 s> rbx_5.d)
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        memset(rbx_5 + *arg2, 0, sx.q(rax_8 - rbx_5.d))
    else if (rax_8 s< rbx_5.d && rax_8 != rbx_5.d)
        arg2[1].d = rax_8
        sub_1405dac10(arg2)
    
    int32_t rdx_6 = arg2[1].d
    
    if (*(arg2 + 0xc) != rdx_6)
        sub_1405c5510(arg2, rdx_6)
    
    **arg2 = r14
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    result.b = 1

return result
