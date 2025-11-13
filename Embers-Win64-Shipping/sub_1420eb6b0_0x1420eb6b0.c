// 函数: sub_1420eb6b0
// 地址: 0x1420eb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t* rax_2 = sub_141baa510((*(*arg1 + 0x150))())

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= rax_2[1].d)
        break
    
    void* rsi_1 = *(*rax_2 + (sx.q(i) << 3))
    
    if (rsi_1 != 0 && (*(rsi_1 + 0x1f4) & 0x20) != 0)
        int64_t* rsi_2 = *(rsi_1 + 0xe8)
        
        if (rsi_2 != 0)
            void* rax_4 = sub_140d1fd20(rsi_2, arg2)
            
            if (rax_4 != 0 && *(rax_4 + 0xb4) == 0)
                (*(*rsi_2 + 0x210))(rsi_2, rax_4, 0)
                rbp.b = 1

return zx.q(rbp.b)
