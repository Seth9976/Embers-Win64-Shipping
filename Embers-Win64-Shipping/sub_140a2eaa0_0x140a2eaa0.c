// 函数: sub_140a2eaa0
// 地址: 0x140a2eaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_10 = rsi

if (*(arg1 + 0x70) != 2)
    sub_140a8d380()

char i

do
    *(arg1 + 0x40) += 1
    rsi.b = 0
    
    while (true)
        void* r8_1 = data_143cf8c40
        int32_t rax_2 = *(arg1 + 0x10) - *(r8_1 + 0x7bc)
        int32_t temp2_1 = *(r8_1 + 0x7c4)
        void* rcx_1 = r8_1 + 0x7e8
        r8_1.b = 1
        int64_t* rax_5 = sub_140a2d4d0(rcx_1 + sx.q(divu.dp.d(0:rax_2, temp2_1)) * 0x1e8, 
            modu.dp.d(0:rax_2, temp2_1), r8_1.b)
        
        if (rax_5 != 0)
            if (rsi.b == 0 && *(arg1 + 0x70) == 2)
                sub_140b73230(zx.o(0))
            
            rsi.b = 0
            (*(*rax_5 + 8))(rax_5, arg1 + 0x20, zx.q(*(arg1 + 0x10)))
            
            if (*(arg1 + 0x45) != 0)
                EnterCriticalSection(arg1 + 0x48)
                
                if (arg1 != -0x48)
                    LeaveCriticalSection(arg1 + 0x48)
        else
            char rax_6
            int64_t r8_2
            rax_6, r8_2 = sub_140a54810()
            
            if (rax_6 != 0)
                int64_t* rcx_3 = *(arg1 + 0x38)
                r8_2.b = 1
                (*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, r8_2)
                rsi.b = 1
            
            i = *(arg1 + 0x44)
            
            if (i != 0)
                break
            
            if (sub_140a54810() == 0)
                i = *(arg1 + 0x44)
                break
    
    *(arg1 + 0x40) -= 1
    
    if (i != 0)
        break
    
    i = sub_140a54810()
while (i != 0)

return i
