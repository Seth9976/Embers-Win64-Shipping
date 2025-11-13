// 函数: sub_1426e7220
// 地址: 0x1426e7220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t* result

if (arg2 != 0)
    result = sub_1427381f0()
    void* r8 = arg_10
    
    if (r8 != result)
        int32_t arg_20
        sub_141a0a300(arg1 + 0xc0, &arg_20, r8)
        int64_t rax = sx.q(arg_20)
        void* const rax_3
        
        if (rax.d == 0xffffffff)
            rax_3 = nullptr
        else
            rax_3 = rax * 0x30 + *(arg1 + 0xc0)
        
        int64_t* rdx_1 = rax_3 + 8
        
        if (rax_3 == 0)
            rdx_1 = nullptr
        
        if (rdx_1 != 0)
            *arg3 = *rdx_1
            arg3[1].d = rdx_1[1].d
            sub_14081d8c0(&arg3[2], &rdx_1[2])
        else
            void* rax_5 = sub_1426e7a30(sub_1426dae60(*(arg1 + 0x58)), arg_10)
            int64_t r9_1 = *rax_5
            (*(r9_1 + 0x260))(rax_5, arg1, arg3, r9_1)
            int64_t* var_10_1 = arg3
            int64_t* var_18 = &arg_10
            sub_1426c4500(arg1 + 0xc0, &arg_20, &var_18, nullptr)
    
    if (arg3[1].d != 0)
        result.b = 1
        return result

result.b = 0
return result
