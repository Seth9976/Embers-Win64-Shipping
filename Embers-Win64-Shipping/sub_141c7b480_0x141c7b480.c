// 函数: sub_141c7b480
// 地址: 0x141c7b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != 0 && arg3 u>= 0x4b && (zx.d(*arg2) << 8 | zx.d(arg2[1])) == 0x4878
        && (zx.d(arg2[2]) << 8 | zx.d(arg2[3])) u>= 0x4b && arg3
        u>= (((zx.d(arg2[6]) << 8 | zx.d(arg2[7])) << 8 | zx.d(arg2[8])) << 8 | zx.d(arg2[9])))
    arg1[1].w = zx.w(arg2[0x14]) << 8 | zx.w(arg2[0x15])
    *(arg1 + 4) = zx.w(arg2[0xd]) | zx.w(arg2[0xc]) << 8
    *(arg1 + 6) = zx.w(arg2[0xe]) << 8 | zx.w(arg2[0xf])
    *(arg1 + 0xa) = arg2[0x12]
    *(arg1 + 0xb) = arg2[0x13]
    uint32_t rdx_2 = zx.d(arg2[0x42]) << 8 | zx.d(arg2[0x43])
    void* rcx_18 = &arg2[(zx.q(arg2[0x44]) << 8 | zx.q(arg2[0x45])) << 8 | zx.q(arg2[0x46])]
    
    if (rdx_2 != 0)
        void* var_38 = rcx_18
        void* var_28_1 = zx.q(rdx_2) + rcx_18
        void* var_30_1 = rcx_18
        uint32_t var_20_1 = rdx_2
        int64_t var_1c_1 = 0
        
        if (sub_141c7af20(&var_38, &arg1[2]).b != 0)
            if ((zx.d(arg2[0x28]) << 8 | zx.d(arg2[0x29])) != 0)
                if (sub_141c7af20(&var_38, &arg1[7]).b != 0
                        && sub_141c7af20(&var_38, &arg1[0x11]).b != 0)
                    goto label_141c7b600
            else if ((zx.d(arg2[0x38]) << 8 | zx.d(arg2[0x39])) != 0)
            label_141c7b600:
                
                if ((zx.d(arg2[0x38]) << 8 | zx.d(arg2[0x39])) == 0)
                label_141c7b636:
                    
                    if ((zx.d(arg2[0x28]) << 8 | zx.d(arg2[0x29])) == 0)
                    label_141c7b671:
                        
                        if ((zx.d(arg2[0x38]) << 8 | zx.d(arg2[0x39])) == 0)
                            result.b = 1
                            return result
                        
                        if (sub_141c79e10(arg1, arg2, arg2).b != 0)
                            if (arg2[0x13] != 0xc)
                                result = sub_141c79fb0(arg1, arg2, arg2)
                            else
                                result = sub_141c7a590(arg1, arg2, arg2)
                            
                            if (result.b != 0)
                                result.b = 1
                                return result
                    else if (sub_141c7a850(arg1, arg2, arg2).b != 0
                            && sub_141c7ab20(arg1, arg2, arg2).b != 0)
                        goto label_141c7b671
                else if (sub_141c7af20(&var_38, &arg1[0xc]).b != 0
                        && sub_141c7af20(&var_38, &arg1[0x16]).b != 0)
                    goto label_141c7b636

result.b = 0
return result
