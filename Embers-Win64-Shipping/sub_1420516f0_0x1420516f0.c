// 函数: sub_1420516f0
// 地址: 0x1420516f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if ((arg1[1].b & 0x30) == 0)
    float zmm6[0x4]
    
    if (arg3 != 0 || (arg1[0xbc].b & 2) != 0 || *(arg1 + 0x50c) != 0)
    label_1420517fc:
        arg1[0xbc].b |= 2
        int64_t* rcx_3 = arg1[0x88]
        
        if (rcx_3 != 0 && ((rcx_3[1].d u>> 0xa).b & 1) == 0)
            sub_140cd85e0(rcx_3)
            
            if (arg2 == 0)
                sub_1420501d0(arg1, arg4.d, zmm6)
                int64_t rax_4
                rax_4.b = 1
                return rax_4
            
            char rax_2 = arg1[0xbc].b
            
            if ((rax_2 & 1) != 0)
                arg1[0xbc].b = rax_2 | 4
                return 1
            
            sub_142050d80(arg1, arg4)
            uint64_t rax_3
            rax_3.b = 1
            return rax_3
    else
        rax = zx.q(arg1[0x94].d)
        
        if (arg1[0x9b].d != rax.d || arg1[0xac].d != rax.d)
            goto label_1420517fc
        
        void* rcx = arg1[0x88]
        
        if (rcx == 0)
            if (arg1[0xb5].d s> 0)
                goto label_1420517fc
            
            goto label_1420517d2
        
        int128_t var_28
        rax, arg4 = sub_1423633d0(rcx, &var_28)
        
        if (*rax f!= *(arg1 + 0x5bc) || *(rax + 4) f!= arg1[0xb8].d
                || *(rax + 8) f!= *(arg1 + 0x5c4) || *(rax + 0xc) f!= arg1[0xb9].d
                || *(rax + 0x10) f!= *(arg1 + 0x5cc) || *(rax + 0x14) f!= arg1[0xba].d
                || *(rax + 0x18) f!= *(arg1 + 0x5d4) || arg1[0xb5].d s> 0)
            goto label_1420517fc
        
    label_1420517d2:
        
        if (sub_140cdd6a0(arg1).d s< 0x1bb)
            goto label_1420517fc
        
        var_28 = data_1439a4b70
        rax, arg4, zmm6 = sub_140cdd5d0(arg1, &var_28)
        
        if (rax.d s< 0xe)
            goto label_1420517fc

rax.b = 0
return rax
