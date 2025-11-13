// 函数: sub_141ff9520
// 地址: 0x141ff9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg2
int64_t result = sx.q(arg2[1].d)
void* rsi = rbx + result * 0x28

if (rbx != rsi)
    void* rbx_1 = rbx + 8
    
    do
        void* rax = sub_14082fb80(rbx_1)
        void* rax_1
        int64_t rax_2
        void* rdx_1
        
        if (rax != 0)
            rax_1 = sub_1424acfc0()
            rdx_1 = *(rax + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if ((rax == 0 || rax_2.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30) && sub_140da8770(rbx_1) == 0)
            sub_140a464c0()
            int64_t* rax_5 = sub_140da7300(rbx_1)
            int16_t* const rdx_2
            
            if (rax_5[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rax_5
            
            int64_t rax_7 = (*(data_14399ea08 + 0x108))(&data_14399ea08, rdx_2)
            
            if (rax_7 s> 0)
                void* rcx_4 = *arg1
                *(rcx_4 + 8) += rax_7
        
        rbx_1 += 0x28
        result = rbx_1 - 8
    while (result != rsi)

return result
