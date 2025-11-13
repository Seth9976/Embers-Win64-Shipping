// 函数: sub_140d2c760
// 地址: 0x140d2c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
wchar16 const* const var_28
int32_t rax_1

if (rax != 0)
    int32_t var_20_1 = 4
    var_28 = u"None"
    
    if (rax == 4)
        rax_1 = sub_140a22710(arg2, &var_28, 0)

int16_t* result
int64_t arg_10

if (rax == 0 || (rax == 4 && rax_1 == 0))
    *arg1 = 0
    arg_10 = 0
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) s<= 0xffffffff)
        sub_1405947f0(&arg1[1], 0)
    
    result = arg1[1]
    
    if (result != 0)
        *result = 0
else
    var_28.o = *arg2
    result = sub_140bacf40(&var_28)
    
    if (result.b == 0)
        if (**arg2 != 0x2f)
            var_28.o = *arg2
            void var_18
            *arg2 = *sub_140ba58e0(&var_18, &var_28)
        
        uint64_t arg_18
        
        if (sub_140a24010(arg2, 0x3a, &arg_10) != 0)
            int32_t rax_5 = arg_10.d
            int32_t rbx
            
            if (rax_5 s>= 0)
                rbx = arg2[1].d
                
                if (rax_5 s< rbx)
                    rbx = rax_5
            else
                rbx = 0
            
            var_28 = *arg2
            int32_t var_20_2 = rbx
            uint64_t* rax_7 = sub_140b58050(&arg_18, &var_28, 1)
            int32_t rdx_3 = arg2[1].d
            int32_t rax_9 = arg_10.d + 1
            *arg1 = *rax_7
            int32_t rcx_6 = rdx_3
            
            if (rax_9 u< rdx_3)
                rcx_6 = rax_9
            
            int32_t rdx_4 = rdx_3 - rcx_6
            
            if (rdx_4 u> 0x7fffffff)
                rdx_4 = 0x7fffffff
            
            int32_t var_20_3 = rdx_4
            var_28 = *arg2 + (sx.q(rcx_6) << 1)
            return sub_140a1d810(&arg1[1], &var_28)
        
        result = sub_140b58050(&arg_18, arg2, 1)
        *arg1 = *result
        arg1[2].d = 0
        
        if (*(arg1 + 0x14) != 0)
            return sub_1405947f0(&arg1[1], 0)
return result
