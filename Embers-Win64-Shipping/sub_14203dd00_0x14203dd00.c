// 函数: sub_14203dd00
// 地址: 0x14203dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg3 != 0)
    void* rax_1 = sub_142577430()
    void* rdx = arg3[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    int64_t var_38
    int64_t var_28
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    label_14203de70:
        void* rsi_2 = arg3[0x14]
        int32_t var_20_2 = arg2[1].d
        void* rax_16 = arg3[0x15]
        var_28 = *arg2
        
        if (rax_16 == 0)
            rax_16 = sub_141ee69e0(arg3)
        
        void* rax_17 = sub_142021410(arg1, &var_28, rax_16, rsi_2, arg8.d)
        sub_141f32b40(rax_17, arg3, &data_143f3f280, arg4)
        int64_t* r8_6 = &var_28
        int64_t* rdx_7 = &var_38
        
        if (arg7 != 1)
            int32_t var_20_4 = arg6[1].d
            var_28 = *arg6
            int32_t rax_22 = arg5[1].d
            var_38 = *arg5
            int32_t var_30_4 = rax_22
            sub_141f48a10(rax_17, rdx_7, r8_6, 0, 0, 0)
            return rax_17
        
        int32_t var_20_3 = arg6[1].d
        var_28 = *arg6
        int32_t rax_18 = arg5[1].d
        var_38 = *arg5
        int32_t var_30_3 = rax_18
        sub_141f4a260(rax_17, rdx_7, r8_6, 0, 0, 0)
        return rax_17
    
    if ((*(arg3 + 0x20a) & 8) != 0)
        void* rsi_1 = arg3[0x14]
        
        if (rsi_1 != 0)
            void* rax_4 = sub_1425bd0d0()
            void* rdx_1 = *(rsi_1 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                void* rax_7 = sub_1423de540(data_143f5b298, arg3[0x14], 1)
                
                if (rax_7 == 0)
                    return nullptr
                
                int32_t var_30_1 = arg2[1].d
                var_38 = *arg2
                void* rax_9 = sub_142021410(arg1, &var_38, rax_7, sub_142437e30(rax_7, 0, 1), arg8)
                int32_t var_30_2 = arg6[1].d
                var_38 = *arg6
                int32_t rax_13 = arg5[1].d
                var_28 = *arg5
                int32_t var_20_1 = rax_13
                sub_141f4a260(rax_9, &var_28, &var_38, 0, 0, 0)
                return rax_9
        
        goto label_14203de70

return nullptr
