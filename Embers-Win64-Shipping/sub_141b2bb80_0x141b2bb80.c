// 函数: sub_141b2bb80
// 地址: 0x141b2bb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a5ccd0(arg1)
void** i = arg1[0xf]
int64_t result = sx.q(arg1[0x10].d)

for (void* rbp = &i[result]; i != rbp; i = &i[1])
    void* rdi_1 = *i
    
    if (rdi_1 != 0)
        void* rax = sub_141b36c40()
        void* rdx_1 = *(rdi_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            int64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                result = arg1[0x11]
                *(rdi_1 + 0x110) = result

return result
