// 函数: sub_1428e3f10
// 地址: 0x1428e3f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void* rcx = *(arg1 + 0x30)
int128_t* rbx = arg3

if (rcx != 0)
    if (sub_142898b50(rcx) == 0)
        sub_1428a5c40(*(arg1 + 0xd8))
        sub_142898e50(*(arg1 + 0x30))
        sub_1428a5d00(*(arg1 + 0xd8))
    
    int32_t* rcx_4 = *(arg1 + 0x30)
    int64_t zmm1 = rbx[1].q
    int128_t var_78 = *rbx
    int64_t var_68_1 = zmm1
    int32_t i_1 = sub_1428989f0(rcx_4, &var_78)
    int32_t i = i_1
    
    if (i_1 s>= 0)
        for (int32_t rax_2 = sub_142898c70(*(arg1 + 0x30)); i s< rax_2; i += 1)
            int32_t* rax_3 = sub_142898ea0(*(arg1 + 0x30), i)
            
            if (sub_1428e47f0(rax_3, rbx) != 0)
                break
            
            int32_t* rcx_8 = *(rax_3 + 0x28)
            void* rbp_1 = arg4
            
            if (rcx_8 != 0)
                if (arg4 == 0)
                    void* rax_9 = sub_142891590(arg1)
                    rcx_8 = *(rax_3 + 0x28)
                    rbp_1 = rax_9
                
                int32_t rbx_1 = 0
                
                if (sub_142898c70(rcx_8) s> 0)
                    while (true)
                        int32_t* rax_11 = sub_142898ea0(*(rax_3 + 0x28), rbx_1)
                        
                        if (*rax_11 == 4 && sub_1428a32a0(rbp_1, *(rax_11 + 8)) == 0)
                            break
                        
                        rbx_1 += 1
                        
                        if (rbx_1 s>= sub_142898c70(*(rax_3 + 0x28)))
                            goto label_1428e407f
                    
                    goto label_1428e4014
                
            label_1428e407f:
                rbx = arg3
            else
                if (arg4 == 0)
                label_1428e4014:
                    
                    if (arg2 != 0)
                        *arg2 = rax_3
                    
                    int32_t r12_1
                    r12_1.b = rax_3[0xc] == 8
                    return zx.q(r12_1 + 1)
                
                if (sub_1428a32a0(arg4, sub_142891590(arg1)) == 0)
                    goto label_1428e4014

return 0
