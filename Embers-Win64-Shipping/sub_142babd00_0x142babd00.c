// 函数: sub_142babd00
// 地址: 0x142babd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c) s< *(arg1 + 0x1d4))
    if (*(arg1 + 0x315) != 0)
        arg1[3].d = 0x86
    
    goto label_142babee3

int16_t rcx
int128_t zmm0
int128_t zmm1

if ((arg1[0x43].b & 1) == 0)
    zmm0 = *(arg1 + 0x78)
    zmm1 = *(arg1 + 0x88)
    rcx = *(arg1 + 0x1c4)
else
    zmm0 = *(arg1 + 0x38)
    zmm1 = *(arg1 + 0x48)
    rcx = *(arg1 + 0x1c2)

uint64_t result = zmm0:8.q u>> 0x20

if (rcx u< result.w)
    int64_t r9_1 = zmm1.q
    uint64_t rcx_1 = zx.q(rcx) << 3
    int64_t rax_3 = zmm1:8.q
    int32_t rax_4 = arg1[0x65](arg1, zx.q(*(rcx_1 + rax_3) - *(r9_1 + rcx_1)), 
        zx.q(*(rcx_1 + rax_3 + 4) - *(r9_1 + rcx_1 + 4)))
    uint32_t rax_5 = sub_142b93dd0(rax_4, sx.d(*(arg1 + 0x1ce)), arg1[0x63].d)
    result = sub_142b93dd0(rax_4, sx.d(arg1[0x3a].w), arg1[0x63].d)
    int32_t r9_2 = result.d
    
    while (*(arg1 + 0x1d4) s> 0)
        arg1[6].d -= 1
        int16_t r8_5 = *(arg1[5] + (sx.q(arg1[6].d) << 2))
        
        if (r8_5 u< *(arg1 + 0xc4))
            if (*(arg1 + 0x1ce) != 0)
                if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0)
                    int64_t rax_7 = arg1[0x1a]
                    uint64_t rcx_7 = zx.q(r8_5)
                    *(rax_7 + (rcx_7 << 3)) += rax_5
                
                result = arg1[0x1c]
                uint64_t rcx_8 = zx.q(r8_5)
                *(result + rcx_8) |= 8
            
            if (arg1[0x3a].w != 0)
                if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0
                        || *(arg1 + 0x374) == 0 || *(arg1 + 0x375) == 0)
                    int64_t rax_9 = arg1[0x1a]
                    uint64_t rcx_10 = zx.q(r8_5)
                    *(rax_9 + (rcx_10 << 3) + 4) += r9_2
                
                result = arg1[0x1c]
                uint64_t rcx_11 = zx.q(r8_5)
                *(result + rcx_11) |= 0x10
        else if (*(arg1 + 0x315) != 0)
            goto label_142babd82
        
        *(arg1 + 0x1d4) -= 1
    
label_142babee3:
    result = zx.q(arg1[6].d)
    *(arg1 + 0x34) = result.d
    *(arg1 + 0x1d4) = 1
else if (*(arg1 + 0x315) != 0)
label_142babd82:
    arg1[3].d = 0x86

return result
