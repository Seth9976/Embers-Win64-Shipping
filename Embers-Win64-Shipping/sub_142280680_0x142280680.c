// 函数: sub_142280680
// 地址: 0x142280680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int64_t var_48 = arg1[0x84]
int32_t var_40 = arg1[0x85].d
int64_t var_58
(*(*arg1 + 0x660))(arg1, &var_58)
int64_t* rcx = arg1[0x57]

if (rcx != 0)
    arg2 = zmm6
    (*(*rcx + 0x760))(rcx, arg2, &var_58, &var_48)

int64_t* rax_4 = (*(*arg1 + 0x698))(arg1, arg2)

if (arg1[0x57] == 0 || rax_4 == 0)
label_142280722:
    
    if ((*(arg1 + 0x294) & 2) != 0 && (*(*arg1 + 0x6a8))(arg1) != 0)
        int64_t* rcx_5 = *(data_143f5b298 + 0xb08)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x120))(rcx_5) != 0)
            int64_t* rcx_6 = *(data_143f5b298 + 0xb08)
            int64_t* var_28
            (*(*rcx_6 + 0xf8))(rcx_6, &var_28, 0)
            int64_t* rcx_7 = var_28
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x20))(rcx_7, arg1, &var_58)
            
            int64_t* var_20
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t rsi_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*var_20 + 8))(var_20, zx.q(rsi_1))
else
    int64_t rdx_1 = *rax_4
    
    if ((*(rdx_1 + 0x5b8))(rax_4, rdx_1) == 0)
        goto label_142280722
    
    int64_t rdx_2 = *rax_4
    
    if ((*(rdx_2 + 0x5c0))(rax_4, rdx_2) != 0)
        goto label_142280722

int64_t result = (*(*arg1 + 0x668))(arg1, &var_58)
int64_t* rcx_11 = arg1[0x4a]

if (rcx_11 == 0)
    rcx_11 = arg1[0xa9]

if (rcx_11 == 0)
    return result

int512_t zmm2
zmm2.o = zmm6
int32_t var_50
int32_t var_30_1 = var_50
int64_t rax_20 = *rcx_11
int64_t var_38 = var_58
return (*(rax_20 + 0x6f0))(rcx_11, &var_38, zmm2)
