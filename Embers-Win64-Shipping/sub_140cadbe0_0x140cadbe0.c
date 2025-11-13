// 函数: sub_140cadbe0
// 地址: 0x140cadbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg2
int64_t rsi = 0
int64_t arg_8
int64_t rcx

if (rax == 0)
    arg_8 = 0
    rcx = 0
else
    rcx = *rax

int64_t rax_1 = *arg1
arg_8 = rcx
(*(rax_1 + 0x140))(arg1, &arg_8)

if ((arg1[5].b & 1) != 0)
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(arg_8.d, 0) == 0
    
    if ((arg_8:4.d != 0 | rcx_2.b) != 0)
        int64_t rbx_1 = arg_8
        sub_140cbcdf0()
        
        if (data_143e1b278.d != data_143e1b2a4)
            int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_1 = &data_143e1b2a8
            void* rcx_5 = data_143e1b2b0
            
            if (rcx_5 != 0)
                r8_1 = rcx_5
            
            int32_t i = *(r8_1 + (((sx.q(data_143e1b2b8) - 1) & sx.q(rax_4)) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_2 = data_143e1b270
                
                do
                    int64_t i_1 = sx.q(i)
                    int64_t rcx_6 = i_1 * 3
                    
                    if (*(r8_2 + (rcx_6 << 3)) == rbx_1)
                        if (i != 0xffffffff)
                            void* rcx_7 = r8_2 + i_1 * 0x18
                            
                            if (rcx_7 != 0)
                                rsi = *(rcx_7 + 8)
                        
                        break
                    
                    i = *(r8_2 + (rcx_6 << 3) + 0x10)
                while (i != 0xffffffff)
    
    *arg2 = rsi

return arg1
