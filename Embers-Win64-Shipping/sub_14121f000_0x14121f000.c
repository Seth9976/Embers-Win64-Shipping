// 函数: sub_14121f000
// 地址: 0x14121f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int64_t* rcx = *(*(arg2 + 0x20) + 0x128)
void* result

if (rcx == 0)
labelid_1:
    result.b = 0
else
    void* rax = *(arg1 + 8)
    int32_t rbx_1 = 0
    int64_t arg_10 = 0
    int64_t* rax_2 = (*(*rcx + 0x40))(rcx, zx.q(*(rax + 8)), &arg_10)
    int64_t rdx_1 = *rax_2
    
    if ((*(rdx_1 + 0x90))(rax_2, rdx_1).b == 0)
    label_14121f100:
        result.b = 0
    else
        int64_t* rcx_2 = *(arg2 + 0x20)
        uint64_t var_38
        (*(*rcx_2 + 0x10))(rcx_2, &var_38)
        
        if (*(arg1 + 0xa8) s<= 0)
        label_14121f100_1:
            result.b = 0
        else
            int64_t rdi_1 = 0
            
            while (true)
                void* rcx_4 = *(arg1 + 0xa0) + rdi_1
                
                if (*(*(arg2 + 0x20) + 0x13c) == 0)
                    var_38 = *(rcx_4 + 0x60c)
                    int32_t var_30_1 = *(rcx_4 + 0x614)
                
                if ((*(sx.q(*(arg2 + 0x28)) * 0x78 + *(rcx_4 + 0x18d0) + 0x40) & 1) != 0)
                    uint128_t var_28 = var_38.o
                    uint128_t zmm0
                    result, zmm0, zmm6 = sub_141227530(rcx_4, &var_28)
                    
                    if (zmm0.d f> zmm6.d)
                        result.b = 1
                        break
                
                rbx_1 += 1
                rdi_1 += 0x5240
                
                if (rbx_1 s>= *(arg1 + 0xa8))
                    goto label_14121f100_1

return result
