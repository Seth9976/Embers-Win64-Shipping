// 函数: sub_140d0e470
// 地址: 0x140d0e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)
int64_t rax_2 = (*(*rdi + 0x130))(rdi, arg3)

if ((rdi[5].b & 1) != 0 || (*(rdi + 0x2a) & 0x20) != 0)
    void* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        void* rax_3 = sub_140d21950(rcx_1, *(arg1 + 0x78))
        arg3[1] = rax_3
        return rax_3
    
    arg3[1] = 0

return rax_2
