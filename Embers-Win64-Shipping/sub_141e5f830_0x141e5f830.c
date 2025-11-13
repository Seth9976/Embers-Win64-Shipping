// 函数: sub_141e5f830
// 地址: 0x141e5f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298
int128_t result = 0x3f800000

if (rcx == 0)
    return 0x3f800000

void* rax = sub_1423dcff0(rcx)

if (rax != 0)
    void* rcx_1 = *arg1
    int64_t arg_10
    
    if (rcx_1 != 0)
        arg_10 = *(rcx_1 + 0x18)
        result = sub_141e7dbe0(rax, 2, &arg_10)
    
    void* rax_1 = arg1[0x18]
    
    if (rax_1 != 0)
        void* rdi_1 = *(rax_1 + 0x18)
        
        if (rdi_1 != 0)
            void* rax_2 = sub_14259f000()
            void* rdx_1 = *(rdi_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                rdx_1.b = 1
                arg_10 = *(rdi_1 + 0x18)
                result.d = result.d f* sub_141e7dbe0(rax, rdx_1.b, &arg_10).d
    
    void* rax_6 = arg1[1]
    
    if (rax_6 != 0)
        arg_10 = *(rax_6 + 0x18)
        result.d = result.d f* sub_141e7dbe0(rax, 0, &arg_10).d

return result
