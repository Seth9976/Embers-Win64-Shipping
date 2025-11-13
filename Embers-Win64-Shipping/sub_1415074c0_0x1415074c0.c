// 函数: sub_1415074c0
// 地址: 0x1415074c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg2
uint64_t result = zx.q(r10) & 0x3fffff

if (result.d u< *(arg1 + 0xa0))
    void* r15_3 = result * 0x60 + *(arg1 + 0x98)
    
    if (*(r15_3 + 0x5c) == (r10 u>> 0x16).w)
        int32_t r8 = 0
        int32_t i = 0
        uint64_t i_3 = 0
        int64_t* r14_1 = nullptr
        int64_t* arg_8 = nullptr
        int64_t* var_48 = nullptr
        int32_t var_3c_1 = 0
        int32_t i_4
        
        if (*(r15_3 + 0x2f) u> 0)
            do
                int64_t j = *(*(r15_3 + 0x38) + (sx.q(i) << 3))
                int64_t* rax_2 = r14_1
                void* rdx = &r14_1[sx.q(i_3.d)]
                
                if (r14_1 != rdx)
                    while (*rax_2 != j)
                        rax_2 = &rax_2[1]
                        
                        if (rax_2 == rdx)
                            goto label_14150758c
                
                if (r14_1 == rdx || ((rax_2 - r14_1) s>> 3).d == 0xffffffff)
                label_14150758c:
                    int64_t rbx_1 = sx.q(i_3.d)
                    i_3 = zx.q((rbx_1 + 1).d)
                    i_4 = i_3.d
                    
                    if (i_3.d s> r8)
                        sub_1405a4d70(&var_48)
                        r8 = var_3c_1
                        i_3 = zx.q(i_4)
                        r14_1 = var_48
                    
                    r14_1[rbx_1] = j
                
                i += 1
            while (i u< zx.d(*(r15_3 + 0x2f)))
            
            arg_8 = r14_1
        
        *(arg1 + 0x2e8) = 0
        
        if (*(arg1 + 0x2ec) s<= 0xffffffff)
            sub_1405c5570(arg1 + 0x2e0, 0)
        
        if (i_3.d s> 0)
            int64_t* rbx_2 = r14_1
            uint64_t i_1
            
            do
                sub_141505ee0(*rbx_2 + 0x20, arg1, arg2, r15_3, arg3, arg4, arg1 + 0x2e0)
                rbx_2 = &rbx_2[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            r14_1 = arg_8
        
        int64_t* i_2 = *(arg1 + 0x2e0)
        result = sx.q(*(arg1 + 0x2e8))
        
        for (void* rsi_1 = &i_2[result]; i_2 != rsi_1; i_2 = &i_2[1])
            sub_140b9b5d0(arg1 + 0x290, &var_48)
            int64_t* rdx_4 = i_4.q
            int32_t var_60
            var_60.q = 0
            *rdx_4 = *i_2
            rdx_4[1].d = 0xffffffff
            int32_t* var_68
            var_68.d = var_48.d
            result = sub_141505840(arg1 + 0x290, &arg_8, *rdx_4, rdx_4, var_68.d, nullptr)
        
        if (r14_1 != 0)
            return sub_140a74f90(r14_1)

return result
