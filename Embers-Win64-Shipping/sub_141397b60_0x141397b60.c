// 函数: sub_141397b60
// 地址: 0x141397b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x10))(arg1, zx.q(arg3))

if (rax_1 != 0)
    int64_t* rcx = *rax_1
    
    if (rcx != 0)
        int64_t r8 = *rcx
        void* rax_2 = (*(r8 + 0x38))(rcx, zx.q(rax_1[1].d), r8)
        
        if (rax_2 != 0)
            int64_t* rcx_1 = *(rax_2 + 0x50)
            int64_t* arg_8 = rcx_1
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x30))()
            
            void*** result = sub_1410fccd0(arg2, &arg_8, arg4, 0)
            int64_t* rcx_3 = arg_8
            
            if (rcx_3 != 0)
                int64_t rdx_3 = *rcx_3
                (*(rdx_3 + 0x38))(rcx_3, rdx_3)
            
            return result

return 0
