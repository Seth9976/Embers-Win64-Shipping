// 函数: sub_140374810
// 地址: 0x140374810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t rax_1 = not.d(arg1)

if (arg3 != 0)
    int32_t rsi_1 = arg3 - 0x20
    void* r11_1 = nullptr
    
    do
        char* rdi_3 = arg2 + r11_1
        
        if ((rdi_3.b & 3) == 0)
            int32_t j = arg3 - r11_1.d
            
            if (j u> 0x1f)
                do
                    int32_t rax_4 = rax_1 ^ *rdi_3
                    int32_t rcx_6 = *((zx.q(rax_4:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rax_4.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rax_4 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rax_4 u>> 0x18) << 2)) ^ *(rdi_3 + 4)
                    int32_t rax_11 = *((zx.q(rcx_6:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rcx_6.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rcx_6 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rcx_6 u>> 0x18) << 2)) ^ *(rdi_3 + 8)
                    int32_t rcx_13 = *((zx.q(rax_11:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rax_11.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rax_11 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rax_11 u>> 0x18) << 2)) ^ *(rdi_3 + 0xc)
                    int32_t rax_18 = *((zx.q(rcx_13:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rcx_13.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rcx_13 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rcx_13 u>> 0x18) << 2)) ^ *(rdi_3 + 0x10)
                    int32_t rcx_20 = *((zx.q(rax_18:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rax_18.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rax_18 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rax_18 u>> 0x18) << 2)) ^ *(rdi_3 + 0x14)
                    int32_t rax_25 = *((zx.q(rcx_20:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rcx_20.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rcx_20 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rcx_20 u>> 0x18) << 2)) ^ *(rdi_3 + 0x18)
                    int32_t rcx_27 = *((zx.q(rax_25:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rax_25.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rax_25 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rax_25 u>> 0x18) << 2)) ^ *(rdi_3 + 0x1c)
                    rax_1 = *((zx.q(rcx_27:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rcx_27.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rcx_27 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rcx_27 u>> 0x18) << 2))
                    j -= 0x20
                    rdi_3 = &rdi_3[0x20]
                while (j u> 0x1f)
                
                rdi_3 = r11_1 + arg2 + (zx.q(rsi_1) & 0xffffffe0) + 0x20
                j = (arg3 - 0x20 - r11_1.d) & 0x1f
                
                if (j u< 4)
                    goto label_140374884
                
                goto label_140374a60
            
            if (j u>= 4)
            label_140374a60:
                int32_t r8_3 = j - 4
                char* rcx_29 = rdi_3
                
                do
                    int32_t rax_31 = rax_1 ^ *rcx_29
                    rcx_29 = &rcx_29[4]
                    rax_1 = *((zx.q(rax_31:1.b) << 2) + 0x1435f9ef0)
                        ^ *((zx.q(rax_31.b) << 2) + 0x1435fa2f0)
                        ^ *((zx.q((rax_31 u>> 0x10).b) << 2) + 0x1435f9af0)
                        ^ *(&data_1435f96f0 + (zx.q(rax_31 u>> 0x18) << 2))
                    j -= 4
                while (j u> 3)
                
                rdi_3 = &rdi_3[zx.q((r8_3 u>> 2) + 1) << 2]
                j = r8_3 & 3
                
                if (j != 0)
                    goto label_14037488d
            else
            label_140374884:
                
                if (j != 0)
                label_14037488d:
                    int32_t j_1
                    
                    if ((j.b & 1) != 0)
                        uint32_t rcx_31 = zx.d(*rdi_3)
                        rdi_3 = &rdi_3[1]
                        rax_1 =
                            rax_1 u>> 8 ^ *(&data_1435f96f0 + ((zx.q(rax_1.b) ^ zx.q(rcx_31)) << 2))
                        j_1 = j - 1
                        
                        if (j != 1)
                        label_140374ae6:
                            int64_t rdx_6 = 0
                            
                            do
                                int32_t rax_37 = rax_1 u>> 8 ^
                                    *(&data_1435f96f0 + ((zx.q(rax_1.b) ^ zx.q(rdi_3[rdx_6])) << 2))
                                rax_1 = rax_37 u>> 8 ^ *(&data_1435f96f0
                                    + ((zx.q(rax_37.b) ^ zx.q(rdi_3[rdx_6 + 1])) << 2))
                                rdx_6 += 2
                            while (j_1 != rdx_6.d)
                    else
                        j_1 = j
                        
                        if (j != 1)
                            goto label_140374ae6
            
            break
        
        rax_1 = rax_1 u>> 8 ^ *(&data_1435f96f0 + ((zx.q(rax_1.b) ^ zx.q(*rdi_3)) << 2))
        r11_1 += 1
        rsi_1 -= 1
    while (arg3 != r11_1.d)

return zx.q(not.d(rax_1))
