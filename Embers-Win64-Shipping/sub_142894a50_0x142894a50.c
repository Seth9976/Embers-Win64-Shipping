// 函数: sub_142894a50
// 地址: 0x142894a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_142890ec0(arg1)

if (*(rax + 0xf8) != 0)
    if (*(rax + 0x2cc) s>= 0)
        return sub_142896190(arg1, arg2, arg3, arg4)
    
    if (*(rax + 0xfc) != 0)
        if (arg3 == 0)
            if (arg1[2].d != 0)
                sub_1428d2a30(rax + 0x100, &arg1[7], 0x10)
                *(rax + 0x2c4) = 0x10
                *(rax + 0xfc) = 0
                return 0
            
            int64_t rax_4 = sx.q(*(rax + 0x2c4))
            
            if (rax_4.d s>= 0)
                int32_t result = sub_1428d24b0(rax + 0x100, &arg1[7], rax_4)
                
                if (result == 0)
                    *(rax + 0xfc) = result
                    return result
        else
            int32_t rax_1
            
            if (arg2 != 0)
                int64_t rax_2 = *(rax + 0x2d0)
                
                if (arg1[2].d != 0)
                    if (rax_2 == 0)
                        rax_1 = sub_1428d1d70(rax + 0x100, arg3, arg2, arg4)
                    else
                        rax_1 = sub_1428d2150(rax + 0x100, arg3, arg2, arg4, rax_2)
                    
                    goto label_142894ad5
                
                if (rax_2 != 0)
                    rax_1 = sub_1428d1a00(rax + 0x100, arg3, arg2, arg4, rax_2)
                    goto label_142894ad5
                
                if (sub_1428d1630(rax + 0x100, arg3, arg2, arg4) == 0)
                    return arg4.d
            else
                rax_1 = sub_1428d14f0(rax + 0x100, arg3, arg4)
            label_142894ad5:
                
                if (rax_1 == 0)
                    return arg4.d

return -1
