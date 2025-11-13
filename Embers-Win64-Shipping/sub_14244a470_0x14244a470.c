// 函数: sub_14244a470
// 地址: 0x14244a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0 = sub_140b33630("UpdateLevelStreaming")

if (*(arg1 + 0x11b) s>= 0)
    uint64_t rbx
    uint64_t arg_18 = rbx
    int32_t rsi_1 = *(arg1 + 0xb0)
    int32_t rsi_2 = rsi_1 - 1
    int32_t r12_1 = data_143f5e930
    *(arg1 + 0xc8) = 1
    
    if (rsi_1 - 1 s>= 0)
        int64_t r14_1 = sx.q(rsi_2) << 3
        int32_t temp1_1
        
        do
            int64_t* rdi_1 = *(r14_1 + *(arg1 + 0xa8))
            
            if (rdi_1 != 0)
                char i = 1
                rbx.b = 1
                
                do
                    if (rbx.b == 0)
                        goto label_14244a538
                    
                    char arg_8 = 0
                    zmm0 = sub_1420f1ea0(rdi_1, &i, &arg_8, zmm0)
                    
                    if (arg_8 != 0)
                        char rax_3
                        rax_3, zmm0 = sub_1420e12d0(rdi_1)
                        rbx = zx.q(rax_3)
                while (i != 0)
            
            if (rdi_1 == 0 || rbx.b == 0)
            label_14244a538:
                zmm0 = sub_142440990(arg1 + 0xa8, rsi_2)
            
            r14_1 -= 8
            temp1_1 = rsi_2
            rsi_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    bool cond:1_1 = *(arg1 + 0xc0) s<= 0
    *(arg1 + 0xc8) = 0
    
    if (not(cond:1_1))
        void** r14_2 = *(arg1 + 0xb8)
        *(arg1 + 0xb8) = 0
        void** rbx_1 = r14_2
        void* rbp_3 = &r14_2[sx.q(*(arg1 + 0xc0)) * 2]
        *(arg1 + 0xc0) = 0
        
        if (r14_2 != rbp_3)
            do
                void* rdi_2 = *rbx_1
                
                if (rdi_2 != 0)
                    char rax_4 = sub_142440650(arg1 + 0xa8, rdi_2)
                    
                    if (rax_4 != 0 || rbx_1[1].b == rax_4)
                        sub_14242d040(arg1 + 0xa8, rdi_2, 1)
                
                rbx_1 = &rbx_1[2]
            while (rbx_1 != rbp_3)
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
    
    if (data_143a2d8d8 != 0 && r12_1 s< data_143f5e930)
        sub_1423dcef0(data_143f5b298, 1)

return sub_140b37f60("UpdateLevelStreaming") __tailcall
