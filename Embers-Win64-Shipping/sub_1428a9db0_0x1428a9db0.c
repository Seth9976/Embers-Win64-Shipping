// 函数: sub_1428a9db0
// 地址: 0x1428a9db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)

if (arg2 == 0)
    int32_t rax_1 = sub_1428a9c80(arg1)
    
    if (rax_1 != 0)
    label_1428a9de8:
        
        if (rax_1 u> 0x4aa)
            int64_t* rcx_3 = data_143fecad8
            
            if (rcx_3 != 0)
                int32_t var_58 = 3
                void var_48
                void* var_50_1 = &var_48
                int32_t var_38_1 = rax_1
                int64_t* rax_5 = sub_1428a8d10(rcx_3, &var_58)
                
                if (rax_5 != 0)
                    return rax_5[1]
                
                sub_1428a5670(8, 0x67, 0x65, "crypto\objects\obj_dat.c", 0xf1)
        else
            if (rax_1 == 0)
                return &(&data_1434ed4f0)[0x28 * 0]
            
            int64_t rcx_1 = sx.q(rax_1)
            
            if (*(rcx_1 * 0x28 + 0x1434ed500) != 0)
                return &(&data_1434ed4f0)[rcx_1 * 5]
            
            sub_1428a5670(8, 0x67, 0x65, "crypto\objects\obj_dat.c", 0xe3)
        
        return 0
    
    rax_1 = sub_1428a9380(arg1)
    
    if (rax_1 != 0)
        goto label_1428a9de8

int32_t rax_8 = sub_1428cd510(0, 0, arg1, 0xffffffff)

if (rax_8 s> 0)
    int32_t rax_9 = sub_1428f30c0(0, rax_8, 6)
    int64_t rsi_1 = sx.q(rax_9)
    
    if (rax_9 s>= 0)
        int64_t rax_10 = sub_1428a6730(rsi_1)
        
        if (rax_10 == 0)
            sub_1428a5670((rax_10 + 8).d, (rax_10 + 0x6c).d, (rax_10 + 0x41).d, 
                "crypto\objects\obj_dat.c", 0x17c)
            return nullptr
        
        int64_t arg_18 = rax_10
        sub_1428f3130(&arg_18, 0, rax_8, 6, arg1, 0)
        sub_1428cd510(arg_18, rax_8, arg1, 0xffffffff)
        int64_t arg_20 = rax_10
        void* result = sub_1428cdbb0(nullptr, &arg_20, rsi_1.d)
        sub_1428a6780(rax_10)
        return result

return 0
