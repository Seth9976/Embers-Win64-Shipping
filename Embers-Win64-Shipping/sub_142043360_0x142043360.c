// 函数: sub_142043360
// 地址: 0x142043360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result = sub_141dcdc50(arg1)

if (result.d u> 1 && arg2 == 0)
    if (*((*(*arg1 + 0x150))(arg1) + 0x520) f- *(arg1 + 0x234) >= 1f)
        int32_t rcx_13 = *((*(*arg1 + 0x150))(arg1) + 0x520)
        int64_t rax_13 = *arg1
        *(arg1 + 0x234) = rcx_13
        result = (*(rax_13 + 0x658))(arg1)
        
        if (arg1[0x46].d != result.d)
            arg1[0x46].d = result.d
            int64_t* var_88
            sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_88)
            int32_t result_1
            result = zx.q(result_1)
            
            while (result.d s>= 0)
                int64_t* rdx_4 = var_88
                
                if (result.d s>= rdx_4[1].d)
                    break
                
                int64_t* rax_17 = sub_140d3c6e0(*rdx_4 + (sx.q(result.d) << 3))
                
                if (rax_17 != 0)
                    sub_142279a20(rax_17, arg1[0x46].d)
                
                result = zx.q(result_1 + 1)
                result_1 = result.d
    else
        void* rax_4 = sub_141dcc7f0(arg1)
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_5 != 0)
            *rax_5 = &data_142d57800
            sub_140d3a3a0(&rax_5[1], arg1)
            rax_5[2] = sub_14094eae4
            rax_5[4] = sub_140a387b0()
            *rax_5 = &data_142d57858
        
        int64_t var_78 = 0
        int32_t var_70_1 = 0
        
        if (rax_5 != 0)
            (*rax_5)[8](rax_5, &var_78)
        
        void var_68
        sub_140d3a3a0(&var_68, nullptr)
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        void* var_48_1 = nullptr
        sub_1423e6200(rax_4, &arg1[0x59], &var_78, 0x3f800000, 0, 0xbf800000)
        
        if (var_58_1 != 0)
            void var_38
            void* rcx_6 = &var_38
            
            if (var_48_1 != 0)
                rcx_6 = var_48_1
            
            (*(*rcx_6 + 0x10))(rcx_6)
        
        result = sub_140745b20(&var_78)
        
        if (rax_5 != 0)
            (*rax_5)[7](rax_5, 0)
            result = sub_140a84c80(rax_5, 0, 0)
            
            if (result != 0)
                result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
