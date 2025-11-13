// 函数: sub_141bbe8b0
// 地址: 0x141bbe8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x188) != 0)
    int64_t* rcx = *(arg1 + 0x180)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if (*(arg1 + 0x188) == 0)
            return (*(*nullptr + 0x48))(0, arg2, arg3)
        
        int64_t* rdi_1 = *(arg1 + 0x180)
        return (*(*rdi_1 + 0x48))(rdi_1, arg2, arg3)

int32_t rcx_2
rcx_2.b = sub_140b5b8a0(*(arg1 + 0x168), 0).b == 0
int64_t result
result.b = *(arg1 + 0x16c) != 0
result.b |= rcx_2.b

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x160)
    
    if (result != 0)
        result = sub_140d1fd20(result, *(arg1 + 0x168))
        
        if (result != 0)
            int64_t var_28 = arg2
            uint64_t var_20 = 0
            int32_t var_18_1 = 0
            
            if (&var_20 != arg3)
                int64_t rbx_1 = sx.q(arg3[1].d)
                int64_t r14_1 = *arg3
                var_18_1 = rbx_1.d
                
                if (rbx_1.d != 0)
                    sub_1405c4a00(&var_20, rbx_1.d, 0)
                    memcpy(var_20, r14_1, (rbx_1 << 3).d)
            
            int64_t* rax_5 = sub_140d3c6e0(arg1 + 0x160)
            int64_t rax_6 = sub_140d1fd30(rax_5, *(arg1 + 0x168))
            int64_t r9_1 = *rax_5
            (*(r9_1 + 0x210))(rax_5, rax_6, &var_28, r9_1)
            uint64_t rbx_3 = var_20
            result = &var_20
            
            if (arg3 != &var_20)
                int64_t rbp_2 = sx.q(var_18_1)
                int32_t r8_5 = *(arg3 + 0xc)
                arg3[1].d = rbp_2.d
                
                if (rbp_2.d != 0 || r8_5 != 0)
                    sub_1405c4a00(arg3, rbp_2.d, r8_5)
                    result = memcpy(*arg3, rbx_3, (rbp_2 << 3).d)
                    rbx_3 = var_20
                else
                    *(arg3 + 0xc) = 0
            
            if (rbx_3 != 0)
                return sub_140a74f90(rbx_3)

return result
