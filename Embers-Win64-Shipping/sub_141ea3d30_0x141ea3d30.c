// 函数: sub_141ea3d30
// 地址: 0x141ea3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3
int32_t rax = data_143dbb200
*arg1 = data_143dbb1f8.q
arg1[1].d = rax

if (arg2 != 0 && *(arg2 + 0x14f) == 2)
    int32_t rcx
    rcx.b = sub_140b5b8a0(rbx.d, 0) == 0
    rcx.b |= arg3:4.d != 0
    void var_28
    
    if (rcx.b != 0)
        arg3.b = 1
        void* rax_3 = (*(*arg2 + 0x6a8))(arg2, rbx, arg3)
        
        if (rax_3 != 0)
            int64_t* rax_4 = sub_142218c70(rax_3, &var_28)
            int32_t rax_5 = rax_4[1].d
            *arg1 = *rax_4
            arg1[1].d = rax_5
            return arg1
    
    int64_t* rax_8
    int64_t r8
    rax_8, r8 = (*(*arg2 + 0x440))(arg2, &var_28)
    int32_t rax_9 = rax_8[1].d
    *arg1 = *rax_8
    arg1[1].d = rax_9
    int64_t zmm0 = *arg1
    
    if (not(zmm0.d f!= 0f))
        if (not(0f f!= *(arg1 + 4)) && not(0f f!= arg1[1].d))
            int64_t* rcx_4 = arg2[0x14]
            
            if (rcx_4 != 0)
                int64_t* rax_11
                rax_11, r8 = (*(*rcx_4 + 0x2f0))(rcx_4, &var_28)
                int32_t rax_12 = rax_11[1].d
                *arg1 = *rax_11
                arg1[1].d = rax_12
                zmm0 = *arg1
        
        if (not(zmm0.d f!= 0f) && not(0f f!= *(arg1 + 4)) && not(0f f!= arg1[1].d))
            r8.b = 1
            void* rax_14 = (*(*arg2 + 0x6a8))(arg2, 0, r8)
            
            if (rax_14 != 0)
                int64_t* rax_15 = sub_142218c70(rax_14, &var_28)
                int32_t rax_16 = rax_15[1].d
                *arg1 = *rax_15
                arg1[1].d = rax_16

return arg1
