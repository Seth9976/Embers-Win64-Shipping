// 函数: sub_14175cfb0
// 地址: 0x14175cfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx = arg1[6][0].q
int32_t i = 0
int64_t* rdi = *(arg1 + 0x68)

if (*(arg2 + 0xc) s> 0)
    do
        if (i s> 0 || *(arg2 + 4) s> 0)
            sub_141781340(arg1, *arg3)
        
        result = zx.q(data_143ef7c18)
        
        if (not(*(arg3 + 4) > (*arg1)[0x27]) && result.d == 0)
            break
        
        int64_t rdx = arg3[1]
        
        if (rdx != 0)
            *(sx.q(rbx[2].d) + *(rdx + 8)) = 1
            *(sx.q(rdi[2].d) + *(arg3[1] + 8)) = 1
            result = zx.q(data_143ef7c18)
        
        int32_t rcx_3 = data_143ef7c1c
        rdx.b = arg2[1].d == 1
        
        if (rcx_3 != 0)
            rdx.b = rcx_3 == 1
        
        if (rdx.b == 0)
            int64_t* var_60_3 = arg3
            void var_30
            result = sub_1417674b0(&var_30, &arg1[8], rbx, rdi, arg2)
        label_14175d0cf:
            arg1[7][0] = *result + arg1[7][0]
            float zmm1[0x4] = *(result + 4)
            zmm1[0] = zmm1[0] + (*arg1)[0x1d]
            (*arg1)[0x1d] = zmm1[0]
            (*arg1)[0x1e] = result[1].d f+ (*arg1)[0x1e]
        else
            if (result.d == 0)
                int64_t* var_60_2 = arg3
                void var_3c
                result = sub_1417686c0(&var_3c, &arg1[8], rbx, rdi, arg2)
                goto label_14175d0cf
            
            float* var_58_1 = &arg1[7]
            uint64_t var_48
            result = sub_141769a60(&var_48, &arg1[8], rbx, rdi, arg2, arg3)
        
        i += 1
    while (i s< *(arg2 + 0xc))

return result
