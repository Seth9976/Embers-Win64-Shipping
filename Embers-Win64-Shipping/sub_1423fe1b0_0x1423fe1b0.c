// 函数: sub_1423fe1b0
// 地址: 0x1423fe1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143344468
arg1[5] = 0
__builtin_memset(&arg1[7], 0, 0x20)

if (((arg1[1].d u>> 4).b & 1) != 0)
    int64_t arg_18
    sub_140d3a3a0(&arg_18, arg1)
    int64_t rdi_1 = arg_18
    int64_t arg_8
    
    if (data_143a303b8 == data_143a303e4)
    labelid_2:
        sub_1423f6670(&data_143a303b0, &arg_8, &arg_18, nullptr)
    else
        void* r8_1 = data_143a303f0
        void* rax_8 = &data_143a303e8
        
        if (r8_1 != 0)
            rax_8 = r8_1
        
        int32_t rbx_1 = *(rax_8
            + (((sx.q((rdi_1 u>> 0x20).d) ^ sx.q(rdi_1.d)) & sx.q(data_143a303f8 - 1)) << 2))
        
        if (rbx_1 == 0xffffffff)
        labelid_2:
            sub_1423f6670(&data_143a303b0, &arg_8, &arg_18, nullptr)
        else
            int64_t rax_9 = data_143a303b0
            int64_t rsi_2
            
            while (true)
                rsi_2 = sx.q(rbx_1) << 4
                arg_8 = rdi_1
                int64_t arg_20 = *(rsi_2 + rax_9)
                
                if (sub_14077a170(&arg_20, &arg_8) != 0)
                    break
                
                rax_9 = data_143a303b0
                rbx_1 = *(rsi_2 + rax_9 + 8)
                
                if (rbx_1 == 0xffffffff)
                    goto label_1423fe2dc_2
            
            if (rbx_1 == 0xffffffff)
            label_1423fe2dc:
                sub_1423f6670(&data_143a303b0, &arg_8, &arg_18, nullptr)
            else
                void* rbx_2 = data_143a303b0
                int32_t* rbx_3 = rbx_2 + rsi_2
                
                if (rbx_2 == neg.q(rsi_2))
                label_1423fe2dc_1:
                    sub_1423f6670(&data_143a303b0, &arg_8, &arg_18, nullptr)
                else if (sub_140d3e110(rbx_3) == 0)
                    sub_1421744f0(&data_143a303b0, *rbx_3)
                label_1423fe2dc_2:
                    sub_1423f6670(&data_143a303b0, &arg_8, &arg_18, nullptr)

arg1[0xe].w = 0x100
*(arg1 + 0x72) = 0
return arg1
