// 函数: sub_1405c3ed0
// 地址: 0x1405c3ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xa0]

if (rcx != 0)
    int32_t rax_1 = sub_1405ba3e0(rcx, arg3)
    
    if ((arg1[0x5c].d & rax_1) != 0)
        void* arg_8 = nullptr
        sub_1405bab40(&arg1[0x8b], arg4, 0, &arg_8)
        void* rbx_1 = arg_8
        
        if (rbx_1 != 0)
            void* rax_2 = sub_1425b6f00()
            void* rcx_2 = *(rbx_1 + 0x10)
            int64_t rdx_2 = sx.q(*(rax_2 + 0x38))
            
            if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_2 + 0x30)
                return rbx_1
        
        return nullptr

if (sub_1405b37a0(arg2, &arg1[0x8b]) != 0 && arg3 != 0)
    _mbstok_l(arg2, arg1, arg3)
    
    if (arg4 != 0)
        sub_1405bffc0(arg1, arg4, arg3, 0)
        sub_1405c6c80(arg1, arg3)

return arg3
