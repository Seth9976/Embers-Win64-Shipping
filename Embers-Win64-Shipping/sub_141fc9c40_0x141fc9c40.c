// 函数: sub_141fc9c40
// 地址: 0x141fc9c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 == 0 || arg3 == 0)
    result.b = 0
else if (arg1[0x13].d != 0)
label_141fc9cae:
    void* rax_1 = (*(*arg1 + 0x360))()
    void var_88
    sub_1423fd810(&var_88, &data_142d40450)
    void* rax_2 = sub_141fac1f0(arg1, rax_1, &var_88)
    sub_14094c030(&var_88)
    
    if (rax_2 == 0)
        result.b = 0
    else
        *(rax_2 + 0x298) = arg2
        int64_t** rax_3 = sub_1423dd2a0(data_143f5b298, arg3)
        int64_t* r9_1 = *rax_3
        int64_t* rcx_4 = r9_1
        void* r8_1 = &r9_1[sx.q(rax_3[1].d)]
        
        if (r9_1 == r8_1)
        label_141fc9d25:
            rcx_4.b = 0xff
        else
            while (*rcx_4 != arg2)
                rcx_4 = &rcx_4[1]
                
                if (rcx_4 == r8_1)
                    goto label_141fc9d25
            
            rcx_4 = (rcx_4 - r9_1) s>> 3
        
        *(rax_2 + 0x3d4) = rcx_4.b
        int32_t arg_24 = 0
        void arg_10
        (*(*rax_2 + 0x658))(rax_2, (*sub_140b5e500(&arg_10, 0x142)).q)
        *(arg2 + 0x38) = 0
        *(arg2 + 0x30) = rax_2
        *(rax_1 + 0x30) = rax_2
        *(rax_1 + 0x98) = rax_2
        (*(*rax_2 + 0xc10))(rax_2, arg2)
        int64_t rbx_1 = sx.q(arg1[0x19f].d)
        int32_t rax_7 = (rbx_1 + 1).d
        arg1[0x19f].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xcfc))
            sub_1405a4d70(&arg1[0x19e])
        
        *(arg1[0x19e] + (rbx_1 << 3)) = rax_2
        result.b = 1
else
    if (arg1[0x11] != 0)
        goto label_141fc9cae
    
    result.b = 0

return result
