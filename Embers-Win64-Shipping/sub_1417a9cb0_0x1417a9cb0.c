// 函数: sub_1417a9cb0
// 地址: 0x1417a9cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg4)

if (rcx == 0)
    int32_t rcx_1 = data_1439b8f50
    
    if (rcx_1 == 0)
    label_1417a9cf4:
        void*** rax_1 = j_sub_140a82f30(0x98)
        
        if (rax_1 == 0)
            *arg2 = 0
        else
            int32_t rcx_2 = data_1439b8f54
            int32_t zmm0_1 = data_1439b8f68
            rax_1[1].w = 0x100
            *rax_1 = &data_142fc49a8
            rax_1[2] = 0
            rax_1[3] = 0
            __builtin_memset(&rax_1[0xc], 0, 0x30)
            rax_1[0xa] = 0
            rax_1[0xb].d = 0
            rax_1[0x12].d = zmm0_1
            sub_141790380(rax_1, arg3, 0, zx.o(0), rcx_2)
            *arg2 = rax_1
    else if (((rcx_1 - 1) & 0xfffffffd) == 0)
        int32_t rsi_3 = data_1439b8f6c
        
        if (arg5 != 0)
            rsi_3 = 0
        
        void*** rax_6 = j_sub_140a82f30(0xc0)
        
        if (rax_6 == 0)
            *arg2 = nullptr
        else
            *arg2 =
                sub_1417825e0(rax_6, arg3, data_1439b8f58, data_1439b8f5c, data_1439b8f68, rsi_3)
    else
        if (((rcx_1 - 2) & 0xfffffffd) != 0)
            goto label_1417a9cf4
        
        void*** rax_4 = j_sub_140a82f30(0xc0)
        
        if (rax_4 == 0)
            *arg2 = nullptr
        else
            *arg2 = sub_1417826b0(rax_4, arg3, data_1439b8f60, data_1439b8f64, data_1439b8f68, 0)
else
    if (rcx == 1)
        goto label_1417a9cf4
    
    *arg2 = 0

return arg2
